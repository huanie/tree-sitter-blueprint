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
#define STATE_COUNT 391
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 14
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_using = 1,
  anon_sym_Gtk = 2,
  anon_sym_4_DOT0 = 3,
  anon_sym_SEMI = 4,
  sym_ident = 5,
  sym_base10 = 6,
  sym_base16 = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_SQUOTE = 9,
  sym_escape_sequence = 10,
  sym_comment = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_DOT = 14,
  anon_sym_DOLLAR = 15,
  anon_sym_COLON = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_EQ_GT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_after = 21,
  anon_sym_swapped = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_internal_DASHchild = 25,
  anon_sym_template = 26,
  aux_sym_number_literal_token1 = 27,
  anon_sym_typeof = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_PIPE = 31,
  anon_sym__ = 32,
  anon_sym_C_ = 33,
  anon_sym_bind = 34,
  anon_sym_COMMA = 35,
  anon_sym_as = 36,
  anon_sym_menu = 37,
  anon_sym_section = 38,
  anon_sym_submenu = 39,
  anon_sym_item = 40,
  anon_sym_accessibility = 41,
  anon_sym_condition = 42,
  anon_sym_setters = 43,
  anon_sym_responses = 44,
  anon_sym_destructive = 45,
  anon_sym_suggested = 46,
  anon_sym_disabled = 47,
  anon_sym_items = 48,
  anon_sym_mime_DASHtypes = 49,
  anon_sym_patterns = 50,
  anon_sym_suffixes = 51,
  anon_sym_layout = 52,
  anon_sym_marks = 53,
  anon_sym_mark = 54,
  anon_sym_DASH = 55,
  anon_sym_PLUS = 56,
  anon_sym_widgets = 57,
  anon_sym_strings = 58,
  anon_sym_styles = 59,
  anon_sym_action = 60,
  anon_sym_response = 61,
  anon_sym_EQ = 62,
  anon_sym_default = 63,
  sym_string = 64,
  sym_source_file = 65,
  sym_gtk_decl = 66,
  sym_using = 67,
  sym_namespace = 68,
  sym_version = 69,
  sym_number = 70,
  sym_quoted = 71,
  sym_object = 72,
  sym_object_content = 73,
  sym_type_name = 74,
  sym_type_name_full = 75,
  sym_name = 76,
  sym_type_name_external = 77,
  sym_type_name_short = 78,
  sym_property = 79,
  sym_signal = 80,
  sym_signal_flag = 81,
  sym_child = 82,
  sym_child_annotation = 83,
  sym_child_internal = 84,
  sym_template = 85,
  sym_value = 86,
  sym_literal = 87,
  sym_quoted_literal = 88,
  sym_number_literal = 89,
  sym_ident_literal = 90,
  sym_type_literal = 91,
  sym_flags = 92,
  sym_translated = 93,
  sym_binding = 94,
  sym_object_value = 95,
  sym_string_value = 96,
  sym_expression = 97,
  sym_lookup_expression = 98,
  sym_closure_expression = 99,
  sym_cast_expression = 100,
  sym_menu = 101,
  sym_menu_child = 102,
  sym_menu_section = 103,
  sym_menu_submenu = 104,
  sym_menu_item = 105,
  sym_menu_attribute = 106,
  sym_menu_item_shorthand = 107,
  sym_extension = 108,
  sym_ext_accessibility = 109,
  sym_ext_accessibility_prop = 110,
  sym_ext_adw_breakpoint = 111,
  sym_ext_adw_breakpoint_setter = 112,
  sym_ext_adw_message_dialog = 113,
  sym_ext_adw_message_dialog_response = 114,
  sym_ext_adw_message_dialog_flag = 115,
  sym_ext_combo_box_items = 116,
  sym_ext_combo_box_item = 117,
  sym_ext_file_filter_mime_types = 118,
  sym_ext_file_filter_patterns = 119,
  sym_ext_file_filter_suffixes = 120,
  sym_ext_file_filter_item = 121,
  sym_ext_layout = 122,
  sym_ext_layout_prop = 123,
  sym_ext_list_item_factory = 124,
  sym_ext_size_group_widgets = 125,
  sym_ext_size_group_widget = 126,
  sym_ext_string_list_strings = 127,
  sym_ext_string_list_item = 128,
  sym_ext_styles = 129,
  sym_ext_styles_class = 130,
  sym_child_extension = 131,
  sym_ext_response = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_source_file_repeat2 = 134,
  aux_sym_quoted_repeat1 = 135,
  aux_sym_object_content_repeat1 = 136,
  aux_sym_signal_repeat1 = 137,
  aux_sym_flags_repeat1 = 138,
  aux_sym_expression_repeat1 = 139,
  aux_sym_closure_expression_repeat1 = 140,
  aux_sym_menu_repeat1 = 141,
  aux_sym_menu_section_repeat1 = 142,
  aux_sym_menu_item_repeat1 = 143,
  aux_sym_ext_accessibility_repeat1 = 144,
  aux_sym_ext_adw_breakpoint_repeat1 = 145,
  aux_sym_ext_adw_message_dialog_repeat1 = 146,
  aux_sym_ext_adw_message_dialog_response_repeat1 = 147,
  aux_sym_ext_combo_box_items_repeat1 = 148,
  aux_sym_ext_file_filter_mime_types_repeat1 = 149,
  aux_sym_ext_layout_repeat1 = 150,
  aux_sym_ext_size_group_widgets_repeat1 = 151,
  aux_sym_ext_string_list_strings_repeat1 = 152,
  aux_sym_ext_styles_repeat1 = 153,
  anon_alias_sym_child_type = 154,
  anon_alias_sym_context = 155,
  anon_alias_sym_detail = 156,
  anon_alias_sym_first = 157,
  anon_alias_sym_handler = 158,
  anon_alias_sym_id = 159,
  anon_alias_sym_ident = 160,
  anon_alias_sym_internal_child = 161,
  anon_alias_sym_name = 162,
  anon_alias_sym_object = 163,
  anon_alias_sym_property = 164,
  anon_alias_sym_rest = 165,
  anon_alias_sym_string = 166,
  anon_alias_sym_value = 167,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_using] = "using",
  [anon_sym_Gtk] = "Gtk",
  [anon_sym_4_DOT0] = "4.0",
  [anon_sym_SEMI] = ";",
  [sym_ident] = "ident",
  [sym_base10] = "base10",
  [sym_base16] = "base16",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
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
  [sym_source_file] = "source_file",
  [sym_gtk_decl] = "gtk_decl",
  [sym_using] = "using",
  [sym_namespace] = "namespace",
  [sym_version] = "version",
  [sym_number] = "number",
  [sym_quoted] = "quoted",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_quoted_repeat1] = "quoted_repeat1",
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
  [anon_alias_sym_child_type] = "child_type",
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
  [anon_sym_Gtk] = anon_sym_Gtk,
  [anon_sym_4_DOT0] = anon_sym_4_DOT0,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_ident] = sym_ident,
  [sym_base10] = sym_base10,
  [sym_base16] = sym_base16,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
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
  [sym_source_file] = sym_source_file,
  [sym_gtk_decl] = sym_gtk_decl,
  [sym_using] = sym_using,
  [sym_namespace] = sym_namespace,
  [sym_version] = sym_version,
  [sym_number] = sym_number,
  [sym_quoted] = sym_quoted,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_quoted_repeat1] = aux_sym_quoted_repeat1,
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
  [anon_alias_sym_child_type] = anon_alias_sym_child_type,
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
  [anon_sym_Gtk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4_DOT0] = {
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
  [sym_base10] = {
    .visible = true,
    .named = true,
  },
  [sym_base16] = {
    .visible = true,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_gtk_decl] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_repeat1] = {
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
  [anon_alias_sym_child_type] = {
    .visible = true,
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
    [1] = anon_alias_sym_child_type,
  },
  [4] = {
    [1] = anon_alias_sym_internal_child,
  },
  [5] = {
    [0] = anon_alias_sym_id,
  },
  [6] = {
    [0] = anon_alias_sym_name,
  },
  [7] = {
    [0] = anon_alias_sym_ident,
  },
  [8] = {
    [0] = anon_alias_sym_first,
  },
  [9] = {
    [1] = anon_alias_sym_value,
  },
  [10] = {
    [3] = anon_alias_sym_id,
  },
  [11] = {
    [3] = anon_alias_sym_name,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 69,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 61,
  [76] = 64,
  [77] = 68,
  [78] = 60,
  [79] = 67,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 91,
  [99] = 92,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 103,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 105,
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
  [123] = 123,
  [124] = 43,
  [125] = 125,
  [126] = 97,
  [127] = 94,
  [128] = 38,
  [129] = 129,
  [130] = 130,
  [131] = 89,
  [132] = 93,
  [133] = 96,
  [134] = 40,
  [135] = 41,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 90,
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
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 94,
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
  [176] = 97,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 89,
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
  [210] = 210,
  [211] = 211,
  [212] = 168,
  [213] = 170,
  [214] = 172,
  [215] = 173,
  [216] = 175,
  [217] = 217,
  [218] = 210,
  [219] = 209,
  [220] = 220,
  [221] = 196,
  [222] = 177,
  [223] = 211,
  [224] = 224,
  [225] = 225,
  [226] = 209,
  [227] = 227,
  [228] = 224,
  [229] = 210,
  [230] = 230,
  [231] = 211,
  [232] = 232,
  [233] = 189,
  [234] = 224,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 181,
  [241] = 241,
  [242] = 182,
  [243] = 243,
  [244] = 161,
  [245] = 184,
  [246] = 246,
  [247] = 247,
  [248] = 159,
  [249] = 154,
  [250] = 250,
  [251] = 155,
  [252] = 252,
  [253] = 241,
  [254] = 195,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 261,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 271,
  [273] = 273,
  [274] = 274,
  [275] = 262,
  [276] = 276,
  [277] = 270,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
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
  [294] = 280,
  [295] = 295,
  [296] = 296,
  [297] = 287,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 300,
  [304] = 284,
  [305] = 305,
  [306] = 283,
  [307] = 156,
  [308] = 282,
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
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 356,
  [369] = 354,
  [370] = 370,
  [371] = 345,
  [372] = 372,
  [373] = 372,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 324,
  [382] = 323,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 340,
  [388] = 353,
  [389] = 389,
  [390] = 362,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(234);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == '4') ADVANCE(400);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead == '=') ADVANCE(488);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == '[') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
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
          lookahead == 'u') ADVANCE(405);
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
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(47)
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
          lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '/') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == '4') ADVANCE(400);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead == '=') ADVANCE(488);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == '[') ADVANCE(421);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(427);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(427);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '_') ADVANCE(434);
      if (lookahead == 'b') ADVANCE(307);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '_') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(427);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '_') ADVANCE(434);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == '=') ADVANCE(487);
      if (lookahead == '[') ADVANCE(421);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'w') ADVANCE(301);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(407);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(238);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(416);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(435);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(428);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 128:
      if (lookahead == 'k') ADVANCE(237);
      END_STATE();
    case 129:
      if (lookahead == 'k') ADVANCE(474);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 218:
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(450);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 221:
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(402);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(407);
      if (lookahead == '\r') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(408);
      END_STATE();
    case 225:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') SKIP(231)
      END_STATE();
    case 226:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') SKIP(231)
      if (lookahead == '\r') SKIP(225)
      END_STATE();
    case 227:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') SKIP(232)
      END_STATE();
    case 228:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') SKIP(232)
      if (lookahead == '\r') SKIP(227)
      END_STATE();
    case 229:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') SKIP(233)
      END_STATE();
    case 230:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') SKIP(233)
      if (lookahead == '\r') SKIP(229)
      END_STATE();
    case 231:
      if (eof) ADVANCE(234);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(418);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(398);
      if (lookahead == '4') ADVANCE(400);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead == '=') ADVANCE(488);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == '[') ADVANCE(421);
      if (lookahead == '\\') SKIP(226)
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 232:
      if (eof) ADVANCE(234);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '4') ADVANCE(44);
      if (lookahead == '\\') SKIP(228)
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(232)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 233:
      if (eof) ADVANCE(234);
      if (lookahead == '$') ADVANCE(413);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '\\') SKIP(230)
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Gtk);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_4_DOT0);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_4_DOT0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(407);
      if (lookahead == '\r') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(224);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_destructive);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_destructive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_suggested);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_suggested);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(416);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead == '/') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(495);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '/') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(495);
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
  [15] = {.lex_state = 232},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 232},
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
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 233},
  [58] = {.lex_state = 233},
  [59] = {.lex_state = 233},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 232},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 233},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 41},
  [128] = {.lex_state = 233},
  [129] = {.lex_state = 232},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 233},
  [135] = {.lex_state = 233},
  [136] = {.lex_state = 47},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 232},
  [152] = {.lex_state = 233},
  [153] = {.lex_state = 233},
  [154] = {.lex_state = 45},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 45},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 45},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 45},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 233},
  [179] = {.lex_state = 233},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 233},
  [188] = {.lex_state = 233},
  [189] = {.lex_state = 45},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 46},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 46},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 46},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 27},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 46},
  [222] = {.lex_state = 46},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 27},
  [225] = {.lex_state = 36},
  [226] = {.lex_state = 27},
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 27},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 27},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 46},
  [234] = {.lex_state = 27},
  [235] = {.lex_state = 36},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 46},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 46},
  [243] = {.lex_state = 37},
  [244] = {.lex_state = 46},
  [245] = {.lex_state = 46},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 46},
  [249] = {.lex_state = 46},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 46},
  [255] = {.lex_state = 36},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 48},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 36},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 37},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 36},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 36},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 36},
  [290] = {.lex_state = 36},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 37},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 46},
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
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 36},
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
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 36},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 37},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 36},
  [377] = {.lex_state = 32},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 232},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_Gtk] = ACTIONS(1),
    [anon_sym_4_DOT0] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_base10] = ACTIONS(1),
    [sym_base16] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
  },
  [1] = {
    [sym_source_file] = STATE(384),
    [sym_gtk_decl] = STATE(15),
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
    STATE(28), 1,
      sym_object,
    STATE(95), 1,
      sym_child_annotation,
    STATE(158), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(47), 12,
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
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_object,
    STATE(95), 1,
      sym_child_annotation,
    STATE(158), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(47), 12,
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
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_object,
    STATE(95), 1,
      sym_child_annotation,
    STATE(158), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(3), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(47), 12,
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
    ACTIONS(43), 1,
      sym_ident,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_template,
    ACTIONS(57), 1,
      anon_sym_accessibility,
    ACTIONS(60), 1,
      anon_sym_setters,
    ACTIONS(63), 1,
      anon_sym_responses,
    ACTIONS(66), 1,
      anon_sym_items,
    ACTIONS(69), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(72), 1,
      anon_sym_patterns,
    ACTIONS(75), 1,
      anon_sym_suffixes,
    ACTIONS(78), 1,
      anon_sym_layout,
    ACTIONS(81), 1,
      anon_sym_widgets,
    ACTIONS(84), 1,
      anon_sym_strings,
    ACTIONS(87), 1,
      anon_sym_styles,
    STATE(28), 1,
      sym_object,
    STATE(95), 1,
      sym_child_annotation,
    STATE(158), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(47), 12,
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
    STATE(28), 1,
      sym_object,
    STATE(95), 1,
      sym_child_annotation,
    STATE(158), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(2), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(47), 12,
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
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(106), 1,
      anon_sym__,
    ACTIONS(108), 1,
      anon_sym_C_,
    ACTIONS(110), 1,
      anon_sym_bind,
    STATE(94), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(239), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(389), 1,
      sym_object,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(385), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(386), 3,
      sym_value,
      sym_binding,
      sym_object_value,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [541] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(164), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(366), 1,
      sym_expression,
    STATE(107), 2,
      sym_literal,
      sym_closure_expression,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [597] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ident,
    ACTIONS(127), 1,
      sym_base10,
    ACTIONS(130), 1,
      sym_base16,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      aux_sym_number_literal_token1,
    ACTIONS(150), 1,
      anon_sym_typeof,
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(164), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(366), 1,
      sym_expression,
    STATE(107), 2,
      sym_literal,
      sym_closure_expression,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [653] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_closure_expression_repeat1,
    STATE(164), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(366), 1,
      sym_expression,
    STATE(107), 2,
      sym_literal,
      sym_closure_expression,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [709] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(106), 1,
      anon_sym__,
    ACTIONS(108), 1,
      anon_sym_C_,
    ACTIONS(155), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(337), 1,
      sym_value,
    STATE(385), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [760] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(106), 1,
      anon_sym__,
    ACTIONS(108), 1,
      anon_sym_C_,
    ACTIONS(155), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(348), 1,
      sym_value,
    STATE(385), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [811] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(106), 1,
      anon_sym__,
    ACTIONS(108), 1,
      anon_sym_C_,
    ACTIONS(155), 1,
      sym_ident,
    STATE(94), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(370), 1,
      sym_value,
    STATE(385), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [862] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(359), 1,
      sym_expression,
    STATE(107), 2,
      sym_literal,
      sym_closure_expression,
    STATE(171), 4,
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
    STATE(239), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(17), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(58), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [958] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    ACTIONS(102), 1,
      aux_sym_number_literal_token1,
    ACTIONS(104), 1,
      anon_sym_typeof,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_quoted,
    STATE(167), 1,
      sym_number,
    STATE(315), 1,
      sym_expression,
    STATE(107), 2,
      sym_literal,
      sym_closure_expression,
    STATE(171), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [1008] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      anon_sym_using,
    ACTIONS(161), 1,
      anon_sym_template,
    ACTIONS(163), 1,
      anon_sym_menu,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(119), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(57), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(167), 13,
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
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(171), 13,
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
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(175), 13,
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
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(179), 13,
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
  [1150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(183), 13,
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
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(187), 13,
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
  [1198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(191), 13,
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
  [1222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(195), 13,
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
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(199), 13,
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
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(203), 13,
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
  [1294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(207), 13,
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
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(211), 13,
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
  [1342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(215), 13,
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
  [1366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(219), 13,
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
  [1390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(223), 13,
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
  [1414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(227), 13,
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
  [1438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(231), 13,
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
  [1462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(235), 13,
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
  [1486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(239), 13,
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
  [1510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(243), 13,
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
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(247), 13,
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
  [1558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(251), 13,
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
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(255), 13,
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
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(259), 13,
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
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(263), 13,
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
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(267), 13,
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
  [1678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(271), 13,
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
  [1702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(275), 13,
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
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(279), 13,
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
  [1750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(283), 13,
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
  [1774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(287), 13,
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
  [1798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(291), 13,
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
  [1822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(295), 13,
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
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(299), 13,
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
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(303), 13,
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
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(307), 13,
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
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(311), 13,
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
  [1942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(315), 13,
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
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(319), 13,
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
  [1990] = 11,
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
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(59), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2029] = 11,
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
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(59), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2068] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      sym_ident,
    ACTIONS(330), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      anon_sym_template,
    ACTIONS(336), 1,
      anon_sym_menu,
    STATE(239), 1,
      sym_name,
    STATE(264), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(59), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(66), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2167] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym__,
    ACTIONS(108), 1,
      anon_sym_C_,
    ACTIONS(351), 1,
      sym_ident,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(120), 1,
      sym_ext_combo_box_item,
    STATE(123), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2205] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym__,
    ACTIONS(108), 1,
      anon_sym_C_,
    ACTIONS(351), 1,
      sym_ident,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(120), 1,
      sym_ext_combo_box_item,
    STATE(123), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2243] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2273] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_ident,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      anon_sym_section,
    ACTIONS(367), 1,
      anon_sym_submenu,
    ACTIONS(370), 1,
      anon_sym_item,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2303] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2333] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(68), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2363] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2393] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2453] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(60), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2483] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2513] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2543] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_ident,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(403), 1,
      anon_sym_C_,
    STATE(74), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(120), 1,
      sym_ext_combo_box_item,
    STATE(123), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2581] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(70), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2671] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2701] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(343), 1,
      anon_sym_section,
    ACTIONS(345), 1,
      anon_sym_submenu,
    ACTIONS(347), 1,
      anon_sym_item,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(77), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2731] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    ACTIONS(424), 1,
      anon_sym__,
    ACTIONS(427), 1,
      anon_sym_C_,
    STATE(80), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(149), 1,
      sym_ext_string_list_item,
    STATE(150), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2766] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(82), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(149), 1,
      sym_ext_string_list_item,
    STATE(150), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2801] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(94), 1,
      sym_quoted,
    STATE(149), 1,
      sym_ext_string_list_item,
    STATE(150), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2836] = 7,
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
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2862] = 7,
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
    STATE(84), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2888] = 7,
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
    STATE(84), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2914] = 7,
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
    STATE(84), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      sym_ident,
      sym_base10,
      anon_sym_typeof,
    ACTIONS(145), 7,
      sym_base16,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_number_literal_token1,
  [2958] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(85), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(251), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(465), 6,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(469), 6,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3018] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(373), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3047] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(287), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(477), 6,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(481), 6,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3110] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_ident,
    STATE(22), 1,
      sym_object,
    STATE(239), 1,
      sym_name,
    STATE(261), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(487), 6,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(491), 6,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3171] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(372), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3200] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_quoted,
    STATE(297), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3229] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(102), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(503), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3249] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
    ACTIONS(509), 1,
      anon_sym__,
    ACTIONS(511), 1,
      anon_sym_C_,
    STATE(100), 1,
      sym_string_value,
    STATE(127), 1,
      sym_quoted,
    STATE(139), 2,
      sym_quoted_literal,
      sym_translated,
  [3275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_ident,
    ACTIONS(515), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(117), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(503), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3295] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(356), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_as,
    ACTIONS(517), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(112), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3341] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(280), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3367] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(368), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_as,
    ACTIONS(523), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(104), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3413] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
    STATE(322), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3437] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(122), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3463] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      anon_sym__,
    ACTIONS(434), 1,
      anon_sym_C_,
    STATE(94), 1,
      sym_quoted,
    STATE(294), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [3489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
    STATE(363), 1,
      sym_namespace,
    STATE(364), 1,
      sym_type_name,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_as,
    ACTIONS(525), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(112), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
    STATE(281), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_as,
    ACTIONS(533), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(115), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_as,
    ACTIONS(535), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(112), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
  [3597] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
    STATE(259), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_ident,
    ACTIONS(539), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(117), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(541), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3641] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_ident,
    STATE(239), 1,
      sym_name,
    STATE(310), 1,
      sym_type_name,
    STATE(363), 1,
      sym_namespace,
    STATE(238), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_using,
    ACTIONS(544), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(119), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(549), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(551), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(553), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
  [3702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DOT,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(557), 5,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_EQ_GT,
      anon_sym_GT,
  [3719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(565), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
    ACTIONS(569), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3763] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_ext_styles_repeat1,
    STATE(203), 1,
      sym_quoted,
    STATE(204), 1,
      sym_ext_styles_class,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(493), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3799] = 3,
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
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(575), 4,
      anon_sym_using,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3841] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_ext_styles_repeat1,
    STATE(203), 1,
      sym_quoted,
    STATE(204), 1,
      sym_ext_styles_class,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(467), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(479), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(489), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
  [3933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_ident,
    ACTIONS(587), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(589), 1,
      anon_sym_action,
    STATE(317), 1,
      sym_ext_response,
    STATE(318), 2,
      sym_child_internal,
      sym_child_extension,
  [3953] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      anon_sym_SQUOTE,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [3975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_ext_styles_repeat1,
    STATE(203), 1,
      sym_quoted,
    STATE(204), 1,
      sym_ext_styles_class,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(471), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [4011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(601), 4,
      sym_ident,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [4025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DOT,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(607), 1,
      anon_sym_PIPE,
    STATE(265), 1,
      aux_sym_flags_repeat1,
    ACTIONS(557), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4045] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [4067] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [4089] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [4111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [4133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [4155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(208), 1,
      sym_quoted,
    STATE(220), 1,
      sym_ext_file_filter_item,
  [4177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
    ACTIONS(621), 3,
      sym_ident,
      anon_sym__,
      anon_sym_C_,
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(623), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
  [4205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 6,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_COMMA,
  [4217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(631), 4,
      anon_sym_using,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(635), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(639), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(166), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COLON,
    ACTIONS(661), 1,
      anon_sym_COLON_COLON,
    ACTIONS(663), 1,
      anon_sym_EQ_GT,
    ACTIONS(657), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(166), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(157), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(681), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(166), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(166), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(702), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4521] = 4,
    ACTIONS(711), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(706), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(708), 2,
      sym_escape_sequence,
      sym_string,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(713), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(723), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(727), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(160), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(739), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(747), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(751), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(194), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(166), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(771), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    ACTIONS(655), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(169), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
  [4851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym_ident,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(200), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_ident,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      aux_sym_ext_layout_repeat1,
    STATE(267), 1,
      sym_ext_layout_prop,
  [4881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_ident,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(279), 1,
      sym_ext_size_group_widget,
  [4897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(796), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
  [4919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_ident,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(225), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_ident,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(200), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_ident,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(276), 1,
      sym_ext_adw_message_dialog_response,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4973] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(816), 2,
      sym_escape_sequence,
      sym_string,
  [4987] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(816), 2,
      sym_escape_sequence,
      sym_string,
  [5001] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(820), 2,
      sym_escape_sequence,
      sym_string,
  [5015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_ident,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    STATE(217), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5079] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(816), 2,
      sym_escape_sequence,
      sym_string,
  [5093] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(816), 2,
      sym_escape_sequence,
      sym_string,
  [5107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(829), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
  [5119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5139] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(835), 2,
      sym_escape_sequence,
      sym_string,
  [5153] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(837), 2,
      sym_escape_sequence,
      sym_string,
  [5167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym_ident,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    STATE(225), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5181] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(816), 2,
      sym_escape_sequence,
      sym_string,
  [5195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_ident,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(276), 1,
      sym_ext_adw_message_dialog_response,
  [5211] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(851), 2,
      sym_escape_sequence,
      sym_string,
  [5225] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(816), 2,
      sym_escape_sequence,
      sym_string,
  [5239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_ident,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_ext_layout_repeat1,
    STATE(267), 1,
      sym_ext_layout_prop,
  [5255] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(860), 2,
      sym_escape_sequence,
      sym_string,
  [5269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym_ident,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(279), 1,
      sym_ext_size_group_widget,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5295] = 4,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_escape_sequence,
      sym_string,
  [5309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(217), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(217), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_ext_layout_repeat1,
    STATE(267), 1,
      sym_ext_layout_prop,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(236), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    STATE(342), 1,
      sym_number,
    STATE(343), 1,
      sym_version,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_ident,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(279), 1,
      sym_ext_size_group_widget,
  [5499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 4,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(206), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(205), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_ident,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(276), 1,
      sym_ext_adw_message_dialog_response,
  [5587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(897), 1,
      anon_sym_PIPE,
    STATE(258), 1,
      aux_sym_flags_repeat1,
  [5600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    ACTIONS(902), 1,
      anon_sym_COLON,
    STATE(188), 1,
      sym_object_content,
  [5613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(607), 1,
      anon_sym_PIPE,
    STATE(265), 1,
      aux_sym_flags_repeat1,
  [5626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_ident,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_object_content,
  [5639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym_quoted,
  [5652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 3,
      sym_ident,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [5661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      sym_ident,
    STATE(128), 1,
      sym_object_content,
  [5674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_PIPE,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      aux_sym_flags_repeat1,
  [5687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
  [5696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(914), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
  [5716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_ident,
    ACTIONS(920), 1,
      anon_sym_RBRACK,
    ACTIONS(922), 1,
      anon_sym_default,
  [5729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      sym_quoted,
  [5742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      sym_quoted,
  [5755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(369), 1,
      sym_quoted,
  [5768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 3,
      sym_ident,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 3,
      anon_sym_SEMI,
      anon_sym_after,
      anon_sym_swapped,
  [5786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(371), 1,
      sym_quoted,
  [5799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(928), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym_quoted,
  [5823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_base10,
    ACTIONS(96), 1,
      sym_base16,
    STATE(199), 1,
      sym_number,
  [5836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(932), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      anon_sym_COMMA,
  [5857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_object_content,
  [5867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    ACTIONS(942), 1,
      anon_sym_LPAREN,
  [5877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_ident,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
  [5887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_ident,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_ident,
    STATE(243), 1,
      sym_namespace,
  [5915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      anon_sym_COMMA,
  [5925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_ident,
    STATE(247), 1,
      sym_name,
  [5935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 2,
      sym_ident,
      anon_sym_RBRACK,
  [5959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_ident,
    ACTIONS(964), 1,
      anon_sym_LBRACE,
  [5969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [5977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(970), 1,
      anon_sym_COMMA,
  [5987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_ident,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
  [5997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_base16,
    ACTIONS(976), 1,
      sym_base10,
  [6007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(980), 1,
      anon_sym_COMMA,
  [6017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    ACTIONS(985), 1,
      anon_sym_default,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_object_content,
  [6045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_ident,
    STATE(252), 1,
      sym_name,
  [6063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_object_content,
  [6073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_ident,
    ACTIONS(993), 1,
      anon_sym_LBRACE,
  [6083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_ident,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
  [6093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_ident,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_LBRACE,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [6121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_object_content,
  [6139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LBRACE,
  [6146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
  [6153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LT,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym_ident,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
  [6174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RBRACK,
  [6188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
  [6195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_response,
  [6202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym_ident,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RBRACK,
  [6216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_GT,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_LBRACE,
  [6230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
  [6237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_LBRACK,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_LBRACK,
  [6251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LBRACK,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
  [6265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_LBRACK,
  [6272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_LBRACK,
  [6279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LBRACK,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LBRACK,
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_LBRACK,
  [6300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COLON,
  [6307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_LBRACE,
  [6314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_Gtk,
  [6321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_SEMI,
  [6328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_ident,
  [6335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_DOLLAR,
  [6342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_COLON,
  [6349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_ident,
  [6356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
  [6363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_SEMI,
  [6370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
  [6377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [6384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LBRACE,
  [6391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_COLON,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
  [6405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_RBRACK,
  [6412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [6419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_COLON,
  [6426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_LT,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
  [6440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [6447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
  [6454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
  [6461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
  [6468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_DOLLAR,
  [6475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
  [6482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_ident,
  [6489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_ident,
  [6496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
  [6503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_DOT,
  [6510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_GT,
  [6517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
  [6524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
  [6531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_EQ,
  [6538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [6545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
  [6552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
  [6559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
  [6566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
  [6573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
  [6580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_COLON,
  [6587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_ident,
  [6594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym_ident,
  [6601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_EQ_GT,
  [6608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
  [6615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LPAREN,
  [6622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_DOT,
  [6629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LBRACE,
  [6643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_4_DOT0,
  [6650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      ts_builtin_sym_end,
  [6657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_SEMI,
  [6664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
  [6671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_COLON,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
  [6685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_SEMI,
  [6692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
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
  [SMALL_STATE(18)] = 1054,
  [SMALL_STATE(19)] = 1078,
  [SMALL_STATE(20)] = 1102,
  [SMALL_STATE(21)] = 1126,
  [SMALL_STATE(22)] = 1150,
  [SMALL_STATE(23)] = 1174,
  [SMALL_STATE(24)] = 1198,
  [SMALL_STATE(25)] = 1222,
  [SMALL_STATE(26)] = 1246,
  [SMALL_STATE(27)] = 1270,
  [SMALL_STATE(28)] = 1294,
  [SMALL_STATE(29)] = 1318,
  [SMALL_STATE(30)] = 1342,
  [SMALL_STATE(31)] = 1366,
  [SMALL_STATE(32)] = 1390,
  [SMALL_STATE(33)] = 1414,
  [SMALL_STATE(34)] = 1438,
  [SMALL_STATE(35)] = 1462,
  [SMALL_STATE(36)] = 1486,
  [SMALL_STATE(37)] = 1510,
  [SMALL_STATE(38)] = 1534,
  [SMALL_STATE(39)] = 1558,
  [SMALL_STATE(40)] = 1582,
  [SMALL_STATE(41)] = 1606,
  [SMALL_STATE(42)] = 1630,
  [SMALL_STATE(43)] = 1654,
  [SMALL_STATE(44)] = 1678,
  [SMALL_STATE(45)] = 1702,
  [SMALL_STATE(46)] = 1726,
  [SMALL_STATE(47)] = 1750,
  [SMALL_STATE(48)] = 1774,
  [SMALL_STATE(49)] = 1798,
  [SMALL_STATE(50)] = 1822,
  [SMALL_STATE(51)] = 1846,
  [SMALL_STATE(52)] = 1870,
  [SMALL_STATE(53)] = 1894,
  [SMALL_STATE(54)] = 1918,
  [SMALL_STATE(55)] = 1942,
  [SMALL_STATE(56)] = 1966,
  [SMALL_STATE(57)] = 1990,
  [SMALL_STATE(58)] = 2029,
  [SMALL_STATE(59)] = 2068,
  [SMALL_STATE(60)] = 2107,
  [SMALL_STATE(61)] = 2137,
  [SMALL_STATE(62)] = 2167,
  [SMALL_STATE(63)] = 2205,
  [SMALL_STATE(64)] = 2243,
  [SMALL_STATE(65)] = 2273,
  [SMALL_STATE(66)] = 2303,
  [SMALL_STATE(67)] = 2333,
  [SMALL_STATE(68)] = 2363,
  [SMALL_STATE(69)] = 2393,
  [SMALL_STATE(70)] = 2423,
  [SMALL_STATE(71)] = 2453,
  [SMALL_STATE(72)] = 2483,
  [SMALL_STATE(73)] = 2513,
  [SMALL_STATE(74)] = 2543,
  [SMALL_STATE(75)] = 2581,
  [SMALL_STATE(76)] = 2611,
  [SMALL_STATE(77)] = 2641,
  [SMALL_STATE(78)] = 2671,
  [SMALL_STATE(79)] = 2701,
  [SMALL_STATE(80)] = 2731,
  [SMALL_STATE(81)] = 2766,
  [SMALL_STATE(82)] = 2801,
  [SMALL_STATE(83)] = 2836,
  [SMALL_STATE(84)] = 2862,
  [SMALL_STATE(85)] = 2888,
  [SMALL_STATE(86)] = 2914,
  [SMALL_STATE(87)] = 2940,
  [SMALL_STATE(88)] = 2958,
  [SMALL_STATE(89)] = 2984,
  [SMALL_STATE(90)] = 3001,
  [SMALL_STATE(91)] = 3018,
  [SMALL_STATE(92)] = 3047,
  [SMALL_STATE(93)] = 3076,
  [SMALL_STATE(94)] = 3093,
  [SMALL_STATE(95)] = 3110,
  [SMALL_STATE(96)] = 3137,
  [SMALL_STATE(97)] = 3154,
  [SMALL_STATE(98)] = 3171,
  [SMALL_STATE(99)] = 3200,
  [SMALL_STATE(100)] = 3229,
  [SMALL_STATE(101)] = 3249,
  [SMALL_STATE(102)] = 3275,
  [SMALL_STATE(103)] = 3295,
  [SMALL_STATE(104)] = 3321,
  [SMALL_STATE(105)] = 3341,
  [SMALL_STATE(106)] = 3367,
  [SMALL_STATE(107)] = 3393,
  [SMALL_STATE(108)] = 3413,
  [SMALL_STATE(109)] = 3437,
  [SMALL_STATE(110)] = 3463,
  [SMALL_STATE(111)] = 3489,
  [SMALL_STATE(112)] = 3513,
  [SMALL_STATE(113)] = 3533,
  [SMALL_STATE(114)] = 3557,
  [SMALL_STATE(115)] = 3577,
  [SMALL_STATE(116)] = 3597,
  [SMALL_STATE(117)] = 3621,
  [SMALL_STATE(118)] = 3641,
  [SMALL_STATE(119)] = 3665,
  [SMALL_STATE(120)] = 3685,
  [SMALL_STATE(121)] = 3702,
  [SMALL_STATE(122)] = 3719,
  [SMALL_STATE(123)] = 3734,
  [SMALL_STATE(124)] = 3749,
  [SMALL_STATE(125)] = 3763,
  [SMALL_STATE(126)] = 3785,
  [SMALL_STATE(127)] = 3799,
  [SMALL_STATE(128)] = 3813,
  [SMALL_STATE(129)] = 3827,
  [SMALL_STATE(130)] = 3841,
  [SMALL_STATE(131)] = 3863,
  [SMALL_STATE(132)] = 3877,
  [SMALL_STATE(133)] = 3891,
  [SMALL_STATE(134)] = 3905,
  [SMALL_STATE(135)] = 3919,
  [SMALL_STATE(136)] = 3933,
  [SMALL_STATE(137)] = 3953,
  [SMALL_STATE(138)] = 3975,
  [SMALL_STATE(139)] = 3997,
  [SMALL_STATE(140)] = 4011,
  [SMALL_STATE(141)] = 4025,
  [SMALL_STATE(142)] = 4045,
  [SMALL_STATE(143)] = 4067,
  [SMALL_STATE(144)] = 4089,
  [SMALL_STATE(145)] = 4111,
  [SMALL_STATE(146)] = 4133,
  [SMALL_STATE(147)] = 4155,
  [SMALL_STATE(148)] = 4177,
  [SMALL_STATE(149)] = 4191,
  [SMALL_STATE(150)] = 4205,
  [SMALL_STATE(151)] = 4217,
  [SMALL_STATE(152)] = 4231,
  [SMALL_STATE(153)] = 4244,
  [SMALL_STATE(154)] = 4257,
  [SMALL_STATE(155)] = 4270,
  [SMALL_STATE(156)] = 4283,
  [SMALL_STATE(157)] = 4296,
  [SMALL_STATE(158)] = 4311,
  [SMALL_STATE(159)] = 4328,
  [SMALL_STATE(160)] = 4341,
  [SMALL_STATE(161)] = 4356,
  [SMALL_STATE(162)] = 4369,
  [SMALL_STATE(163)] = 4380,
  [SMALL_STATE(164)] = 4395,
  [SMALL_STATE(165)] = 4406,
  [SMALL_STATE(166)] = 4417,
  [SMALL_STATE(167)] = 4432,
  [SMALL_STATE(168)] = 4443,
  [SMALL_STATE(169)] = 4456,
  [SMALL_STATE(170)] = 4471,
  [SMALL_STATE(171)] = 4484,
  [SMALL_STATE(172)] = 4495,
  [SMALL_STATE(173)] = 4508,
  [SMALL_STATE(174)] = 4521,
  [SMALL_STATE(175)] = 4536,
  [SMALL_STATE(176)] = 4549,
  [SMALL_STATE(177)] = 4560,
  [SMALL_STATE(178)] = 4573,
  [SMALL_STATE(179)] = 4586,
  [SMALL_STATE(180)] = 4599,
  [SMALL_STATE(181)] = 4614,
  [SMALL_STATE(182)] = 4627,
  [SMALL_STATE(183)] = 4640,
  [SMALL_STATE(184)] = 4651,
  [SMALL_STATE(185)] = 4664,
  [SMALL_STATE(186)] = 4675,
  [SMALL_STATE(187)] = 4686,
  [SMALL_STATE(188)] = 4699,
  [SMALL_STATE(189)] = 4712,
  [SMALL_STATE(190)] = 4725,
  [SMALL_STATE(191)] = 4736,
  [SMALL_STATE(192)] = 4751,
  [SMALL_STATE(193)] = 4762,
  [SMALL_STATE(194)] = 4773,
  [SMALL_STATE(195)] = 4788,
  [SMALL_STATE(196)] = 4801,
  [SMALL_STATE(197)] = 4814,
  [SMALL_STATE(198)] = 4829,
  [SMALL_STATE(199)] = 4840,
  [SMALL_STATE(200)] = 4851,
  [SMALL_STATE(201)] = 4865,
  [SMALL_STATE(202)] = 4881,
  [SMALL_STATE(203)] = 4897,
  [SMALL_STATE(204)] = 4907,
  [SMALL_STATE(205)] = 4919,
  [SMALL_STATE(206)] = 4933,
  [SMALL_STATE(207)] = 4947,
  [SMALL_STATE(208)] = 4963,
  [SMALL_STATE(209)] = 4973,
  [SMALL_STATE(210)] = 4987,
  [SMALL_STATE(211)] = 5001,
  [SMALL_STATE(212)] = 5015,
  [SMALL_STATE(213)] = 5025,
  [SMALL_STATE(214)] = 5035,
  [SMALL_STATE(215)] = 5045,
  [SMALL_STATE(216)] = 5055,
  [SMALL_STATE(217)] = 5065,
  [SMALL_STATE(218)] = 5079,
  [SMALL_STATE(219)] = 5093,
  [SMALL_STATE(220)] = 5107,
  [SMALL_STATE(221)] = 5119,
  [SMALL_STATE(222)] = 5129,
  [SMALL_STATE(223)] = 5139,
  [SMALL_STATE(224)] = 5153,
  [SMALL_STATE(225)] = 5167,
  [SMALL_STATE(226)] = 5181,
  [SMALL_STATE(227)] = 5195,
  [SMALL_STATE(228)] = 5211,
  [SMALL_STATE(229)] = 5225,
  [SMALL_STATE(230)] = 5239,
  [SMALL_STATE(231)] = 5255,
  [SMALL_STATE(232)] = 5269,
  [SMALL_STATE(233)] = 5285,
  [SMALL_STATE(234)] = 5295,
  [SMALL_STATE(235)] = 5309,
  [SMALL_STATE(236)] = 5323,
  [SMALL_STATE(237)] = 5337,
  [SMALL_STATE(238)] = 5353,
  [SMALL_STATE(239)] = 5363,
  [SMALL_STATE(240)] = 5373,
  [SMALL_STATE(241)] = 5383,
  [SMALL_STATE(242)] = 5397,
  [SMALL_STATE(243)] = 5407,
  [SMALL_STATE(244)] = 5423,
  [SMALL_STATE(245)] = 5433,
  [SMALL_STATE(246)] = 5443,
  [SMALL_STATE(247)] = 5453,
  [SMALL_STATE(248)] = 5463,
  [SMALL_STATE(249)] = 5473,
  [SMALL_STATE(250)] = 5483,
  [SMALL_STATE(251)] = 5499,
  [SMALL_STATE(252)] = 5509,
  [SMALL_STATE(253)] = 5519,
  [SMALL_STATE(254)] = 5533,
  [SMALL_STATE(255)] = 5543,
  [SMALL_STATE(256)] = 5557,
  [SMALL_STATE(257)] = 5571,
  [SMALL_STATE(258)] = 5587,
  [SMALL_STATE(259)] = 5600,
  [SMALL_STATE(260)] = 5613,
  [SMALL_STATE(261)] = 5626,
  [SMALL_STATE(262)] = 5639,
  [SMALL_STATE(263)] = 5652,
  [SMALL_STATE(264)] = 5661,
  [SMALL_STATE(265)] = 5674,
  [SMALL_STATE(266)] = 5687,
  [SMALL_STATE(267)] = 5696,
  [SMALL_STATE(268)] = 5707,
  [SMALL_STATE(269)] = 5716,
  [SMALL_STATE(270)] = 5729,
  [SMALL_STATE(271)] = 5742,
  [SMALL_STATE(272)] = 5755,
  [SMALL_STATE(273)] = 5768,
  [SMALL_STATE(274)] = 5777,
  [SMALL_STATE(275)] = 5786,
  [SMALL_STATE(276)] = 5799,
  [SMALL_STATE(277)] = 5810,
  [SMALL_STATE(278)] = 5823,
  [SMALL_STATE(279)] = 5836,
  [SMALL_STATE(280)] = 5847,
  [SMALL_STATE(281)] = 5857,
  [SMALL_STATE(282)] = 5867,
  [SMALL_STATE(283)] = 5877,
  [SMALL_STATE(284)] = 5887,
  [SMALL_STATE(285)] = 5897,
  [SMALL_STATE(286)] = 5905,
  [SMALL_STATE(287)] = 5915,
  [SMALL_STATE(288)] = 5925,
  [SMALL_STATE(289)] = 5935,
  [SMALL_STATE(290)] = 5943,
  [SMALL_STATE(291)] = 5951,
  [SMALL_STATE(292)] = 5959,
  [SMALL_STATE(293)] = 5969,
  [SMALL_STATE(294)] = 5977,
  [SMALL_STATE(295)] = 5987,
  [SMALL_STATE(296)] = 5997,
  [SMALL_STATE(297)] = 6007,
  [SMALL_STATE(298)] = 6017,
  [SMALL_STATE(299)] = 6027,
  [SMALL_STATE(300)] = 6035,
  [SMALL_STATE(301)] = 6045,
  [SMALL_STATE(302)] = 6053,
  [SMALL_STATE(303)] = 6063,
  [SMALL_STATE(304)] = 6073,
  [SMALL_STATE(305)] = 6083,
  [SMALL_STATE(306)] = 6093,
  [SMALL_STATE(307)] = 6103,
  [SMALL_STATE(308)] = 6111,
  [SMALL_STATE(309)] = 6121,
  [SMALL_STATE(310)] = 6129,
  [SMALL_STATE(311)] = 6139,
  [SMALL_STATE(312)] = 6146,
  [SMALL_STATE(313)] = 6153,
  [SMALL_STATE(314)] = 6160,
  [SMALL_STATE(315)] = 6167,
  [SMALL_STATE(316)] = 6174,
  [SMALL_STATE(317)] = 6181,
  [SMALL_STATE(318)] = 6188,
  [SMALL_STATE(319)] = 6195,
  [SMALL_STATE(320)] = 6202,
  [SMALL_STATE(321)] = 6209,
  [SMALL_STATE(322)] = 6216,
  [SMALL_STATE(323)] = 6223,
  [SMALL_STATE(324)] = 6230,
  [SMALL_STATE(325)] = 6237,
  [SMALL_STATE(326)] = 6244,
  [SMALL_STATE(327)] = 6251,
  [SMALL_STATE(328)] = 6258,
  [SMALL_STATE(329)] = 6265,
  [SMALL_STATE(330)] = 6272,
  [SMALL_STATE(331)] = 6279,
  [SMALL_STATE(332)] = 6286,
  [SMALL_STATE(333)] = 6293,
  [SMALL_STATE(334)] = 6300,
  [SMALL_STATE(335)] = 6307,
  [SMALL_STATE(336)] = 6314,
  [SMALL_STATE(337)] = 6321,
  [SMALL_STATE(338)] = 6328,
  [SMALL_STATE(339)] = 6335,
  [SMALL_STATE(340)] = 6342,
  [SMALL_STATE(341)] = 6349,
  [SMALL_STATE(342)] = 6356,
  [SMALL_STATE(343)] = 6363,
  [SMALL_STATE(344)] = 6370,
  [SMALL_STATE(345)] = 6377,
  [SMALL_STATE(346)] = 6384,
  [SMALL_STATE(347)] = 6391,
  [SMALL_STATE(348)] = 6398,
  [SMALL_STATE(349)] = 6405,
  [SMALL_STATE(350)] = 6412,
  [SMALL_STATE(351)] = 6419,
  [SMALL_STATE(352)] = 6426,
  [SMALL_STATE(353)] = 6433,
  [SMALL_STATE(354)] = 6440,
  [SMALL_STATE(355)] = 6447,
  [SMALL_STATE(356)] = 6454,
  [SMALL_STATE(357)] = 6461,
  [SMALL_STATE(358)] = 6468,
  [SMALL_STATE(359)] = 6475,
  [SMALL_STATE(360)] = 6482,
  [SMALL_STATE(361)] = 6489,
  [SMALL_STATE(362)] = 6496,
  [SMALL_STATE(363)] = 6503,
  [SMALL_STATE(364)] = 6510,
  [SMALL_STATE(365)] = 6517,
  [SMALL_STATE(366)] = 6524,
  [SMALL_STATE(367)] = 6531,
  [SMALL_STATE(368)] = 6538,
  [SMALL_STATE(369)] = 6545,
  [SMALL_STATE(370)] = 6552,
  [SMALL_STATE(371)] = 6559,
  [SMALL_STATE(372)] = 6566,
  [SMALL_STATE(373)] = 6573,
  [SMALL_STATE(374)] = 6580,
  [SMALL_STATE(375)] = 6587,
  [SMALL_STATE(376)] = 6594,
  [SMALL_STATE(377)] = 6601,
  [SMALL_STATE(378)] = 6608,
  [SMALL_STATE(379)] = 6615,
  [SMALL_STATE(380)] = 6622,
  [SMALL_STATE(381)] = 6629,
  [SMALL_STATE(382)] = 6636,
  [SMALL_STATE(383)] = 6643,
  [SMALL_STATE(384)] = 6650,
  [SMALL_STATE(385)] = 6657,
  [SMALL_STATE(386)] = 6664,
  [SMALL_STATE(387)] = 6671,
  [SMALL_STATE(388)] = 6678,
  [SMALL_STATE(389)] = 6685,
  [SMALL_STATE(390)] = 6692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(121),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(288),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(136),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(113),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(335),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(311),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(333),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(332),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(331),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(330),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(329),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(328),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(327),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(326),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(325),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(165),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(192),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(192),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(234),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(231),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(360),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(278),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(352),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 21),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 21),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 17),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 17),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 20),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 20),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 19),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 19),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 21),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 21),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 20),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 20),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 19),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 19),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 17),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 17),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(121),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(288),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(116),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(292),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(340),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(284),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(283),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(282),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(334),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(228),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(223),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(353),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(362),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(228),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(223),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(353),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(362),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(304),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(306),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(308),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 5, .production_id = 15),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 5, .production_id = 15),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_literal, 1, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_literal, 1, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, .production_id = 13),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 4, .production_id = 13),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(314),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(313),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2), SHIFT_REPEAT(140),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 5),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 5),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gtk_decl, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gtk_decl, 4),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(228),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(223),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(228),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(223),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_literal, 1, .production_id = 7),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_item, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 6),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_short, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 16),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(274),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1, .production_id = 2),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(174),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 4),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, .production_id = 14),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 16),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2, .production_id = 9),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2), SHIFT_REPEAT(374),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles_class, 1, .production_id = 6),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_item, 1),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(387),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2), SHIFT_REPEAT(380),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2), SHIFT_REPEAT(350),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2), SHIFT_REPEAT(351),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2), SHIFT_REPEAT(263),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_external, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_full, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2), SHIFT_REPEAT(361),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widget, 1, .production_id = 5),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, .production_id = 8),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 3),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout_prop, 4, .production_id = 6),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_flag, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, .production_id = 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 10), REDUCE(sym_ext_response, 4, .production_id = 11),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_setter, 6, .production_id = 18),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility_prop, 4, .production_id = 6),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 12),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 10), REDUCE(sym_ext_response, 5, .production_id = 11),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 4),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
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
