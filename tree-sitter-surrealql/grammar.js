module.exports = grammar({
  name: "surrealql",

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.create_statement,
        $.select_statement,
        $.update_statement,
        $.delete_statement,
        $.let_statement,
        $.define_statement,
        $.return_statement,
      ),

    create_token: ($) => choice("CREATE", "create"),
    select_token: ($) => choice("SELECT", "select"),
    update_token: ($) => choice("UPDATE", "update"),
    delete_token: ($) => choice("DELETE", "delete"),
    content_token: ($) => choice("CONTENT", "content"),
    define_token: ($) => choice("DEFINE", "define"),
    field_token: ($) => choice("FIELD", "field"),
    table_token: ($) => choice("TABLE", "table"),
    function_token: ($) => choice("FUNCTION", "function"),
    _on_token: ($) => choice("ON", "on"),
    on_table_token: ($) => choice("ON_TABLE", "on_table", $._on_token),
    from_token: ($) => choice("FROM", "from"),
    let_token: ($) => choice("LET", "let"),

    define_statement: ($) =>
      choice($.define_table_statement, $.define_field_statement),

    define_table_statement: ($) =>
      seq($.define_token, $.table_token, $.table_def),

    define_field_statement: ($) =>
      seq(
        $.define_token,
        $.field_token,
        $.field_def,
        $.on_table_token,
        $.table_def,
      ),

    define_function_statement: ($) =>
      seq(
        $.define_token,
        $.function_token,
        $.function_identifier,
      ),

    return_statement: ($) => seq("return", $.value),

    function_parameter: ($) => seq($.variable_name, ":", $.type),

    function_identifier: ($) => /[a-zA-Z0-9]+/,
    function_ref: ($) => seq(repeat(seq($.function_identifier, "::")), $.function_identifier),

    create_statement: ($) =>
      seq($.create_token, $.table_name, $.content_token, $.object),

    select_statement: ($) =>
      seq($.select_token, $.field_name, $.from_token, $.table_name),

    update_statement: ($) =>
      seq($.update_token, $.table_name, $.content_token, $.object),

    delete_statement: ($) => seq($.delete_token, $.table_name),

    let_statement: ($) => seq($.let_token, $.variable_name, "=", $.value),

    table_name: ($) => /[a-zA-Z0-9]+/,
    field_name: ($) => /[a-zA-Z0-9]+/,

    table_def: ($) => /[a-zA-Z0-9]+/,
    field_def: ($) => /[a-zA-Z0-9]+/,

    object: ($) => seq("{", repeat($.field), "}"),

    field: ($) => seq($.string, ":", $.value, optional(",")),

    value: ($) => choice($.string, $.number, $.object, $.boolean, $.variable_name, $.code_block, $.value, $.bracketed_value, $.bracketed_statement),

    bracketed_value: ($) => seq("(", $.value, ")"),
    bracketed_statement: ($) => seq("(", $._statement, ")"),

    string: ($) => /"[^"]*"/,
    number: ($) => /[0-9]+/,
    boolean: ($) => choice("true", "false"),
    array: ($) => seq("[", $.value, repeat(seq(",", $.value)), "]"),

    type: ($) => choice("string", "number", "boolean", "object"),

    variable_name: ($) => /\$[a-zA-Z0-9]+/,

    code_block: ($) => seq("{", repeat($._statement), "}"),
  },
  external: ($) => [
    $.comment,
    $.string,
    $.number,
    $.variable_name,
    $.table_name,
    $.field_name,
  ],
});
