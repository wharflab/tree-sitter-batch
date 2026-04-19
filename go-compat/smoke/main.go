package main

import (
	"fmt"
	"os"

	sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_batch "github.com/wharflab/tree-sitter-batch/bindings/go"
)

func fail(format string, args ...any) {
	fmt.Fprintf(os.Stderr, format+"\n", args...)
	os.Exit(1)
}

type parseCase struct {
	name   string
	source string
	checks []func(source []byte, root *sitter.Node) error
}

func main() {
	lang := sitter.NewLanguage(tree_sitter_batch.Language())
	if lang == nil || lang.Inner == nil {
		fail("Language() returned nil")
	}

	parser := sitter.NewParser()
	defer parser.Close()

	if err := parser.SetLanguage(lang); err != nil {
		fail("SetLanguage failed: %v", err)
	}

	cases := []parseCase{
		{
			name:   "basic cmds",
			source: "echo hello\r\necho world\r\n",
			checks: []func([]byte, *sitter.Node) error{
				expectRootKind("program"),
				expectNoErrors(),
				expectNamedChildKind(0, "cmd"),
				expectNamedChildKind(1, "cmd"),
			},
		},
		{
			// Regression guard for tally TestTokenize_SetAssignmentUsesStructuredQueryCaptures.
			// The set_option node must span exactly "/p", not " /p" — the leading whitespace
			// must not be absorbed into the aliased set_option token.
			name:   "set /p option span excludes leading whitespace",
			source: "set /p PATH=%PATH%;C:\\Tools\n",
			checks: []func([]byte, *sitter.Node) error{
				expectRootKind("program"),
				expectNoErrors(),
				expectNodeText("set_option", "/p"),
				expectNodeText("variable_name", "PATH"),
			},
		},
		{
			name:   "set /a option span excludes leading whitespace",
			source: "set /a count=1+2\n",
			checks: []func([]byte, *sitter.Node) error{
				expectRootKind("program"),
				expectNoErrors(),
				expectNodeText("set_option", "/a"),
			},
		},
		{
			name:   "set/p without leading whitespace still parses",
			source: "set/p name=value\n",
			checks: []func([]byte, *sitter.Node) error{
				expectRootKind("program"),
				expectNoErrors(),
				expectNodeText("set_option", "/p"),
				expectNodeText("variable_name", "name"),
			},
		},
	}

	for _, c := range cases {
		source := []byte(c.source)
		tree := parser.Parse(source, nil)
		if tree == nil {
			fail("[%s] Parse returned nil tree", c.name)
		}

		root := tree.RootNode()
		for _, check := range c.checks {
			if err := check(source, root); err != nil {
				tree.Close()
				fail("[%s] %v", c.name, err)
			}
		}
		tree.Close()
	}

	fmt.Println("go consumer compatibility: ok")
}

func expectRootKind(want string) func([]byte, *sitter.Node) error {
	return func(_ []byte, root *sitter.Node) error {
		if got := root.Kind(); got != want {
			return fmt.Errorf("root kind = %q, want %q", got, want)
		}
		return nil
	}
}

func expectNoErrors() func([]byte, *sitter.Node) error {
	return func(_ []byte, root *sitter.Node) error {
		if root.HasError() {
			return fmt.Errorf("root node has parse errors; sexp=%s", root.ToSexp())
		}
		return nil
	}
}

func expectNamedChildKind(index uint, want string) func([]byte, *sitter.Node) error {
	return func(_ []byte, root *sitter.Node) error {
		cursor := root.Walk()
		defer cursor.Close()
		children := root.NamedChildren(cursor)
		if uint(len(children)) <= index {
			return fmt.Errorf("named child count = %d, want >= %d", len(children), index+1)
		}
		if got := children[index].Kind(); got != want {
			return fmt.Errorf("named child[%d] kind = %q, want %q", index, got, want)
		}
		return nil
	}
}

func expectNodeText(kind, wantText string) func([]byte, *sitter.Node) error {
	return func(source []byte, root *sitter.Node) error {
		node := findFirstDescendant(root, kind)
		if node == nil {
			return fmt.Errorf("no %s node found in tree", kind)
		}
		gotText := node.Utf8Text(source)
		if gotText != wantText {
			return fmt.Errorf(
				"%s node text = %q (bytes [%d,%d)), want %q",
				kind, gotText, node.StartByte(), node.EndByte(), wantText,
			)
		}
		return nil
	}
}

func findFirstDescendant(node *sitter.Node, kind string) *sitter.Node {
	if node == nil {
		return nil
	}
	if node.Kind() == kind {
		return node
	}
	for i := range node.NamedChildCount() {
		if child := node.NamedChild(i); child != nil {
			if found := findFirstDescendant(child, kind); found != nil {
				return found
			}
		}
	}
	return nil
}
