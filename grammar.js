module.exports = grammar({
  name: "hurl",
  //word: $ => $.word,
  extras: $ => [/[\s\p{Zs}\uFEFF\u2060\u200B]/, $.comment],

  rules: {
    hurl_file: $ => repeat($.entry),
    entry: $=> seq($.request, optional($.response)),
    request: $ => seq($.header, repeat($.section), optional($.body)),
    header: $ => seq($.method, $.uri, "\n", optional($.headers)),
    uri: $ => /[^\s]+/,

    headers: $ => repeat1($.key_value),

    method: $ => choice(
      "GET",
      "HEAD",
      "POST",
      "PUT",
      "DELETE",
      "CONNECT",
      "OPTIONS",
      "TRACE",
      "PATCH",
      "LINK",
      "UNLINK",
      "PURGE",
      "LOCK",
      "UNLOCK",
      "PROPFIND",
      "VIEW"
    ),

    filter_name: $ => choice(
      "regex",
      "count",
      "urlEncode",
      "urlDecode",
      "htmlEscape",
      "htmlUnescape",
      "toInt",
    ),

    query_type: $ => choice(
      "status",
      "url",
      "header",
      "cookie",
      "body",
      "xpath",
      "jsonpath",
      "regex",
      "variable",
      "duration",
      "sha256",
      "md5",
      "bytes",
    ),

    operator: $ => choice(
      "equals",
      "==",
      "notEquals",
      "!=",
      "greaterThan",
      ">",
      "greaterThanOrEquals",
      ">=",
      "lessThan",
      "<",
      "lessThanOrEquals",
      "<=",
      "startsWith",
      "endsWith",
      "contains",
      "matches",
      "exists",
      "includes",
      "isInteger",
      "isFloat",
      "isBoolean",
      "isString",
      "isCollection"
    ),


    section: $ => seq($.section_header, repeat($.key_value)),
    section_header: $ => seq("[", $.section_type, "]", "\n"),
    section_type: $ => /[a-zA-Z0-9\-_]+/,


    response: $ => seq($.http_version, $.http_status_code, "\n", repeat(choice($.capture_section, $.assert_section)), optional($.body)),
    http_status_code: $ => /[0-9]{3}/, 
    http_version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*"),

    key_value: $ => seq($.key, ":", optional(/[ ]+/), $.value, "\n"),
    key: $ => /[a-zA-Z0-9\-_]+/,
    value: $ => /[^\n]+/,
    _line: $ => seq(repeat1($._char), "\n"),
    _char: $ => /[^\n#]|\\#/,

    capture_section: $ => seq(alias(seq("[", alias("Captures", $.section_type), "]"), $.section_header), repeat($.key_value)),
    assert_section: $ => prec.right(seq(alias(seq("[", alias("Asserts", $.section_type), "]"), $.section_header), repeat($._line))),

    xml: ($) => seq(repeat($.xml_prolog_tag), $.xml_tag),
    xml_prolog_tag: ($) => seq("<?", /[^?]+/,"?>"),
    xml_tag: ($) => seq($.xml_open_tag, repeat(choice($.xml_prolog_tag, $.xml_tag, $.xml_string)), $.xml_close_tag),
    xml_open_tag: ($) => seq("<", /[^/?][^>]*/, ">"),
    xml_close_tag: ($) => seq("</", /[^/>]+/, ">"),
    xml_string: ($) => prec.right(repeat1(/[^\n]/)),

    json_value: ($) =>
      choice(
        $.template,
        $.json_object,
        $.json_array,
        $.json_string,
        $.json_number,
        $.boolean,
        $.null
      ),
    json_object: ($) =>
      choice(seq("{", optional($.json_key_value), repeat(seq(",", $.json_key_value)), "}")),
    json_key_value: ($) => seq($.json_key_string, ":", $.json_value),
    json_key_string: ($) => alias($.json_string, "json_key_string"),
    json_array: ($) =>
      prec(2,seq("[", $.json_value, repeat(seq(",", $.json_value)), "]")),
    json_string: ($) =>
      seq('"', repeat(choice($.json_string_content, $.template)), '"'),
    json_string_content: ($) =>
      prec.right(repeat1(choice($.json_string_text, $.json_string_escaped_char))),
    json_string_text: ($) => prec.right(repeat1(seq(/[^"\\]/))),
    json_string_escaped_char: ($) =>
      seq(
        "\\",
        choice(
          '"',
          "\\",
          "b",
          "f",
          "n",
          "r",
          "t",
          seq("u", $.hexdigit, $.hexdigit, $.hexdigit, $.hexdigit)
        )
      ),
    json_number: ($) =>
      seq($.integer, optional($.fraction), optional($.exponent)),
    template: ($) => seq(token.immediate("{{"), /[^}]|}|}}}+/, "}}"),
    boolean: ($) => choice("true", "false"),
    null: ($) => "null",
    hexdigit: ($) => /[0-9A-Fa-f]/,
    fraction: ($) => prec.left(seq(".", repeat1($.digit))),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.digit)),
    integer: ($) => prec.left(seq(repeat1($.digit))),
    float: ($) => seq($.integer, $.fraction),
    digit: ($) => seq(/[0-9]/),
    multiline_string_content: ($) => repeat1($._line),
    _multiline_string_type_seq: ($) => seq(token.immediate(" "), $.multiline_string_type),
    multiline_string_type: ($) => token.immediate(/[a-zA-Z0-9_\-]+/),
    multiline_string: ($) => seq("```", optional($._multiline_string_type_seq), "\n", optional($.multiline_string_content), "```"),


    bodyTag: $ => /[a-zA-Z0-9]+,/,
    bodyData: $ => repeat1($._line),
    body: $ => choice($.json_value, $.xml, seq($.bodyTag, $.bodyData), $.multiline_string),
    comment: $ => token(seq("#", /[^\n]+/))
  }
});
