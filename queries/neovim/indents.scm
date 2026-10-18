; indents.scm
[
  (json_object)
  (json_array)
] @indent.begin

[
  "}"
  "]"
] @indent.branch

(xml_tag) @indent.begin

(xml_close_tag) @indent.branch

; Preserve payload whitespace when no injected-language indenter takes over.
(multiline_string) @indent.auto
