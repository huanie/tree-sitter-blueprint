#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 381
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 25

enum {
  anon_sym_using = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_DOT = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_COLON = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_EQ_GT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_after = 12,
  anon_sym_swapped = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_internal_DASHchild = 16,
  anon_sym_template = 17,
  aux_sym_number_literal_token1 = 18,
  anon_sym_typeof = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  anon_sym_PIPE = 22,
  anon_sym__ = 23,
  anon_sym_C_ = 24,
  anon_sym_bind = 25,
  anon_sym_COMMA = 26,
  anon_sym_as = 27,
  anon_sym_menu = 28,
  anon_sym_section = 29,
  anon_sym_submenu = 30,
  anon_sym_item = 31,
  anon_sym_accessibility = 32,
  anon_sym_condition = 33,
  anon_sym_setters = 34,
  anon_sym_responses = 35,
  anon_sym_destructive = 36,
  anon_sym_suggested = 37,
  anon_sym_disabled = 38,
  anon_sym_items = 39,
  anon_sym_mime_DASHtypes = 40,
  anon_sym_patterns = 41,
  anon_sym_suffixes = 42,
  anon_sym_layout = 43,
  anon_sym_marks = 44,
  anon_sym_mark = 45,
  anon_sym_DASH = 46,
  anon_sym_PLUS = 47,
  anon_sym_widgets = 48,
  anon_sym_strings = 49,
  anon_sym_styles = 50,
  anon_sym_action = 51,
  anon_sym_response = 52,
  anon_sym_EQ = 53,
  anon_sym_default = 54,
  sym_string = 55,
  aux_sym_number_token1 = 56,
  aux_sym_number_token2 = 57,
  anon_sym_DQUOTE = 58,
  anon_sym_SQUOTE = 59,
  sym_escape_sequence = 60,
  sym_comment = 61,
  sym_ident = 62,
  sym_source_file = 63,
  sym_using = 64,
  sym_object = 65,
  sym_object_content = 66,
  sym_type_name = 67,
  sym_type_name_full = 68,
  sym_type_name_external = 69,
  sym_type_name_short = 70,
  sym_property = 71,
  sym_signal = 72,
  sym_signal_flag = 73,
  sym_child = 74,
  sym_child_annotation = 75,
  sym_child_internal = 76,
  sym_child_type = 77,
  sym_template = 78,
  sym_value = 79,
  sym_literal = 80,
  sym_quoted_literal = 81,
  sym_number_literal = 82,
  sym_ident_literal = 83,
  sym_type_literal = 84,
  sym_flags = 85,
  sym_translated = 86,
  sym_binding = 87,
  sym_object_value = 88,
  sym_string_value = 89,
  sym_expression = 90,
  sym_lookup_expression = 91,
  sym_closure_expression = 92,
  sym_cast_expression = 93,
  sym_menu = 94,
  sym_menu_child = 95,
  sym_menu_section = 96,
  sym_menu_submenu = 97,
  sym_menu_item = 98,
  sym_menu_attribute = 99,
  sym_menu_item_shorthand = 100,
  sym_extension = 101,
  sym_ext_accessibility = 102,
  sym_ext_accessibility_prop = 103,
  sym_ext_adw_breakpoint = 104,
  sym_ext_adw_breakpoint_setter = 105,
  sym_ext_adw_message_dialog = 106,
  sym_ext_adw_message_dialog_response = 107,
  sym_ext_adw_message_dialog_flag = 108,
  sym_ext_combo_box_items = 109,
  sym_ext_combo_box_item = 110,
  sym_ext_file_filter_mime_types = 111,
  sym_ext_file_filter_patterns = 112,
  sym_ext_file_filter_suffixes = 113,
  sym_ext_file_filter_item = 114,
  sym_ext_layout = 115,
  sym_ext_layout_prop = 116,
  sym_ext_list_item_factory = 117,
  sym_ext_size_group_widgets = 118,
  sym_ext_size_group_widget = 119,
  sym_ext_string_list_strings = 120,
  sym_ext_string_list_item = 121,
  sym_ext_styles = 122,
  sym_ext_styles_class = 123,
  sym_child_extension = 124,
  sym_ext_response = 125,
  sym_number = 126,
  sym_quoted = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_source_file_repeat2 = 129,
  aux_sym_object_content_repeat1 = 130,
  aux_sym_signal_repeat1 = 131,
  aux_sym_flags_repeat1 = 132,
  aux_sym_expression_repeat1 = 133,
  aux_sym_closure_expression_repeat1 = 134,
  aux_sym_menu_repeat1 = 135,
  aux_sym_menu_section_repeat1 = 136,
  aux_sym_menu_item_repeat1 = 137,
  aux_sym_ext_accessibility_repeat1 = 138,
  aux_sym_ext_adw_breakpoint_repeat1 = 139,
  aux_sym_ext_adw_message_dialog_repeat1 = 140,
  aux_sym_ext_adw_message_dialog_response_repeat1 = 141,
  aux_sym_ext_combo_box_items_repeat1 = 142,
  aux_sym_ext_file_filter_mime_types_repeat1 = 143,
  aux_sym_ext_layout_repeat1 = 144,
  aux_sym_ext_size_group_widgets_repeat1 = 145,
  aux_sym_ext_string_list_strings_repeat1 = 146,
  aux_sym_ext_styles_repeat1 = 147,
  aux_sym_quoted_repeat1 = 148,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_using] = "using",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_after] = "after",
  [anon_sym_swapped] = "swapped",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_internal_DASHchild] = "internal-child",
  [anon_sym_template] = "template",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [anon_sym_typeof] = "typeof",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
  [anon_sym__] = "_",
  [anon_sym_C_] = "C_",
  [anon_sym_bind] = "bind",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [anon_sym_menu] = "menu",
  [anon_sym_section] = "section",
  [anon_sym_submenu] = "submenu",
  [anon_sym_item] = "item",
  [anon_sym_accessibility] = "accessibility",
  [anon_sym_condition] = "condition",
  [anon_sym_setters] = "setters",
  [anon_sym_responses] = "responses",
  [anon_sym_destructive] = "destructive",
  [anon_sym_suggested] = "suggested",
  [anon_sym_disabled] = "disabled",
  [anon_sym_items] = "items",
  [anon_sym_mime_DASHtypes] = "mime-types",
  [anon_sym_patterns] = "patterns",
  [anon_sym_suffixes] = "suffixes",
  [anon_sym_layout] = "layout",
  [anon_sym_marks] = "marks",
  [anon_sym_mark] = "mark",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_widgets] = "widgets",
  [anon_sym_strings] = "strings",
  [anon_sym_styles] = "styles",
  [anon_sym_action] = "action",
  [anon_sym_response] = "response",
  [anon_sym_EQ] = "=",
  [anon_sym_default] = "default",
  [sym_string] = "string",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_ident] = "ident",
  [sym_source_file] = "source_file",
  [sym_using] = "using",
  [sym_object] = "object",
  [sym_object_content] = "object_content",
  [sym_type_name] = "type_name",
  [sym_type_name_full] = "type_name_full",
  [sym_type_name_external] = "type_name_external",
  [sym_type_name_short] = "type_name_short",
  [sym_property] = "property",
  [sym_signal] = "signal",
  [sym_signal_flag] = "signal_flag",
  [sym_child] = "child",
  [sym_child_annotation] = "child_annotation",
  [sym_child_internal] = "child_internal",
  [sym_child_type] = "child_type",
  [sym_template] = "template",
  [sym_value] = "value",
  [sym_literal] = "literal",
  [sym_quoted_literal] = "quoted_literal",
  [sym_number_literal] = "number_literal",
  [sym_ident_literal] = "ident_literal",
  [sym_type_literal] = "type_literal",
  [sym_flags] = "flags",
  [sym_translated] = "translated",
  [sym_binding] = "binding",
  [sym_object_value] = "object_value",
  [sym_string_value] = "string_value",
  [sym_expression] = "expression",
  [sym_lookup_expression] = "lookup_expression",
  [sym_closure_expression] = "closure_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_menu] = "menu",
  [sym_menu_child] = "menu_child",
  [sym_menu_section] = "menu_section",
  [sym_menu_submenu] = "menu_submenu",
  [sym_menu_item] = "menu_item",
  [sym_menu_attribute] = "menu_attribute",
  [sym_menu_item_shorthand] = "menu_item_shorthand",
  [sym_extension] = "extension",
  [sym_ext_accessibility] = "ext_accessibility",
  [sym_ext_accessibility_prop] = "ext_accessibility_prop",
  [sym_ext_adw_breakpoint] = "ext_adw_breakpoint",
  [sym_ext_adw_breakpoint_setter] = "ext_adw_breakpoint_setter",
  [sym_ext_adw_message_dialog] = "ext_adw_message_dialog",
  [sym_ext_adw_message_dialog_response] = "ext_adw_message_dialog_response",
  [sym_ext_adw_message_dialog_flag] = "ext_adw_message_dialog_flag",
  [sym_ext_combo_box_items] = "ext_combo_box_items",
  [sym_ext_combo_box_item] = "ext_combo_box_item",
  [sym_ext_file_filter_mime_types] = "ext_file_filter_mime_types",
  [sym_ext_file_filter_patterns] = "ext_file_filter_patterns",
  [sym_ext_file_filter_suffixes] = "ext_file_filter_suffixes",
  [sym_ext_file_filter_item] = "ext_file_filter_item",
  [sym_ext_layout] = "ext_layout",
  [sym_ext_layout_prop] = "ext_layout_prop",
  [sym_ext_list_item_factory] = "ext_list_item_factory",
  [sym_ext_size_group_widgets] = "ext_size_group_widgets",
  [sym_ext_size_group_widget] = "ext_size_group_widget",
  [sym_ext_string_list_strings] = "ext_string_list_strings",
  [sym_ext_string_list_item] = "ext_string_list_item",
  [sym_ext_styles] = "ext_styles",
  [sym_ext_styles_class] = "ext_styles_class",
  [sym_child_extension] = "child_extension",
  [sym_ext_response] = "ext_response",
  [sym_number] = "number",
  [sym_quoted] = "quoted",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_object_content_repeat1] = "object_content_repeat1",
  [aux_sym_signal_repeat1] = "signal_repeat1",
  [aux_sym_flags_repeat1] = "flags_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_closure_expression_repeat1] = "closure_expression_repeat1",
  [aux_sym_menu_repeat1] = "menu_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
  [aux_sym_menu_item_repeat1] = "menu_item_repeat1",
  [aux_sym_ext_accessibility_repeat1] = "ext_accessibility_repeat1",
  [aux_sym_ext_adw_breakpoint_repeat1] = "ext_adw_breakpoint_repeat1",
  [aux_sym_ext_adw_message_dialog_repeat1] = "ext_adw_message_dialog_repeat1",
  [aux_sym_ext_adw_message_dialog_response_repeat1] = "ext_adw_message_dialog_response_repeat1",
  [aux_sym_ext_combo_box_items_repeat1] = "ext_combo_box_items_repeat1",
  [aux_sym_ext_file_filter_mime_types_repeat1] = "ext_file_filter_mime_types_repeat1",
  [aux_sym_ext_layout_repeat1] = "ext_layout_repeat1",
  [aux_sym_ext_size_group_widgets_repeat1] = "ext_size_group_widgets_repeat1",
  [aux_sym_ext_string_list_strings_repeat1] = "ext_string_list_strings_repeat1",
  [aux_sym_ext_styles_repeat1] = "ext_styles_repeat1",
  [aux_sym_quoted_repeat1] = "quoted_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_swapped] = anon_sym_swapped,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_internal_DASHchild] = anon_sym_internal_DASHchild,
  [anon_sym_template] = anon_sym_template,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym__] = anon_sym__,
  [anon_sym_C_] = anon_sym_C_,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_submenu] = anon_sym_submenu,
  [anon_sym_item] = anon_sym_item,
  [anon_sym_accessibility] = anon_sym_accessibility,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_setters] = anon_sym_setters,
  [anon_sym_responses] = anon_sym_responses,
  [anon_sym_destructive] = anon_sym_destructive,
  [anon_sym_suggested] = anon_sym_suggested,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_items] = anon_sym_items,
  [anon_sym_mime_DASHtypes] = anon_sym_mime_DASHtypes,
  [anon_sym_patterns] = anon_sym_patterns,
  [anon_sym_suffixes] = anon_sym_suffixes,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_marks] = anon_sym_marks,
  [anon_sym_mark] = anon_sym_mark,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_widgets] = anon_sym_widgets,
  [anon_sym_strings] = anon_sym_strings,
  [anon_sym_styles] = anon_sym_styles,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_default] = anon_sym_default,
  [sym_string] = sym_string,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_ident] = sym_ident,
  [sym_source_file] = sym_source_file,
  [sym_using] = sym_using,
  [sym_object] = sym_object,
  [sym_object_content] = sym_object_content,
  [sym_type_name] = sym_type_name,
  [sym_type_name_full] = sym_type_name_full,
  [sym_type_name_external] = sym_type_name_external,
  [sym_type_name_short] = sym_type_name_short,
  [sym_property] = sym_property,
  [sym_signal] = sym_signal,
  [sym_signal_flag] = sym_signal_flag,
  [sym_child] = sym_child,
  [sym_child_annotation] = sym_child_annotation,
  [sym_child_internal] = sym_child_internal,
  [sym_child_type] = sym_child_type,
  [sym_template] = sym_template,
  [sym_value] = sym_value,
  [sym_literal] = sym_literal,
  [sym_quoted_literal] = sym_quoted_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_ident_literal] = sym_ident_literal,
  [sym_type_literal] = sym_type_literal,
  [sym_flags] = sym_flags,
  [sym_translated] = sym_translated,
  [sym_binding] = sym_binding,
  [sym_object_value] = sym_object_value,
  [sym_string_value] = sym_string_value,
  [sym_expression] = sym_expression,
  [sym_lookup_expression] = sym_lookup_expression,
  [sym_closure_expression] = sym_closure_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_menu] = sym_menu,
  [sym_menu_child] = sym_menu_child,
  [sym_menu_section] = sym_menu_section,
  [sym_menu_submenu] = sym_menu_submenu,
  [sym_menu_item] = sym_menu_item,
  [sym_menu_attribute] = sym_menu_attribute,
  [sym_menu_item_shorthand] = sym_menu_item_shorthand,
  [sym_extension] = sym_extension,
  [sym_ext_accessibility] = sym_ext_accessibility,
  [sym_ext_accessibility_prop] = sym_ext_accessibility_prop,
  [sym_ext_adw_breakpoint] = sym_ext_adw_breakpoint,
  [sym_ext_adw_breakpoint_setter] = sym_ext_adw_breakpoint_setter,
  [sym_ext_adw_message_dialog] = sym_ext_adw_message_dialog,
  [sym_ext_adw_message_dialog_response] = sym_ext_adw_message_dialog_response,
  [sym_ext_adw_message_dialog_flag] = sym_ext_adw_message_dialog_flag,
  [sym_ext_combo_box_items] = sym_ext_combo_box_items,
  [sym_ext_combo_box_item] = sym_ext_combo_box_item,
  [sym_ext_file_filter_mime_types] = sym_ext_file_filter_mime_types,
  [sym_ext_file_filter_patterns] = sym_ext_file_filter_patterns,
  [sym_ext_file_filter_suffixes] = sym_ext_file_filter_suffixes,
  [sym_ext_file_filter_item] = sym_ext_file_filter_item,
  [sym_ext_layout] = sym_ext_layout,
  [sym_ext_layout_prop] = sym_ext_layout_prop,
  [sym_ext_list_item_factory] = sym_ext_list_item_factory,
  [sym_ext_size_group_widgets] = sym_ext_size_group_widgets,
  [sym_ext_size_group_widget] = sym_ext_size_group_widget,
  [sym_ext_string_list_strings] = sym_ext_string_list_strings,
  [sym_ext_string_list_item] = sym_ext_string_list_item,
  [sym_ext_styles] = sym_ext_styles,
  [sym_ext_styles_class] = sym_ext_styles_class,
  [sym_child_extension] = sym_child_extension,
  [sym_ext_response] = sym_ext_response,
  [sym_number] = sym_number,
  [sym_quoted] = sym_quoted,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_object_content_repeat1] = aux_sym_object_content_repeat1,
  [aux_sym_signal_repeat1] = aux_sym_signal_repeat1,
  [aux_sym_flags_repeat1] = aux_sym_flags_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_closure_expression_repeat1] = aux_sym_closure_expression_repeat1,
  [aux_sym_menu_repeat1] = aux_sym_menu_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
  [aux_sym_menu_item_repeat1] = aux_sym_menu_item_repeat1,
  [aux_sym_ext_accessibility_repeat1] = aux_sym_ext_accessibility_repeat1,
  [aux_sym_ext_adw_breakpoint_repeat1] = aux_sym_ext_adw_breakpoint_repeat1,
  [aux_sym_ext_adw_message_dialog_repeat1] = aux_sym_ext_adw_message_dialog_repeat1,
  [aux_sym_ext_adw_message_dialog_response_repeat1] = aux_sym_ext_adw_message_dialog_response_repeat1,
  [aux_sym_ext_combo_box_items_repeat1] = aux_sym_ext_combo_box_items_repeat1,
  [aux_sym_ext_file_filter_mime_types_repeat1] = aux_sym_ext_file_filter_mime_types_repeat1,
  [aux_sym_ext_layout_repeat1] = aux_sym_ext_layout_repeat1,
  [aux_sym_ext_size_group_widgets_repeat1] = aux_sym_ext_size_group_widgets_repeat1,
  [aux_sym_ext_string_list_strings_repeat1] = aux_sym_ext_string_list_strings_repeat1,
  [aux_sym_ext_styles_repeat1] = aux_sym_ext_styles_repeat1,
  [aux_sym_quoted_repeat1] = aux_sym_quoted_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal_DASHchild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_submenu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_item] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accessibility] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_responses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_destructive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suggested] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_items] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mime_DASHtypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patterns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suffixes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_marks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mark] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widgets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_styles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_content] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name_full] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name_external] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name_short] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_child] = {
    .visible = true,
    .named = true,
  },
  [sym_child_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_child_internal] = {
    .visible = true,
    .named = true,
  },
  [sym_child_type] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ident_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_translated] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_object_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lookup_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_closure_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_menu] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_child] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_section] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_submenu] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_item] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_item_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_accessibility] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_accessibility_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_breakpoint] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_breakpoint_setter] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_message_dialog] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_message_dialog_response] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_message_dialog_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_combo_box_items] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_combo_box_item] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_file_filter_mime_types] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_file_filter_patterns] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_file_filter_suffixes] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_file_filter_item] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_layout_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_list_item_factory] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_size_group_widgets] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_size_group_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_string_list_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_string_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_styles] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_styles_class] = {
    .visible = true,
    .named = true,
  },
  [sym_child_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_response] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_closure_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_accessibility_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_adw_breakpoint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_adw_message_dialog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_adw_message_dialog_response_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_combo_box_items_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_file_filter_mime_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_layout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_size_group_widgets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_string_list_strings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_styles_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_context = 1,
  field_detail = 2,
  field_first = 3,
  field_handler = 4,
  field_id = 5,
  field_ident = 6,
  field_internal_child = 7,
  field_name = 8,
  field_namespace = 9,
  field_object = 10,
  field_property = 11,
  field_rest = 12,
  field_string = 13,
  field_value = 14,
  field_version = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_context] = "context",
  [field_detail] = "detail",
  [field_first] = "first",
  [field_handler] = "handler",
  [field_id] = "id",
  [field_ident] = "ident",
  [field_internal_child] = "internal_child",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_object] = "object",
  [field_property] = "property",
  [field_rest] = "rest",
  [field_string] = "string",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 1},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 1},
  [16] = {.index = 18, .length = 2},
  [17] = {.index = 20, .length = 1},
  [18] = {.index = 21, .length = 1},
  [19] = {.index = 22, .length = 2},
  [20] = {.index = 24, .length = 2},
  [21] = {.index = 26, .length = 2},
  [22] = {.index = 28, .length = 3},
  [23] = {.index = 31, .length = 3},
  [24] = {.index = 34, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_namespace, 1},
    {field_version, 2},
  [4] =
    {field_name, 2},
    {field_namespace, 0},
  [6] =
    {field_id, 1},
  [7] =
    {field_value, 0},
  [8] =
    {field_internal_child, 1},
  [9] =
    {field_id, 0},
  [10] =
    {field_ident, 0},
  [11] =
    {field_first, 0},
  [12] =
    {field_value, 1},
  [13] =
    {field_first, 0},
    {field_rest, 1, .inherited = true},
  [15] =
    {field_name, 3},
  [16] =
    {field_id, 3},
  [17] =
    {field_rest, 1},
  [18] =
    {field_rest, 0, .inherited = true},
    {field_rest, 1, .inherited = true},
  [20] =
    {field_string, 2},
  [21] =
    {field_property, 1},
  [22] =
    {field_context, 2},
    {field_string, 3},
  [24] =
    {field_handler, 3},
    {field_name, 0},
  [26] =
    {field_object, 0},
    {field_property, 2},
  [28] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [31] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [34] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
    {field_object, 7},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 58,
  [67] = 67,
  [68] = 62,
  [69] = 69,
  [70] = 69,
  [71] = 59,
  [72] = 61,
  [73] = 73,
  [74] = 73,
  [75] = 60,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 88,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 99,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 100,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 29,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 27,
  [126] = 126,
  [127] = 127,
  [128] = 30,
  [129] = 95,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 87,
  [136] = 93,
  [137] = 94,
  [138] = 91,
  [139] = 139,
  [140] = 26,
  [141] = 89,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 94,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 91,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 89,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 174,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 198,
  [211] = 211,
  [212] = 211,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 197,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 173,
  [223] = 184,
  [224] = 220,
  [225] = 187,
  [226] = 188,
  [227] = 213,
  [228] = 152,
  [229] = 219,
  [230] = 230,
  [231] = 192,
  [232] = 213,
  [233] = 233,
  [234] = 234,
  [235] = 182,
  [236] = 198,
  [237] = 220,
  [238] = 238,
  [239] = 181,
  [240] = 179,
  [241] = 241,
  [242] = 242,
  [243] = 211,
  [244] = 175,
  [245] = 178,
  [246] = 246,
  [247] = 177,
  [248] = 248,
  [249] = 193,
  [250] = 250,
  [251] = 172,
  [252] = 246,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 256,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 264,
  [268] = 268,
  [269] = 265,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 261,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 276,
  [283] = 283,
  [284] = 284,
  [285] = 281,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 164,
  [295] = 278,
  [296] = 279,
  [297] = 280,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 323,
  [359] = 322,
  [360] = 360,
  [361] = 335,
  [362] = 362,
  [363] = 307,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 317,
  [372] = 318,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 347,
  [378] = 348,
  [379] = 379,
  [380] = 356,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(229);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(26)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(250);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(250);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == 'b') ADVANCE(396);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(250);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'w') ADVANCE(390);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(239);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(258);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(297);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 212:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(322);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(328);
      END_STATE();
    case 220:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') SKIP(226)
      END_STATE();
    case 221:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') SKIP(226)
      if (lookahead == '\r') SKIP(220)
      END_STATE();
    case 222:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') SKIP(228)
      END_STATE();
    case 223:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') SKIP(228)
      if (lookahead == '\r') SKIP(222)
      END_STATE();
    case 224:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') SKIP(227)
      END_STATE();
    case 225:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') SKIP(227)
      if (lookahead == '\r') SKIP(224)
      END_STATE();
    case 226:
      if (eof) ADVANCE(229);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') SKIP(221)
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '\\') SKIP(225)
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(227)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(223)
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(228)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_destructive);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_destructive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_suggested);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_suggested);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(239);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(219);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead == 'y') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 228},
  [56] = {.lex_state = 227},
  [57] = {.lex_state = 227},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 228},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 47},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 227},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 227},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 228},
  [128] = {.lex_state = 227},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 227},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 45},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 227},
  [171] = {.lex_state = 227},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 45},
  [179] = {.lex_state = 45},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 227},
  [186] = {.lex_state = 227},
  [187] = {.lex_state = 45},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 227},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 45},
  [193] = {.lex_state = 45},
  [194] = {.lex_state = 227},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 45},
  [198] = {.lex_state = 29},
  [199] = {.lex_state = 46},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 29},
  [211] = {.lex_state = 29},
  [212] = {.lex_state = 29},
  [213] = {.lex_state = 29},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 46},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 46},
  [223] = {.lex_state = 46},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 46},
  [226] = {.lex_state = 46},
  [227] = {.lex_state = 29},
  [228] = {.lex_state = 46},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 46},
  [232] = {.lex_state = 29},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 46},
  [236] = {.lex_state = 29},
  [237] = {.lex_state = 29},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 46},
  [240] = {.lex_state = 46},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 29},
  [244] = {.lex_state = 46},
  [245] = {.lex_state = 46},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 46},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 36},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 36},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 36},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 36},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 36},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 36},
  [290] = {.lex_state = 36},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 46},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 36},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 36},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 36},
  [350] = {.lex_state = 37},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 36},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_swapped] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_internal_DASHchild] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_C_] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_submenu] = ACTIONS(1),
    [anon_sym_item] = ACTIONS(1),
    [anon_sym_accessibility] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_setters] = ACTIONS(1),
    [anon_sym_responses] = ACTIONS(1),
    [anon_sym_destructive] = ACTIONS(1),
    [anon_sym_suggested] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_items] = ACTIONS(1),
    [anon_sym_mime_DASHtypes] = ACTIONS(1),
    [anon_sym_patterns] = ACTIONS(1),
    [anon_sym_suffixes] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_marks] = ACTIONS(1),
    [anon_sym_mark] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_widgets] = ACTIONS(1),
    [anon_sym_strings] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(374),
    [sym_using] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [anon_sym_using] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(18), 1,
      anon_sym_accessibility,
    ACTIONS(21), 1,
      anon_sym_setters,
    ACTIONS(24), 1,
      anon_sym_responses,
    ACTIONS(27), 1,
      anon_sym_items,
    ACTIONS(30), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(33), 1,
      anon_sym_patterns,
    ACTIONS(36), 1,
      anon_sym_suffixes,
    ACTIONS(39), 1,
      anon_sym_layout,
    ACTIONS(42), 1,
      anon_sym_widgets,
    ACTIONS(45), 1,
      anon_sym_strings,
    ACTIONS(48), 1,
      anon_sym_styles,
    ACTIONS(51), 1,
      sym_ident,
    STATE(51), 1,
      sym_object,
    STATE(112), 1,
      sym_child_annotation,
    STATE(267), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(53), 12,
      sym_ext_accessibility,
      sym_ext_adw_breakpoint,
      sym_ext_adw_message_dialog,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
  [87] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_template,
    ACTIONS(62), 1,
      anon_sym_accessibility,
    ACTIONS(64), 1,
      anon_sym_setters,
    ACTIONS(66), 1,
      anon_sym_responses,
    ACTIONS(68), 1,
      anon_sym_items,
    ACTIONS(70), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(72), 1,
      anon_sym_patterns,
    ACTIONS(74), 1,
      anon_sym_suffixes,
    ACTIONS(76), 1,
      anon_sym_layout,
    ACTIONS(78), 1,
      anon_sym_widgets,
    ACTIONS(80), 1,
      anon_sym_strings,
    ACTIONS(82), 1,
      anon_sym_styles,
    ACTIONS(84), 1,
      sym_ident,
    STATE(51), 1,
      sym_object,
    STATE(112), 1,
      sym_child_annotation,
    STATE(267), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(53), 12,
      sym_ext_accessibility,
      sym_ext_adw_breakpoint,
      sym_ext_adw_message_dialog,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
  [174] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_template,
    ACTIONS(62), 1,
      anon_sym_accessibility,
    ACTIONS(64), 1,
      anon_sym_setters,
    ACTIONS(66), 1,
      anon_sym_responses,
    ACTIONS(68), 1,
      anon_sym_items,
    ACTIONS(70), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(72), 1,
      anon_sym_patterns,
    ACTIONS(74), 1,
      anon_sym_suffixes,
    ACTIONS(76), 1,
      anon_sym_layout,
    ACTIONS(78), 1,
      anon_sym_widgets,
    ACTIONS(80), 1,
      anon_sym_strings,
    ACTIONS(82), 1,
      anon_sym_styles,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_object,
    STATE(112), 1,
      sym_child_annotation,
    STATE(267), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(53), 12,
      sym_ext_accessibility,
      sym_ext_adw_breakpoint,
      sym_ext_adw_message_dialog,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
  [261] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_template,
    ACTIONS(62), 1,
      anon_sym_accessibility,
    ACTIONS(64), 1,
      anon_sym_setters,
    ACTIONS(66), 1,
      anon_sym_responses,
    ACTIONS(68), 1,
      anon_sym_items,
    ACTIONS(70), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(72), 1,
      anon_sym_patterns,
    ACTIONS(74), 1,
      anon_sym_suffixes,
    ACTIONS(76), 1,
      anon_sym_layout,
    ACTIONS(78), 1,
      anon_sym_widgets,
    ACTIONS(80), 1,
      anon_sym_strings,
    ACTIONS(82), 1,
      anon_sym_styles,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_object,
    STATE(112), 1,
      sym_child_annotation,
    STATE(267), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(4), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(53), 12,
      sym_ext_accessibility,
      sym_ext_adw_breakpoint,
      sym_ext_adw_message_dialog,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
  [348] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_template,
    ACTIONS(62), 1,
      anon_sym_accessibility,
    ACTIONS(64), 1,
      anon_sym_setters,
    ACTIONS(66), 1,
      anon_sym_responses,
    ACTIONS(68), 1,
      anon_sym_items,
    ACTIONS(70), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(72), 1,
      anon_sym_patterns,
    ACTIONS(74), 1,
      anon_sym_suffixes,
    ACTIONS(76), 1,
      anon_sym_layout,
    ACTIONS(78), 1,
      anon_sym_widgets,
    ACTIONS(80), 1,
      anon_sym_strings,
    ACTIONS(82), 1,
      anon_sym_styles,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_object,
    STATE(112), 1,
      sym_child_annotation,
    STATE(267), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(3), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(53), 12,
      sym_ext_accessibility,
      sym_ext_adw_breakpoint,
      sym_ext_adw_message_dialog,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
  [435] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(96), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_C_,
    ACTIONS(100), 1,
      anon_sym_bind,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(264), 1,
      sym_type_name,
    STATE(355), 1,
      sym_object,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(351), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(353), 3,
      sym_value,
      sym_binding,
      sym_object_value,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [505] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_ident,
    STATE(10), 1,
      aux_sym_closure_expression_repeat1,
    STATE(151), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(370), 1,
      sym_expression,
    STATE(110), 2,
      sym_literal,
      sym_closure_expression,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [561] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      aux_sym_number_literal_token1,
    ACTIONS(135), 1,
      anon_sym_typeof,
    ACTIONS(138), 1,
      aux_sym_number_token1,
    ACTIONS(141), 1,
      aux_sym_number_token2,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_ident,
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(151), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(370), 1,
      sym_expression,
    STATE(110), 2,
      sym_literal,
      sym_closure_expression,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [617] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(151), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(370), 1,
      sym_expression,
    STATE(110), 2,
      sym_literal,
      sym_closure_expression,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [673] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(96), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_C_,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(320), 1,
      sym_value,
    STATE(351), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [724] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(96), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_C_,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(316), 1,
      sym_value,
    STATE(351), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [775] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(96), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_C_,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(327), 1,
      sym_value,
    STATE(351), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [826] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_ident,
    STATE(151), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(302), 1,
      sym_expression,
    STATE(110), 2,
      sym_literal,
      sym_closure_expression,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [876] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_number_literal_token1,
    ACTIONS(94), 1,
      anon_sym_typeof,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_ident,
    STATE(151), 1,
      sym_quoted,
    STATE(166), 1,
      sym_number,
    STATE(313), 1,
      sym_expression,
    STATE(110), 2,
      sym_literal,
      sym_closure_expression,
    STATE(165), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(159), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(163), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(167), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(171), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(175), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(179), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(183), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(187), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(191), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(195), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(199), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(203), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(207), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(211), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(215), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(219), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(223), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(227), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(231), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(235), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(239), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(243), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(247), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(251), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(255), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(259), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(263), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(267), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(271), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(275), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(279), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(283), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(287), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(291), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(295), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(299), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(303), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(307), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(311), 13,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_setters,
      anon_sym_responses,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
      sym_ident,
  [1862] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_using,
    ACTIONS(317), 1,
      anon_sym_template,
    ACTIONS(319), 1,
      anon_sym_menu,
    ACTIONS(321), 1,
      sym_ident,
    STATE(264), 1,
      sym_type_name,
    STATE(98), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(57), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1902] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(328), 1,
      anon_sym_template,
    ACTIONS(331), 1,
      anon_sym_menu,
    ACTIONS(334), 1,
      sym_ident,
    STATE(264), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1935] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_template,
    ACTIONS(319), 1,
      anon_sym_menu,
    ACTIONS(321), 1,
      sym_ident,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    STATE(264), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1968] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1998] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2058] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2088] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2118] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(66), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2148] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(367), 1,
      anon_sym_item,
    ACTIONS(370), 1,
      sym_ident,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2178] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(58), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2208] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2238] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_C_,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 1,
      sym_ident,
    STATE(77), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(113), 1,
      sym_string_value,
    STATE(115), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2276] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2306] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(74), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(73), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2366] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(68), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2396] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2426] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2486] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(72), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(172), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2516] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_C_,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(379), 1,
      sym_ident,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(113), 1,
      sym_string_value,
    STATE(115), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2554] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      anon_sym__,
    ACTIONS(404), 1,
      anon_sym_C_,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(413), 1,
      sym_ident,
    STATE(77), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(113), 1,
      sym_string_value,
    STATE(115), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2592] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(421), 1,
      anon_sym_C_,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(144), 1,
      sym_string_value,
    STATE(145), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2627] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(78), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(144), 1,
      sym_string_value,
    STATE(145), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2662] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(144), 1,
      sym_string_value,
    STATE(145), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2697] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    STATE(83), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2749] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(82), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_section,
    ACTIONS(457), 1,
      anon_sym_submenu,
    ACTIONS(460), 1,
      anon_sym_item,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_typeof,
      aux_sym_number_token1,
      sym_ident,
    ACTIONS(130), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_number_literal_token1,
      aux_sym_number_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(465), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2862] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(363), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(471), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2908] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(276), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(477), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2954] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(282), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(483), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(487), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(491), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3034] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(307), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3063] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(116), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_using,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(98), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(502), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3109] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(323), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(285), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(504), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(107), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(506), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(514), 1,
      anon_sym_as,
    ACTIONS(510), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(108), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_ident,
    ACTIONS(516), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(101), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(506), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      anon_sym_as,
    ACTIONS(520), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(104), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3241] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(358), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(514), 1,
      anon_sym_as,
    ACTIONS(528), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(104), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_ident,
    ACTIONS(530), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(107), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(532), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(514), 1,
      anon_sym_as,
    ACTIONS(537), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(104), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3327] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(281), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(514), 1,
      anon_sym_as,
    ACTIONS(539), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(106), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3373] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      anon_sym_SQUOTE,
    STATE(103), 1,
      sym_string_value,
    STATE(137), 1,
      sym_quoted,
    STATE(129), 2,
      sym_quoted_literal,
      sym_translated,
  [3399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(549), 1,
      sym_ident,
    STATE(54), 1,
      sym_object,
    STATE(267), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(551), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3435] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(557), 1,
      anon_sym_action,
    ACTIONS(559), 1,
      sym_ident,
    STATE(334), 1,
      sym_ext_response,
    STATE(333), 3,
      sym_child_internal,
      sym_child_type,
      sym_child_extension,
  [3456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(561), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(563), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(567), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 7,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_default,
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(573), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3515] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(211), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(549), 1,
      sym_ident,
    STATE(292), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(549), 1,
      sym_ident,
    STATE(364), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(579), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3601] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_DOT,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
    ACTIONS(589), 1,
      anon_sym_EQ_GT,
    ACTIONS(581), 2,
      anon_sym_LBRACE,
      sym_ident,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(203), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(549), 1,
      sym_ident,
    STATE(277), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(593), 4,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(215), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(493), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3695] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [3717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(549), 1,
      sym_ident,
    STATE(315), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3735] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [3757] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 1,
      anon_sym_SQUOTE,
    STATE(133), 1,
      aux_sym_ext_styles_repeat1,
    STATE(214), 1,
      sym_ext_styles_class,
    STATE(218), 1,
      sym_quoted,
  [3779] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [3801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(467), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(485), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(489), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(479), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3857] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(199), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(473), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_DOT,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    STATE(253), 1,
      aux_sym_flags_repeat1,
    ACTIONS(581), 2,
      anon_sym_LBRACE,
      sym_ident,
  [3927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(549), 1,
      sym_ident,
    STATE(266), 1,
      sym_type_name,
    STATE(248), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 6,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(623), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3971] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_ext_styles_repeat1,
    STATE(214), 1,
      sym_ext_styles_class,
    STATE(218), 1,
      sym_quoted,
  [3993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [4015] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(241), 1,
      sym_quoted,
    STATE(242), 1,
      sym_ext_file_filter_item,
  [4037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    ACTIONS(635), 1,
      anon_sym_default,
    ACTIONS(637), 1,
      sym_ident,
    STATE(298), 1,
      sym_number,
  [4059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_ext_styles_repeat1,
    STATE(214), 1,
      sym_ext_styles_class,
    STATE(218), 1,
      sym_quoted,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(643), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    ACTIONS(647), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(153), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(167), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(176), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(153), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(158), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_DOT,
    ACTIONS(581), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(153), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(169), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(153), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(686), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(690), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(702), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(706), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(153), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(712), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(716), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    ACTIONS(720), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4460] = 4,
    ACTIONS(727), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(722), 2,
      sym_string,
      sym_escape_sequence,
    ACTIONS(725), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    ACTIONS(739), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(743), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(747), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    ACTIONS(755), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(759), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(763), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(771), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(777), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4686] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(779), 2,
      sym_string,
      sym_escape_sequence,
  [4700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      sym_ident,
    STATE(206), 1,
      aux_sym_ext_layout_repeat1,
    STATE(272), 1,
      sym_ext_layout_prop,
  [4726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    ACTIONS(791), 1,
      sym_ident,
    STATE(208), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(268), 1,
      sym_ext_size_group_widget,
  [4752] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    ACTIONS(795), 1,
      sym_ident,
    STATE(250), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(255), 1,
      sym_ext_adw_message_dialog_response,
  [4768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      sym_ident,
    STATE(233), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      sym_ident,
    STATE(209), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      sym_ident,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_ext_layout_repeat1,
    STATE(272), 1,
      sym_ext_layout_prop,
  [4812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    ACTIONS(809), 1,
      sym_ident,
    STATE(207), 1,
      aux_sym_ext_layout_repeat1,
    STATE(272), 1,
      sym_ext_layout_prop,
  [4828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    ACTIONS(814), 1,
      sym_ident,
    STATE(208), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(268), 1,
      sym_ext_size_group_widget,
  [4844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_ident,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(221), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4858] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(819), 2,
      sym_string,
      sym_escape_sequence,
  [4872] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(823), 2,
      sym_string,
      sym_escape_sequence,
  [4886] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(825), 2,
      sym_string,
      sym_escape_sequence,
  [4900] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(827), 2,
      sym_string,
      sym_escape_sequence,
  [4914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(831), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    ACTIONS(837), 1,
      sym_ident,
    STATE(215), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(255), 1,
      sym_ext_adw_message_dialog_response,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    ACTIONS(842), 1,
      sym_ident,
    STATE(217), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    ACTIONS(849), 1,
      sym_ident,
    STATE(252), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4990] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(827), 2,
      sym_string,
      sym_escape_sequence,
  [5004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    ACTIONS(855), 1,
      sym_ident,
    STATE(221), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5038] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(827), 2,
      sym_string,
      sym_escape_sequence,
  [5052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5072] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(827), 2,
      sym_string,
      sym_escape_sequence,
  [5086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_ident,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(246), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5130] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(827), 2,
      sym_string,
      sym_escape_sequence,
  [5144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_ident,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    STATE(217), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    ACTIONS(868), 1,
      sym_ident,
    STATE(234), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5182] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(871), 2,
      sym_string,
      sym_escape_sequence,
  [5196] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(827), 2,
      sym_string,
      sym_escape_sequence,
  [5210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(268), 1,
      sym_ext_size_group_widget,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(879), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5268] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(883), 2,
      sym_string,
      sym_escape_sequence,
  [5282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(234), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(255), 1,
      sym_ext_adw_message_dialog_response,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(234), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      aux_sym_flags_repeat1,
  [5399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 3,
      anon_sym_SEMI,
      anon_sym_after,
      anon_sym_swapped,
  [5408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    ACTIONS(897), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(359), 1,
      sym_quoted,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
  [5441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(346), 1,
      sym_number,
  [5454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    STATE(253), 1,
      aux_sym_flags_repeat1,
  [5467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      sym_quoted,
  [5480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(265), 1,
      sym_quoted,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(196), 1,
      sym_number,
  [5506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(905), 1,
      anon_sym_PIPE,
    STATE(263), 1,
      aux_sym_flags_repeat1,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      sym_ident,
    STATE(128), 1,
      sym_object_content,
  [5532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(335), 1,
      sym_quoted,
  [5545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(912), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym_object_content,
  [5558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    ACTIONS(916), 1,
      sym_ident,
    STATE(30), 1,
      sym_object_content,
  [5571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    ACTIONS(918), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      sym_quoted,
  [5595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_ident,
  [5604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(924), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym_quoted,
  [5637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COMMA,
  [5664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_object_content,
  [5674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
  [5684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_LBRACE,
    ACTIONS(940), 1,
      sym_ident,
  [5694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(944), 1,
      sym_ident,
  [5704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(948), 1,
      anon_sym_COMMA,
  [5714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      anon_sym_COMMA,
  [5724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      sym_ident,
  [5734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LBRACE,
    ACTIONS(960), 1,
      sym_ident,
  [5744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    ACTIONS(964), 1,
      anon_sym_COMMA,
  [5754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_object_content,
  [5764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_object_content,
  [5774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_object_content,
  [5816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
  [5842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
    ACTIONS(976), 1,
      sym_ident,
  [5852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(980), 1,
      sym_ident,
  [5862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    ACTIONS(984), 1,
      anon_sym_default,
  [5872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
    ACTIONS(988), 1,
      anon_sym_default,
  [5882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 2,
      anon_sym_DOLLAR,
      sym_ident,
  [5890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(994), 1,
      sym_ident,
  [5900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_SEMI,
  [5907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym_ident,
  [5914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
  [5921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
  [5928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
  [5935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym_ident,
  [5949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [5956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym_ident,
  [5963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_LT,
  [5970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym_ident,
  [5977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
  [5984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_LPAREN,
  [5991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_GT,
  [5998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [6005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
  [6012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_LBRACE,
  [6019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_COLON,
  [6026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
  [6040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
  [6047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
  [6054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_LPAREN,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_DOLLAR,
  [6068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_ident,
  [6075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym_ident,
  [6089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LBRACK,
  [6096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_ident,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_response,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_RBRACK,
  [6117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
  [6124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_RBRACK,
  [6131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LBRACK,
  [6152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_LBRACK,
  [6159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LBRACE,
  [6166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACE,
  [6173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [6180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LBRACE,
  [6187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_ident,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DOLLAR,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym_ident,
  [6208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
  [6215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_COLON,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_ident,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_EQ_GT,
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LBRACK,
  [6257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_RBRACK,
  [6271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
  [6278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LPAREN,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_LT,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
  [6299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_LBRACE,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
  [6320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_ident,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_GT,
  [6341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_COLON,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
  [6355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_EQ,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
  [6369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_LBRACK,
  [6376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
  [6390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_LBRACE,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
  [6404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      ts_builtin_sym_end,
  [6411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COLON,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_COLON,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_COLON,
  [6432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_LPAREN,
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_DOT,
  [6446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 348,
  [SMALL_STATE(7)] = 435,
  [SMALL_STATE(8)] = 505,
  [SMALL_STATE(9)] = 561,
  [SMALL_STATE(10)] = 617,
  [SMALL_STATE(11)] = 673,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 775,
  [SMALL_STATE(14)] = 826,
  [SMALL_STATE(15)] = 876,
  [SMALL_STATE(16)] = 926,
  [SMALL_STATE(17)] = 950,
  [SMALL_STATE(18)] = 974,
  [SMALL_STATE(19)] = 998,
  [SMALL_STATE(20)] = 1022,
  [SMALL_STATE(21)] = 1046,
  [SMALL_STATE(22)] = 1070,
  [SMALL_STATE(23)] = 1094,
  [SMALL_STATE(24)] = 1118,
  [SMALL_STATE(25)] = 1142,
  [SMALL_STATE(26)] = 1166,
  [SMALL_STATE(27)] = 1190,
  [SMALL_STATE(28)] = 1214,
  [SMALL_STATE(29)] = 1238,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1286,
  [SMALL_STATE(32)] = 1310,
  [SMALL_STATE(33)] = 1334,
  [SMALL_STATE(34)] = 1358,
  [SMALL_STATE(35)] = 1382,
  [SMALL_STATE(36)] = 1406,
  [SMALL_STATE(37)] = 1430,
  [SMALL_STATE(38)] = 1454,
  [SMALL_STATE(39)] = 1478,
  [SMALL_STATE(40)] = 1502,
  [SMALL_STATE(41)] = 1526,
  [SMALL_STATE(42)] = 1550,
  [SMALL_STATE(43)] = 1574,
  [SMALL_STATE(44)] = 1598,
  [SMALL_STATE(45)] = 1622,
  [SMALL_STATE(46)] = 1646,
  [SMALL_STATE(47)] = 1670,
  [SMALL_STATE(48)] = 1694,
  [SMALL_STATE(49)] = 1718,
  [SMALL_STATE(50)] = 1742,
  [SMALL_STATE(51)] = 1766,
  [SMALL_STATE(52)] = 1790,
  [SMALL_STATE(53)] = 1814,
  [SMALL_STATE(54)] = 1838,
  [SMALL_STATE(55)] = 1862,
  [SMALL_STATE(56)] = 1902,
  [SMALL_STATE(57)] = 1935,
  [SMALL_STATE(58)] = 1968,
  [SMALL_STATE(59)] = 1998,
  [SMALL_STATE(60)] = 2028,
  [SMALL_STATE(61)] = 2058,
  [SMALL_STATE(62)] = 2088,
  [SMALL_STATE(63)] = 2118,
  [SMALL_STATE(64)] = 2148,
  [SMALL_STATE(65)] = 2178,
  [SMALL_STATE(66)] = 2208,
  [SMALL_STATE(67)] = 2238,
  [SMALL_STATE(68)] = 2276,
  [SMALL_STATE(69)] = 2306,
  [SMALL_STATE(70)] = 2336,
  [SMALL_STATE(71)] = 2366,
  [SMALL_STATE(72)] = 2396,
  [SMALL_STATE(73)] = 2426,
  [SMALL_STATE(74)] = 2456,
  [SMALL_STATE(75)] = 2486,
  [SMALL_STATE(76)] = 2516,
  [SMALL_STATE(77)] = 2554,
  [SMALL_STATE(78)] = 2592,
  [SMALL_STATE(79)] = 2627,
  [SMALL_STATE(80)] = 2662,
  [SMALL_STATE(81)] = 2697,
  [SMALL_STATE(82)] = 2723,
  [SMALL_STATE(83)] = 2749,
  [SMALL_STATE(84)] = 2775,
  [SMALL_STATE(85)] = 2801,
  [SMALL_STATE(86)] = 2827,
  [SMALL_STATE(87)] = 2845,
  [SMALL_STATE(88)] = 2862,
  [SMALL_STATE(89)] = 2891,
  [SMALL_STATE(90)] = 2908,
  [SMALL_STATE(91)] = 2937,
  [SMALL_STATE(92)] = 2954,
  [SMALL_STATE(93)] = 2983,
  [SMALL_STATE(94)] = 3000,
  [SMALL_STATE(95)] = 3017,
  [SMALL_STATE(96)] = 3034,
  [SMALL_STATE(97)] = 3063,
  [SMALL_STATE(98)] = 3089,
  [SMALL_STATE(99)] = 3109,
  [SMALL_STATE(100)] = 3135,
  [SMALL_STATE(101)] = 3161,
  [SMALL_STATE(102)] = 3181,
  [SMALL_STATE(103)] = 3201,
  [SMALL_STATE(104)] = 3221,
  [SMALL_STATE(105)] = 3241,
  [SMALL_STATE(106)] = 3267,
  [SMALL_STATE(107)] = 3287,
  [SMALL_STATE(108)] = 3307,
  [SMALL_STATE(109)] = 3327,
  [SMALL_STATE(110)] = 3353,
  [SMALL_STATE(111)] = 3373,
  [SMALL_STATE(112)] = 3399,
  [SMALL_STATE(113)] = 3420,
  [SMALL_STATE(114)] = 3435,
  [SMALL_STATE(115)] = 3456,
  [SMALL_STATE(116)] = 3473,
  [SMALL_STATE(117)] = 3488,
  [SMALL_STATE(118)] = 3501,
  [SMALL_STATE(119)] = 3515,
  [SMALL_STATE(120)] = 3537,
  [SMALL_STATE(121)] = 3551,
  [SMALL_STATE(122)] = 3569,
  [SMALL_STATE(123)] = 3587,
  [SMALL_STATE(124)] = 3601,
  [SMALL_STATE(125)] = 3621,
  [SMALL_STATE(126)] = 3635,
  [SMALL_STATE(127)] = 3653,
  [SMALL_STATE(128)] = 3667,
  [SMALL_STATE(129)] = 3681,
  [SMALL_STATE(130)] = 3695,
  [SMALL_STATE(131)] = 3717,
  [SMALL_STATE(132)] = 3735,
  [SMALL_STATE(133)] = 3757,
  [SMALL_STATE(134)] = 3779,
  [SMALL_STATE(135)] = 3801,
  [SMALL_STATE(136)] = 3815,
  [SMALL_STATE(137)] = 3829,
  [SMALL_STATE(138)] = 3843,
  [SMALL_STATE(139)] = 3857,
  [SMALL_STATE(140)] = 3879,
  [SMALL_STATE(141)] = 3893,
  [SMALL_STATE(142)] = 3907,
  [SMALL_STATE(143)] = 3927,
  [SMALL_STATE(144)] = 3945,
  [SMALL_STATE(145)] = 3957,
  [SMALL_STATE(146)] = 3971,
  [SMALL_STATE(147)] = 3993,
  [SMALL_STATE(148)] = 4015,
  [SMALL_STATE(149)] = 4037,
  [SMALL_STATE(150)] = 4059,
  [SMALL_STATE(151)] = 4081,
  [SMALL_STATE(152)] = 4092,
  [SMALL_STATE(153)] = 4105,
  [SMALL_STATE(154)] = 4120,
  [SMALL_STATE(155)] = 4135,
  [SMALL_STATE(156)] = 4146,
  [SMALL_STATE(157)] = 4157,
  [SMALL_STATE(158)] = 4172,
  [SMALL_STATE(159)] = 4187,
  [SMALL_STATE(160)] = 4198,
  [SMALL_STATE(161)] = 4213,
  [SMALL_STATE(162)] = 4224,
  [SMALL_STATE(163)] = 4237,
  [SMALL_STATE(164)] = 4248,
  [SMALL_STATE(165)] = 4261,
  [SMALL_STATE(166)] = 4272,
  [SMALL_STATE(167)] = 4283,
  [SMALL_STATE(168)] = 4298,
  [SMALL_STATE(169)] = 4313,
  [SMALL_STATE(170)] = 4328,
  [SMALL_STATE(171)] = 4341,
  [SMALL_STATE(172)] = 4354,
  [SMALL_STATE(173)] = 4367,
  [SMALL_STATE(174)] = 4380,
  [SMALL_STATE(175)] = 4393,
  [SMALL_STATE(176)] = 4406,
  [SMALL_STATE(177)] = 4421,
  [SMALL_STATE(178)] = 4434,
  [SMALL_STATE(179)] = 4447,
  [SMALL_STATE(180)] = 4460,
  [SMALL_STATE(181)] = 4475,
  [SMALL_STATE(182)] = 4488,
  [SMALL_STATE(183)] = 4501,
  [SMALL_STATE(184)] = 4512,
  [SMALL_STATE(185)] = 4525,
  [SMALL_STATE(186)] = 4538,
  [SMALL_STATE(187)] = 4551,
  [SMALL_STATE(188)] = 4564,
  [SMALL_STATE(189)] = 4577,
  [SMALL_STATE(190)] = 4590,
  [SMALL_STATE(191)] = 4601,
  [SMALL_STATE(192)] = 4612,
  [SMALL_STATE(193)] = 4625,
  [SMALL_STATE(194)] = 4638,
  [SMALL_STATE(195)] = 4651,
  [SMALL_STATE(196)] = 4662,
  [SMALL_STATE(197)] = 4673,
  [SMALL_STATE(198)] = 4686,
  [SMALL_STATE(199)] = 4700,
  [SMALL_STATE(200)] = 4710,
  [SMALL_STATE(201)] = 4726,
  [SMALL_STATE(202)] = 4736,
  [SMALL_STATE(203)] = 4752,
  [SMALL_STATE(204)] = 4768,
  [SMALL_STATE(205)] = 4782,
  [SMALL_STATE(206)] = 4796,
  [SMALL_STATE(207)] = 4812,
  [SMALL_STATE(208)] = 4828,
  [SMALL_STATE(209)] = 4844,
  [SMALL_STATE(210)] = 4858,
  [SMALL_STATE(211)] = 4872,
  [SMALL_STATE(212)] = 4886,
  [SMALL_STATE(213)] = 4900,
  [SMALL_STATE(214)] = 4914,
  [SMALL_STATE(215)] = 4926,
  [SMALL_STATE(216)] = 4942,
  [SMALL_STATE(217)] = 4952,
  [SMALL_STATE(218)] = 4966,
  [SMALL_STATE(219)] = 4976,
  [SMALL_STATE(220)] = 4990,
  [SMALL_STATE(221)] = 5004,
  [SMALL_STATE(222)] = 5018,
  [SMALL_STATE(223)] = 5028,
  [SMALL_STATE(224)] = 5038,
  [SMALL_STATE(225)] = 5052,
  [SMALL_STATE(226)] = 5062,
  [SMALL_STATE(227)] = 5072,
  [SMALL_STATE(228)] = 5086,
  [SMALL_STATE(229)] = 5096,
  [SMALL_STATE(230)] = 5110,
  [SMALL_STATE(231)] = 5120,
  [SMALL_STATE(232)] = 5130,
  [SMALL_STATE(233)] = 5144,
  [SMALL_STATE(234)] = 5158,
  [SMALL_STATE(235)] = 5172,
  [SMALL_STATE(236)] = 5182,
  [SMALL_STATE(237)] = 5196,
  [SMALL_STATE(238)] = 5210,
  [SMALL_STATE(239)] = 5226,
  [SMALL_STATE(240)] = 5236,
  [SMALL_STATE(241)] = 5246,
  [SMALL_STATE(242)] = 5256,
  [SMALL_STATE(243)] = 5268,
  [SMALL_STATE(244)] = 5282,
  [SMALL_STATE(245)] = 5292,
  [SMALL_STATE(246)] = 5302,
  [SMALL_STATE(247)] = 5316,
  [SMALL_STATE(248)] = 5326,
  [SMALL_STATE(249)] = 5336,
  [SMALL_STATE(250)] = 5346,
  [SMALL_STATE(251)] = 5362,
  [SMALL_STATE(252)] = 5372,
  [SMALL_STATE(253)] = 5386,
  [SMALL_STATE(254)] = 5399,
  [SMALL_STATE(255)] = 5408,
  [SMALL_STATE(256)] = 5419,
  [SMALL_STATE(257)] = 5432,
  [SMALL_STATE(258)] = 5441,
  [SMALL_STATE(259)] = 5454,
  [SMALL_STATE(260)] = 5467,
  [SMALL_STATE(261)] = 5480,
  [SMALL_STATE(262)] = 5493,
  [SMALL_STATE(263)] = 5506,
  [SMALL_STATE(264)] = 5519,
  [SMALL_STATE(265)] = 5532,
  [SMALL_STATE(266)] = 5545,
  [SMALL_STATE(267)] = 5558,
  [SMALL_STATE(268)] = 5571,
  [SMALL_STATE(269)] = 5582,
  [SMALL_STATE(270)] = 5595,
  [SMALL_STATE(271)] = 5604,
  [SMALL_STATE(272)] = 5613,
  [SMALL_STATE(273)] = 5624,
  [SMALL_STATE(274)] = 5637,
  [SMALL_STATE(275)] = 5646,
  [SMALL_STATE(276)] = 5654,
  [SMALL_STATE(277)] = 5664,
  [SMALL_STATE(278)] = 5674,
  [SMALL_STATE(279)] = 5684,
  [SMALL_STATE(280)] = 5694,
  [SMALL_STATE(281)] = 5704,
  [SMALL_STATE(282)] = 5714,
  [SMALL_STATE(283)] = 5724,
  [SMALL_STATE(284)] = 5734,
  [SMALL_STATE(285)] = 5744,
  [SMALL_STATE(286)] = 5754,
  [SMALL_STATE(287)] = 5764,
  [SMALL_STATE(288)] = 5774,
  [SMALL_STATE(289)] = 5782,
  [SMALL_STATE(290)] = 5790,
  [SMALL_STATE(291)] = 5798,
  [SMALL_STATE(292)] = 5806,
  [SMALL_STATE(293)] = 5816,
  [SMALL_STATE(294)] = 5824,
  [SMALL_STATE(295)] = 5832,
  [SMALL_STATE(296)] = 5842,
  [SMALL_STATE(297)] = 5852,
  [SMALL_STATE(298)] = 5862,
  [SMALL_STATE(299)] = 5872,
  [SMALL_STATE(300)] = 5882,
  [SMALL_STATE(301)] = 5890,
  [SMALL_STATE(302)] = 5900,
  [SMALL_STATE(303)] = 5907,
  [SMALL_STATE(304)] = 5914,
  [SMALL_STATE(305)] = 5921,
  [SMALL_STATE(306)] = 5928,
  [SMALL_STATE(307)] = 5935,
  [SMALL_STATE(308)] = 5942,
  [SMALL_STATE(309)] = 5949,
  [SMALL_STATE(310)] = 5956,
  [SMALL_STATE(311)] = 5963,
  [SMALL_STATE(312)] = 5970,
  [SMALL_STATE(313)] = 5977,
  [SMALL_STATE(314)] = 5984,
  [SMALL_STATE(315)] = 5991,
  [SMALL_STATE(316)] = 5998,
  [SMALL_STATE(317)] = 6005,
  [SMALL_STATE(318)] = 6012,
  [SMALL_STATE(319)] = 6019,
  [SMALL_STATE(320)] = 6026,
  [SMALL_STATE(321)] = 6033,
  [SMALL_STATE(322)] = 6040,
  [SMALL_STATE(323)] = 6047,
  [SMALL_STATE(324)] = 6054,
  [SMALL_STATE(325)] = 6061,
  [SMALL_STATE(326)] = 6068,
  [SMALL_STATE(327)] = 6075,
  [SMALL_STATE(328)] = 6082,
  [SMALL_STATE(329)] = 6089,
  [SMALL_STATE(330)] = 6096,
  [SMALL_STATE(331)] = 6103,
  [SMALL_STATE(332)] = 6110,
  [SMALL_STATE(333)] = 6117,
  [SMALL_STATE(334)] = 6124,
  [SMALL_STATE(335)] = 6131,
  [SMALL_STATE(336)] = 6138,
  [SMALL_STATE(337)] = 6145,
  [SMALL_STATE(338)] = 6152,
  [SMALL_STATE(339)] = 6159,
  [SMALL_STATE(340)] = 6166,
  [SMALL_STATE(341)] = 6173,
  [SMALL_STATE(342)] = 6180,
  [SMALL_STATE(343)] = 6187,
  [SMALL_STATE(344)] = 6194,
  [SMALL_STATE(345)] = 6201,
  [SMALL_STATE(346)] = 6208,
  [SMALL_STATE(347)] = 6215,
  [SMALL_STATE(348)] = 6222,
  [SMALL_STATE(349)] = 6229,
  [SMALL_STATE(350)] = 6236,
  [SMALL_STATE(351)] = 6243,
  [SMALL_STATE(352)] = 6250,
  [SMALL_STATE(353)] = 6257,
  [SMALL_STATE(354)] = 6264,
  [SMALL_STATE(355)] = 6271,
  [SMALL_STATE(356)] = 6278,
  [SMALL_STATE(357)] = 6285,
  [SMALL_STATE(358)] = 6292,
  [SMALL_STATE(359)] = 6299,
  [SMALL_STATE(360)] = 6306,
  [SMALL_STATE(361)] = 6313,
  [SMALL_STATE(362)] = 6320,
  [SMALL_STATE(363)] = 6327,
  [SMALL_STATE(364)] = 6334,
  [SMALL_STATE(365)] = 6341,
  [SMALL_STATE(366)] = 6348,
  [SMALL_STATE(367)] = 6355,
  [SMALL_STATE(368)] = 6362,
  [SMALL_STATE(369)] = 6369,
  [SMALL_STATE(370)] = 6376,
  [SMALL_STATE(371)] = 6383,
  [SMALL_STATE(372)] = 6390,
  [SMALL_STATE(373)] = 6397,
  [SMALL_STATE(374)] = 6404,
  [SMALL_STATE(375)] = 6411,
  [SMALL_STATE(376)] = 6418,
  [SMALL_STATE(377)] = 6425,
  [SMALL_STATE(378)] = 6432,
  [SMALL_STATE(379)] = 6439,
  [SMALL_STATE(380)] = 6446,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(362),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(114),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(121),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(339),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(360),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(368),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(369),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(329),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(305),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(337),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(340),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(352),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(306),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(338),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(124),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(330),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(262),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(357),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(117),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(117),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(243),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(236),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(190),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 24),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 24),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 24),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 24),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 23),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 23),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 22),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 22),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 23),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 23),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 22),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 22),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 20),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 20),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 20),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 20),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(362),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(143),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(284),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(162),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(280),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(279),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(278),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(347),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(348),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(356),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(212),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(210),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(375),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(348),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(356),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(212),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(210),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(297),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(296),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(295),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, .production_id = 17),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 4, .production_id = 17),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 5, .production_id = 19),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 5, .production_id = 19),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_literal, 1, .production_id = 6),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_literal, 1, .production_id = 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 8),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 8),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 8),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 8),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(312),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(311),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2), SHIFT_REPEAT(123),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 8),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 8),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_short, 1, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(212),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(210),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(212),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(210),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_literal, 1, .production_id = 9),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_item, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(254),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, .production_id = 18),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1, .production_id = 6),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 5),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(180),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 5),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 5),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 5),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 5),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 5),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 5),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 5),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 5),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2, .production_id = 11),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_full, 3, .production_id = 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2), SHIFT_REPEAT(365),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2), SHIFT_REPEAT(270),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2), SHIFT_REPEAT(376),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2), SHIFT_REPEAT(379),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles_class, 1, .production_id = 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2), SHIFT_REPEAT(309),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_external, 2, .production_id = 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(377),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_item, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, .production_id = 12),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_flag, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout_prop, 4, .production_id = 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 16),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 16), SHIFT_REPEAT(326),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widget, 1, .production_id = 8),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 15),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility_prop, 4, .production_id = 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_setter, 6, .production_id = 21),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 14),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 13),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_type, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 14),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 7),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 13),
  [1140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blueprint(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
