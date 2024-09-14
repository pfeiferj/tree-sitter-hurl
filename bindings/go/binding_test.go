package tree_sitter_hurl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hurl "github.com/tree-sitter/tree-sitter-hurl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hurl.Language())
	if language == nil {
		t.Errorf("Error loading Hurl grammar")
	}
}
