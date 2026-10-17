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
