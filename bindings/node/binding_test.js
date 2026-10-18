/// <reference types="node" />

const assert = require("node:assert/strict");
const { test } = require("node:test");
const fs = require("node:fs");
const path = require("node:path");
const Parser = require("tree-sitter");
const Hurl = require(".");
const root = path.join(__dirname, "..", "..");

test("can load grammar and parse a final line without a newline", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(Hurl));
  assert.equal(parser.parse("POST https://example.org\n[]").rootNode.hasError, false);
});

test("all shipped queries compile", () => {
  for (const name of fs.readdirSync(path.join(root, "queries"))) {
    if (name.endsWith(".scm")) {
      assert.doesNotThrow(() => new Parser.Query(Hurl,
        fs.readFileSync(path.join(root, "queries", name), "utf8")), name);
    }
  }
});

test("all shipped examples parse without errors", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  const examples = path.join(root, "examples", "front_page");
  for (const name of fs.readdirSync(examples)) {
    if (name.endsWith(".hurl")) {
      const tree = parser.parse(fs.readFileSync(path.join(examples, name), "utf8"));
      assert.equal(tree.rootNode.hasError, false, name);
    }
  }
});

test("published grammar and embedded language regressions", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  function count(node, type) {
    return Number(node.type === type) + node.namedChildren.reduce((n, child) => n + count(child, type), 0);
  }
  for (const file of ["published-grammar.json", "embedded-regressions.json"]) {
    for (const fixture of JSON.parse(fs.readFileSync(path.join(root, "test", "fixtures", file), "utf8"))) {
      const node = parser.parse(fixture.source).rootNode;
      assert.equal(node.hasError, fixture.valid === false, fixture.name + ": " + node.toString());
      for (const [kind, expected] of Object.entries(fixture.nodes || {})) {
        assert.equal(count(node, kind), expected, fixture.name + ": " + kind);
      }
    }
  }
});

test("JSON controls and XML delimiter-prefix runs", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  for (let code = 0; code < 32; code++) {
    for (const value of [String.fromCharCode(code), "a" + String.fromCharCode(code) + "{{name}}"]) {
      assert.equal(parser.parse('POST https://example.org\n{"x":"' + value + '"}\n').rootNode.hasError,
        true, "unescaped JSON control " + code);
    }
  }
  for (let length = 0; length < 12; length++) {
    for (const body of [
      "<root><![CDATA[" + "]".repeat(length) + "]]></root>",
      "<root><![CDATA[a" + "]".repeat(length) + "b]]></root>",
      "<?pi " + "?".repeat(length) + "?><root/>",
    ]) {
      const node = parser.parse("POST https://example.org\n" + body + "\nGET https://example.org/next\n").rootNode;
      assert.equal(node.hasError, false, body);
      assert.equal(node.namedChildCount, 2, body);
    }
  }
});

test("incremental JSON/XML edits agree with fresh parsing", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  for (const [before, after] of [
    ['{"x":"a\\nb"}', '{"x":"a\nb"}'],
    ['<root a="1" b="2"/>', '<root a="1"b="2"/>'],
    ['<root><![CDATA[]]></root>', '<root><![CDATA[]]]></root>'],
  ]) {
    let source = "POST https://example.org\n" + before + "\n";
    let tree = parser.parse(source);
    for (const body of [after, before]) {
      const next = "POST https://example.org\n" + body + "\n";
      let start = 0;
      while (start < source.length && start < next.length && source[start] === next[start]) start++;
      let oldEnd = source.length;
      let newEnd = next.length;
      while (oldEnd > start && newEnd > start && source[oldEnd - 1] === next[newEnd - 1]) {
        oldEnd--;
        newEnd--;
      }
      const point = (text, index) => {
        const prefix = text.slice(0, index);
        return { row: prefix.split("\n").length - 1, column: index - prefix.lastIndexOf("\n") - 1 };
      };
      tree.edit({ startIndex: start, oldEndIndex: oldEnd, newEndIndex: newEnd,
        startPosition: point(source, start), oldEndPosition: point(source, oldEnd), newEndPosition: point(next, newEnd) });
      tree = parser.parse(next, tree);
      assert.equal(tree.rootNode.toString(), parser.parse(next).rootNode.toString(), body);
      source = next;
    }
  }
});

test("signed values preserve valid count sentinel constraints", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  for (const option of ["max-redirs: -2", "connect-timeout: -1s"]) {
    assert.equal(parser.parse("GET https://example.org\n[Options]\n" + option + "\n").rootNode.hasError, true, option);
  }
  assert.equal(parser.parse('GET https://example.org\nHTTP 200\n[Asserts]\nbody decode == "x"\n').rootNode.hasError, true);
});

test("all stable Hurl feature-name fixtures parse", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  const cases = JSON.parse(fs.readFileSync(path.join(root, "test", "fixtures", "hurl8-features.json"), "utf8"));
  for (const fixture of cases) {
    assert.equal(parser.parse(fixture.source).rootNode.hasError, false,
      fixture.category + ": " + fixture.name);
  }
});

test("stable value forms preserve template AST and reject invalid operands", () => {
  const parser = new Parser();
  parser.setLanguage(Hurl);
  function count(node, type) {
    return Number(node.type === type) + node.namedChildren.reduce((n, child) => n + count(child, type), 0);
  }
  const fixtures = name => JSON.parse(fs.readFileSync(path.join(root, "test", "fixtures", name), "utf8"));
  for (const fixture of fixtures("hurl8-values.json")) {
    const node = parser.parse(fixture.source).rootNode;
    assert.equal(node.hasError, false, fixture.name);
    assert.equal(count(node, "template"), fixture.templates, fixture.name);
    for (const [kind, expected] of Object.entries(fixture.nodes || {})) {
      assert.equal(count(node, kind), expected, fixture.name + ": " + kind);
    }
  }
  for (const fixture of fixtures("hurl8-invalid.json")) {
    assert.equal(parser.parse(fixture.source).rootNode.hasError, true, fixture.name);
  }
});
