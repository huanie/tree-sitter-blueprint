module.exports = grammar({
  name: "blueprint",
  extras: ($) => [/\s/, $.comment],

  rules: {
    root: ($) =>
      seq(
        $.gtk_decl,
        repeat($.using),
        repeat(choice($.template, $.menu, $.object)),
      ),
    gtk_decl: ($) => seq("using", "Gtk", "4.0", ";"),
    using: ($) => seq("using", $.namespace, $.version, ";"),
    namespace: ($) => $.ident,
    ident: ($) => /[_A-Za-z][A-Za-z\-_0-9]*/,
    version: ($) => $.number,
    number: ($) => choice($.base10, $.base16),
    base10: ($) => /[0-9]+(\.[0-9]+)?/,
    base16: ($) => /0x[A-F0-9]+/,
    quoted: ($) =>
      choice(
        seq('"', repeat(choice($.string, $.escape_sequence)), '"'),
        seq("'", repeat(choice($.string, $.escape_sequence)), "'"),
      ),
    escape_sequence: ($) =>
      token.immediate(seq("\\", /(\"|\\|\/|b|f|n|r|t|u)/)),
    comment: ($) =>
      token(
        choice(
          "//",
          seq(
            "/",
            repeat1("*"),
            repeat(choice(prec(1, $.comment), /.*/)),
            repeat1("*"),
            "/",
          ),
        ),
      ),
    object: ($) =>
      seq($.type_name, optional(alias($.ident, "id")), $.object_content),
    object_content: ($) =>
      seq("{", repeat(choice($.signal, $.property, $.extension, $.child)), "}"),
    type_name: ($) =>
      choice($.type_name_full, $.type_name_external, $.type_name_short),
    type_name_full: ($) => seq($.namespace, ".", $.name),
    name: ($) => $.ident,
    type_name_external: ($) => seq("$", $.name),
    type_name_short: ($) => $.name,
    property: ($) =>
      seq($.name, ":", choice($.binding, $.object_value, $.value), ";"),
    signal: ($) =>
      seq(
        $.name,
        optional(seq("::", alias($.ident, "detail"))),
        "=>",
        "$",
        alias($.ident, "handler"),
        "(",
        optional(alias($.ident, "object")),
        ")",
        repeat($.signal_flag),
        ";",
      ),
    signal_flag: ($) => choice("after", "swapped"),
    child: ($) => seq(optional($.child_annotation), $.object),
    child_annotation: ($) =>
      seq(
        "[",
        choice(
          $.child_internal,
          $.child_extension,
          alias($.ident, "child_type"),
        ),
        "]",
      ),
    child_internal: ($) =>
      seq("internal-child", alias($.ident, "internal_child")),
    template: ($) =>
      seq(
        "template",
        $.type_name,
        optional(seq(":", $.typename)),
        $.object_content,
      ),
    value: ($) => choice($.translated, $.flags, $.literal),
    literal: ($) =>
      choice(
        $.type_literal,
        $.quoted_literal,
        $.number_literal,
        $.ident_literal,
      ),
    quoted_literal: ($) => alias($.quoted, "value"),
    number_literal: ($) => seq(optional(/-|\+/), alias($.number, "value")),
    ident_literal: ($) => alias($.ident, "ident"),
    type_literal: ($) => seq("typeof", "<", $.type_name, ">"),
    flags: ($) =>
      seq(alias($.ident, "first"), repeat(seq("|", alias($.ident, "rest")))),
    translated: ($) =>
      choice(
        seq("_", "(", alias($.quoted, "string"), ")"),
        seq(
          "C_",
          "(",
          alias($.quoted, "context"),
          alias($.quoted, "string"),
          ")",
        ),
      ),
    binding: ($) => seq("bind", $.expression),
    object_value: ($) => $.object,
    string_value: ($) => choice($.translated, $.quoted_literal),
    expression: ($) =>
      seq(
        choice($.closure_expression, $.literal, seq("(", $.expression, ")")),
        repeat(choice($.lookup_expression, $.cast_expression)),
      ),
    lookup_expression: ($) => seq(".", alias($.ident, "property")),
    closure_expression: ($) =>
      seq(
        "$",
        alias($.ident, "name"),
        "(",
        repeat(seq($.expression, ",")),
        ")",
      ),
    cast_expression: ($) => seq("as", "<", $.typename, ">"),
    menu: ($) =>
      seq(
        "menu",
        optional(alias($.ident, "id")),
        "{",
        repeat($.menu_child),
        "}",
      ),
    menu_child: ($) =>
      choice(
        $.menu_section,
        $.menu_submenu,
        $.menu_item_shorthand,
        $.menu_item,
      ),
    menu_section: ($) =>
      seq(
        "section",
        optional(alias($.ident, "id")),
        "{",
        repeat(choice($.menu_child, $.menu_attribute)),
        "}",
      ),
    menu_submenu: ($) =>
      seq(
        "submenu",
        optional(alias($.ident, "id")),
        "{",
        repeat(choice($.menu_child, $.menu_attribute)),
        "}",
      ),
    menu_item: ($) => seq("item", "{", repeat($.menu_attribute), "}"),
    menu_attribute: ($) =>
      seq(alias($.ident, "name"), ":", $.string_value, ";"),
    menu_item_shorthand: ($) =>
      seq(
        "item",
        "(",
        $.string_value,
        optional(
          seq(
            ",",
            optional(
              seq($.string_value, optional(seq(",", optional($.string_value)))),
            ),
          ),
        ),
        ")",
      ),
    extension: ($) =>
      choice(
        $.ext_accessibility,
        $.ext_adw_message_dialog,
        $.ext_adw_breakpoint,
        $.ext_combo_box_items,
        $.ext_file_filter_mime_types,
        $.ext_file_filter_patterns,
        $.ext_file_filter_suffixes,
        $.ext_layout,
        $.ext_list_item_factory,
        $.ext_size_group_widgets,
        $.ext_string_list_strings,
        $.ext_styles,
      ),
    string: ($) => token.immediate(prec(1, /[^\\"'\n]+/)),
  },
});
