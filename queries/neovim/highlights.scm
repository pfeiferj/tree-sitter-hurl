; highlights.scm
[
  (key_string)
  (json_key_string)
] @property

(_ section_header: _ @module)

[
  "\\"
  (regex_escaped_char)
  (quoted_string_escaped_char)
  (key_string_escaped_char)
  (value_string_escaped_char)
  (oneline_string_escaped_char)
  (filename_escaped_char)
  (filename_password_escaped_char)
  (json_string_escaped_char)
] @string.escape

(_ query_name: _ @function.builtin)

(_ filter_key: _ @function.builtin)

(function) @function.builtin

"null" @constant.builtin

(_ option_key: _ @constant.builtin)

(verbosity_option
  level: _ @constant.builtin)

[
  (boolean)
  (json_boolean)
] @boolean

(variable_name) @variable

"not" @keyword.operator

(_ predicate_name: _ @keyword.operator)

"redact" @keyword

[
  "=="
  "!="
  ">"
  ">="
  "<"
  "<="
] @operator

[
  (integer)
  (status)
] @number

[
  (float)
  (json_number)
] @number.float

[
  ":"
  ","
] @punctuation.delimiter

[
  "["
  "]"
  "{"
  "}"
  "{{"
  "}}"
] @punctuation.bracket

[
  (value_string)
  (quoted_string)
  (json_string)
  (oneline_string)
  (multiline_string_content)
  (xml_attribute_value)
  (xml_cdata)
] @string

[
  "base64,"
  "hex,"
  (version)
  (certificate_attribute)
  (duration_unit)
] @string.special

[
  "file,"
  (file_value)
  (filename)
  (filename_password)
] @string.special.path

(regex) @string.regexp

(multiline_string_type) @type

[
  (comment)
  (xml_comment)
] @comment @spell

(method) @type.builtin

((request
  (value_string) @string.special.url)
  (#trim! @string.special.url 1 1 1 1)
  (#gsub! @string.special.url "^%s*(.-)%s*$" "%1"))

; Link literal URLs, not unresolved templates or Hurl escape sequences.
((request
  (value_string) @string.special.url)
  (#lua-match? @string.special.url "^%s*https?://%S+%s*$")
  (#not-lua-match? @string.special.url "{{")
  (#not-lua-match? @string.special.url "\\")
  (#trim! @string.special.url 1 1 1 1)
  (#gsub! @string.special.url "^%s*(.-)%s*$" "%1")
  (#set! @string.special.url url @string.special.url))

[
  (xml_open_tag (xml_name) @tag)
  (xml_close_tag (xml_name) @tag)
  (xml_self_closing_tag (xml_name) @tag)
]

(xml_attribute (xml_name) @tag.attribute)

(xml_open_tag ["<" ">"] @tag.delimiter)
(xml_close_tag ["</" ">"] @tag.delimiter)
(xml_self_closing_tag ["<" "/>"] @tag.delimiter)

((xml) @_xml
  (#set! @_xml bo.commentstring "<!-- %s -->"))
