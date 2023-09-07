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
#define STATE_COUNT 383
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 14
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 22

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
  sym_name = 69,
  sym_type_name_external = 70,
  sym_type_name_short = 71,
  sym_property = 72,
  sym_signal = 73,
  sym_signal_flag = 74,
  sym_child = 75,
  sym_child_annotation = 76,
  sym_child_internal = 77,
  sym_child_type = 78,
  sym_template = 79,
  sym_value = 80,
  sym_literal = 81,
  sym_quoted_literal = 82,
  sym_number_literal = 83,
  sym_ident_literal = 84,
  sym_type_literal = 85,
  sym_flags = 86,
  sym_translated = 87,
  sym_binding = 88,
  sym_object_value = 89,
  sym_string_value = 90,
  sym_expression = 91,
  sym_lookup_expression = 92,
  sym_closure_expression = 93,
  sym_cast_expression = 94,
  sym_menu = 95,
  sym_menu_child = 96,
  sym_menu_section = 97,
  sym_menu_submenu = 98,
  sym_menu_item = 99,
  sym_menu_attribute = 100,
  sym_menu_item_shorthand = 101,
  sym_extension = 102,
  sym_ext_accessibility = 103,
  sym_ext_accessibility_prop = 104,
  sym_ext_adw_breakpoint = 105,
  sym_ext_adw_breakpoint_setter = 106,
  sym_ext_adw_message_dialog = 107,
  sym_ext_adw_message_dialog_response = 108,
  sym_ext_adw_message_dialog_flag = 109,
  sym_ext_combo_box_items = 110,
  sym_ext_combo_box_item = 111,
  sym_ext_file_filter_mime_types = 112,
  sym_ext_file_filter_patterns = 113,
  sym_ext_file_filter_suffixes = 114,
  sym_ext_file_filter_item = 115,
  sym_ext_layout = 116,
  sym_ext_layout_prop = 117,
  sym_ext_list_item_factory = 118,
  sym_ext_size_group_widgets = 119,
  sym_ext_size_group_widget = 120,
  sym_ext_string_list_strings = 121,
  sym_ext_string_list_item = 122,
  sym_ext_styles = 123,
  sym_ext_styles_class = 124,
  sym_child_extension = 125,
  sym_ext_response = 126,
  sym_number = 127,
  sym_quoted = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_source_file_repeat2 = 130,
  aux_sym_object_content_repeat1 = 131,
  aux_sym_signal_repeat1 = 132,
  aux_sym_flags_repeat1 = 133,
  aux_sym_expression_repeat1 = 134,
  aux_sym_closure_expression_repeat1 = 135,
  aux_sym_menu_repeat1 = 136,
  aux_sym_menu_section_repeat1 = 137,
  aux_sym_menu_item_repeat1 = 138,
  aux_sym_ext_accessibility_repeat1 = 139,
  aux_sym_ext_adw_breakpoint_repeat1 = 140,
  aux_sym_ext_adw_message_dialog_repeat1 = 141,
  aux_sym_ext_adw_message_dialog_response_repeat1 = 142,
  aux_sym_ext_combo_box_items_repeat1 = 143,
  aux_sym_ext_file_filter_mime_types_repeat1 = 144,
  aux_sym_ext_layout_repeat1 = 145,
  aux_sym_ext_size_group_widgets_repeat1 = 146,
  aux_sym_ext_string_list_strings_repeat1 = 147,
  aux_sym_ext_styles_repeat1 = 148,
  aux_sym_quoted_repeat1 = 149,
  anon_alias_sym_context = 150,
  anon_alias_sym_detail = 151,
  anon_alias_sym_first = 152,
  anon_alias_sym_handler = 153,
  anon_alias_sym_id = 154,
  anon_alias_sym_ident = 155,
  anon_alias_sym_internal_child = 156,
  anon_alias_sym_name = 157,
  anon_alias_sym_namespace = 158,
  anon_alias_sym_object = 159,
  anon_alias_sym_property = 160,
  anon_alias_sym_rest = 161,
  anon_alias_sym_string = 162,
  anon_alias_sym_version = 163,
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
  [sym_name] = "name",
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
  [sym_number] = "value",
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
  [anon_alias_sym_context] = "context",
  [anon_alias_sym_detail] = "detail",
  [anon_alias_sym_first] = "first",
  [anon_alias_sym_handler] = "handler",
  [anon_alias_sym_id] = "id",
  [anon_alias_sym_ident] = "ident",
  [anon_alias_sym_internal_child] = "internal_child",
  [anon_alias_sym_name] = "name",
  [anon_alias_sym_namespace] = "namespace",
  [anon_alias_sym_object] = "object",
  [anon_alias_sym_property] = "property",
  [anon_alias_sym_rest] = "rest",
  [anon_alias_sym_string] = "string",
  [anon_alias_sym_version] = "version",
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
  [sym_name] = sym_name,
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
  [anon_alias_sym_context] = anon_alias_sym_context,
  [anon_alias_sym_detail] = anon_alias_sym_detail,
  [anon_alias_sym_first] = anon_alias_sym_first,
  [anon_alias_sym_handler] = anon_alias_sym_handler,
  [anon_alias_sym_id] = anon_alias_sym_id,
  [anon_alias_sym_ident] = anon_alias_sym_ident,
  [anon_alias_sym_internal_child] = anon_alias_sym_internal_child,
  [anon_alias_sym_name] = anon_alias_sym_name,
  [anon_alias_sym_namespace] = anon_alias_sym_namespace,
  [anon_alias_sym_object] = anon_alias_sym_object,
  [anon_alias_sym_property] = anon_alias_sym_property,
  [anon_alias_sym_rest] = anon_alias_sym_rest,
  [anon_alias_sym_string] = anon_alias_sym_string,
  [anon_alias_sym_version] = anon_alias_sym_version,
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
  [sym_name] = {
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
    .named = false,
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
  [anon_alias_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_detail] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_handler] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ident] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_internal_child] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_rest] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_version] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_namespace,
    [2] = anon_alias_sym_version,
  },
  [2] = {
    [0] = anon_alias_sym_namespace,
  },
  [3] = {
    [1] = anon_alias_sym_id,
  },
  [4] = {
    [0] = sym_number,
  },
  [5] = {
    [1] = anon_alias_sym_internal_child,
  },
  [6] = {
    [0] = anon_alias_sym_id,
  },
  [7] = {
    [0] = anon_alias_sym_name,
  },
  [8] = {
    [0] = anon_alias_sym_ident,
  },
  [9] = {
    [0] = anon_alias_sym_first,
  },
  [10] = {
    [3] = anon_alias_sym_name,
  },
  [11] = {
    [3] = anon_alias_sym_id,
  },
  [12] = {
    [1] = anon_alias_sym_rest,
  },
  [13] = {
    [2] = anon_alias_sym_string,
  },
  [14] = {
    [1] = anon_alias_sym_property,
  },
  [15] = {
    [2] = anon_alias_sym_context,
    [3] = anon_alias_sym_string,
  },
  [16] = {
    [1] = anon_alias_sym_name,
  },
  [17] = {
    [3] = anon_alias_sym_handler,
  },
  [18] = {
    [0] = anon_alias_sym_object,
    [2] = anon_alias_sym_property,
  },
  [19] = {
    [3] = anon_alias_sym_handler,
    [5] = anon_alias_sym_object,
  },
  [20] = {
    [2] = anon_alias_sym_detail,
    [5] = anon_alias_sym_handler,
  },
  [21] = {
    [2] = anon_alias_sym_detail,
    [5] = anon_alias_sym_handler,
    [7] = anon_alias_sym_object,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_number, 3,
    sym_number,
    anon_alias_sym_id,
    anon_alias_sym_version,
  sym_quoted, 5,
    sym_quoted,
    anon_alias_sym_context,
    anon_alias_sym_name,
    anon_alias_sym_string,
    sym_number,
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
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 62,
  [67] = 67,
  [68] = 64,
  [69] = 60,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 71,
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
  [92] = 92,
  [93] = 93,
  [94] = 87,
  [95] = 95,
  [96] = 93,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 104,
  [110] = 110,
  [111] = 111,
  [112] = 97,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 49,
  [127] = 127,
  [128] = 128,
  [129] = 92,
  [130] = 95,
  [131] = 90,
  [132] = 132,
  [133] = 89,
  [134] = 134,
  [135] = 50,
  [136] = 136,
  [137] = 91,
  [138] = 138,
  [139] = 139,
  [140] = 52,
  [141] = 88,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 54,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 95,
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
  [165] = 90,
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
  [178] = 92,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 188,
  [201] = 189,
  [202] = 202,
  [203] = 166,
  [204] = 167,
  [205] = 170,
  [206] = 171,
  [207] = 172,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 175,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 212,
  [218] = 218,
  [219] = 211,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 212,
  [226] = 211,
  [227] = 227,
  [228] = 221,
  [229] = 229,
  [230] = 221,
  [231] = 176,
  [232] = 177,
  [233] = 224,
  [234] = 224,
  [235] = 180,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 236,
  [241] = 241,
  [242] = 183,
  [243] = 159,
  [244] = 156,
  [245] = 245,
  [246] = 241,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 158,
  [252] = 252,
  [253] = 253,
  [254] = 157,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 256,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 272,
  [275] = 260,
  [276] = 271,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 277,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 286,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 289,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 297,
  [300] = 282,
  [301] = 281,
  [302] = 155,
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
  [358] = 358,
  [359] = 359,
  [360] = 355,
  [361] = 353,
  [362] = 362,
  [363] = 345,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 365,
  [371] = 371,
  [372] = 372,
  [373] = 322,
  [374] = 321,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 308,
  [380] = 341,
  [381] = 381,
  [382] = 342,
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
      if (lookahead == '=') ADVANCE(48);
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
      if (lookahead == '=') ADVANCE(310);
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
  [16] = {.lex_state = 228},
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
  [55] = {.lex_state = 37},
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
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 228},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 47},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 227},
  [127] = {.lex_state = 228},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 227},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 227},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 227},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 227},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 45},
  [157] = {.lex_state = 45},
  [158] = {.lex_state = 45},
  [159] = {.lex_state = 45},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 227},
  [163] = {.lex_state = 227},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 45},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 36},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 45},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 45},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 29},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 45},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 227},
  [192] = {.lex_state = 227},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 227},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 46},
  [201] = {.lex_state = 46},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 46},
  [204] = {.lex_state = 46},
  [205] = {.lex_state = 46},
  [206] = {.lex_state = 46},
  [207] = {.lex_state = 46},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 29},
  [212] = {.lex_state = 29},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 29},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 29},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 29},
  [226] = {.lex_state = 29},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 29},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 29},
  [231] = {.lex_state = 46},
  [232] = {.lex_state = 46},
  [233] = {.lex_state = 29},
  [234] = {.lex_state = 29},
  [235] = {.lex_state = 46},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 46},
  [243] = {.lex_state = 46},
  [244] = {.lex_state = 46},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 46},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 36},
  [266] = {.lex_state = 36},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 36},
  [283] = {.lex_state = 36},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 36},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 36},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 46},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
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
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 37},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 36},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 32},
  [382] = {.lex_state = 0},
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
    [sym_source_file] = STATE(376),
    [sym_using] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [anon_sym_using] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
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
    STATE(53), 1,
      sym_object,
    STATE(107), 1,
      sym_child_annotation,
    STATE(169), 1,
      sym_name,
    STATE(256), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(30), 12,
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
  [90] = 24,
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
    STATE(53), 1,
      sym_object,
    STATE(107), 1,
      sym_child_annotation,
    STATE(169), 1,
      sym_name,
    STATE(256), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(30), 12,
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
  [180] = 24,
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
    STATE(53), 1,
      sym_object,
    STATE(107), 1,
      sym_child_annotation,
    STATE(169), 1,
      sym_name,
    STATE(256), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(30), 12,
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
  [270] = 24,
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
    STATE(53), 1,
      sym_object,
    STATE(107), 1,
      sym_child_annotation,
    STATE(169), 1,
      sym_name,
    STATE(256), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(4), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(30), 12,
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
  [360] = 24,
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
    STATE(53), 1,
      sym_object,
    STATE(107), 1,
      sym_child_annotation,
    STATE(169), 1,
      sym_name,
    STATE(256), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(3), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(30), 12,
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
  [450] = 21,
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
    STATE(90), 1,
      sym_quoted,
    STATE(151), 1,
      sym_number,
    STATE(199), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(312), 1,
      sym_object,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(337), 3,
      sym_value,
      sym_binding,
      sym_object_value,
    STATE(348), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [523] = 17,
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
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(151), 1,
      sym_number,
    STATE(165), 1,
      sym_quoted,
    STATE(368), 1,
      sym_expression,
    STATE(106), 2,
      sym_literal,
      sym_closure_expression,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [579] = 17,
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
      sym_number,
    STATE(165), 1,
      sym_quoted,
    STATE(368), 1,
      sym_expression,
    STATE(106), 2,
      sym_literal,
      sym_closure_expression,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [635] = 17,
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
    STATE(8), 1,
      aux_sym_closure_expression_repeat1,
    STATE(151), 1,
      sym_number,
    STATE(165), 1,
      sym_quoted,
    STATE(368), 1,
      sym_expression,
    STATE(106), 2,
      sym_literal,
      sym_closure_expression,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [691] = 15,
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
    STATE(90), 1,
      sym_quoted,
    STATE(151), 1,
      sym_number,
    STATE(369), 1,
      sym_value,
    STATE(348), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [742] = 15,
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
    STATE(90), 1,
      sym_quoted,
    STATE(151), 1,
      sym_number,
    STATE(307), 1,
      sym_value,
    STATE(348), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [793] = 15,
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
    STATE(90), 1,
      sym_quoted,
    STATE(151), 1,
      sym_number,
    STATE(347), 1,
      sym_value,
    STATE(348), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [844] = 15,
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
      sym_number,
    STATE(165), 1,
      sym_quoted,
    STATE(335), 1,
      sym_expression,
    STATE(106), 2,
      sym_literal,
      sym_closure_expression,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [894] = 15,
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
      sym_number,
    STATE(165), 1,
      sym_quoted,
    STATE(366), 1,
      sym_expression,
    STATE(106), 2,
      sym_literal,
      sym_closure_expression,
    STATE(160), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [944] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_using,
    ACTIONS(161), 1,
      anon_sym_template,
    ACTIONS(163), 1,
      anon_sym_menu,
    STATE(199), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(110), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(57), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [987] = 3,
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
  [1011] = 3,
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
  [1035] = 3,
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
  [1059] = 3,
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
  [1083] = 3,
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
  [1107] = 3,
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
  [1131] = 3,
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
  [1155] = 3,
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
  [1179] = 3,
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
  [1203] = 3,
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
  [1227] = 3,
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
  [1251] = 3,
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
  [1275] = 3,
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
  [1299] = 3,
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
  [1323] = 3,
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
  [1347] = 3,
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
  [1371] = 3,
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
  [1395] = 3,
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
  [1419] = 3,
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
  [1443] = 3,
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
  [1467] = 3,
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
  [1491] = 3,
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
  [1515] = 3,
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
  [1539] = 3,
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
  [1563] = 3,
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
  [1587] = 3,
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
  [1611] = 3,
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
  [1635] = 3,
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
  [1659] = 3,
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
  [1683] = 3,
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
  [1707] = 3,
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
  [1731] = 3,
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
  [1755] = 3,
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
  [1779] = 3,
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
  [1803] = 3,
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
  [1827] = 3,
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
  [1851] = 3,
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
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(315), 13,
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
  [1899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(319), 13,
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
  [1923] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    ACTIONS(326), 1,
      anon_sym_template,
    ACTIONS(329), 1,
      anon_sym_menu,
    ACTIONS(332), 1,
      sym_ident,
    STATE(199), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1959] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(161), 1,
      anon_sym_template,
    ACTIONS(163), 1,
      anon_sym_menu,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1995] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2025] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2055] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(58), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2085] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_section,
    ACTIONS(356), 1,
      anon_sym_submenu,
    ACTIONS(359), 1,
      anon_sym_item,
    ACTIONS(362), 1,
      sym_ident,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2115] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(68), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(70), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(72), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2235] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2265] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2295] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2325] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(59), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2355] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2385] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(67), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2415] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2445] = 12,
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
    ACTIONS(387), 1,
      anon_sym_RBRACK,
    ACTIONS(389), 1,
      sym_ident,
    STATE(74), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(90), 1,
      sym_quoted,
    STATE(122), 1,
      sym_string_value,
    STATE(123), 1,
      sym_ext_combo_box_item,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2483] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      anon_sym__,
    ACTIONS(396), 1,
      anon_sym_C_,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      sym_ident,
    STATE(74), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(90), 1,
      sym_quoted,
    STATE(122), 1,
      sym_string_value,
    STATE(123), 1,
      sym_ext_combo_box_item,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2521] = 12,
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
    ACTIONS(389), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(90), 1,
      sym_quoted,
    STATE(122), 1,
      sym_string_value,
    STATE(123), 1,
      sym_ext_combo_box_item,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2559] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_section,
    ACTIONS(341), 1,
      anon_sym_submenu,
    ACTIONS(343), 1,
      anon_sym_item,
    ACTIONS(345), 1,
      sym_ident,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(156), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2619] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(419), 1,
      anon_sym_C_,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(90), 1,
      sym_quoted,
    STATE(124), 1,
      sym_string_value,
    STATE(147), 1,
      sym_ext_string_list_item,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2654] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    STATE(78), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(90), 1,
      sym_quoted,
    STATE(124), 1,
      sym_string_value,
    STATE(147), 1,
      sym_ext_string_list_item,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2689] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(90), 1,
      sym_quoted,
    STATE(124), 1,
      sym_string_value,
    STATE(147), 1,
      sym_ext_string_list_item,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(244), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2750] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(81), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(244), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2776] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(84), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(244), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2802] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(244), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2828] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(452), 1,
      anon_sym_section,
    ACTIONS(455), 1,
      anon_sym_submenu,
    ACTIONS(458), 1,
      anon_sym_item,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(244), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
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
  [2872] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_quoted,
    STATE(365), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [2901] = 3,
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
  [2918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(469), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(473), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2952] = 3,
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
  [2969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(481), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2986] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_quoted,
    STATE(286), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3015] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_quoted,
    STATE(370), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(489), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3061] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_quoted,
    STATE(290), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3090] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    STATE(90), 1,
      sym_quoted,
    STATE(355), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_as,
    ACTIONS(495), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(105), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_as,
    ACTIONS(501), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(98), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_ident,
    ACTIONS(503), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(111), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(505), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3176] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym__,
    ACTIONS(511), 1,
      anon_sym_C_,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_string_value,
    STATE(131), 1,
      sym_quoted,
    STATE(141), 2,
      sym_quoted_literal,
      sym_translated,
  [3202] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    STATE(90), 1,
      sym_quoted,
    STATE(121), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_ident,
    ACTIONS(517), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(519), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3248] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    STATE(90), 1,
      sym_quoted,
    STATE(289), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_DOT,
    ACTIONS(529), 1,
      anon_sym_as,
    ACTIONS(524), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(105), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3294] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_as,
    ACTIONS(532), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(108), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_ident,
    STATE(18), 1,
      sym_object,
    STATE(199), 1,
      sym_name,
    STATE(256), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_as,
    ACTIONS(536), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(105), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3358] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    STATE(90), 1,
      sym_quoted,
    STATE(295), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_using,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(110), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(543), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_ident,
    ACTIONS(545), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(505), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3424] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym__,
    ACTIONS(432), 1,
      anon_sym_C_,
    STATE(90), 1,
      sym_quoted,
    STATE(360), 1,
      sym_string_value,
    STATE(88), 2,
      sym_quoted_literal,
      sym_translated,
  [3450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      anon_sym_COLON,
    ACTIONS(549), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_EQ_GT,
      anon_sym_GT,
      sym_ident,
  [3467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(557), 1,
      anon_sym_action,
    ACTIONS(559), 1,
      sym_ident,
    STATE(315), 1,
      sym_ext_response,
    STATE(316), 3,
      sym_child_internal,
      sym_child_type,
      sym_child_extension,
  [3488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_ident,
    STATE(199), 1,
      sym_name,
    STATE(278), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_ident,
    STATE(199), 1,
      sym_name,
    STATE(362), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_ident,
    STATE(199), 1,
      sym_name,
    STATE(257), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 7,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_default,
  [3564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_ident,
    STATE(199), 1,
      sym_name,
    STATE(304), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      sym_ident,
    STATE(199), 1,
      sym_name,
    STATE(340), 1,
      sym_type_name,
    STATE(229), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(563), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3621] = 3,
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
  [3636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(571), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(573), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 6,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3665] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [3687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(295), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(583), 4,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(585), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(483), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(491), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(475), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(471), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3807] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [3829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(299), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3843] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [3865] = 3,
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
  [3879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    ACTIONS(595), 1,
      anon_sym_default,
    ACTIONS(597), 1,
      sym_ident,
    STATE(294), 1,
      sym_number,
  [3901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      aux_sym_ext_styles_repeat1,
    STATE(223), 1,
      sym_ext_styles_class,
    STATE(227), 1,
      sym_quoted,
  [3923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(307), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3937] = 3,
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
  [3951] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_ext_styles_repeat1,
    STATE(223), 1,
      sym_ext_styles_class,
    STATE(227), 1,
      sym_quoted,
  [3973] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [3995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(613), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(315), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4023] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [4045] = 3,
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
  [4059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      aux_sym_ext_styles_repeat1,
    STATE(223), 1,
      sym_ext_styles_class,
    STATE(227), 1,
      sym_quoted,
  [4081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      anon_sym_PIPE,
    STATE(262), 1,
      aux_sym_flags_repeat1,
    ACTIONS(549), 2,
      anon_sym_LBRACE,
      sym_ident,
  [4101] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(210), 1,
      sym_quoted,
    STATE(249), 1,
      sym_ext_file_filter_item,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(639), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(185), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(651), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(164), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(671), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(675), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(185), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(685), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(154), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COLON,
    ACTIONS(693), 1,
      anon_sym_COLON_COLON,
    ACTIONS(695), 1,
      anon_sym_EQ_GT,
    ACTIONS(689), 2,
      anon_sym_LBRACE,
      sym_ident,
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    ACTIONS(713), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(185), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(185), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    ACTIONS(741), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(185), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(179), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4593] = 4,
    ACTIONS(751), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(746), 2,
      sym_string,
      sym_escape_sequence,
    ACTIONS(749), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    ACTIONS(755), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(759), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(765), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(769), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(775), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(643), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(181), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    ACTIONS(783), 1,
      sym_ident,
    STATE(198), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(273), 1,
      sym_ext_adw_message_dialog_response,
  [4748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 1,
      sym_ident,
    STATE(214), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      sym_ident,
    STATE(208), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    ACTIONS(797), 1,
      sym_ident,
    STATE(198), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(273), 1,
      sym_ext_adw_message_dialog_response,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4882] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [4896] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [4910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      sym_ident,
    STATE(214), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    ACTIONS(812), 1,
      sym_ident,
    STATE(220), 1,
      aux_sym_ext_layout_repeat1,
    STATE(269), 1,
      sym_ext_layout_prop,
  [4950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    ACTIONS(816), 1,
      sym_ident,
    STATE(216), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4964] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [4978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    ACTIONS(823), 1,
      sym_ident,
    STATE(222), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(266), 1,
      sym_ext_size_group_widget,
  [4994] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [5008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    ACTIONS(827), 1,
      sym_ident,
    STATE(220), 1,
      aux_sym_ext_layout_repeat1,
    STATE(269), 1,
      sym_ext_layout_prop,
  [5024] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SQUOTE,
    STATE(217), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(830), 2,
      sym_string,
      sym_escape_sequence,
  [5038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    ACTIONS(836), 1,
      sym_ident,
    STATE(222), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(266), 1,
      sym_ext_size_group_widget,
  [5054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(839), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5066] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(843), 2,
      sym_string,
      sym_escape_sequence,
  [5080] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [5094] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [5108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5118] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(849), 2,
      sym_string,
      sym_escape_sequence,
  [5132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5142] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(855), 2,
      sym_string,
      sym_escape_sequence,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5176] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(859), 2,
      sym_string,
      sym_escape_sequence,
  [5190] = 4,
    ACTIONS(751), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(861), 2,
      sym_string,
      sym_escape_sequence,
  [5204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 1,
      sym_ident,
    STATE(208), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    ACTIONS(869), 1,
      sym_ident,
    STATE(216), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_ident,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(208), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(236), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(240), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    STATE(202), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
    STATE(237), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(885), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(273), 1,
      sym_ext_adw_message_dialog_response,
  [5400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_ext_layout_repeat1,
    STATE(269), 1,
      sym_ext_layout_prop,
  [5426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(266), 1,
      sym_ext_size_group_widget,
  [5442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(897), 1,
      anon_sym_PIPE,
    STATE(255), 1,
      aux_sym_flags_repeat1,
  [5465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    ACTIONS(902), 1,
      sym_ident,
    STATE(49), 1,
      sym_object_content,
  [5478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym_object_content,
  [5491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(184), 1,
      sym_number,
  [5504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      anon_sym_PIPE,
    STATE(262), 1,
      aux_sym_flags_repeat1,
  [5517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym_quoted,
  [5530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    ACTIONS(908), 1,
      sym_ident,
    STATE(126), 1,
      sym_object_content,
  [5543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_PIPE,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(255), 1,
      aux_sym_flags_repeat1,
  [5556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
  [5583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(914), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_ident,
  [5603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(349), 1,
      sym_number,
  [5616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(920), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 3,
      anon_sym_SEMI,
      anon_sym_after,
      anon_sym_swapped,
  [5636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_quoted,
  [5649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(353), 1,
      sym_quoted,
  [5662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(926), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      sym_quoted,
  [5686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      sym_quoted,
  [5699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym_quoted,
  [5712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LBRACE,
    ACTIONS(932), 1,
      anon_sym_LPAREN,
  [5722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_object_content,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
  [5750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_LBRACE,
    ACTIONS(940), 1,
      sym_ident,
  [5760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(944), 1,
      sym_ident,
  [5770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
  [5796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      anon_sym_COMMA,
  [5806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_LBRACE,
    ACTIONS(954), 1,
      sym_ident,
  [5816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      sym_ident,
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 1,
      anon_sym_COMMA,
  [5836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    ACTIONS(966), 1,
      anon_sym_COMMA,
  [5846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_DOLLAR,
      sym_ident,
  [5862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    ACTIONS(974), 1,
      anon_sym_default,
  [5872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    ACTIONS(978), 1,
      anon_sym_default,
  [5882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(982), 1,
      anon_sym_COMMA,
  [5892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_ident,
    STATE(245), 1,
      sym_name,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_object_content,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_object_content,
  [5930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
    ACTIONS(988), 1,
      sym_ident,
  [5940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    ACTIONS(992), 1,
      sym_ident,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_object_content,
  [5976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(998), 1,
      sym_ident,
  [5986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LBRACK,
  [5993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_SEMI,
  [6000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_COLON,
  [6007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LT,
  [6014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_DOLLAR,
  [6021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_ident,
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
  [6035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_ident,
  [6042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_LT,
  [6049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
  [6056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
  [6063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
  [6070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_response,
  [6077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_ident,
  [6084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_ident,
  [6091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LBRACE,
  [6098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
  [6105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_LBRACK,
  [6112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LBRACK,
  [6119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LBRACK,
  [6126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_LBRACE,
  [6133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_LBRACK,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LBRACK,
  [6147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_COLON,
  [6154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LBRACK,
  [6161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LBRACK,
  [6175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_LBRACE,
  [6182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LBRACE,
  [6189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
  [6196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
  [6203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
  [6210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RBRACK,
  [6217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_RBRACK,
  [6224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_GT,
  [6231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [6238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LPAREN,
  [6245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [6252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LBRACE,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
  [6266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_COLON,
  [6273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
  [6287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_RBRACK,
  [6301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_RBRACK,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_EQ,
  [6315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
  [6322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COLON,
  [6329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_DOLLAR,
  [6350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_ident,
  [6357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_DOT,
  [6364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_GT,
  [6385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
  [6392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_COLON,
  [6399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
  [6406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
  [6413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_ident,
  [6420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
  [6427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_COLON,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
  [6455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_LBRACE,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_ident,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      ts_builtin_sym_end,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym_ident,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym_ident,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_COLON,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_LPAREN,
  [6511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_EQ_GT,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 523,
  [SMALL_STATE(9)] = 579,
  [SMALL_STATE(10)] = 635,
  [SMALL_STATE(11)] = 691,
  [SMALL_STATE(12)] = 742,
  [SMALL_STATE(13)] = 793,
  [SMALL_STATE(14)] = 844,
  [SMALL_STATE(15)] = 894,
  [SMALL_STATE(16)] = 944,
  [SMALL_STATE(17)] = 987,
  [SMALL_STATE(18)] = 1011,
  [SMALL_STATE(19)] = 1035,
  [SMALL_STATE(20)] = 1059,
  [SMALL_STATE(21)] = 1083,
  [SMALL_STATE(22)] = 1107,
  [SMALL_STATE(23)] = 1131,
  [SMALL_STATE(24)] = 1155,
  [SMALL_STATE(25)] = 1179,
  [SMALL_STATE(26)] = 1203,
  [SMALL_STATE(27)] = 1227,
  [SMALL_STATE(28)] = 1251,
  [SMALL_STATE(29)] = 1275,
  [SMALL_STATE(30)] = 1299,
  [SMALL_STATE(31)] = 1323,
  [SMALL_STATE(32)] = 1347,
  [SMALL_STATE(33)] = 1371,
  [SMALL_STATE(34)] = 1395,
  [SMALL_STATE(35)] = 1419,
  [SMALL_STATE(36)] = 1443,
  [SMALL_STATE(37)] = 1467,
  [SMALL_STATE(38)] = 1491,
  [SMALL_STATE(39)] = 1515,
  [SMALL_STATE(40)] = 1539,
  [SMALL_STATE(41)] = 1563,
  [SMALL_STATE(42)] = 1587,
  [SMALL_STATE(43)] = 1611,
  [SMALL_STATE(44)] = 1635,
  [SMALL_STATE(45)] = 1659,
  [SMALL_STATE(46)] = 1683,
  [SMALL_STATE(47)] = 1707,
  [SMALL_STATE(48)] = 1731,
  [SMALL_STATE(49)] = 1755,
  [SMALL_STATE(50)] = 1779,
  [SMALL_STATE(51)] = 1803,
  [SMALL_STATE(52)] = 1827,
  [SMALL_STATE(53)] = 1851,
  [SMALL_STATE(54)] = 1875,
  [SMALL_STATE(55)] = 1899,
  [SMALL_STATE(56)] = 1923,
  [SMALL_STATE(57)] = 1959,
  [SMALL_STATE(58)] = 1995,
  [SMALL_STATE(59)] = 2025,
  [SMALL_STATE(60)] = 2055,
  [SMALL_STATE(61)] = 2085,
  [SMALL_STATE(62)] = 2115,
  [SMALL_STATE(63)] = 2145,
  [SMALL_STATE(64)] = 2175,
  [SMALL_STATE(65)] = 2205,
  [SMALL_STATE(66)] = 2235,
  [SMALL_STATE(67)] = 2265,
  [SMALL_STATE(68)] = 2295,
  [SMALL_STATE(69)] = 2325,
  [SMALL_STATE(70)] = 2355,
  [SMALL_STATE(71)] = 2385,
  [SMALL_STATE(72)] = 2415,
  [SMALL_STATE(73)] = 2445,
  [SMALL_STATE(74)] = 2483,
  [SMALL_STATE(75)] = 2521,
  [SMALL_STATE(76)] = 2559,
  [SMALL_STATE(77)] = 2589,
  [SMALL_STATE(78)] = 2619,
  [SMALL_STATE(79)] = 2654,
  [SMALL_STATE(80)] = 2689,
  [SMALL_STATE(81)] = 2724,
  [SMALL_STATE(82)] = 2750,
  [SMALL_STATE(83)] = 2776,
  [SMALL_STATE(84)] = 2802,
  [SMALL_STATE(85)] = 2828,
  [SMALL_STATE(86)] = 2854,
  [SMALL_STATE(87)] = 2872,
  [SMALL_STATE(88)] = 2901,
  [SMALL_STATE(89)] = 2918,
  [SMALL_STATE(90)] = 2935,
  [SMALL_STATE(91)] = 2952,
  [SMALL_STATE(92)] = 2969,
  [SMALL_STATE(93)] = 2986,
  [SMALL_STATE(94)] = 3015,
  [SMALL_STATE(95)] = 3044,
  [SMALL_STATE(96)] = 3061,
  [SMALL_STATE(97)] = 3090,
  [SMALL_STATE(98)] = 3116,
  [SMALL_STATE(99)] = 3136,
  [SMALL_STATE(100)] = 3156,
  [SMALL_STATE(101)] = 3176,
  [SMALL_STATE(102)] = 3202,
  [SMALL_STATE(103)] = 3228,
  [SMALL_STATE(104)] = 3248,
  [SMALL_STATE(105)] = 3274,
  [SMALL_STATE(106)] = 3294,
  [SMALL_STATE(107)] = 3314,
  [SMALL_STATE(108)] = 3338,
  [SMALL_STATE(109)] = 3358,
  [SMALL_STATE(110)] = 3384,
  [SMALL_STATE(111)] = 3404,
  [SMALL_STATE(112)] = 3424,
  [SMALL_STATE(113)] = 3450,
  [SMALL_STATE(114)] = 3467,
  [SMALL_STATE(115)] = 3488,
  [SMALL_STATE(116)] = 3509,
  [SMALL_STATE(117)] = 3530,
  [SMALL_STATE(118)] = 3551,
  [SMALL_STATE(119)] = 3564,
  [SMALL_STATE(120)] = 3585,
  [SMALL_STATE(121)] = 3606,
  [SMALL_STATE(122)] = 3621,
  [SMALL_STATE(123)] = 3636,
  [SMALL_STATE(124)] = 3653,
  [SMALL_STATE(125)] = 3665,
  [SMALL_STATE(126)] = 3687,
  [SMALL_STATE(127)] = 3701,
  [SMALL_STATE(128)] = 3715,
  [SMALL_STATE(129)] = 3729,
  [SMALL_STATE(130)] = 3743,
  [SMALL_STATE(131)] = 3757,
  [SMALL_STATE(132)] = 3771,
  [SMALL_STATE(133)] = 3793,
  [SMALL_STATE(134)] = 3807,
  [SMALL_STATE(135)] = 3829,
  [SMALL_STATE(136)] = 3843,
  [SMALL_STATE(137)] = 3865,
  [SMALL_STATE(138)] = 3879,
  [SMALL_STATE(139)] = 3901,
  [SMALL_STATE(140)] = 3923,
  [SMALL_STATE(141)] = 3937,
  [SMALL_STATE(142)] = 3951,
  [SMALL_STATE(143)] = 3973,
  [SMALL_STATE(144)] = 3995,
  [SMALL_STATE(145)] = 4009,
  [SMALL_STATE(146)] = 4023,
  [SMALL_STATE(147)] = 4045,
  [SMALL_STATE(148)] = 4059,
  [SMALL_STATE(149)] = 4081,
  [SMALL_STATE(150)] = 4101,
  [SMALL_STATE(151)] = 4123,
  [SMALL_STATE(152)] = 4134,
  [SMALL_STATE(153)] = 4145,
  [SMALL_STATE(154)] = 4158,
  [SMALL_STATE(155)] = 4173,
  [SMALL_STATE(156)] = 4186,
  [SMALL_STATE(157)] = 4199,
  [SMALL_STATE(158)] = 4212,
  [SMALL_STATE(159)] = 4225,
  [SMALL_STATE(160)] = 4238,
  [SMALL_STATE(161)] = 4249,
  [SMALL_STATE(162)] = 4264,
  [SMALL_STATE(163)] = 4277,
  [SMALL_STATE(164)] = 4290,
  [SMALL_STATE(165)] = 4305,
  [SMALL_STATE(166)] = 4316,
  [SMALL_STATE(167)] = 4329,
  [SMALL_STATE(168)] = 4342,
  [SMALL_STATE(169)] = 4357,
  [SMALL_STATE(170)] = 4374,
  [SMALL_STATE(171)] = 4387,
  [SMALL_STATE(172)] = 4400,
  [SMALL_STATE(173)] = 4413,
  [SMALL_STATE(174)] = 4424,
  [SMALL_STATE(175)] = 4435,
  [SMALL_STATE(176)] = 4448,
  [SMALL_STATE(177)] = 4461,
  [SMALL_STATE(178)] = 4474,
  [SMALL_STATE(179)] = 4485,
  [SMALL_STATE(180)] = 4500,
  [SMALL_STATE(181)] = 4513,
  [SMALL_STATE(182)] = 4528,
  [SMALL_STATE(183)] = 4539,
  [SMALL_STATE(184)] = 4552,
  [SMALL_STATE(185)] = 4563,
  [SMALL_STATE(186)] = 4578,
  [SMALL_STATE(187)] = 4593,
  [SMALL_STATE(188)] = 4608,
  [SMALL_STATE(189)] = 4621,
  [SMALL_STATE(190)] = 4634,
  [SMALL_STATE(191)] = 4645,
  [SMALL_STATE(192)] = 4658,
  [SMALL_STATE(193)] = 4671,
  [SMALL_STATE(194)] = 4682,
  [SMALL_STATE(195)] = 4695,
  [SMALL_STATE(196)] = 4706,
  [SMALL_STATE(197)] = 4717,
  [SMALL_STATE(198)] = 4732,
  [SMALL_STATE(199)] = 4748,
  [SMALL_STATE(200)] = 4758,
  [SMALL_STATE(201)] = 4768,
  [SMALL_STATE(202)] = 4778,
  [SMALL_STATE(203)] = 4792,
  [SMALL_STATE(204)] = 4802,
  [SMALL_STATE(205)] = 4812,
  [SMALL_STATE(206)] = 4822,
  [SMALL_STATE(207)] = 4832,
  [SMALL_STATE(208)] = 4842,
  [SMALL_STATE(209)] = 4856,
  [SMALL_STATE(210)] = 4872,
  [SMALL_STATE(211)] = 4882,
  [SMALL_STATE(212)] = 4896,
  [SMALL_STATE(213)] = 4910,
  [SMALL_STATE(214)] = 4920,
  [SMALL_STATE(215)] = 4934,
  [SMALL_STATE(216)] = 4950,
  [SMALL_STATE(217)] = 4964,
  [SMALL_STATE(218)] = 4978,
  [SMALL_STATE(219)] = 4994,
  [SMALL_STATE(220)] = 5008,
  [SMALL_STATE(221)] = 5024,
  [SMALL_STATE(222)] = 5038,
  [SMALL_STATE(223)] = 5054,
  [SMALL_STATE(224)] = 5066,
  [SMALL_STATE(225)] = 5080,
  [SMALL_STATE(226)] = 5094,
  [SMALL_STATE(227)] = 5108,
  [SMALL_STATE(228)] = 5118,
  [SMALL_STATE(229)] = 5132,
  [SMALL_STATE(230)] = 5142,
  [SMALL_STATE(231)] = 5156,
  [SMALL_STATE(232)] = 5166,
  [SMALL_STATE(233)] = 5176,
  [SMALL_STATE(234)] = 5190,
  [SMALL_STATE(235)] = 5204,
  [SMALL_STATE(236)] = 5214,
  [SMALL_STATE(237)] = 5228,
  [SMALL_STATE(238)] = 5242,
  [SMALL_STATE(239)] = 5252,
  [SMALL_STATE(240)] = 5262,
  [SMALL_STATE(241)] = 5276,
  [SMALL_STATE(242)] = 5290,
  [SMALL_STATE(243)] = 5300,
  [SMALL_STATE(244)] = 5310,
  [SMALL_STATE(245)] = 5320,
  [SMALL_STATE(246)] = 5330,
  [SMALL_STATE(247)] = 5344,
  [SMALL_STATE(248)] = 5358,
  [SMALL_STATE(249)] = 5372,
  [SMALL_STATE(250)] = 5384,
  [SMALL_STATE(251)] = 5400,
  [SMALL_STATE(252)] = 5410,
  [SMALL_STATE(253)] = 5426,
  [SMALL_STATE(254)] = 5442,
  [SMALL_STATE(255)] = 5452,
  [SMALL_STATE(256)] = 5465,
  [SMALL_STATE(257)] = 5478,
  [SMALL_STATE(258)] = 5491,
  [SMALL_STATE(259)] = 5504,
  [SMALL_STATE(260)] = 5517,
  [SMALL_STATE(261)] = 5530,
  [SMALL_STATE(262)] = 5543,
  [SMALL_STATE(263)] = 5556,
  [SMALL_STATE(264)] = 5565,
  [SMALL_STATE(265)] = 5574,
  [SMALL_STATE(266)] = 5583,
  [SMALL_STATE(267)] = 5594,
  [SMALL_STATE(268)] = 5603,
  [SMALL_STATE(269)] = 5616,
  [SMALL_STATE(270)] = 5627,
  [SMALL_STATE(271)] = 5636,
  [SMALL_STATE(272)] = 5649,
  [SMALL_STATE(273)] = 5662,
  [SMALL_STATE(274)] = 5673,
  [SMALL_STATE(275)] = 5686,
  [SMALL_STATE(276)] = 5699,
  [SMALL_STATE(277)] = 5712,
  [SMALL_STATE(278)] = 5722,
  [SMALL_STATE(279)] = 5732,
  [SMALL_STATE(280)] = 5740,
  [SMALL_STATE(281)] = 5750,
  [SMALL_STATE(282)] = 5760,
  [SMALL_STATE(283)] = 5770,
  [SMALL_STATE(284)] = 5778,
  [SMALL_STATE(285)] = 5786,
  [SMALL_STATE(286)] = 5796,
  [SMALL_STATE(287)] = 5806,
  [SMALL_STATE(288)] = 5816,
  [SMALL_STATE(289)] = 5826,
  [SMALL_STATE(290)] = 5836,
  [SMALL_STATE(291)] = 5846,
  [SMALL_STATE(292)] = 5854,
  [SMALL_STATE(293)] = 5862,
  [SMALL_STATE(294)] = 5872,
  [SMALL_STATE(295)] = 5882,
  [SMALL_STATE(296)] = 5892,
  [SMALL_STATE(297)] = 5902,
  [SMALL_STATE(298)] = 5912,
  [SMALL_STATE(299)] = 5920,
  [SMALL_STATE(300)] = 5930,
  [SMALL_STATE(301)] = 5940,
  [SMALL_STATE(302)] = 5950,
  [SMALL_STATE(303)] = 5958,
  [SMALL_STATE(304)] = 5966,
  [SMALL_STATE(305)] = 5976,
  [SMALL_STATE(306)] = 5986,
  [SMALL_STATE(307)] = 5993,
  [SMALL_STATE(308)] = 6000,
  [SMALL_STATE(309)] = 6007,
  [SMALL_STATE(310)] = 6014,
  [SMALL_STATE(311)] = 6021,
  [SMALL_STATE(312)] = 6028,
  [SMALL_STATE(313)] = 6035,
  [SMALL_STATE(314)] = 6042,
  [SMALL_STATE(315)] = 6049,
  [SMALL_STATE(316)] = 6056,
  [SMALL_STATE(317)] = 6063,
  [SMALL_STATE(318)] = 6070,
  [SMALL_STATE(319)] = 6077,
  [SMALL_STATE(320)] = 6084,
  [SMALL_STATE(321)] = 6091,
  [SMALL_STATE(322)] = 6098,
  [SMALL_STATE(323)] = 6105,
  [SMALL_STATE(324)] = 6112,
  [SMALL_STATE(325)] = 6119,
  [SMALL_STATE(326)] = 6126,
  [SMALL_STATE(327)] = 6133,
  [SMALL_STATE(328)] = 6140,
  [SMALL_STATE(329)] = 6147,
  [SMALL_STATE(330)] = 6154,
  [SMALL_STATE(331)] = 6161,
  [SMALL_STATE(332)] = 6168,
  [SMALL_STATE(333)] = 6175,
  [SMALL_STATE(334)] = 6182,
  [SMALL_STATE(335)] = 6189,
  [SMALL_STATE(336)] = 6196,
  [SMALL_STATE(337)] = 6203,
  [SMALL_STATE(338)] = 6210,
  [SMALL_STATE(339)] = 6217,
  [SMALL_STATE(340)] = 6224,
  [SMALL_STATE(341)] = 6231,
  [SMALL_STATE(342)] = 6238,
  [SMALL_STATE(343)] = 6245,
  [SMALL_STATE(344)] = 6252,
  [SMALL_STATE(345)] = 6259,
  [SMALL_STATE(346)] = 6266,
  [SMALL_STATE(347)] = 6273,
  [SMALL_STATE(348)] = 6280,
  [SMALL_STATE(349)] = 6287,
  [SMALL_STATE(350)] = 6294,
  [SMALL_STATE(351)] = 6301,
  [SMALL_STATE(352)] = 6308,
  [SMALL_STATE(353)] = 6315,
  [SMALL_STATE(354)] = 6322,
  [SMALL_STATE(355)] = 6329,
  [SMALL_STATE(356)] = 6336,
  [SMALL_STATE(357)] = 6343,
  [SMALL_STATE(358)] = 6350,
  [SMALL_STATE(359)] = 6357,
  [SMALL_STATE(360)] = 6364,
  [SMALL_STATE(361)] = 6371,
  [SMALL_STATE(362)] = 6378,
  [SMALL_STATE(363)] = 6385,
  [SMALL_STATE(364)] = 6392,
  [SMALL_STATE(365)] = 6399,
  [SMALL_STATE(366)] = 6406,
  [SMALL_STATE(367)] = 6413,
  [SMALL_STATE(368)] = 6420,
  [SMALL_STATE(369)] = 6427,
  [SMALL_STATE(370)] = 6434,
  [SMALL_STATE(371)] = 6441,
  [SMALL_STATE(372)] = 6448,
  [SMALL_STATE(373)] = 6455,
  [SMALL_STATE(374)] = 6462,
  [SMALL_STATE(375)] = 6469,
  [SMALL_STATE(376)] = 6476,
  [SMALL_STATE(377)] = 6483,
  [SMALL_STATE(378)] = 6490,
  [SMALL_STATE(379)] = 6497,
  [SMALL_STATE(380)] = 6504,
  [SMALL_STATE(381)] = 6511,
  [SMALL_STATE(382)] = 6518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(285),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(114),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(115),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(334),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(333),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(332),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(330),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(306),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(328),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(327),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(326),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(325),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(324),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(323),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(113),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(367),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(258),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(309),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(118),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(118),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(233),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(230),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(196),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 17),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 17),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 17),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 17),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 19),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 19),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 20),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 20),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 19),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 19),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 20),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 20),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 21),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 21),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 21),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 21),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(285),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(117),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(287),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(113),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(282),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(281),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(280),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(308),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(341),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(342),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(234),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(228),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(371),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(341),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(342),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(234),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(228),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(300),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(301),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(277),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 5, .production_id = 15),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 5, .production_id = 15),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_literal, 1, .production_id = 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_literal, 1, .production_id = 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, .production_id = 13),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 4, .production_id = 13),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 6),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2), SHIFT_REPEAT(144),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(320),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(314),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(375),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 6),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 6),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 6),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_item, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(234),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(228),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(234),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(228),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_literal, 1, .production_id = 8),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 7),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 7),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 3),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_short, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 3),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, .production_id = 14),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(270),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(187),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 16),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 16),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2), SHIFT_REPEAT(364),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(379),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_item, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2), SHIFT_REPEAT(354),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2), SHIFT_REPEAT(359),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2), SHIFT_REPEAT(329),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2), SHIFT_REPEAT(267),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles_class, 1, .production_id = 7),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_external, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_full, 3, .production_id = 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2), SHIFT_REPEAT(358),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, .production_id = 9),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout_prop, 4, .production_id = 7),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widget, 1, .production_id = 6),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_flag, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_setter, 6, .production_id = 18),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 10),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 11),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility_prop, 4, .production_id = 7),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 12),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_type, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 10),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 11),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 5),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
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
