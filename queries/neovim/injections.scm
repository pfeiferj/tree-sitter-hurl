; Native JSON is highlighted by Hurl so templates are not reparsed as JSON.

((comment) @injection.content
  (#set! injection.language "comment"))

((xml) @injection.content
  (#set! injection.language "xml")
  (#set! injection.include-children))

; Keep each fence's content together without combining separate bodies.
(multiline_string
  (multiline_string_type) @injection.language
  [
    (multiline_string_content) @injection.content
    (template)
  ]+
  (#not-eq? @injection.language "raw"))
