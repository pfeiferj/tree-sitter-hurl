; Native JSON remains Hurl-aware so interpolation is not reparsed as JSON.
((xml) @injection.content
  (#set! injection.language "xml")
  (#set! injection.include-children))

; Each fence is a separate injection; template ranges remain Hurl syntax.
(multiline_string
  (multiline_string_type) @injection.language
  [
    (multiline_string_content) @injection.content
    (template)
  ]+
  (#not-eq? @injection.language "raw"))

