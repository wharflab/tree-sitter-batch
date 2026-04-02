package tree_sitter_batch_test

import (
	"testing"

	batch "github.com/wharflab/tree-sitter-batch"
)

func TestHighlightsQueryCompiles(t *testing.T) {
	if batch.HighlightsQuery == "" {
		t.Fatal("HighlightsQuery is empty")
	}
	query, err := batch.GetHighlightsQuery()
	if err != nil {
		t.Fatalf("highlights query failed to compile: %v", err)
	}
	defer query.Close()

	names := query.CaptureNames()
	if len(names) == 0 {
		t.Fatal("highlights query has no captures")
	}

	// Verify variable.builtin capture exists
	found := false
	for _, name := range names {
		if name == "variable.builtin" {
			found = true
			break
		}
	}
	if !found {
		t.Errorf("expected variable.builtin capture, got: %v", names)
	}
}
