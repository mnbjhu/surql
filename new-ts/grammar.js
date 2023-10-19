module.exports = grammar({
  name: "mylang",
  rules: {
    source_file: ($) => seq(repeat($.statement), ";", optional($.statement)),

    statement: ($) =>
      seq(
        choice(
          prec.left(1, seq($._statement_start, repeat($._statement_argument))),
          $.expected_statement,
        ),
      ),

    _select_token: ($) => choice($.select_token, $.expected_select_token),
    select_token: ($) => choice("SELECT", "select"),
    expected_select_token: ($) => prec(-1, $.found),

    _where_token: ($) => choice($.where_token, $.expected_where_token),
    where_token: ($) => choice("WHERE", "where"),
    expected_where_token: ($) => prec(-1, $.found),

    _from_token: ($) => choice($.from_token, $.expected_from_token),
    from_token: ($) => choice("FROM", "from"),
    expected_from_token: ($) => prec(-1, $.found),

    _create_token: ($) => choice($.create_token, $.expected_create_token),
    create_token: ($) => choice("CREATE", "create"),
    expected_create_token: ($) => prec(-1, $.found),

    _content_token: ($) => choice($.content_token, $.expected_content_token),
    content_token: ($) => choice("CONTENT", "content"),
    expected_content_token: ($) => prec(-1, $.found),

    _update_token: ($) => choice($.update_token, $.expected_update_token),
    update_token: ($) => choice("UPDATE", "update"),
    expected_update_token: ($) => prec(-1, $.found),

    _delete_token: ($) => choice($.delete_token, $.expected_delete_token),
    delete_token: ($) => choice("DELETE", "delete"),
    expected_delete_token: ($) => prec(-1, $.found),

    expected_statement: ($) => prec(-2, $.found),

    _token: ($) =>
      prec(
        -1,
        choice(
          $.select_token,
          $.from_token,
          $.create_token,
          $.update_token,
          $.delete_token,
        ),
      ),

    _statement_start: ($) =>
      choice(
        $._select_statement,
        $._create_statement,
        $._update_statement,
        $._delete_statement,
      ),

    _statement_argument: ($) =>
      choice($._where_statement, $._content_statement, $._from_statement),

    where_statement: ($) => prec(1, seq($.where_token, $._value)),

    where_statement_missing_argument: ($) => $.where_token,

    _where_statement: ($) =>
      choice($.where_statement, prec(-1, $.where_statement_missing_argument)),

    content_statement: ($) => prec(1, seq($.content_token, $._value)),

    content_statement_missing_argument: ($) => $.content_token,

    _content_statement: ($) =>
      choice(
        $.content_statement,
        prec(-1, $.content_statement_missing_argument),
      ),

    from_statement: ($) => prec(1, seq($.from_token, $._table_name)),

    from_statement_missing_argument: ($) => $.from_token,

    _from_statement: ($) =>
      choice($.from_statement, prec(-1, $.from_statement_missing_argument)),

    select_statement: ($) => prec(1, seq($.select_token, $.value)),

    select_statement_missing_argument: ($) => $.select_token,

    _select_statement: ($) =>
      choice($.select_statement, prec(-1, $.select_statement_missing_argument)),

    create_statement: ($) => prec(1, seq($.create_token, $._table_name)),

    create_statement_missing_argument: ($) => $.create_token,

    _create_statement: ($) =>
      choice($.create_statement, prec(-1, $.create_statement_missing_argument)),

    update_statement: ($) => prec(1, seq($.update_token, $._table_name)),

    update_statement_missing_argument: ($) => $.update_token,

    _update_statement: ($) =>
      choice($.update_statement, prec(-1, $.update_statement_missing_argument)),

    delete_statement: ($) => prec(1, seq($.delete_token, $._table_name)),

    delete_statement_missing_argument: ($) => $.delete_token,

    _delete_statement: ($) =>
      choice($.delete_statement, prec(-1, $.delete_statement_missing_argument)),

    found: ($) => prec(-1, choice($._token, $.value, $.unknown_name)),

    unknown_name: ($) => prec(-1, /[a-zA-Z_][a-zA-Z0-9_]*/),

    _value: ($) => choice(prec(2, $.value), prec(1, $.expected_value)),
    expected_value: ($) => $.found,
    value: ($) =>
      choice($.number, $.string, $.boolean, $.null, $.operation, $.column_name),

    equal: ($) => prec.left(0, seq($.value, "=", $.value)),

    sum: ($) => prec.left(1, seq($.value, "+", $.value)),

    subtract: ($) => prec.left(2, seq($.value, "-", $.value)),

    product: ($) => prec.left(3, seq($.value, "*", $.value)),

    divide: ($) => prec.left(4, seq($.value, "/", $.value)),

    operation: ($) => choice($.equal, $.sum, $.subtract, $.product, $.divide),

    number: ($) => /\d+/,
    string: ($) => /"[^"]*"/,
    boolean: ($) => choice("true", "false"),
    null: ($) => "null",

    _table_name: ($) =>
      choice(prec(2, $.table_name), prec(1, $.expected_table_name)),
    table_name: ($) => prec(1, /[a-zA-Z_][a-zA-Z0-9_]*/),
    expected_table_name: ($) => prec(-1, $.found),

    _column_name: ($) => choice($.column_name, $.expected_column_name),
    column_name: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    expected_column_name: ($) => prec(-2, $.found),
  },
});
