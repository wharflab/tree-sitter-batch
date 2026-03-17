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

	// Keep the sample newline-terminated. The current grammar expects
	// statements to end with a newline, so omitting it creates false negatives.
	source := []byte("echo hello\r\necho world\r\n")

	tree := parser.Parse(source, nil)
	if tree == nil {
		fail("Parse returned nil tree")
	}
	defer tree.Close()

	root := tree.RootNode()
	if root.Kind() != "program" {
		fail("root kind = %q, want %q", root.Kind(), "program")
	}
	if root.HasError() {
		fail("root node has parse errors")
	}

	cursor := root.Walk()
	defer cursor.Close()
	children := root.NamedChildren(cursor)
	if len(children) < 2 {
		fail("named child count = %d, want >= 2", len(children))
	}
	if children[0].Kind() != "cmd" {
		fail("first child kind = %q, want %q", children[0].Kind(), "cmd")
	}
	if children[1].Kind() != "cmd" {
		fail("second child kind = %q, want %q", children[1].Kind(), "cmd")
	}

	fmt.Println("go consumer compatibility: ok")
}
