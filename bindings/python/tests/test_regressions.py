from pathlib import Path
from unittest import TestCase

import tree_sitter
import tree_sitter_hurl

ROOT = Path(__file__).resolve().parents[3]
TICK = chr(96)
FENCE = TICK * 3
VALID_BODIES = {
    "empty_array": "[]",
    "spaced_empty_array": "[ ]",
    "nested_arrays": '{"items": [[], [1, -2.5, 1e-3]]}',
    "compact_array": '[1,-2.5,1e-3,true,null,"x"]',
    "negative_json": '{"integer": -1, "float": -1.5, "exponent": -1e-3}',
    "empty_text": TICK * 2,
    "one_character_text": TICK + "a" + TICK,
    "even_length_text": TICK + "ab" + TICK,
    "odd_length_text": TICK + "abc" + TICK,
    "leading_template": TICK + "{{name}} suffix" + TICK,
    "embedded_template": TICK + "prefix {{name}} suffix" + TICK,
    "literal_brace": TICK + "a{b}" + TICK,
    "escaped_text": TICK + "a" + chr(92) + TICK + r"b\#c\\d" + TICK,
    "base64_slash": "base64,/w==;",
    "base64_whitespace": "base64, /w== ;",
    "graphql_braces": FENCE + "graphql\n{\n  user { name }\n}\n" + FENCE,
    "fenced_json": FENCE + 'json\n{"name": "{{name}}"}\n' + FENCE,
    "fenced_template": FENCE + "\n{{name}}\n" + FENCE,
    "literal_backticks": FENCE + "\n" + TICK + "one" + TICK + " and " + TICK * 2 + "two" + TICK * 2 + "\n" + FENCE,
    "self_closing_xml": '<root id="1"/>',
    "nested_self_closing_xml": "<root><child/></root>",
}


def descendants(node, kind):
    return ([node] if node.type == kind else []) + [
        match for child in node.children for match in descendants(child, kind)
    ]


class TestRegressions(TestCase):
    def setUp(self):
        self.language = tree_sitter.Language(tree_sitter_hurl.language())
        self.parser = tree_sitter.Parser(self.language)

    def parse_valid(self, source):
        tree = self.parser.parse(source.encode())
        self.assertFalse(tree.root_node.has_error, str(tree.root_node))
        return tree.root_node

    def test_valid_bodies(self):
        for name, body in VALID_BODIES.items():
            with self.subTest(name=name):
                root = self.parse_valid("POST https://example.org\n" + body + "\n")
                self.assertEqual(len(descendants(root, "body")), 1)

    def test_templates_are_nodes_not_plain_text(self):
        for body in (TICK + "{{name}}" + TICK, TICK + "a{{name}}b" + TICK, FENCE + "\n{ {{name}} }\n" + FENCE):
            with self.subTest(body=body):
                root = self.parse_valid("POST https://example.org\n" + body + "\n")
                self.assertEqual(len(descendants(root, "template")), 1)

    def test_fence_does_not_consume_the_next_entry(self):
        root = self.parse_valid("POST https://example.org\n" + FENCE + "graphql\n{ user { name } }\n" + FENCE + "\nGET https://example.org/next\n")
        self.assertEqual(len(descendants(root, "entry")), 2)

    def test_signed_assertions(self):
        root = self.parse_valid('GET https://example.org\nHTTP 200\n[Asserts]\njsonpath "$.x" == -1\njsonpath "$.x" > -2.5\n')
        self.assertEqual(len(descendants(root, "assert")), 2)

    def test_argument_filters(self):
        for query in ('body decode "utf-8"', 'body format "%Y"', 'body toDate "%Y-%m-%d"'):
            with self.subTest(query=query):
                root = self.parse_valid("GET https://example.org\nHTTP 200\n[Captures]\nx: " + query + "\n")
                self.assertEqual(len(descendants(root, "argument_filter")), 1)
        self.parse_valid('GET https://example.org\nHTTP 200\n[Asserts]\nbytes decode "utf-8" == "hi"\n')

    def test_bracketed_and_numeric_header_keys(self):
        for key in ("[]", "[1]", "[true]", "filters[status]", "123abc", "some-key", "X.Version"):
            with self.subTest(key=key):
                root = self.parse_valid("GET https://example.org\n" + key + ": value\n")
                self.assertEqual(len(descendants(root, "header")), 1)

    def test_final_newline_is_optional(self):
        for source in (
            "GET https://example.org",
            "GET https://example.org  \t",
            "GET https://example.org\nHeader: value",
            "GET https://example.org\n[Options]\nmax-redirs: 2",
            "GET https://example.org\nHTTP 200\n[Asserts]\nstatus == 200",
            "POST https://example.org\n[]",
            "POST https://example.org\n" + TICK * 2,
            "POST https://example.org\n" + FENCE + "\ntext\n" + FENCE,
            "GET https://example.org # comment",
        ):
            with self.subTest(source=source):
                self.parse_valid(source)
                self.parse_valid(source + "\n")

    def test_eof_scanner_handles_incremental_edits(self):
        source = b"POST https://example.org\n[]"
        tree = self.parser.parse(source)
        self.assertFalse(tree.root_node.has_error)
        tree.edit(start_byte=len(source), old_end_byte=len(source), new_end_byte=len(source) + 1,
                  start_point=(1, 2), old_end_point=(1, 2), new_end_point=(2, 0))
        tree = self.parser.parse(source + b"\n", tree)
        self.assertFalse(tree.root_node.has_error)
        tree.edit(start_byte=len(source), old_end_byte=len(source) + 1, new_end_byte=len(source),
                  start_point=(1, 2), old_end_point=(2, 0), new_end_point=(1, 2))
        self.assertFalse(self.parser.parse(source, tree).root_node.has_error)

    def test_crlf_and_comments(self):
        self.parse_valid("GET https://example.org\r\n# comment\r\nHTTP 200\r\n[Asserts]\r\nstatus == 200\r\n")

    def test_invalid_inputs_still_fail(self):
        for source in (
            'POST https://example.org\n{"x":01}\n',
            "POST https://example.org\n" + TICK + "unterminated\n",
            "POST https://example.org\n" + FENCE + "\nunterminated\n",
            "POST https://example.org\nbase64,_w==;\n",
            "POST https://example.org\nbase64,-w==;\n",
            "GET https://example.org\n[Options]\nmax-redirs: -1\n",
            "GET https://example.org\n[Options]\nconnect-timeout: -1s\n",
            'GET https://example.org\nHTTP 200\n[Asserts]\nbody decode == "a"\n',
            "GET https://example.org\nHTTP 200 [Asserts]\nstatus == 200\n",
            "POST https://example.org\n" + TICK + "a" + TICK + " GET https://example.org\n",
        ):
            with self.subTest(source=source):
                self.assertTrue(self.parser.parse(source.encode()).root_node.has_error)

    def test_all_shipped_examples(self):
        for path in sorted((ROOT / "examples").rglob("*.hurl")):
            with self.subTest(path=path.name):
                self.parse_valid(path.read_text())

    def test_all_shipped_queries_compile(self):
        for path in sorted((ROOT / "queries").glob("*.scm")):
            with self.subTest(path=path.name):
                tree_sitter.Query(self.language, path.read_text())
