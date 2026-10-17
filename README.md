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

The EOF scanner must be compiled together with `src/parser.c`; the provided
bindings and Makefile include it.

For additional invalid-input, interpolation, CRLF, and incremental EOF coverage:

    python3 -m venv .venv
    .venv/bin/python -m pip install . 'tree-sitter>=0.25,<0.27'
    .venv/bin/python -m unittest discover -s bindings/python/tests -v

Tests parse Hurl source only; they do not execute HTTP requests.
