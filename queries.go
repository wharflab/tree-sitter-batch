package tree_sitter_batch

import (
	_ "embed"

	binding "github.com/wharflab/tree-sitter-batch/bindings/go"
	sitter "github.com/tree-sitter/go-tree-sitter"
)

//go:embed queries/highlights.scm
var HighlightsQuery string

// GetLanguage returns the tree-sitter Language for Batch.
func GetLanguage() *sitter.Language {
	return sitter.NewLanguage(binding.Language())
}

// GetHighlightsQuery compiles and returns the bundled highlights query.
func GetHighlightsQuery() (*sitter.Query, *sitter.QueryError) {
	return sitter.NewQuery(GetLanguage(), HighlightsQuery)
}
