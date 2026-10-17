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
