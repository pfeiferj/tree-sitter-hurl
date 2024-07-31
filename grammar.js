module.exports = grammar({
  name: "hurl",
  //word: $ => $.word,
  extras: $ => [/[\s\p{Zs}\uFEFF\u2060\u200B]/, $.comment],

  rules: {
    hurl_file: ($) => seq(repeat($.entry), repeat($._comment_or_new_line)),
    entry: ($) => prec.right(seq(optional(repeat($._comment_or_new_line)), $.request, optional($.response), optional($._comment_or_new_line))),
    _comment_or_new_line: ($) => prec.right(repeat1(choice($.comment, "\n"))),
    request: ($) =>
      prec.right(seq(
        $.method,
        optional($.value_string),
        repeat1($._comment_or_new_line),
        repeat($.header),
        repeat($.request_section),
        optional($.body)
      )),
    response: ($) =>
      seq(
        $.version,
        $.status,
        $._comment_or_new_line,
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
    version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*", "HTTP"),
    status: ($) => choice(/[0-9]+/, '*'),
    header: ($) => seq($.key_value, $._comment_or_new_line),
    body: ($) => seq($.bytes, $._comment_or_new_line),
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
      seq("[BasicAuth]", $._comment_or_new_line, $.key_value, $._comment_or_new_line),
    query_string_params_section: ($) =>
      prec.right(seq("[QueryStringParams]", $._comment_or_new_line, optional($.key_value), repeat(seq($._comment_or_new_line,$.key_value)), $._comment_or_new_line)),
    form_params_section: ($) =>
      prec.right(seq("[FormParams]", $._comment_or_new_line, optional($.key_value), repeat(seq($._comment_or_new_line,$.key_value)), $._comment_or_new_line)),
    multipart_form_data_section: ($) =>
      prec.right(seq(
        "[MultipartFormData]",
        $._comment_or_new_line,
        optional($.multipart_form_data_param),
        repeat(seq($._comment_or_new_line,$.multipart_form_data_param)),
        $._comment_or_new_line
      )),
    cookies_section: ($) =>
      prec.right(seq("[Cookies]", $._comment_or_new_line, optional($.key_value), repeat(seq($._comment_or_new_line, $.key_value)), $._comment_or_new_line)),
    captures_section: ($) =>
      prec.right(seq("[Captures]", $._comment_or_new_line, repeat($.capture))),
    asserts_section: ($) =>
      seq("[Asserts]", $._comment_or_new_line, repeat($.assert)),
    options_section: ($) =>
      seq("[Options]", $._comment_or_new_line, repeat($.option)),
    key_value: ($) => prec.right(seq($.key_string, token.immediate(":"), optional(choice($.value_string, $.boolean, $.float, $.integer, $.null)))),
    multipart_form_data_param: ($) => choice($.file_param, $.key_value),
    file_param: ($) => seq($.key_string, ":", $.file_value, $._comment_or_new_line),
    file_value: ($) =>
      prec.left(seq("file,", optional($.filename), ";", optional(/[a-zA-Z0-9\/+-]+/))),
    capture: ($) =>
      seq(
        $.key_string,
        ":",
        $.query,
        repeat(seq($.filter)),
        $._comment_or_new_line
      ),
    assert: ($) =>
      seq(
        $.query,
        repeat(seq($.filter)),
        $.predicate,
        $._comment_or_new_line
      ),
    option: ($) =>
      seq(
        choice(
          $.ca_certificate_option,
          $.compressed_option,
          $.follow_redirect_option,
          $.insecure_option,
          $.max_redirs_option,
          $.path_as_is_option,
          $.proxy_option,
          $.retry_option,
          $.retry_interval_option,
          $.retry_max_count_option,
          $.variable_option,
          $.verbose_option,
          $.very_verbose_option
        )
      ),
    ca_certificate_option: ($) =>
      seq("cacert", ":", optional($.filename), $._comment_or_new_line),
    compressed_option: ($) => seq("compressed", ":", $.boolean, $._comment_or_new_line),
    follow_redirect_option: ($) => seq("location", ":", $.boolean, $._comment_or_new_line),
    insecure_option: ($) => seq("insecure", ":", $.boolean, $._comment_or_new_line),
    max_redirs_option: ($) => seq("max-redirs", ":", $.integer, $._comment_or_new_line),
    path_as_is_option: ($) => seq("path-as-is", ":", $.boolean, $._comment_or_new_line),
    proxy_option: ($) => seq("proxy", ":", $.value_string, $._comment_or_new_line),
    retry_option: ($) => seq("retry", ":", $.boolean, $._comment_or_new_line),
    retry_interval_option: ($) => seq("retry-interval", ":", $.integer, $._comment_or_new_line),
    retry_max_count_option: ($) => seq("retry-max-count", ":", $.integer, $._comment_or_new_line),
    variable_option: ($) => seq("variable", ":", $.variable_definition, $._comment_or_new_line),
    verbose_option: ($) => seq("verbose", ":", $.boolean, $._comment_or_new_line),
    very_verbose_option: ($) => seq("very-verbose", ":", $.boolean, $._comment_or_new_line),
    variable_definition: ($) => seq($.variable_name, "=", $.variable_value),
    variable_value: ($) =>
      choice(
        $.null,
        $.boolean,
        $.integer,
        $.float,
        $.key_string,
        $.quoted_string
      ),
    query: ($) =>
      choice(
        "status",
        "url",
        $.header_query,
        $.cookie_query,
        "body",
        $.xpath_query,
        $.jsonpath_query,
        $.regex_query,
        $.variable_query,
        "duration",
        "bytes",
        "sha256",
        "md5",
      ),
    header_query: ($) => seq("header", $.quoted_string),
    cookie_query: ($) => seq("cookie", $.quoted_string),
    xpath_query: ($) => seq("xpath", $.quoted_string),
    jsonpath_query: ($) => seq("jsonpath", $.quoted_string),
    regex_query: ($) => seq("regex", choice($.quoted_string, $.regex)),
    variable_query: ($) => seq("variable", $.quoted_string),
    predicate: ($) => seq(optional("not"), $.predicate_func),
    predicate_func: ($) =>
      choice(
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
        "exists",
        $.include_predicate,
        "isInteger",
        "isFloat",
        "isBoolean",
        "isString",
        "isCollection",
      ),
    equal_predicate: ($) =>
      seq(choice("equals", "=="), $.predicate_value),
    not_equal_predicate: ($) =>
      seq(choice("notEquals", "!="), $.predicate_value),
    greater_predicate: ($) =>
      seq(
        choice("greaterThan", ">"),
        choice($.integer, $.float, $.quoted_string)
      ),
    greater_or_equal_predicate: ($) =>
      seq(
        choice("greaterThanOrEquals", ">="),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_predicate: ($) =>
      seq(
        choice("lessThan", "<"),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_or_equal_predicate: ($) =>
      seq(
        choice("lessThanOrEquals", "<="),
        choice($.integer, $.float, $.quoted_string)
      ),
    start_with_predicate: ($) =>
      seq(
        "startsWith",
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    end_with_predicate: ($) =>
      seq(
        "endsWith",
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    contain_predicate: ($) => seq("contains", $.quoted_string),
    match_predicate: ($) =>
      seq("matches", choice($.quoted_string, $.regex)),
    include_predicate: ($) => seq("includes", $.predicate_value),
    predicate_value: ($) =>
      choice(
        $.null,
        $.boolean,
        $.integer,
        $.float,
        $.quoted_string,
        $.oneline_hex,
        $.oneline_base64,
        $.oneline_file,
        $.multiline_string,
        $.template
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
    xml: ($) => seq(repeat($.xml_prolog_tag), $.xml_tag), //TODO: create a more accurate xml grammar
    xml_prolog_tag: ($) => seq("<?", /[^?]+/,"?>"),
    xml_tag: ($) => seq($.xml_open_tag, repeat(choice($.xml_prolog_tag, $.xml_tag, $.value_string)), $.xml_close_tag),
    xml_open_tag: ($) => seq("<", /[^/?][^>]*/, ">"),
    xml_close_tag: ($) => seq("</", /[^/>]+/, ">"),
    oneline_base64: ($) => seq("base64,", /[a-zA-Z0-9+\-=,\n]+/, ";"),
    oneline_file: ($) => seq("file,", optional($.filename), ";"),
    oneline_hex: ($) => seq("hex,", repeat($.hexdigit), ";"),
    quoted_string: ($) =>
      seq('"', repeat(choice($.quoted_string_content, $.template)), '"'),
    quoted_string_content: ($) =>
      prec.right(repeat1(choice($.quoted_string_text, choice($.quoted_string_escaped_char, $.invalid_quoted_string_escaped_char)))),
    quoted_string_text: ($) => /[^"\\]+/,
    invalid_quoted_string_escaped_char: ($) =>
      seq( "\\", /[^"\f\r\tu\\]/),
    quoted_string_escaped_char: ($) =>
      seq(
        "\\",
        choice('"', "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),
    key_string: ($) => repeat1(choice($.key_string_content, $.template)),
    key_string_content: ($) =>
      prec.left(repeat1(choice($.key_string_text, $.key_string_escaped_char))),
    key_string_text: ($) =>
      token.immediate(repeat1(token.immediate(choice(/[A-Za-z0-9]/, "_", "-", ".", "[", "]", "@", "$")))),
    key_string_escaped_char: ($) => seq(token.immediate("\\"), token.immediate(choice("#", '"'))),
    value_string: ($) => prec.left(repeat1(choice($.value_string_content, $.template))),
    value_string_content: ($) =>
      prec.right(repeat1(choice($.value_string_text, $.value_string_escaped_char))),
    value_string_text: ($) => prec.right(repeat1(token.immediate(/[^#\n\\]/))),
    value_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("#", "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),
    oneline_string: ($) =>
      seq(/`[^`]/, repeat(choice($.oneline_string_content, $.template)), "`"),
    oneline_string_content: ($) =>
      prec.left(repeat1(choice($.oneline_string_text, $.oneline_string_escaped_char))),
    oneline_string_text: ($) => seq(/[^#\n\\]/, /[^`]/),
    oneline_string_escaped_char: ($) =>
      seq("\\", choice("`", "#", "\\", "b", "f", seq("u", $.unicode_char))),
    multiline_string: ($) =>
      prec(2,seq(
        "```",
        optional($.multiline_string_type),
        "\n",
        repeat(choice($.multiline_string_content, prec(1,$.template))),
        optional("\n"),
        prec(2,"```")
      )),
    multiline_string_type: ($) =>
      choice("base64", "hex", "json", "xml", "graphql", /.+/),
    multiline_string_content: ($) =>
      prec.left(repeat1(choice($._multiline_string_text, $.multiline_string_escaped_char, "\n"))),
    _multiline_string_text: ($) => seq(/[^\\{`\n]+/, repeat(choice("`", "{"))),
    multiline_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("\\", "b", "f", "n", "r", "t", "`", seq("u", $.unicode_char))
      ),
    filename: ($) => repeat1(choice($.filename_content, $.template)),
    filename_content: ($) =>
      prec.left(repeat1(choice($.filename_text, $.filename_escaped_char))),
    filename_text: ($) => /[^#; \n\\]+/,
    filename_escaped_char: ($) => seq("\\", choice(";", "#", /[,]/)),
    unicode_char: ($) => seq("{", $.hexdigit, $.hexdigit, $.hexdigit, $.hexdigit, "}"),
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
      choice($.json_string_text, $.json_string_escaped_char),
    json_string_text: ($) => /[^"\\]/,
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
    template: ($) => seq(token.immediate("{{"), $.expr, "}}"),
    expr: ($) => seq($.variable_name, repeat(seq($.filter))),
    variable_name: ($) => seq(/[A-Za-z]/, /[A-Za-z_\-0-9]*/),
    filter: ($) =>
      choice(
        $.regex_filter,
        "count",
        "urlEncode",
        "urlDecode",
        "toInt",

        "htmlEscape",
        "htmlUnescape",

        "daysAfterNo",
        "daysBeforeNo",
        "decode",
        "format",
        $.nth_filter,
        $.replace_filter,
        $.split_filter,
        "toDate",
        $.xpath_filter
      ),
    regex_filter: ($) => seq("regex", choice($.quoted_string, $.regex)),
    nth_filter: ($) => seq("nth", $.integer),
    replace_filter: ($) => seq("replace", choice($.quoted_string, $.regex), $.quoted_string),
    split_filter: ($) => seq("split", $.quoted_string),
    xpath_filter: ($) => seq("xpath", $.quoted_string),
    boolean: ($) => choice("true", "false"),
    null: ($) => "null",
    _alphanum: ($) => /[A-Za-z0-9]/,
    integer: ($) => prec.left(seq(repeat1($.digit))),
    float: ($) => seq($.integer, $.fraction),
    digit: ($) => /[0-9]/,
    hexdigit: ($) => /[0-9A-Fa-f]/,
    fraction: ($) => prec.left(seq(".", repeat1($.digit))),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.digit)),
    comment: ($) => token(seq("#", /[^\n]*/, "\n")),
    regex: ($) => seq("/", optional($.regex_content), "/"),
    regex_content: ($) => repeat1(choice($.regex_text, $.regex_escaped_char)),
    regex_text: ($) => /[^\n\\\/]+/,
    regex_escaped_char: ($) => seq("\\", /[^\n]/),
  },
  conflicts: ($) => [
  ],
});
