module.exports = grammar({
  extras: $ => [/\s|\\\r?\n/, $.comment],
  name: 'blueprint',
  rules: {
    // begin Root
    source_file: $ =>
      seq(repeat1($.using), repeat(choice($.template, $.menu, $.object))),
    using: $ =>
      seq(
        'using',
        field('namespace', $.ident),
        field('version', $.number),
        ';',
      ),
    // end Root
    // begin Objects
    object: $ =>
      seq($.type_name, optional(field('id', $.ident)), $.object_content),
    object_content: $ =>
      seq('{', repeat(choice($.signal, $.property, $.extension, $.child)), '}'),
    type_name: $ =>
      choice($.type_name_full, $.type_name_external, $.type_name_short),
    type_name_full: $ =>
      seq(field('namespace', $.ident), '.', field('name', $.ident)),
    type_name_external: $ => seq('$', field('name', $.ident)),
    type_name_short: $ => field('name', $.ident),
    property: $ =>
      seq(
        field('name', $.ident),
        ':',
        choice($.binding, $.object_value, $.value),
        ';',
      ),
    signal: $ =>
      seq(
        field('name', $.ident),
        optional(seq('::', field('detail', $.ident))),
        '=>',
        '$',
        field('handler', $.ident),
        '(',
        optional(field('object', $.ident)),
        ')',
        repeat($.signal_flag),
        ';',
      ),
    signal_flag: $ => choice('after', 'swapped'),
    child: $ => seq(optional($.child_annotation), $.object),
    child_annotation: $ =>
      seq('[', choice($.child_internal, $.child_extension, $.child_type), ']'),
    child_internal: $ =>
      seq('internal-child', field('internal_child', $.ident)),
    child_type: $ => $.ident,
    // end Objects
    // begin Composite Templates
    template: $ =>
      seq(
        'template',
        $.type_name,
        optional(seq(':', $.type_name)),
        $.object_content,
      ),
    // end Composite Templates
    // begin Values
    value: $ => choice($.translated, $.flags, $.literal),
    literal: $ =>
      choice(
        $.type_literal,
        $.quoted_literal,
        $.number_literal,
        $.ident_literal,
      ),
    quoted_literal: $ => field('value', $.quoted),
    number_literal: $ => seq(optional(/-|\+/), field('value', $.number)),
    ident_literal: $ => prec(1, field('ident', $.ident)),
    type_literal: $ => seq('typeof', '<', $.type_name, '>'),
    flags: $ =>
      seq(field('first', $.ident), repeat(seq('|', field('rest', $.ident)))),
    translated: $ =>
      choice(
        seq('_', '(', field('string', $.quoted), ')'),
        seq(
          'C_',
          '(',
          field('context', $.quoted),
          field('string', $.quoted),
          ')',
        ),
      ),
    binding: $ => seq('bind', $.expression),
    object_value: $ => $.object,
    string_value: $ => choice($.translated, $.quoted_literal),
    // end Values
    // begin Expressions
    expression: $ =>
      seq(
        choice($.closure_expression, $.literal, seq('(', $.expression, ')')),
        repeat(choice($.lookup_expression, $.cast_expression)),
      ),
    lookup_expression: $ => seq('.', field('property', $.ident)),
    closure_expression: $ =>
      seq(
        '$',
        field('name', $.ident),
        '(',
        repeat(seq($.expression, ',')),
        ')',
      ),
    cast_expression: $ => seq('as', '<', $.type_name, '>'),
    // end Expressions
    // begin Menus
    menu: $ =>
      seq(
        'menu',
        optional(field('id', $.ident)),
        '{',
        repeat($.menu_child),
        '}',
      ),
    menu_child: $ =>
      choice(
        $.menu_section,
        $.menu_submenu,
        $.menu_item_shorthand,
        $.menu_item,
      ),
    menu_section: $ =>
      seq(
        'section',
        optional(field('id', $.ident)),
        '{',
        repeat(choice($.menu_child, $.menu_attribute)),
        '}',
      ),
    menu_submenu: $ =>
      seq(
        'submenu',
        optional(field('id', $.ident)),
        '{',
        repeat(choice($.menu_child, $.menu_attribute)),
        '}',
      ),
    menu_item: $ => seq('item', '{', repeat($.menu_attribute), '}'),
    menu_attribute: $ => seq(field('name', $.ident), ':', $.string_value, ';'),
    menu_item_shorthand: $ =>
      seq(
        'item',
        '(',
        $.string_value,
        optional(
          seq(
            ',',
            optional(
              seq($.string_value, optional(seq(',', optional($.string_value)))),
            ),
          ),
        ),
        ')',
      ),
    // end Menus
    // begin Extensions
    extension: $ =>
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
    ext_accessibility: $ =>
      seq('accessibility', '{', repeat($.ext_accessibility_prop), '}'),
    ext_accessibility_prop: $ => seq(field('name', $.ident), ':', $.value, ';'),
    ext_adw_breakpoint_condition: $ =>
      seq('condition', '(', field('condition', $.quoted), ')'),
    ext_adw_breakpoint: $ =>
      seq('setters', '{', repeat($.ext_adw_breakpoint_setter), '}'),
    ext_adw_breakpoint_setter: $ =>
      seq(
        field('object', $.ident),
        '.',
        field('property', $.ident),
        ':',
        $.value,
        ';',
      ),
    ext_adw_message_dialog: $ =>
      seq(
        'responses',
        '[',
        repeat(seq($.ext_adw_message_dialog_response, optional(','))),
        ']',
      ),
    ext_adw_message_dialog_response: $ =>
      seq(
        field('id', $.ident),
        ':',
        $.string_value,
        repeat($.ext_adw_message_dialog_flag),
      ),
    ext_adw_message_dialog_flag: $ =>
      choice('destructive', 'suggested', 'disabled'),
    ext_combo_box_items: $ =>
      seq('items', '[', repeat(seq($.ext_combo_box_item, optional(','))), ']'),
    ext_combo_box_item: $ =>
      seq(optional(seq(field('id', $.ident), ':')), $.string_value),
    ext_file_filter_mime_types: $ =>
      seq(
        'mime-types',
        '[',
        repeat(seq($.ext_file_filter_item, optional(','))),
        ']',
      ),
    ext_file_filter_patterns: $ =>
      seq(
        'patterns',
        '[',
        repeat(seq($.ext_file_filter_item, optional(','))),
        ']',
      ),
    ext_file_filter_suffixes: $ =>
      seq(
        'suffixes',
        '[',
        repeat(seq($.ext_file_filter_item, optional(','))),
        ']',
      ),
    ext_file_filter_item: $ => $.quoted,
    ext_layout: $ =>
      seq('layout', '{', repeat(seq($.ext_layout_prop, optional(','))), '}'),
    ext_layout_prop: $ => seq(field('name', $.ident), ':', $.value, ';'),
    ext_list_item_factory: $ => seq('template', $.type_name, $.object_content),
    ext_scale_marks: $ =>
      seq('marks', '[', repeat(seq($.ext_scale_mark, optional(','))), ']'),
    ext_scale_mark: $ =>
      seq(
        'mark',
        '(',
        optional(choice('-', '+')),
        field('value', $.number),
        optional(
          seq(
            ',',
            field('position', $.ident),
            optional(seq(',', $.string_value)),
          ),
        ),
        ')',
      ),
    ext_size_group_widgets: $ =>
      seq(
        'widgets',
        '[',
        repeat(seq($.ext_size_group_widget, optional(','))),
        ']',
      ),
    ext_size_group_widget: $ => field('id', $.ident),
    ext_string_list_strings: $ =>
      seq(
        'strings',
        '[',
        repeat(seq($.ext_string_list_item, optional(','))),
        ']',
      ),
    ext_string_list_item: $ => $.string_value,
    ext_styles: $ =>
      seq('styles', '[', repeat(seq($.ext_styles_class, optional(','))), ']'),
    ext_styles_class: $ => field('name', $.quoted),
    child_extension: $ => $.ext_response,
    ext_response: $ =>
      seq(
        'action',
        'response',
        '=',
        optional(choice(field('name', $.ident), field('id', $.number))),
        optional('default'),
      ),
    // end Extensions
    // begin Tokens
    string: $ => token.immediate(prec(1, /[^\\"'\n]+/)),
    number: $ => choice(token(/[0-9]+(\.[0-9]+)?/), token(/0x[A-F0-9]+/)),
    quoted: $ =>
      choice(
        seq('"', repeat(choice($.string, $.escape_sequence)), '"'),
        seq("'", repeat(choice($.string, $.escape_sequence)), "'"),
      ),
    escape_sequence: $ => token.immediate(seq('\\', /(\"|\\|\/|b|f|n|r|t|u)/)),
    comment: _ =>
      token(
        choice(
          seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
          seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
        ),
      ),
    ident: $ => token(/[_A-Za-z][A-Za-z\-_0-9]*/),
    // end Tokens
  },
});
