module.exports = grammar({
  name: "dbml",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($._definition),
    identifier: (_$) => /[a-z0-9_]+/,
    number: ($) => /\d+/,
    word: ($) => /\w+/,
    text: ($) => seq(/.+/, $._line_break),
    string: ($) => /[']{1}.*[']{1}/,

    comment: ($) =>
      token(choice(seq("//", /[^\r?\n]*/), seq("/*", /[^*]*/, "*/"))),

    _line_break: ($) => /[\?\r?\n]/,

    _definition: ($) =>
      choice(
        $.project_definition,
        $.table_definition,
        $.table_group_definition,
        $.enum_definition
      ),

    modifiers: ($) =>
      seq(
        "[",
        field("modifier", repeat(choice($.modifier))),
        optional(","),
        "]"
      ),

    modifier: ($) =>
      seq(field("name", $.word), optional(seq(":", field("value", $.word)))),

    project_definition: ($) =>
      seq("Project", field("name", $.identifier), $.project_block),

    project_block: ($) =>
      seq("{", repeat(choice($.keypair, $.note_string)), "}"),

    keypair: ($) =>
      choice(
        seq(
          field("key", $.identifier),
          ":",
          field("value", $.string),
          $._line_break
        )
      ),

    note_string: ($) => seq("Note", ":", $.string, $._line_break),

    column_definition: ($) =>
      seq(
        field("column_name", $.identifier),
        field("data_type", $.data_type),
        field("modifiers", optional($.modifiers)),
        $._line_break
      ),

    table_definition: ($) =>
      seq(
        "Table",
        optional(seq(field("schema_name", $.identifier), ".")),
        field("name", $.identifier),
        optional(seq("as", field("alias", $.word))),
        field("definition_block", $.block)
      ),

    table_group_definition: ($) =>
      seq("TableGroup", field("name", $.identifier), $.table_group_block),

    table_group_block: ($) =>
      seq("{", repeat(field("table_name", $.text)), "}"),

    data_type: ($) =>
      seq(
        $.identifier,
        // length
        optional(seq("(", $.number, ")"))
      ),

    enum_definition: ($) =>
      seq("Enum", field("enum_name", $.identifier), $.enum_block),

    enum_block: ($) => seq("{", repeat(field("constant", $.text)), "}"),

    block: ($) => seq("{", choice(repeat($._statement)), "}"),

    _statement: ($) => choice($.column_definition),

    _expression: ($) => choice($.identifier, $.number),
  },
});
