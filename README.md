# tree-sitter-hurl

Tree-sitter parser for the [hurl](https://hurl.dev/) file format.

This repo tries to follow the hurl grammar as closely as possible with some
exceptions. Some modifications are made to support tree-sitter and to allow for
better highlighting.

## Example

![Screenshot from 2022-12-25 00-13-36](https://user-images.githubusercontent.com/9106735/209457662-a95ade11-a0e6-40f3-ab6a-c7464126a734.png)



## Acknowledgements

* The grammar is based off of [hurl's grammar file](https://github.com/Orange-OpenSource/hurl/blob/master/docs/spec/hurl.grammar).
* For more information about tree-sitter visit the [tree-sitter website](https://tree-sitter.github.io/tree-sitter/).

## Development and tests

Install project-local tooling and run the corpus, query-compilation, example,
and Node binding tests:

    npm ci
    npm test

Regenerate the parser with the pinned Tree-sitter 0.22 CLI (language ABI 14):

    npx tree-sitter generate --no-bindings

The external scanner handles EOF and key/section/JSON disambiguation. It must
be compiled together with `src/parser.c`; the provided bindings and Makefile
include it.

For additional invalid-input, interpolation, CRLF, and incremental EOF coverage:

    python3 -m venv .venv
    .venv/bin/python -m pip install . 'tree-sitter>=0.25,<0.27'
    .venv/bin/python -m unittest discover -s bindings/python/tests -v

Neovim-specific queries live in `queries/neovim/` and target **Neovim 0.12+**.
Install them as `queries/hurl/*.scm` on Neovim's runtimepath. Validate query
compilation, highlight coverage, hyperlinks, XML commenting, and native JSON
folding using a parser shared library built from this checkout (including
`src/scanner.c`):

    nvim --headless -u NONE -i NONE -n -l test/neovim_queries.lua /path/to/hurl.so

Injected-tree tests also use `json` and `xml` parsers on the runtimepath. To test
actual reindentation, pass a `nvim-treesitter` checkout as the second argument:

    nvim --headless -u NONE -i NONE -n -l test/neovim_queries.lua /path/to/hurl.so /path/to/nvim-treesitter

Missing optional test dependencies are reported as skips. Neovim core does not
consume `indents.scm` itself; an indentation provider such as `nvim-treesitter`
is required. Its multiline fallback preserves payload whitespace when no
injected-language indenter takes over.

Native JSON uses Hurl's own highlighting so interpolation remains Hurl syntax;
JSON-labelled fences still use the optional JSON parser. Fenced injections
exclude template ranges, but a template used as a whole JSON value can still
leave incomplete JSON for the injected parser. XML has fallback tag highlighting
and commenting metadata for built-in `gc`. Literal HTTP(S) request URLs provide
hyperlink metadata for supporting terminals; unresolved templates and Hurl escape
sequences are not linked.

Tests parse Hurl source only; they do not execute HTTP requests.

## Hurl compatibility

The current compatibility target is the published **Hurl 8.0.1** release. The
regression fixtures cover its filter/query/predicate/file-option names, value
forms, and template AST boundaries. Tests only parse source; no HTTP is executed.

- Quoted strings and filenames expose interpolation nodes. **newDate** and
  **newUuid** have dedicated function nodes; longer variable names remain variables.
- Multiline backslashes are literal. **raw** fences and bare XML (including CDATA)
  do not interpolate; use a normal/XML-labelled fence when interpolation is wanted.
- Count options accept the **-1** sentinel only for max-redirs, repeat, and retry.
  Durations accept contiguous ms, s, m, and h units.
- Existing textual predicate aliases, retry-max-count, regex-valued replace,
  and extra fence-language hints remain accepted as compatibility/highlighting
  extensions. This grammar is not a replacement for Hurl validation.
- Formal-grammar-only charsetEncode and getEnv functions are not implemented;
  they are not supported by the stable release. Bare getEnv remains a variable.

The development audit syntax-checked the 375 Hurl fixtures in the official 8.0.1
source archive. Of the 320 files accepted by its formatter, all 320 now parse
without Tree-sitter errors (the starting branch parsed 227). This is a regression
sample, not a claim of exhaustive language equivalence.
