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
