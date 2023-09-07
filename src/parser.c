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
#define STATE_COUNT 384
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 13
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_using = 1,
  anon_sym_SEMI = 2,
  sym_ident = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_DOT = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_COLON = 8,
  anon_sym_COLON_COLON = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_after = 13,
  anon_sym_swapped = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_internal_DASHchild = 17,
  anon_sym_template = 18,
  aux_sym_number_literal_token1 = 19,
  anon_sym_typeof = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_PIPE = 23,
  anon_sym__ = 24,
  anon_sym_C_ = 25,
  anon_sym_bind = 26,
  anon_sym_COMMA = 27,
  anon_sym_as = 28,
  anon_sym_menu = 29,
  anon_sym_section = 30,
  anon_sym_submenu = 31,
  anon_sym_item = 32,
  anon_sym_accessibility = 33,
  anon_sym_condition = 34,
  anon_sym_setters = 35,
  anon_sym_responses = 36,
  anon_sym_destructive = 37,
  anon_sym_suggested = 38,
  anon_sym_disabled = 39,
  anon_sym_items = 40,
  anon_sym_mime_DASHtypes = 41,
  anon_sym_patterns = 42,
  anon_sym_suffixes = 43,
  anon_sym_layout = 44,
  anon_sym_marks = 45,
  anon_sym_mark = 46,
  anon_sym_DASH = 47,
  anon_sym_PLUS = 48,
  anon_sym_widgets = 49,
  anon_sym_strings = 50,
  anon_sym_styles = 51,
  anon_sym_action = 52,
  anon_sym_response = 53,
  anon_sym_EQ = 54,
  anon_sym_default = 55,
  sym_string = 56,
  aux_sym_number_token1 = 57,
  aux_sym_number_token2 = 58,
  anon_sym_DQUOTE = 59,
  anon_sym_SQUOTE = 60,
  sym_escape_sequence = 61,
  sym_comment = 62,
  sym_source_file = 63,
  sym_using = 64,
  sym_namespace = 65,
  sym_version = 66,
  sym_object = 67,
  sym_object_content = 68,
  sym_type_name = 69,
  sym_type_name_full = 70,
  sym_name = 71,
  sym_type_name_external = 72,
  sym_type_name_short = 73,
  sym_property = 74,
  sym_signal = 75,
  sym_signal_flag = 76,
  sym_child = 77,
  sym_child_annotation = 78,
  sym_child_internal = 79,
  sym_child_type = 80,
  sym_template = 81,
  sym_value = 82,
  sym_literal = 83,
  sym_quoted_literal = 84,
  sym_number_literal = 85,
  sym_ident_literal = 86,
  sym_type_literal = 87,
  sym_flags = 88,
  sym_translated = 89,
  sym_binding = 90,
  sym_object_value = 91,
  sym_string_value = 92,
  sym_expression = 93,
  sym_lookup_expression = 94,
  sym_closure_expression = 95,
  sym_cast_expression = 96,
  sym_menu = 97,
  sym_menu_child = 98,
  sym_menu_section = 99,
  sym_menu_submenu = 100,
  sym_menu_item = 101,
  sym_menu_attribute = 102,
  sym_menu_item_shorthand = 103,
  sym_extension = 104,
  sym_ext_accessibility = 105,
  sym_ext_accessibility_prop = 106,
  sym_ext_adw_breakpoint = 107,
  sym_ext_adw_breakpoint_setter = 108,
  sym_ext_adw_message_dialog = 109,
  sym_ext_adw_message_dialog_response = 110,
  sym_ext_adw_message_dialog_flag = 111,
  sym_ext_combo_box_items = 112,
  sym_ext_combo_box_item = 113,
  sym_ext_file_filter_mime_types = 114,
  sym_ext_file_filter_patterns = 115,
  sym_ext_file_filter_suffixes = 116,
  sym_ext_file_filter_item = 117,
  sym_ext_layout = 118,
  sym_ext_layout_prop = 119,
  sym_ext_list_item_factory = 120,
  sym_ext_size_group_widgets = 121,
  sym_ext_size_group_widget = 122,
  sym_ext_string_list_strings = 123,
  sym_ext_string_list_item = 124,
  sym_ext_styles = 125,
  sym_ext_styles_class = 126,
  sym_child_extension = 127,
  sym_ext_response = 128,
  sym_number = 129,
  sym_quoted = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_source_file_repeat2 = 132,
  aux_sym_object_content_repeat1 = 133,
  aux_sym_signal_repeat1 = 134,
  aux_sym_flags_repeat1 = 135,
  aux_sym_expression_repeat1 = 136,
  aux_sym_closure_expression_repeat1 = 137,
  aux_sym_menu_repeat1 = 138,
  aux_sym_menu_section_repeat1 = 139,
  aux_sym_menu_item_repeat1 = 140,
  aux_sym_ext_accessibility_repeat1 = 141,
  aux_sym_ext_adw_breakpoint_repeat1 = 142,
  aux_sym_ext_adw_message_dialog_repeat1 = 143,
  aux_sym_ext_adw_message_dialog_response_repeat1 = 144,
  aux_sym_ext_combo_box_items_repeat1 = 145,
  aux_sym_ext_file_filter_mime_types_repeat1 = 146,
  aux_sym_ext_layout_repeat1 = 147,
  aux_sym_ext_size_group_widgets_repeat1 = 148,
  aux_sym_ext_string_list_strings_repeat1 = 149,
  aux_sym_ext_styles_repeat1 = 150,
  aux_sym_quoted_repeat1 = 151,
  anon_alias_sym_context = 152,
  anon_alias_sym_detail = 153,
  anon_alias_sym_first = 154,
  anon_alias_sym_handler = 155,
  anon_alias_sym_id = 156,
  anon_alias_sym_ident = 157,
  anon_alias_sym_internal_child = 158,
  anon_alias_sym_name = 159,
  anon_alias_sym_object = 160,
  anon_alias_sym_property = 161,
  anon_alias_sym_rest = 162,
  anon_alias_sym_string = 163,
  anon_alias_sym_value = 164,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_using] = "using",
  [anon_sym_SEMI] = ";",
  [sym_ident] = "ident",
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
  [sym_source_file] = "source_file",
  [sym_using] = "using",
  [sym_namespace] = "namespace",
  [sym_version] = "version",
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
  [anon_alias_sym_context] = "context",
  [anon_alias_sym_detail] = "detail",
  [anon_alias_sym_first] = "first",
  [anon_alias_sym_handler] = "handler",
  [anon_alias_sym_id] = "id",
  [anon_alias_sym_ident] = "ident",
  [anon_alias_sym_internal_child] = "internal_child",
  [anon_alias_sym_name] = "name",
  [anon_alias_sym_object] = "object",
  [anon_alias_sym_property] = "property",
  [anon_alias_sym_rest] = "rest",
  [anon_alias_sym_string] = "string",
  [anon_alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_ident] = sym_ident,
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
  [sym_source_file] = sym_source_file,
  [sym_using] = sym_using,
  [sym_namespace] = sym_namespace,
  [sym_version] = sym_version,
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
  [anon_alias_sym_object] = anon_alias_sym_object,
  [anon_alias_sym_property] = anon_alias_sym_property,
  [anon_alias_sym_rest] = anon_alias_sym_rest,
  [anon_alias_sym_string] = anon_alias_sym_string,
  [anon_alias_sym_value] = anon_alias_sym_value,
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
  [sym_ident] = {
    .visible = true,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
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
  [anon_alias_sym_value] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_id,
  },
  [2] = {
    [0] = anon_alias_sym_value,
  },
  [3] = {
    [1] = anon_alias_sym_internal_child,
  },
  [4] = {
    [0] = anon_alias_sym_id,
  },
  [5] = {
    [0] = anon_alias_sym_name,
  },
  [6] = {
    [0] = anon_alias_sym_ident,
  },
  [7] = {
    [0] = anon_alias_sym_first,
  },
  [8] = {
    [1] = anon_alias_sym_value,
  },
  [9] = {
    [3] = anon_alias_sym_id,
  },
  [10] = {
    [3] = anon_alias_sym_name,
  },
  [11] = {
    [1] = anon_alias_sym_rest,
  },
  [12] = {
    [2] = anon_alias_sym_string,
  },
  [13] = {
    [1] = anon_alias_sym_property,
  },
  [14] = {
    [2] = anon_alias_sym_context,
    [3] = anon_alias_sym_string,
  },
  [15] = {
    [1] = anon_alias_sym_name,
  },
  [16] = {
    [3] = anon_alias_sym_handler,
  },
  [17] = {
    [0] = anon_alias_sym_object,
    [2] = anon_alias_sym_property,
  },
  [18] = {
    [3] = anon_alias_sym_handler,
    [5] = anon_alias_sym_object,
  },
  [19] = {
    [2] = anon_alias_sym_detail,
    [5] = anon_alias_sym_handler,
  },
  [20] = {
    [2] = anon_alias_sym_detail,
    [5] = anon_alias_sym_handler,
    [7] = anon_alias_sym_object,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_number, 2,
    sym_number,
    anon_alias_sym_value,
  sym_quoted, 5,
    sym_quoted,
    anon_alias_sym_context,
    anon_alias_sym_name,
    anon_alias_sym_string,
    anon_alias_sym_value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 2,
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
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 61,
  [69] = 66,
  [70] = 58,
  [71] = 65,
  [72] = 72,
  [73] = 59,
  [74] = 63,
  [75] = 75,
  [76] = 76,
  [77] = 60,
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
  [96] = 89,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 105,
  [107] = 107,
  [108] = 100,
  [109] = 109,
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
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 36,
  [124] = 91,
  [125] = 125,
  [126] = 34,
  [127] = 127,
  [128] = 37,
  [129] = 35,
  [130] = 130,
  [131] = 87,
  [132] = 94,
  [133] = 133,
  [134] = 88,
  [135] = 135,
  [136] = 95,
  [137] = 137,
  [138] = 93,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 93,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 91,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 88,
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
  [197] = 153,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 200,
  [203] = 201,
  [204] = 204,
  [205] = 205,
  [206] = 170,
  [207] = 207,
  [208] = 198,
  [209] = 171,
  [210] = 210,
  [211] = 199,
  [212] = 172,
  [213] = 200,
  [214] = 201,
  [215] = 204,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 159,
  [230] = 230,
  [231] = 158,
  [232] = 167,
  [233] = 233,
  [234] = 234,
  [235] = 166,
  [236] = 156,
  [237] = 165,
  [238] = 173,
  [239] = 239,
  [240] = 150,
  [241] = 162,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 199,
  [246] = 198,
  [247] = 152,
  [248] = 160,
  [249] = 249,
  [250] = 220,
  [251] = 251,
  [252] = 154,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 256,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 262,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 258,
  [272] = 257,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 278,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 290,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 293,
  [299] = 299,
  [300] = 191,
  [301] = 282,
  [302] = 284,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 287,
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
  [360] = 360,
  [361] = 333,
  [362] = 328,
  [363] = 363,
  [364] = 349,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 366,
  [373] = 373,
  [374] = 374,
  [375] = 310,
  [376] = 376,
  [377] = 377,
  [378] = 374,
  [379] = 379,
  [380] = 358,
  [381] = 368,
  [382] = 382,
  [383] = 369,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(229);
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(410);
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == '>') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '_') ADVANCE(413);
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
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
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
          lookahead == 'u') ADVANCE(482);
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
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(44)
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
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '/') ADVANCE(471);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(410);
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == '>') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '_') ADVANCE(413);
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
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(407);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(407);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == 'C') ADVANCE(235);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'b') ADVANCE(299);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == 'C') ADVANCE(235);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(407);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == 'C') ADVANCE(235);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(411);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(293);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(484);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(483);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(396);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(415);
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
      if (lookahead == 's') ADVANCE(420);
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
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(403);
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
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(465);
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
      if (lookahead == 'f') ADVANCE(408);
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
      if (lookahead == 'k') ADVANCE(454);
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
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(427);
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
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(432);
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
      if (lookahead == 'r') ADVANCE(399);
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
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(445);
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
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(469);
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
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(425);
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
      if (lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(479);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(484);
      if (lookahead == '\r') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(485);
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
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(410);
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == '>') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') SKIP(221)
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '_') ADVANCE(413);
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
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '\\') SKIP(225)
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(227)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(223)
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(228)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 'y') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_destructive);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_destructive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_suggested);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_suggested);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(396);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(475);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(472);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(484);
      if (lookahead == '\r') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(219);
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
  [15] = {.lex_state = 228},
  [16] = {.lex_state = 31},
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
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 45},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 228},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 36},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 227},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 227},
  [127] = {.lex_state = 228},
  [128] = {.lex_state = 227},
  [129] = {.lex_state = 227},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 227},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 227},
  [156] = {.lex_state = 44},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 44},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 227},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 44},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 227},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 227},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 27},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 227},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 45},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 27},
  [200] = {.lex_state = 27},
  [201] = {.lex_state = 27},
  [202] = {.lex_state = 27},
  [203] = {.lex_state = 27},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 45},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 45},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 45},
  [213] = {.lex_state = 27},
  [214] = {.lex_state = 27},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 45},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 45},
  [232] = {.lex_state = 45},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 45},
  [236] = {.lex_state = 45},
  [237] = {.lex_state = 45},
  [238] = {.lex_state = 45},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 45},
  [241] = {.lex_state = 45},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 27},
  [247] = {.lex_state = 45},
  [248] = {.lex_state = 45},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 45},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 36},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 36},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 36},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 47},
  [276] = {.lex_state = 36},
  [277] = {.lex_state = 36},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 36},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 36},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 36},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 0},
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
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 37},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 45},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 36},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 32},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 36},
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
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 0},
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
    [sym_source_file] = STATE(377),
    [sym_using] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_using] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_accessibility,
    ACTIONS(19), 1,
      anon_sym_setters,
    ACTIONS(21), 1,
      anon_sym_responses,
    ACTIONS(23), 1,
      anon_sym_items,
    ACTIONS(25), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(27), 1,
      anon_sym_patterns,
    ACTIONS(29), 1,
      anon_sym_suffixes,
    ACTIONS(31), 1,
      anon_sym_layout,
    ACTIONS(33), 1,
      anon_sym_widgets,
    ACTIONS(35), 1,
      anon_sym_strings,
    ACTIONS(37), 1,
      anon_sym_styles,
    STATE(54), 1,
      sym_object,
    STATE(97), 1,
      sym_child_annotation,
    STATE(185), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(4), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(51), 12,
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
  [93] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_ident,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      anon_sym_template,
    ACTIONS(53), 1,
      anon_sym_accessibility,
    ACTIONS(56), 1,
      anon_sym_setters,
    ACTIONS(59), 1,
      anon_sym_responses,
    ACTIONS(62), 1,
      anon_sym_items,
    ACTIONS(65), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(68), 1,
      anon_sym_patterns,
    ACTIONS(71), 1,
      anon_sym_suffixes,
    ACTIONS(74), 1,
      anon_sym_layout,
    ACTIONS(77), 1,
      anon_sym_widgets,
    ACTIONS(80), 1,
      anon_sym_strings,
    ACTIONS(83), 1,
      anon_sym_styles,
    STATE(54), 1,
      sym_object,
    STATE(97), 1,
      sym_child_annotation,
    STATE(185), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(3), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(51), 12,
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
  [186] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_accessibility,
    ACTIONS(19), 1,
      anon_sym_setters,
    ACTIONS(21), 1,
      anon_sym_responses,
    ACTIONS(23), 1,
      anon_sym_items,
    ACTIONS(25), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(27), 1,
      anon_sym_patterns,
    ACTIONS(29), 1,
      anon_sym_suffixes,
    ACTIONS(31), 1,
      anon_sym_layout,
    ACTIONS(33), 1,
      anon_sym_widgets,
    ACTIONS(35), 1,
      anon_sym_strings,
    ACTIONS(37), 1,
      anon_sym_styles,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_object,
    STATE(97), 1,
      sym_child_annotation,
    STATE(185), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(3), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(51), 12,
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
  [279] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_accessibility,
    ACTIONS(19), 1,
      anon_sym_setters,
    ACTIONS(21), 1,
      anon_sym_responses,
    ACTIONS(23), 1,
      anon_sym_items,
    ACTIONS(25), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(27), 1,
      anon_sym_patterns,
    ACTIONS(29), 1,
      anon_sym_suffixes,
    ACTIONS(31), 1,
      anon_sym_layout,
    ACTIONS(33), 1,
      anon_sym_widgets,
    ACTIONS(35), 1,
      anon_sym_strings,
    ACTIONS(37), 1,
      anon_sym_styles,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_object,
    STATE(97), 1,
      sym_child_annotation,
    STATE(185), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(3), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(51), 12,
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
  [372] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_accessibility,
    ACTIONS(19), 1,
      anon_sym_setters,
    ACTIONS(21), 1,
      anon_sym_responses,
    ACTIONS(23), 1,
      anon_sym_items,
    ACTIONS(25), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(27), 1,
      anon_sym_patterns,
    ACTIONS(29), 1,
      anon_sym_suffixes,
    ACTIONS(31), 1,
      anon_sym_layout,
    ACTIONS(33), 1,
      anon_sym_widgets,
    ACTIONS(35), 1,
      anon_sym_strings,
    ACTIONS(37), 1,
      anon_sym_styles,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_object,
    STATE(97), 1,
      sym_child_annotation,
    STATE(185), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(51), 12,
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
  [465] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      sym_ident,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(98), 1,
      anon_sym__,
    ACTIONS(100), 1,
      anon_sym_C_,
    ACTIONS(102), 1,
      anon_sym_bind,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_quoted,
    STATE(164), 1,
      sym_number,
    STATE(217), 1,
      sym_name,
    STATE(262), 1,
      sym_type_name,
    STATE(327), 1,
      sym_object,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(325), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(326), 3,
      sym_value,
      sym_binding,
      sym_object_value,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [541] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(164), 1,
      sym_number,
    STATE(168), 1,
      sym_quoted,
    STATE(365), 1,
      sym_expression,
    STATE(101), 2,
      sym_literal,
      sym_closure_expression,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [597] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_closure_expression_repeat1,
    STATE(164), 1,
      sym_number,
    STATE(168), 1,
      sym_quoted,
    STATE(365), 1,
      sym_expression,
    STATE(101), 2,
      sym_literal,
      sym_closure_expression,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [653] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      aux_sym_number_literal_token1,
    ACTIONS(140), 1,
      anon_sym_typeof,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(146), 1,
      aux_sym_number_token2,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_closure_expression_repeat1,
    STATE(164), 1,
      sym_number,
    STATE(168), 1,
      sym_quoted,
    STATE(365), 1,
      sym_expression,
    STATE(101), 2,
      sym_literal,
      sym_closure_expression,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [709] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(98), 1,
      anon_sym__,
    ACTIONS(100), 1,
      anon_sym_C_,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_ident,
    STATE(88), 1,
      sym_quoted,
    STATE(164), 1,
      sym_number,
    STATE(371), 1,
      sym_value,
    STATE(325), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [760] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(98), 1,
      anon_sym__,
    ACTIONS(100), 1,
      anon_sym_C_,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_ident,
    STATE(88), 1,
      sym_quoted,
    STATE(164), 1,
      sym_number,
    STATE(346), 1,
      sym_value,
    STATE(325), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [811] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(98), 1,
      anon_sym__,
    ACTIONS(100), 1,
      anon_sym_C_,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_ident,
    STATE(88), 1,
      sym_quoted,
    STATE(164), 1,
      sym_number,
    STATE(315), 1,
      sym_value,
    STATE(325), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [862] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    STATE(164), 1,
      sym_number,
    STATE(168), 1,
      sym_quoted,
    STATE(343), 1,
      sym_expression,
    STATE(101), 2,
      sym_literal,
      sym_closure_expression,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [912] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_using,
    ACTIONS(161), 1,
      anon_sym_template,
    ACTIONS(163), 1,
      anon_sym_menu,
    STATE(217), 1,
      sym_name,
    STATE(262), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(99), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(57), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [958] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_number_literal_token1,
    ACTIONS(96), 1,
      anon_sym_typeof,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    STATE(164), 1,
      sym_number,
    STATE(168), 1,
      sym_quoted,
    STATE(321), 1,
      sym_expression,
    STATE(101), 2,
      sym_literal,
      sym_closure_expression,
    STATE(163), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(165), 13,
      sym_ident,
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
  [1032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(169), 13,
      sym_ident,
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
  [1056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(173), 13,
      sym_ident,
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
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(177), 13,
      sym_ident,
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
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(181), 13,
      sym_ident,
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
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(185), 13,
      sym_ident,
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
  [1152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(189), 13,
      sym_ident,
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
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(193), 13,
      sym_ident,
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
  [1200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(197), 13,
      sym_ident,
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
  [1224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(201), 13,
      sym_ident,
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
  [1248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(205), 13,
      sym_ident,
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
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(209), 13,
      sym_ident,
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
  [1296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(213), 13,
      sym_ident,
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
  [1320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(217), 13,
      sym_ident,
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
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(221), 13,
      sym_ident,
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
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(225), 13,
      sym_ident,
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
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(229), 13,
      sym_ident,
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
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(233), 13,
      sym_ident,
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
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(237), 13,
      sym_ident,
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
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(241), 13,
      sym_ident,
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
  [1488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(245), 13,
      sym_ident,
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
  [1512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(249), 13,
      sym_ident,
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
  [1536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(253), 13,
      sym_ident,
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
  [1560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(257), 13,
      sym_ident,
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
  [1584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(261), 13,
      sym_ident,
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
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(265), 13,
      sym_ident,
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
  [1632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(269), 13,
      sym_ident,
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
  [1656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(273), 13,
      sym_ident,
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
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(277), 13,
      sym_ident,
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
  [1704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(281), 13,
      sym_ident,
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
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(285), 13,
      sym_ident,
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
  [1752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(289), 13,
      sym_ident,
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
  [1776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(293), 13,
      sym_ident,
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
  [1800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(297), 13,
      sym_ident,
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
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(301), 13,
      sym_ident,
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
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(305), 13,
      sym_ident,
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
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(309), 13,
      sym_ident,
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
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(313), 13,
      sym_ident,
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
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(317), 13,
      sym_ident,
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
  [1944] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      sym_ident,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      anon_sym_template,
    ACTIONS(332), 1,
      anon_sym_menu,
    STATE(217), 1,
      sym_name,
    STATE(262), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1983] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_template,
    ACTIONS(163), 1,
      anon_sym_menu,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_name,
    STATE(262), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2022] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2052] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2082] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(58), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2112] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2142] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_ident,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(358), 1,
      anon_sym__,
    ACTIONS(361), 1,
      anon_sym_C_,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(88), 1,
      sym_quoted,
    STATE(118), 1,
      sym_string_value,
    STATE(119), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2210] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(66), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(73), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2270] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2300] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(69), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2360] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2390] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2420] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(59), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2450] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym__,
    ACTIONS(100), 1,
      anon_sym_C_,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      sym_ident,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(88), 1,
      sym_quoted,
    STATE(118), 1,
      sym_string_value,
    STATE(119), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2488] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(68), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2548] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_section,
    ACTIONS(404), 1,
      anon_sym_submenu,
    ACTIONS(407), 1,
      anon_sym_item,
    STATE(75), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2578] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym__,
    ACTIONS(100), 1,
      anon_sym_C_,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      sym_ident,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(88), 1,
      sym_quoted,
    STATE(118), 1,
      sym_string_value,
    STATE(119), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2616] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_section,
    ACTIONS(343), 1,
      anon_sym_submenu,
    ACTIONS(345), 1,
      anon_sym_item,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(70), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2646] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    STATE(79), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(88), 1,
      sym_quoted,
    STATE(141), 1,
      sym_string_value,
    STATE(142), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2681] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(88), 1,
      sym_quoted,
    STATE(141), 1,
      sym_string_value,
    STATE(142), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    ACTIONS(424), 1,
      anon_sym__,
    ACTIONS(427), 1,
      anon_sym_C_,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(88), 1,
      sym_quoted,
    STATE(141), 1,
      sym_string_value,
    STATE(142), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 3,
      sym_ident,
      anon_sym_typeof,
      aux_sym_number_token1,
    ACTIONS(135), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_number_literal_token1,
      aux_sym_number_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2769] = 7,
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
    STATE(86), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(238), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(451), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    STATE(83), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(238), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(238), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(83), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(238), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2873] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(83), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(238), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(463), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(467), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2933] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_quoted,
    STATE(366), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2962] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_quoted,
    STATE(287), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(475), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3008] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_quoted,
    STATE(306), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(481), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(485), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(489), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3088] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_quoted,
    STATE(372), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3117] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_ident,
    STATE(22), 1,
      sym_object,
    STATE(217), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_as,
    ACTIONS(497), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(113), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_using,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(99), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(508), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3184] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    STATE(88), 1,
      sym_quoted,
    STATE(290), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_as,
    ACTIONS(510), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(111), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_ident,
    STATE(217), 1,
      sym_name,
    STATE(283), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_ident,
    ACTIONS(514), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(109), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(516), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_ident,
    STATE(217), 1,
      sym_name,
    STATE(342), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3298] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    STATE(88), 1,
      sym_quoted,
    STATE(361), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    STATE(88), 1,
      sym_quoted,
    STATE(333), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3350] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_ident,
    STATE(217), 1,
      sym_name,
    STATE(265), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    STATE(88), 1,
      sym_quoted,
    STATE(294), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_ident,
    ACTIONS(520), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(116), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(516), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_as,
    ACTIONS(522), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(98), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_as,
    ACTIONS(524), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(113), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3460] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_ident,
    STATE(217), 1,
      sym_name,
    STATE(356), 1,
      sym_namespace,
    STATE(357), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      anon_sym_as,
    ACTIONS(526), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(113), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_ident,
    STATE(217), 1,
      sym_name,
    STATE(304), 1,
      sym_type_name,
    STATE(356), 1,
      sym_namespace,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3528] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_C_,
    STATE(88), 1,
      sym_quoted,
    STATE(122), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_ident,
    ACTIONS(536), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(116), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(538), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3574] = 8,
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
    STATE(134), 1,
      sym_quoted,
    STATE(136), 2,
      sym_quoted_literal,
      sym_translated,
  [3600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(551), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(553), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(555), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_ident,
    ACTIONS(561), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(563), 1,
      anon_sym_action,
    STATE(319), 1,
      sym_ext_response,
    STATE(351), 3,
      sym_child_internal,
      sym_child_type,
      sym_child_extension,
  [3653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(565), 5,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_EQ_GT,
      anon_sym_GT,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(573), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(477), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3713] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [3735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(579), 4,
      anon_sym_using,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3791] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_ext_styles_repeat1,
    STATE(225), 1,
      sym_ext_styles_class,
    STATE(227), 1,
      sym_quoted,
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(465), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(487), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3841] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(469), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(491), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3913] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [3935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(483), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(589), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
  [3963] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    ACTIONS(596), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [3985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 6,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(601), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(605), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [4025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [4047] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_ext_styles_repeat1,
    STATE(225), 1,
      sym_ext_styles_class,
    STATE(227), 1,
      sym_quoted,
  [4069] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(263), 1,
      aux_sym_flags_repeat1,
    ACTIONS(565), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4089] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_SQUOTE,
    STATE(147), 1,
      aux_sym_ext_styles_repeat1,
    STATE(225), 1,
      sym_ext_styles_class,
    STATE(227), 1,
      sym_quoted,
  [4111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(228), 1,
      sym_ext_file_filter_item,
    STATE(233), 1,
      sym_quoted,
  [4133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(629), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(651), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(685), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(691), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(177), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(177), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(174), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    ACTIONS(719), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(177), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(177), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(175), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(177), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(178), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(740), 1,
      anon_sym_COLON_COLON,
    ACTIONS(742), 1,
      anon_sym_EQ_GT,
    ACTIONS(736), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(182), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(748), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(756), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4692] = 4,
    ACTIONS(767), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(762), 2,
      sym_string,
      sym_escape_sequence,
    ACTIONS(765), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(773), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4763] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(775), 2,
      sym_string,
      sym_escape_sequence,
  [4777] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(775), 2,
      sym_string,
      sym_escape_sequence,
  [4791] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
    STATE(246), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(779), 2,
      sym_string,
      sym_escape_sequence,
  [4805] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(783), 2,
      sym_string,
      sym_escape_sequence,
  [4819] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(785), 2,
      sym_string,
      sym_escape_sequence,
  [4833] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(789), 2,
      sym_string,
      sym_escape_sequence,
  [4847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_ident,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(242), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    STATE(308), 1,
      sym_version,
    STATE(345), 1,
      sym_number,
  [4877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_ident,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_ext_layout_repeat1,
    STATE(269), 1,
      sym_ext_layout_prop,
  [4903] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SQUOTE,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(775), 2,
      sym_string,
      sym_escape_sequence,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_ident,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(267), 1,
      sym_ext_size_group_widget,
  [4943] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(775), 2,
      sym_string,
      sym_escape_sequence,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4967] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(807), 2,
      sym_string,
      sym_escape_sequence,
  [4981] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(811), 2,
      sym_string,
      sym_escape_sequence,
  [4995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_ident,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    STATE(242), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_ident,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_ext_layout_repeat1,
    STATE(269), 1,
      sym_ext_layout_prop,
  [5045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_ident,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(276), 1,
      sym_ext_adw_message_dialog_response,
  [5061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_ident,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(215), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_ident,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(230), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(267), 1,
      sym_ext_size_group_widget,
  [5111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_ident,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      aux_sym_ext_layout_repeat1,
    STATE(269), 1,
      sym_ext_layout_prop,
  [5127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(836), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_ident,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(276), 1,
      sym_ext_adw_message_dialog_response,
  [5155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(846), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_ident,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(267), 1,
      sym_ext_size_group_widget,
  [5203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_ident,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    STATE(254), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(242), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_ident,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(249), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_ident,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(276), 1,
      sym_ext_adw_message_dialog_response,
  [5361] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(775), 2,
      sym_string,
      sym_escape_sequence,
  [5375] = 4,
    ACTIONS(767), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    STATE(192), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(775), 2,
      sym_string,
      sym_escape_sequence,
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_ident,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(251), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(204), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(251), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(253), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    STATE(253), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 3,
      anon_sym_SEMI,
      anon_sym_after,
      anon_sym_swapped,
  [5498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(328), 1,
      sym_quoted,
  [5511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym_quoted,
  [5524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym_quoted,
  [5537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      sym_quoted,
  [5550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym_ident,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_object_content,
  [5581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    STATE(273), 1,
      aux_sym_flags_repeat1,
  [5594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_object_content,
  [5607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_object_content,
  [5620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 3,
      sym_ident,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [5629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(905), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_number_token2,
    STATE(194), 1,
      sym_number,
  [5653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(909), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 3,
      sym_ident,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      sym_quoted,
  [5686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(271), 1,
      sym_quoted,
  [5699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    STATE(273), 1,
      aux_sym_flags_repeat1,
  [5712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(263), 1,
      aux_sym_flags_repeat1,
  [5725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_ident,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    ACTIONS(924), 1,
      anon_sym_default,
  [5738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(926), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
  [5767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_ident,
    STATE(205), 1,
      sym_namespace,
  [5777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_number_token2,
    ACTIONS(938), 1,
      aux_sym_number_token1,
  [5787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    ACTIONS(942), 1,
      anon_sym_LPAREN,
  [5797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_ident,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
  [5807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_object_content,
  [5817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_ident,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
  [5827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      anon_sym_COMMA,
  [5853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_ident,
    STATE(222), 1,
      sym_name,
  [5863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_ident,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
  [5873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    ACTIONS(964), 1,
      anon_sym_COMMA,
  [5883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_ident,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
  [5893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_ident,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
  [5903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_object_content,
  [5913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    ACTIONS(976), 1,
      anon_sym_COMMA,
  [5923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
  [5933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_object_content,
  [5959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym_ident,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
  [5985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
  [5995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    ACTIONS(995), 1,
      anon_sym_default,
  [6005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_object_content,
  [6015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 2,
      sym_ident,
      anon_sym_RBRACK,
  [6023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(999), 1,
      anon_sym_COMMA,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
  [6040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
  [6047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LBRACK,
  [6054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_LBRACE,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LBRACK,
  [6068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [6075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LBRACK,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LBRACE,
  [6089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_SEMI,
  [6096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LBRACE,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RBRACK,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_COLON,
  [6117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
  [6124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_COLON,
  [6131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_ident,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_EQ_GT,
  [6152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_DOT,
  [6159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_SEMI,
  [6166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
  [6173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_SEMI,
  [6180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [6187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_LT,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_RBRACK,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym_ident,
  [6208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_ident,
  [6215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_SEMI,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_DOLLAR,
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LBRACK,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_LBRACE,
  [6257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_LBRACE,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
  [6271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_response,
  [6278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_GT,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_ident,
  [6299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_SEMI,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_COLON,
  [6320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_ident,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_ident,
  [6341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_RBRACK,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_DOLLAR,
  [6355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_RBRACK,
  [6369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LBRACK,
  [6376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_DOT,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_GT,
  [6390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_COLON,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_EQ,
  [6404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_LBRACK,
  [6411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_LBRACK,
  [6432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
  [6446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
  [6453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_COLON,
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
  [6467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_ident,
  [6481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
  [6488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
  [6495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
  [6502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_LBRACE,
  [6509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
  [6516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_LPAREN,
  [6523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      ts_builtin_sym_end,
  [6530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_LBRACE,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LT,
  [6544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_COLON,
  [6551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
  [6558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_ident,
  [6565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 372,
  [SMALL_STATE(7)] = 465,
  [SMALL_STATE(8)] = 541,
  [SMALL_STATE(9)] = 597,
  [SMALL_STATE(10)] = 653,
  [SMALL_STATE(11)] = 709,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 811,
  [SMALL_STATE(14)] = 862,
  [SMALL_STATE(15)] = 912,
  [SMALL_STATE(16)] = 958,
  [SMALL_STATE(17)] = 1008,
  [SMALL_STATE(18)] = 1032,
  [SMALL_STATE(19)] = 1056,
  [SMALL_STATE(20)] = 1080,
  [SMALL_STATE(21)] = 1104,
  [SMALL_STATE(22)] = 1128,
  [SMALL_STATE(23)] = 1152,
  [SMALL_STATE(24)] = 1176,
  [SMALL_STATE(25)] = 1200,
  [SMALL_STATE(26)] = 1224,
  [SMALL_STATE(27)] = 1248,
  [SMALL_STATE(28)] = 1272,
  [SMALL_STATE(29)] = 1296,
  [SMALL_STATE(30)] = 1320,
  [SMALL_STATE(31)] = 1344,
  [SMALL_STATE(32)] = 1368,
  [SMALL_STATE(33)] = 1392,
  [SMALL_STATE(34)] = 1416,
  [SMALL_STATE(35)] = 1440,
  [SMALL_STATE(36)] = 1464,
  [SMALL_STATE(37)] = 1488,
  [SMALL_STATE(38)] = 1512,
  [SMALL_STATE(39)] = 1536,
  [SMALL_STATE(40)] = 1560,
  [SMALL_STATE(41)] = 1584,
  [SMALL_STATE(42)] = 1608,
  [SMALL_STATE(43)] = 1632,
  [SMALL_STATE(44)] = 1656,
  [SMALL_STATE(45)] = 1680,
  [SMALL_STATE(46)] = 1704,
  [SMALL_STATE(47)] = 1728,
  [SMALL_STATE(48)] = 1752,
  [SMALL_STATE(49)] = 1776,
  [SMALL_STATE(50)] = 1800,
  [SMALL_STATE(51)] = 1824,
  [SMALL_STATE(52)] = 1848,
  [SMALL_STATE(53)] = 1872,
  [SMALL_STATE(54)] = 1896,
  [SMALL_STATE(55)] = 1920,
  [SMALL_STATE(56)] = 1944,
  [SMALL_STATE(57)] = 1983,
  [SMALL_STATE(58)] = 2022,
  [SMALL_STATE(59)] = 2052,
  [SMALL_STATE(60)] = 2082,
  [SMALL_STATE(61)] = 2112,
  [SMALL_STATE(62)] = 2142,
  [SMALL_STATE(63)] = 2180,
  [SMALL_STATE(64)] = 2210,
  [SMALL_STATE(65)] = 2240,
  [SMALL_STATE(66)] = 2270,
  [SMALL_STATE(67)] = 2300,
  [SMALL_STATE(68)] = 2330,
  [SMALL_STATE(69)] = 2360,
  [SMALL_STATE(70)] = 2390,
  [SMALL_STATE(71)] = 2420,
  [SMALL_STATE(72)] = 2450,
  [SMALL_STATE(73)] = 2488,
  [SMALL_STATE(74)] = 2518,
  [SMALL_STATE(75)] = 2548,
  [SMALL_STATE(76)] = 2578,
  [SMALL_STATE(77)] = 2616,
  [SMALL_STATE(78)] = 2646,
  [SMALL_STATE(79)] = 2681,
  [SMALL_STATE(80)] = 2716,
  [SMALL_STATE(81)] = 2751,
  [SMALL_STATE(82)] = 2769,
  [SMALL_STATE(83)] = 2795,
  [SMALL_STATE(84)] = 2821,
  [SMALL_STATE(85)] = 2847,
  [SMALL_STATE(86)] = 2873,
  [SMALL_STATE(87)] = 2899,
  [SMALL_STATE(88)] = 2916,
  [SMALL_STATE(89)] = 2933,
  [SMALL_STATE(90)] = 2962,
  [SMALL_STATE(91)] = 2991,
  [SMALL_STATE(92)] = 3008,
  [SMALL_STATE(93)] = 3037,
  [SMALL_STATE(94)] = 3054,
  [SMALL_STATE(95)] = 3071,
  [SMALL_STATE(96)] = 3088,
  [SMALL_STATE(97)] = 3117,
  [SMALL_STATE(98)] = 3144,
  [SMALL_STATE(99)] = 3164,
  [SMALL_STATE(100)] = 3184,
  [SMALL_STATE(101)] = 3210,
  [SMALL_STATE(102)] = 3230,
  [SMALL_STATE(103)] = 3254,
  [SMALL_STATE(104)] = 3274,
  [SMALL_STATE(105)] = 3298,
  [SMALL_STATE(106)] = 3324,
  [SMALL_STATE(107)] = 3350,
  [SMALL_STATE(108)] = 3374,
  [SMALL_STATE(109)] = 3400,
  [SMALL_STATE(110)] = 3420,
  [SMALL_STATE(111)] = 3440,
  [SMALL_STATE(112)] = 3460,
  [SMALL_STATE(113)] = 3484,
  [SMALL_STATE(114)] = 3504,
  [SMALL_STATE(115)] = 3528,
  [SMALL_STATE(116)] = 3554,
  [SMALL_STATE(117)] = 3574,
  [SMALL_STATE(118)] = 3600,
  [SMALL_STATE(119)] = 3615,
  [SMALL_STATE(120)] = 3632,
  [SMALL_STATE(121)] = 3653,
  [SMALL_STATE(122)] = 3670,
  [SMALL_STATE(123)] = 3685,
  [SMALL_STATE(124)] = 3699,
  [SMALL_STATE(125)] = 3713,
  [SMALL_STATE(126)] = 3735,
  [SMALL_STATE(127)] = 3749,
  [SMALL_STATE(128)] = 3763,
  [SMALL_STATE(129)] = 3777,
  [SMALL_STATE(130)] = 3791,
  [SMALL_STATE(131)] = 3813,
  [SMALL_STATE(132)] = 3827,
  [SMALL_STATE(133)] = 3841,
  [SMALL_STATE(134)] = 3863,
  [SMALL_STATE(135)] = 3877,
  [SMALL_STATE(136)] = 3899,
  [SMALL_STATE(137)] = 3913,
  [SMALL_STATE(138)] = 3935,
  [SMALL_STATE(139)] = 3949,
  [SMALL_STATE(140)] = 3963,
  [SMALL_STATE(141)] = 3985,
  [SMALL_STATE(142)] = 3997,
  [SMALL_STATE(143)] = 4011,
  [SMALL_STATE(144)] = 4025,
  [SMALL_STATE(145)] = 4047,
  [SMALL_STATE(146)] = 4069,
  [SMALL_STATE(147)] = 4089,
  [SMALL_STATE(148)] = 4111,
  [SMALL_STATE(149)] = 4133,
  [SMALL_STATE(150)] = 4146,
  [SMALL_STATE(151)] = 4159,
  [SMALL_STATE(152)] = 4170,
  [SMALL_STATE(153)] = 4183,
  [SMALL_STATE(154)] = 4196,
  [SMALL_STATE(155)] = 4209,
  [SMALL_STATE(156)] = 4222,
  [SMALL_STATE(157)] = 4235,
  [SMALL_STATE(158)] = 4246,
  [SMALL_STATE(159)] = 4259,
  [SMALL_STATE(160)] = 4272,
  [SMALL_STATE(161)] = 4285,
  [SMALL_STATE(162)] = 4296,
  [SMALL_STATE(163)] = 4309,
  [SMALL_STATE(164)] = 4320,
  [SMALL_STATE(165)] = 4331,
  [SMALL_STATE(166)] = 4344,
  [SMALL_STATE(167)] = 4357,
  [SMALL_STATE(168)] = 4370,
  [SMALL_STATE(169)] = 4381,
  [SMALL_STATE(170)] = 4394,
  [SMALL_STATE(171)] = 4407,
  [SMALL_STATE(172)] = 4420,
  [SMALL_STATE(173)] = 4433,
  [SMALL_STATE(174)] = 4446,
  [SMALL_STATE(175)] = 4461,
  [SMALL_STATE(176)] = 4476,
  [SMALL_STATE(177)] = 4491,
  [SMALL_STATE(178)] = 4506,
  [SMALL_STATE(179)] = 4521,
  [SMALL_STATE(180)] = 4536,
  [SMALL_STATE(181)] = 4547,
  [SMALL_STATE(182)] = 4558,
  [SMALL_STATE(183)] = 4573,
  [SMALL_STATE(184)] = 4588,
  [SMALL_STATE(185)] = 4599,
  [SMALL_STATE(186)] = 4616,
  [SMALL_STATE(187)] = 4631,
  [SMALL_STATE(188)] = 4644,
  [SMALL_STATE(189)] = 4655,
  [SMALL_STATE(190)] = 4666,
  [SMALL_STATE(191)] = 4679,
  [SMALL_STATE(192)] = 4692,
  [SMALL_STATE(193)] = 4707,
  [SMALL_STATE(194)] = 4718,
  [SMALL_STATE(195)] = 4729,
  [SMALL_STATE(196)] = 4742,
  [SMALL_STATE(197)] = 4753,
  [SMALL_STATE(198)] = 4763,
  [SMALL_STATE(199)] = 4777,
  [SMALL_STATE(200)] = 4791,
  [SMALL_STATE(201)] = 4805,
  [SMALL_STATE(202)] = 4819,
  [SMALL_STATE(203)] = 4833,
  [SMALL_STATE(204)] = 4847,
  [SMALL_STATE(205)] = 4861,
  [SMALL_STATE(206)] = 4877,
  [SMALL_STATE(207)] = 4887,
  [SMALL_STATE(208)] = 4903,
  [SMALL_STATE(209)] = 4917,
  [SMALL_STATE(210)] = 4927,
  [SMALL_STATE(211)] = 4943,
  [SMALL_STATE(212)] = 4957,
  [SMALL_STATE(213)] = 4967,
  [SMALL_STATE(214)] = 4981,
  [SMALL_STATE(215)] = 4995,
  [SMALL_STATE(216)] = 5009,
  [SMALL_STATE(217)] = 5019,
  [SMALL_STATE(218)] = 5029,
  [SMALL_STATE(219)] = 5045,
  [SMALL_STATE(220)] = 5061,
  [SMALL_STATE(221)] = 5075,
  [SMALL_STATE(222)] = 5085,
  [SMALL_STATE(223)] = 5095,
  [SMALL_STATE(224)] = 5111,
  [SMALL_STATE(225)] = 5127,
  [SMALL_STATE(226)] = 5139,
  [SMALL_STATE(227)] = 5155,
  [SMALL_STATE(228)] = 5165,
  [SMALL_STATE(229)] = 5177,
  [SMALL_STATE(230)] = 5187,
  [SMALL_STATE(231)] = 5203,
  [SMALL_STATE(232)] = 5213,
  [SMALL_STATE(233)] = 5223,
  [SMALL_STATE(234)] = 5233,
  [SMALL_STATE(235)] = 5247,
  [SMALL_STATE(236)] = 5257,
  [SMALL_STATE(237)] = 5267,
  [SMALL_STATE(238)] = 5277,
  [SMALL_STATE(239)] = 5287,
  [SMALL_STATE(240)] = 5297,
  [SMALL_STATE(241)] = 5307,
  [SMALL_STATE(242)] = 5317,
  [SMALL_STATE(243)] = 5331,
  [SMALL_STATE(244)] = 5345,
  [SMALL_STATE(245)] = 5361,
  [SMALL_STATE(246)] = 5375,
  [SMALL_STATE(247)] = 5389,
  [SMALL_STATE(248)] = 5399,
  [SMALL_STATE(249)] = 5409,
  [SMALL_STATE(250)] = 5423,
  [SMALL_STATE(251)] = 5437,
  [SMALL_STATE(252)] = 5451,
  [SMALL_STATE(253)] = 5461,
  [SMALL_STATE(254)] = 5475,
  [SMALL_STATE(255)] = 5489,
  [SMALL_STATE(256)] = 5498,
  [SMALL_STATE(257)] = 5511,
  [SMALL_STATE(258)] = 5524,
  [SMALL_STATE(259)] = 5537,
  [SMALL_STATE(260)] = 5550,
  [SMALL_STATE(261)] = 5559,
  [SMALL_STATE(262)] = 5568,
  [SMALL_STATE(263)] = 5581,
  [SMALL_STATE(264)] = 5594,
  [SMALL_STATE(265)] = 5607,
  [SMALL_STATE(266)] = 5620,
  [SMALL_STATE(267)] = 5629,
  [SMALL_STATE(268)] = 5640,
  [SMALL_STATE(269)] = 5653,
  [SMALL_STATE(270)] = 5664,
  [SMALL_STATE(271)] = 5673,
  [SMALL_STATE(272)] = 5686,
  [SMALL_STATE(273)] = 5699,
  [SMALL_STATE(274)] = 5712,
  [SMALL_STATE(275)] = 5725,
  [SMALL_STATE(276)] = 5738,
  [SMALL_STATE(277)] = 5749,
  [SMALL_STATE(278)] = 5757,
  [SMALL_STATE(279)] = 5767,
  [SMALL_STATE(280)] = 5777,
  [SMALL_STATE(281)] = 5787,
  [SMALL_STATE(282)] = 5797,
  [SMALL_STATE(283)] = 5807,
  [SMALL_STATE(284)] = 5817,
  [SMALL_STATE(285)] = 5827,
  [SMALL_STATE(286)] = 5835,
  [SMALL_STATE(287)] = 5843,
  [SMALL_STATE(288)] = 5853,
  [SMALL_STATE(289)] = 5863,
  [SMALL_STATE(290)] = 5873,
  [SMALL_STATE(291)] = 5883,
  [SMALL_STATE(292)] = 5893,
  [SMALL_STATE(293)] = 5903,
  [SMALL_STATE(294)] = 5913,
  [SMALL_STATE(295)] = 5923,
  [SMALL_STATE(296)] = 5933,
  [SMALL_STATE(297)] = 5941,
  [SMALL_STATE(298)] = 5949,
  [SMALL_STATE(299)] = 5959,
  [SMALL_STATE(300)] = 5967,
  [SMALL_STATE(301)] = 5975,
  [SMALL_STATE(302)] = 5985,
  [SMALL_STATE(303)] = 5995,
  [SMALL_STATE(304)] = 6005,
  [SMALL_STATE(305)] = 6015,
  [SMALL_STATE(306)] = 6023,
  [SMALL_STATE(307)] = 6033,
  [SMALL_STATE(308)] = 6040,
  [SMALL_STATE(309)] = 6047,
  [SMALL_STATE(310)] = 6054,
  [SMALL_STATE(311)] = 6061,
  [SMALL_STATE(312)] = 6068,
  [SMALL_STATE(313)] = 6075,
  [SMALL_STATE(314)] = 6082,
  [SMALL_STATE(315)] = 6089,
  [SMALL_STATE(316)] = 6096,
  [SMALL_STATE(317)] = 6103,
  [SMALL_STATE(318)] = 6110,
  [SMALL_STATE(319)] = 6117,
  [SMALL_STATE(320)] = 6124,
  [SMALL_STATE(321)] = 6131,
  [SMALL_STATE(322)] = 6138,
  [SMALL_STATE(323)] = 6145,
  [SMALL_STATE(324)] = 6152,
  [SMALL_STATE(325)] = 6159,
  [SMALL_STATE(326)] = 6166,
  [SMALL_STATE(327)] = 6173,
  [SMALL_STATE(328)] = 6180,
  [SMALL_STATE(329)] = 6187,
  [SMALL_STATE(330)] = 6194,
  [SMALL_STATE(331)] = 6201,
  [SMALL_STATE(332)] = 6208,
  [SMALL_STATE(333)] = 6215,
  [SMALL_STATE(334)] = 6222,
  [SMALL_STATE(335)] = 6229,
  [SMALL_STATE(336)] = 6236,
  [SMALL_STATE(337)] = 6243,
  [SMALL_STATE(338)] = 6250,
  [SMALL_STATE(339)] = 6257,
  [SMALL_STATE(340)] = 6264,
  [SMALL_STATE(341)] = 6271,
  [SMALL_STATE(342)] = 6278,
  [SMALL_STATE(343)] = 6285,
  [SMALL_STATE(344)] = 6292,
  [SMALL_STATE(345)] = 6299,
  [SMALL_STATE(346)] = 6306,
  [SMALL_STATE(347)] = 6313,
  [SMALL_STATE(348)] = 6320,
  [SMALL_STATE(349)] = 6327,
  [SMALL_STATE(350)] = 6334,
  [SMALL_STATE(351)] = 6341,
  [SMALL_STATE(352)] = 6348,
  [SMALL_STATE(353)] = 6355,
  [SMALL_STATE(354)] = 6362,
  [SMALL_STATE(355)] = 6369,
  [SMALL_STATE(356)] = 6376,
  [SMALL_STATE(357)] = 6383,
  [SMALL_STATE(358)] = 6390,
  [SMALL_STATE(359)] = 6397,
  [SMALL_STATE(360)] = 6404,
  [SMALL_STATE(361)] = 6411,
  [SMALL_STATE(362)] = 6418,
  [SMALL_STATE(363)] = 6425,
  [SMALL_STATE(364)] = 6432,
  [SMALL_STATE(365)] = 6439,
  [SMALL_STATE(366)] = 6446,
  [SMALL_STATE(367)] = 6453,
  [SMALL_STATE(368)] = 6460,
  [SMALL_STATE(369)] = 6467,
  [SMALL_STATE(370)] = 6474,
  [SMALL_STATE(371)] = 6481,
  [SMALL_STATE(372)] = 6488,
  [SMALL_STATE(373)] = 6495,
  [SMALL_STATE(374)] = 6502,
  [SMALL_STATE(375)] = 6509,
  [SMALL_STATE(376)] = 6516,
  [SMALL_STATE(377)] = 6523,
  [SMALL_STATE(378)] = 6530,
  [SMALL_STATE(379)] = 6537,
  [SMALL_STATE(380)] = 6544,
  [SMALL_STATE(381)] = 6551,
  [SMALL_STATE(382)] = 6558,
  [SMALL_STATE(383)] = 6565,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(121),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(288),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(120),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(114),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(316),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(314),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(313),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(311),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(307),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(309),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(337),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(338),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(355),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(360),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(363),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(193),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(344),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(16),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(268),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(329),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(151),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(151),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(214),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(213),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 20),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 20),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 19),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 19),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 20),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 20),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 18),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 18),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 19),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 19),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 16),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 16),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 18),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 18),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 16),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 16),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(121),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(288),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(107),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(289),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(318),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(368),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(369),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(201),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(200),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(358),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(284),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(282),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(281),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(368),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(369),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(201),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(200),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(302),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(301),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(278),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, .production_id = 12),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 4, .production_id = 12),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_literal, 1, .production_id = 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_literal, 1, .production_id = 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 5, .production_id = 14),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 5, .production_id = 14),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(382),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(379),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2), SHIFT_REPEAT(143),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(201),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(200),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_item, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_literal, 1, .production_id = 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(201),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(200),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1, .production_id = 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(255),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 15),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 15),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_short, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, .production_id = 13),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 5),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(192),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2, .production_id = 8),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 1),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2), SHIFT_REPEAT(320),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2), SHIFT_REPEAT(266),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2), SHIFT_REPEAT(367),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_external, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles_class, 1, .production_id = 5),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_item, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_full, 3),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(380),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2), SHIFT_REPEAT(347),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2), SHIFT_REPEAT(324),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_flag, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, .production_id = 7),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widget, 1, .production_id = 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout_prop, 4, .production_id = 5),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2), SHIFT_REPEAT(350),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 3),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_setter, 6, .production_id = 17),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility_prop, 4, .production_id = 5),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 11),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 9), REDUCE(sym_ext_response, 4, .production_id = 10),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_type, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 9), REDUCE(sym_ext_response, 5, .production_id = 10),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 3),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
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
