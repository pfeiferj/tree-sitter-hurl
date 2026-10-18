import json
from pathlib import Path
from unittest import TestCase

import tree_sitter
import tree_sitter_hurl

ROOT = Path(__file__).resolve().parents[3]


class TestStableHurlFeatures(TestCase):
    def test_stable_feature_names(self):
        parser = tree_sitter.Parser(tree_sitter.Language(tree_sitter_hurl.language()))
        cases = json.loads((ROOT / "test/fixtures/hurl8-features.json").read_text())
        for case in cases:
            with self.subTest(category=case["category"], name=case["name"]):
                root = parser.parse(case["source"].encode()).root_node
                self.assertFalse(root.has_error, str(root))

    def test_stable_value_forms_and_template_ast(self):
        parser = tree_sitter.Parser(tree_sitter.Language(tree_sitter_hurl.language()))
        cases = json.loads((ROOT / "test/fixtures/hurl8-values.json").read_text())
        def count(node, kind):
            return (node.type == kind) + sum(count(child, kind) for child in node.named_children)
        for case in cases:
            with self.subTest(category=case["category"], name=case["name"]):
                root = parser.parse(case["source"].encode()).root_node
                self.assertFalse(root.has_error, str(root))
                self.assertEqual(count(root, "template"), case["templates"], str(root))
                for kind, expected in case.get("nodes", {}).items():
                    self.assertEqual(count(root, kind), expected, str(root))

    def test_published_grammar_and_embedded_regressions(self):
        parser = tree_sitter.Parser(tree_sitter.Language(tree_sitter_hurl.language()))
        def count(node, kind):
            return (node.type == kind) + sum(count(child, kind) for child in node.named_children)
        for filename in ("published-grammar.json", "embedded-regressions.json"):
            cases = json.loads((ROOT / "test/fixtures" / filename).read_text())
            for case in cases:
                with self.subTest(file=filename, name=case["name"]):
                    root = parser.parse(case["source"].encode()).root_node
                    self.assertEqual(root.has_error, not case.get("valid", True), str(root))
                    for kind, expected in case.get("nodes", {}).items():
                        self.assertEqual(count(root, kind), expected, str(root))

    def test_invalid_stable_operands_and_lexical_boundaries(self):
        parser = tree_sitter.Parser(tree_sitter.Language(tree_sitter_hurl.language()))
        cases = json.loads((ROOT / "test/fixtures/hurl8-invalid.json").read_text())
        for case in cases:
            with self.subTest(name=case["name"]):
                self.assertTrue(parser.parse(case["source"].encode()).root_node.has_error)
