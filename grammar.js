// Hurl escapes are indivisible tokens: extras must never split an escape.
function escaped(chars, immediate = false) {
  const rule = seq("\\", choice(...chars, seq("u", /\{0*([0-9A-Fa-f]{1,3}|[0-9A-Ca-cE-Fe-f][0-9A-Fa-f]{3}|[dD][0-7][0-9A-Fa-f]{2}|[1-9A-Fa-f][0-9A-Fa-f]{4}|10[0-9A-Fa-f]{4})\}/)));
  return immediate ? token.immediate(rule) : token(rule);
}
const filenameText = /[^#;{}\s\\]+/;
const filenameEscapes = ["\\", "b", "f", "n", "r", "t", "#", ";", " ", "{", "}"];
// XML 1.0 NameStartChar/NameChar, including combining marks and supplementary planes.
const xmlNameStart = String.raw`[:A-Z_a-z\u{C0}-\u{D6}\u{D8}-\u{F6}\u{F8}-\u{2FF}\u{370}-\u{37D}\u{37F}-\u{1FFF}\u{200C}-\u{200D}\u{2070}-\u{218F}\u{2C00}-\u{2FEF}\u{3001}-\u{D7FF}\u{F900}-\u{FDCF}\u{FDF0}-\u{FFFD}\u{10000}-\u{EFFFF}]`;
const xmlName = new RustRegex(`${xmlNameStart}${xmlNameStart.slice(0, -1)}.0-9\\-\\u{B7}\\u{300}-\\u{36F}\\u{203F}-\\u{2040}]*`);

module.exports = grammar({
  name: "hurl",
  extras: $ => [/[\s\p{Zs}\uFEFF\u2060\u200B]/, $.comment],

  // The final external is a recovery sentinel; it is never emitted.
  externals: ($) => [$._eof, $._json_array_start, $._bracketed_key_start, $._json_number, $._error_sentinel],

  rules: {
    hurl_file: ($) => seq(repeat($.entry), repeat($._comment_or_new_line)),
    entry: ($) => prec.right(seq(optional(repeat($._comment_or_new_line)), $.request, optional($.response), optional($._comment_or_new_line))),
    _comment_or_new_line: ($) => prec.right(repeat1(choice($.comment, "\n"))),
    _line_ending: ($) => choice($._comment_or_new_line, $._eof),
    request: ($) =>
      prec.left(seq(
        $.method,
        optional($.value_string),
        $._line_ending,
        repeat($.header),
        repeat($.request_section),
        optional($.body)
      )),
    response: ($) =>
      seq(
        $.version,
        $.status,
        $._line_ending,
        repeat($.header),
        repeat($.response_section),
        optional($.body)
      ),
    method: ($) =>
      choice(
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
        "VIEW",
        /[A-Z]+/
      ),
    version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/3", "HTTP/*", "HTTP"),
    status: ($) => choice(/[0-9]+/, '*'),
    header: ($) => seq($.key_value, $._line_ending),
    body: ($) => seq($.bytes, $._line_ending),
    request_section: ($) =>
      choice(
        $.basic_auth_section,
        $.query_string_params_section,
        $.form_params_section,
        $.multipart_form_data_section,
        $.cookies_section,
        $.options_section
      ),
    response_section: ($) => choice($.captures_section, $.asserts_section),
    basic_auth_section: ($) =>
      seq(field("section_header", "[BasicAuth]"), $._line_ending, repeat(seq($.key_value, $._line_ending))),
    query_string_params_section: ($) =>
      seq(field("section_header", choice("[Query]", "[QueryStringParams]")), $._line_ending, repeat(seq($.key_value, $._line_ending))),
    form_params_section: ($) =>
      seq(field("section_header", choice("[Form]", "[FormParams]")), $._line_ending, repeat(seq($.key_value, $._line_ending))),
    multipart_form_data_section: ($) =>
      prec.left(seq(
        field("section_header", choice("[Multipart]", "[MultipartFormData]")),
        $._line_ending,
        repeat(seq($.multipart_form_data_param, $._line_ending))
      )),
    cookies_section: ($) =>
      seq(field("section_header", "[Cookies]"), $._line_ending, repeat(seq($.key_value, $._line_ending))),
    captures_section: ($) =>
      prec.right(seq(field("section_header", "[Captures]"), $._line_ending, repeat($.capture))),
    asserts_section: ($) =>
      seq(field("section_header", "[Asserts]"), $._line_ending, repeat($.assert)),
    options_section: ($) =>
      seq(field("section_header", "[Options]"), $._line_ending, repeat(seq($.option, $._line_ending))),
    key_value: ($) => prec.right(seq($.key_string, ":", optional($.value_string))),
    multipart_form_data_param: ($) => choice($.file_param, $.key_value),
    file_param: ($) => seq($.key_string, ":", $.file_value),
    file_value: ($) =>
      prec.left(seq("file,", optional($.filename), ";", optional(field("content_type", $.value_string)))),
    capture: ($) =>
      seq(
        $.key_string,
        ":",
        $.query,
        repeat(seq($.filter)),
        optional(field("modifier", "redact")),
        $._line_ending
      ),
    assert: ($) =>
      seq(
        $.query,
        repeat(seq($.filter)),
        $.predicate,
        $._line_ending
      ),
    option: ($) =>
      seq(
        choice(
          $.ca_certificate_option,
          $.client_key_option,
          $.cert_option,
          $.variable_option,
          $.boolean_option,
          $.integer_option,
          $.count_option,
          $.verbosity_option,
          $.duration_option,
          $.string_option
        )
      ),
    ca_certificate_option: ($) =>
      seq(field("option_key", "cacert"), ":", optional($.filename)),
    client_key_option: ($) => seq(field("option_key", "key"), ":", optional(alias($._option_value_string, $.value_string))),
    cert_option: ($) =>
      seq(field("option_key", "cert"), ":", optional($.filename_password)),
    filename_password: ($) => seq(
      choice($.template, $.filename_password_content),
      repeat(choice(alias($._key_template, $.template), alias($._filename_password_continue, $.filename_password_content)))
    ),
    filename_password_content: ($) => choice($.filename_password_text, $.filename_password_escaped_char),
    filename_password_text: ($) => filenameText,
    filename_password_escaped_char: ($) => escaped([...filenameEscapes, ":"]),
    _filename_password_continue: ($) => choice(
      alias(token.immediate(filenameText), $.filename_password_text),
      alias(escaped([...filenameEscapes, ":"], true), $.filename_password_escaped_char)
    ),
    boolean_option: ($) => seq(field("option_key", $.boolean_option_key), ":", choice($.boolean, $.template)),
    boolean_option_key: ($) => choice("digest", "http1.1", "negotiate", "ntlm", "compressed", "location", "location-trusted", "http1.0", "http2", "http3", "insecure", "ipv4", "ipv6", "netrc", "netrc-optional", "path-as-is", "skip", "verbose", "very-verbose"),
    integer_option: ($) => seq(field("option_key", $.integer_option_key), ":", choice($._unsigned_integer, $.template)),
    integer_option_key: ($) => choice("retry-max-count", "limit-rate"),
    count_option: ($) => seq(field("option_key", $.count_option_key), ":", choice(alias(token(/-1|[0-9]+/), $.integer), $.template)),
    count_option_key: ($) => choice("max-redirs", "repeat", "retry"),
    verbosity_option: ($) => seq(field("option_key", "verbosity"), ":", field("level", choice("brief", "verbose", "debug"))),
    duration_option: ($) => seq(field("option_key", $.duration_option_key), ":", choice(seq($._unsigned_integer, optional($.duration_unit)), $.template)),
    duration_option_key: ($) => choice("connect-timeout", "delay", "retry-interval", "max-time"),
    duration_unit: ($) => token.immediate(choice("ms", "s", "m", "h")),
    string_option: ($) => prec(2, seq(field("option_key", $.string_option_key), ":", optional(choice($.template, $.value_string)))),
    string_option_key: ($) => choice("resolve", "aws-sigv4", "connect-to", "header", "netrc-file", "output", "pinnedpubkey", "proxy", "unix-socket", "user"),
    variable_option: ($) => seq(field("option_key", "variable"), ":", $.variable_definition),
    variable_definition: ($) => seq($.variable_name, "=", optional($.variable_value)),
    variable_value: ($) =>
      choice(
        "null",
        $.boolean,
        $.integer,
        $.float,
        alias($._option_value_string, $.value_string),
        $.quoted_string
      ),
    // Preserve released filename/value escapes while accepting the published
    // key-string variable values and value-string client-key syntax.
    _option_value_string: ($) => prec.right(repeat1(choice($.template, alias($._option_value_string_content, $.value_string_content)))),
    _option_value_string_content: ($) => prec.right(repeat1(choice(
      $.value_string_text,
      alias(escaped([...filenameEscapes, '"', ":", "/", ","]), $.value_string_escaped_char)
    ))),
    query: ($) =>
      choice(
        $.simple_query,
        $.header_query,
        $.cookie_query,
        $.xpath_query,
        $.jsonpath_query,
        $.regex_query,
        $.variable_query,
        $.certificate_query,
      ),
    simple_query: ($) => field("query_name", choice("status","version","rawbytes","ip","redirects","url","body","duration","bytes","sha256","md5")),
    header_query: ($) => seq(field("query_name", "header"), $.quoted_string),
    cookie_query: ($) => seq(field("query_name", "cookie"), $.quoted_string),
    xpath_query: ($) => seq(field("query_name", "xpath"), $.quoted_string),
    jsonpath_query: ($) => seq(field("query_name", "jsonpath"), $.quoted_string),
    regex_query: ($) => seq(field("query_name", "regex"), choice($.quoted_string, $.regex)),
    variable_query: ($) => seq(field("query_name", "variable"), $.quoted_string),
    certificate_query: ($) => seq(field("query_name", "certificate"), choice($.certificate_attribute, seq('"', $.certificate_attribute, '"'))),
    certificate_attribute: ($) => choice("Subject", "Issuer", "Start-Date", "Expire-Date", "Serial-Number"),
    predicate: ($) => seq(optional("not"), $.predicate_func),
    predicate_func: ($) =>
      choice(
        $.simple_predicate,
        $.equal_predicate,
        $.not_equal_predicate,
        $.greater_predicate,
        $.greater_or_equal_predicate,
        $.less_predicate,
        $.less_or_equal_predicate,
        $.start_with_predicate,
        $.end_with_predicate,
        $.contain_predicate,
        $.match_predicate,
        $.include_predicate,
      ),
    simple_predicate: ($) => field("predicate_name", choice("isDate", "isList", "isObject", "exists", "isInteger", "isFloat", "isBoolean", "isString", "isCollection", "isNumber", "isIsoDate", "isEmpty", "isIpv4", "isIpv6", "isUuid"
    )),
    equal_predicate: ($) =>
      seq(choice(field("predicate_name", "equals"), "=="), $.predicate_value),
    not_equal_predicate: ($) =>
      seq(choice(field("predicate_name", "notEquals"), "!="), $.predicate_value),
    greater_predicate: ($) =>
      seq(
        choice(field("predicate_name", "greaterThan"), ">"),
        choice($.integer, $.float, $._predicate_string, $.template)
      ),
    greater_or_equal_predicate: ($) =>
      seq(
        choice(field("predicate_name", "greaterThanOrEquals"), ">="),
        choice($.integer, $.float, $._predicate_string, $.template)
      ),
    less_predicate: ($) =>
      seq(
        choice(field("predicate_name", "lessThan"), "<"),
        choice($.integer, $.float, $._predicate_string, $.template)
      ),
    less_or_equal_predicate: ($) =>
      seq(
        choice(field("predicate_name", "lessThanOrEquals"), "<="),
        choice($.integer, $.float, $._predicate_string, $.template)
      ),
    start_with_predicate: ($) =>
      seq(
        field("predicate_name", "startsWith"),
        choice($._predicate_string, $.oneline_hex, $.oneline_base64)
      ),
    end_with_predicate: ($) =>
      seq(
        field("predicate_name", "endsWith"),
        choice($._predicate_string, $.oneline_hex, $.oneline_base64)
      ),
    contain_predicate: ($) => seq(field("predicate_name", "contains"), $.predicate_value),
    match_predicate: ($) =>
      seq(field("predicate_name", "matches"), choice($._predicate_string, $.regex)),
    include_predicate: ($) => seq(field("predicate_name", "includes"), $.predicate_value),
    _predicate_string: ($) => choice($.quoted_string, $.oneline_string),
    predicate_value: ($) =>
      choice(
        "null",
        $.template,
        $.boolean,
        $.integer,
        $.float,
        $.quoted_string,
        $.oneline_hex,
        $.oneline_base64,
        $.oneline_file,
        $.oneline_string,
        $.regex,
        $.multiline_string
      ),
    bytes: ($) =>
      choice(
        $.json_value,
        $.xml,
        $.multiline_string,
        $.oneline_string,
        $.oneline_base64,
        $.oneline_file,
        $.oneline_hex
      ),
    xml: ($) => seq(
      repeat(choice($.xml_prolog_tag, $.xml_comment)),
      optional(seq($.xml_doctype, repeat(choice($.xml_prolog_tag, $.xml_comment)))),
      $.xml_tag
    ),
    xml_prolog_tag: ($) => token(seq("<?", /([^?]|\?+[^?>])*\?*/, "?>")),
    xml_comment: ($) => token(seq("<!--", /([^-]|-[^-])*/, "-->")),
    xml_cdata: ($) => token(seq("<![CDATA[", /([^\]]|\][^\]]|\]\]+[^\]>])*\]*/, "]]>")),
    xml_doctype: ($) => seq(
      "<!DOCTYPE", $._xml_space, $.xml_name,
      optional(seq($._xml_space, choice(
        seq(token.immediate("SYSTEM"), $._xml_space, $.xml_dtd_string),
        seq(token.immediate("PUBLIC"), $._xml_space, $.xml_dtd_string, $._xml_space, $.xml_dtd_string)
      ))),
      optional($._xml_space),
      optional(seq("[", repeat(choice($.xml_dtd_declaration, $.xml_comment, $.xml_prolog_tag, $.xml_parameter_entity_reference)), "]", optional($._xml_space))),
      token.immediate(">")
    ),
    xml_dtd_string: ($) => token.immediate(choice(/"[^"]*"/, /'[^']*'/)),
    xml_dtd_declaration: ($) => token(seq("<!", /[A-Z]+/, repeat(choice(/[^"'<>]+/, /"[^"]*"/, /'[^']*'/)), ">")),
    xml_parameter_entity_reference: ($) => token(seq("%", xmlName, ";")),
    xml_tag: ($) => choice(
      $.xml_self_closing_tag,
      seq($.xml_open_tag, repeat(choice($.xml_prolog_tag, $.xml_comment, $.xml_cdata, $.xml_tag, $.xml_value_string)), $.xml_close_tag)
    ),
    xml_name: ($) => token.immediate(xmlName),
    _xml_space: ($) => token.immediate(/[ \t\r\n]+/),
    xml_attribute: ($) => seq($._xml_space, $.xml_name, optional($._xml_space), token.immediate("="), optional($._xml_space), $.xml_attribute_value),
    xml_attribute_value: ($) => token.immediate(choice(/"[^"<]*"/, /'[^'<]*'/)),
    xml_self_closing_tag: ($) => seq("<", $.xml_name, repeat($.xml_attribute), optional($._xml_space), token.immediate("/>")),
    xml_open_tag: ($) => seq("<", $.xml_name, repeat($.xml_attribute), optional($._xml_space), token.immediate(">")),
    xml_close_tag: ($) => seq("</", $.xml_name, optional($._xml_space), token.immediate(">")),
    oneline_base64: ($) => seq("base64,", /[a-zA-Z0-9+\/= \t\r\n]+/, ";"),
    oneline_file: ($) => seq("file,", optional($.filename), ";"),
    oneline_hex: ($) => seq("hex,", repeat($.hexdigit), ";"),
    quoted_string: ($) =>
      seq('"', repeat(choice($.template, $.quoted_string_content)), '"'),
    quoted_string_content: ($) =>
      prec.right(repeat1(choice($.quoted_string_text, choice($.quoted_string_escaped_char, $.invalid_quoted_string_escaped_char)))),
    quoted_string_text: ($) => choice(token(prec(1, /[^"\\{]+/)), token(prec(-1, "{"))),
    invalid_quoted_string_escaped_char: ($) => token(/\\[^"bfnrtu\\]/),
    quoted_string_escaped_char: ($) => escaped(['"', "\\", "b", "f", "n", "r", "t", "{", "}"]),
    key_string: ($) => seq(
      choice(alias($._bracketed_key_content, $.key_string_content), alias($._key_template, $.template), $.key_string_content),
      repeat(choice(alias($._key_template, $.template), $.key_string_content))
    ),
    _bracketed_key_content: ($) => seq(alias($._bracketed_key_start, $.key_string_text)),
    _key_template: ($) => seq(token.immediate("{{"), field("template", $.expr), "}}"),
    key_string_content: ($) =>
      prec.left(repeat1(choice($.key_string_text, $.key_string_escaped_char))),
    key_string_text: ($) =>
      token.immediate(/[\p{Alphabetic}\p{Number}_.@$\[\]-]+/),
    key_string_escaped_char: ($) => escaped(["#", '"', ":", "/", "\\", "b", "f", "n", "r", "t"], true),
    xml_value_string: ($) => $.xml_value_string_text,
    xml_value_string_text: ($) => token(prec(1, /[^<]+/)),
    value_string: ($) => prec.right(repeat1(choice($.template, $.value_string_content))),
    value_string_content: ($) =>
      prec.right(repeat1(choice($.value_string_text, $.value_string_escaped_char))),
    value_string_text: ($) => prec.right(repeat1(/[^#\n\\]/)),
    value_string_escaped_char: ($) => escaped(["#", "\\", "b", "f", "n", "r", "t", "{", "}"]),
    oneline_string: ($) =>
      seq("`", repeat(choice($.template, $.oneline_string_content)), "`"),
    oneline_string_content: ($) =>
      prec.left(repeat1(choice($.oneline_string_text, $.oneline_string_escaped_char))),
    oneline_string_text: ($) => choice(token(prec(1, /[^\n\\`{]+/)), token(prec(-1, "{"))),
    oneline_string_escaped_char: ($) => escaped([String.fromCharCode(96), "#", "\\", "b", "f", "n", "r", "t", "{", "}"]),
    multiline_string: ($) => choice(
      seq("```", alias("raw", $.multiline_string_type), "\n",
        repeat(alias($.raw_multiline_string_content, $.multiline_string_content)), "```"),
      seq("```", optional($.multiline_string_type), "\n",
        repeat(choice($.template, $.multiline_string_content)), "```")
    ),
    // Retain legacy language hints as highlighting extensions; only raw changes
    // interpolation semantics. Multiline backslashes are literal in every mode.
    multiline_string_type: ($) => choice("base64", "hex", "json", "xml", "graphql", /[^\s`]+/),
    multiline_string_content: ($) => prec.left(repeat1(choice(
      token(prec(1, /[^`{]+/)), token(prec(-1, choice("{", "`")))
    ))),
    raw_multiline_string_content: ($) => prec.left(repeat1(choice(
      token(prec(1, /[^`]+/)), token(prec(-1, "`"))
    ))),
    filename: ($) => seq(
      choice($.template, $.filename_content),
      repeat(choice(alias($._key_template, $.template), alias($._filename_continue, $.filename_content)))
    ),
    filename_content: ($) => choice($.filename_text, $.filename_escaped_char),
    filename_text: ($) => filenameText,
    filename_escaped_char: ($) => escaped([...filenameEscapes, ","]),
    _filename_continue: ($) => choice(
      alias(token.immediate(filenameText), $.filename_text),
      alias(escaped([...filenameEscapes, ","], true), $.filename_escaped_char)
    ),
    unicode_char: ($) => seq("{", repeat1($.hexdigit), "}"),
    json_value: ($) =>
      choice(
        $.template,
        $.json_object,
        $.json_array,
        $.json_string,
        $.json_number,
        $.json_boolean,
        "null"),
    json_object: ($) =>
      seq("{", optional(seq($.json_key_value, repeat(seq(",", $.json_key_value)))), "}"),
    json_key_value: ($) => seq($.json_key_string, ":", $.json_value),
    json_key_string: ($) => alias($.json_string, "json_key_string"),
    json_array: ($) =>
      seq(alias($._json_array_start, "["), optional(seq($.json_value, repeat(seq(",", $.json_value)))), "]"),
    json_string: ($) =>
      seq('"', repeat($.json_string_content), token.immediate('"')),
    // Immediate tokens prevent Hurl extras from swallowing invalid JSON controls
    // or comments inside a string, including immediately before a template.
    json_string_content: ($) =>
      prec.left(choice(alias($._json_string_template, $.template), $.json_string_text, $.json_string_escaped_char)),
    _json_string_template: ($) => field("template", seq(token.immediate("{{"), $.expr, "}}")),
    json_string_text: ($) => choice(token.immediate(prec(1, /[^"\\{\x00-\x1F]+/)), token.immediate(prec(-1, "{"))),
    json_string_escaped_char: ($) => token.immediate(seq("\\", choice('"', "\\", "/", "b", "f", "n", "r", "t", /u[0-9A-Fa-f]{4}/))),
    json_number: ($) => $._json_number,
    json_boolean: ($) => choice("true", "false"),
    template: ($) => field("template", seq("{{", $.expr, "}}")),
    expr: ($) => seq(choice($.function, $.variable_name), repeat(seq($.filter))),
    function: ($) => choice("newDate", "newUuid", "getEnv"),
    variable_name: ($) => /[A-Za-z][A-Za-z_0-9-]*/,
    filter: ($) =>
      choice(
        $.simple_filter_key,
        $.regex_filter,
        $.nth_filter,
        $.replace_filter,
        $.replace_regex_filter,
        $.split_filter,
        $.xpath_filter,
        $.argument_filter
      ),
    simple_filter_key: ($) => field("filter_key", choice("base64Decode", "base64Encode", "base64UrlSafeDecode", "base64UrlSafeEncode", "first", "last", "location", "toFloat", "toHex", "toString", "utf8Decode", "utf8Encode", "count","urlEncode","urlDecode","toInt","htmlEscape","htmlUnescape","daysAfterNow","daysBeforeNow")),
    argument_filter: ($) => seq(field("filter_key", choice("charsetDecode", "charsetEncode", "dateFormat", "jsonpath", "urlQueryParam", "decode", "format", "toDate")), $.quoted_string),
    regex_filter: ($) => seq(field("filter_key", "regex"), choice($.quoted_string, $.regex)),
    nth_filter: ($) => seq(field("filter_key", "nth"), choice($.integer, $.template)),
    replace_filter: ($) => seq(field("filter_key", "replace"), choice($.quoted_string, $.regex), $.quoted_string),
    replace_regex_filter: ($) => seq(field("filter_key", "replaceRegex"), choice($.quoted_string, $.regex), $.quoted_string),
    split_filter: ($) => seq(field("filter_key", "split"), $.quoted_string),
    xpath_filter: ($) => seq(field("filter_key", "xpath"), $.quoted_string),
    boolean: ($) => choice("true", "false"),
    _alphanum: ($) => /[A-Za-z0-9]/,
    integer: ($) => token(/-?[0-9]+/),
    _unsigned_integer: ($) => alias(token(/[0-9]+/), $.integer),
    json_integer: ($) => prec.left(seq(repeat1($.json_digit))),
    float: ($) => token(/-?[0-9]+\.[0-9]+/),
    digit: ($) => /[0-9]/,
    json_digit: ($) => /[0-9]/,
    hexdigit: ($) => /[0-9A-Fa-f]/,
    json_hexdigit: ($) => /[0-9A-Fa-f]/,
    fraction: ($) => prec.left(seq(".", repeat1($.digit))),
    json_fraction: ($) => prec.left(seq(".", repeat1($.json_digit))),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.json_digit)),
    json_exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.json_digit)),
    comment: ($) => token(seq("#", /[^\n]*/)),
    regex: ($) => seq("/", optional($.regex_content), "/"),
    regex_content: ($) => repeat1(choice($.regex_text, $.regex_escaped_char)),
    regex_text: ($) => /[^\n\\\/]+/,
    regex_escaped_char: ($) => seq("\\", /[^\n]/),
  },
  conflicts: ($) => [
  ],
});
