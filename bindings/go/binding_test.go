package tree_sitter_batch_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_batch "github.com/wharflab/tree-sitter-batch/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_batch.Language())
	if language == nil {
		t.Errorf("Error loading Batch grammar")
	}
}
