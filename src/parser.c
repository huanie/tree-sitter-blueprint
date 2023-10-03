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
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
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
  anon_sym_bidirectional = 26,
  anon_sym_inverted = 27,
  anon_sym_no_DASHsync_DASHcreate = 28,
  anon_sym_COMMA = 29,
  anon_sym_as = 30,
  anon_sym_menu = 31,
  anon_sym_section = 32,
  anon_sym_submenu = 33,
  anon_sym_item = 34,
  anon_sym_accessibility = 35,
  anon_sym_condition = 36,
  anon_sym_setters = 37,
  anon_sym_responses = 38,
  anon_sym_destructive = 39,
  anon_sym_suggested = 40,
  anon_sym_disabled = 41,
  anon_sym_items = 42,
  anon_sym_mime_DASHtypes = 43,
  anon_sym_patterns = 44,
  anon_sym_suffixes = 45,
  anon_sym_layout = 46,
  anon_sym_marks = 47,
  anon_sym_mark = 48,
  anon_sym_DASH = 49,
  anon_sym_PLUS = 50,
  anon_sym_widgets = 51,
  anon_sym_strings = 52,
  anon_sym_styles = 53,
  anon_sym_action = 54,
  anon_sym_response = 55,
  anon_sym_EQ = 56,
  anon_sym_default = 57,
  sym_string = 58,
  aux_sym_number_token1 = 59,
  aux_sym_number_token2 = 60,
  anon_sym_DQUOTE = 61,
  anon_sym_SQUOTE = 62,
  sym_escape_sequence = 63,
  sym_comment = 64,
  sym_ident = 65,
  sym_source_file = 66,
  sym_using = 67,
  sym_object = 68,
  sym_object_content = 69,
  sym_type_name = 70,
  sym_type_name_full = 71,
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
  sym_binding_flag = 91,
  sym_object_value = 92,
  sym_string_value = 93,
  sym_expression = 94,
  sym_lookup_expression = 95,
  sym_closure_expression = 96,
  sym_cast_expression = 97,
  sym_menu = 98,
  sym_menu_child = 99,
  sym_menu_section = 100,
  sym_menu_submenu = 101,
  sym_menu_item = 102,
  sym_menu_attribute = 103,
  sym_menu_item_shorthand = 104,
  sym_extension = 105,
  sym_ext_accessibility = 106,
  sym_ext_accessibility_prop = 107,
  sym_ext_adw_breakpoint = 108,
  sym_ext_adw_breakpoint_setter = 109,
  sym_ext_adw_message_dialog = 110,
  sym_ext_adw_message_dialog_response = 111,
  sym_ext_adw_message_dialog_flag = 112,
  sym_ext_combo_box_items = 113,
  sym_ext_combo_box_item = 114,
  sym_ext_file_filter_mime_types = 115,
  sym_ext_file_filter_patterns = 116,
  sym_ext_file_filter_suffixes = 117,
  sym_ext_file_filter_item = 118,
  sym_ext_layout = 119,
  sym_ext_layout_prop = 120,
  sym_ext_list_item_factory = 121,
  sym_ext_size_group_widgets = 122,
  sym_ext_size_group_widget = 123,
  sym_ext_string_list_strings = 124,
  sym_ext_string_list_item = 125,
  sym_ext_styles = 126,
  sym_ext_styles_class = 127,
  sym_child_extension = 128,
  sym_ext_response = 129,
  sym_number = 130,
  sym_quoted = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_source_file_repeat2 = 133,
  aux_sym_object_content_repeat1 = 134,
  aux_sym_signal_repeat1 = 135,
  aux_sym_flags_repeat1 = 136,
  aux_sym_binding_repeat1 = 137,
  aux_sym_expression_repeat1 = 138,
  aux_sym_closure_expression_repeat1 = 139,
  aux_sym_menu_repeat1 = 140,
  aux_sym_menu_section_repeat1 = 141,
  aux_sym_menu_item_repeat1 = 142,
  aux_sym_ext_accessibility_repeat1 = 143,
  aux_sym_ext_adw_breakpoint_repeat1 = 144,
  aux_sym_ext_adw_message_dialog_repeat1 = 145,
  aux_sym_ext_adw_message_dialog_response_repeat1 = 146,
  aux_sym_ext_combo_box_items_repeat1 = 147,
  aux_sym_ext_file_filter_mime_types_repeat1 = 148,
  aux_sym_ext_layout_repeat1 = 149,
  aux_sym_ext_size_group_widgets_repeat1 = 150,
  aux_sym_ext_string_list_strings_repeat1 = 151,
  aux_sym_ext_styles_repeat1 = 152,
  aux_sym_quoted_repeat1 = 153,
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
  [anon_sym_bidirectional] = "bidirectional",
  [anon_sym_inverted] = "inverted",
  [anon_sym_no_DASHsync_DASHcreate] = "no-sync-create",
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
  [sym_binding_flag] = "binding_flag",
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
  [aux_sym_binding_repeat1] = "binding_repeat1",
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
  [anon_sym_bidirectional] = anon_sym_bidirectional,
  [anon_sym_inverted] = anon_sym_inverted,
  [anon_sym_no_DASHsync_DASHcreate] = anon_sym_no_DASHsync_DASHcreate,
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
  [sym_binding_flag] = sym_binding_flag,
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
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
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
  [anon_sym_bidirectional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsync_DASHcreate] = {
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
  [sym_binding_flag] = {
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
  [aux_sym_binding_repeat1] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
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
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 63,
  [71] = 71,
  [72] = 61,
  [73] = 71,
  [74] = 68,
  [75] = 66,
  [76] = 60,
  [77] = 64,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 96,
  [101] = 101,
  [102] = 94,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 99,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 106,
  [120] = 93,
  [121] = 121,
  [122] = 101,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 97,
  [137] = 95,
  [138] = 138,
  [139] = 98,
  [140] = 140,
  [141] = 141,
  [142] = 40,
  [143] = 50,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 99,
  [150] = 150,
  [151] = 93,
  [152] = 101,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 54,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 20,
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
  [200] = 200,
  [201] = 201,
  [202] = 167,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 187,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 184,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 183,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 192,
  [226] = 195,
  [227] = 224,
  [228] = 228,
  [229] = 173,
  [230] = 188,
  [231] = 197,
  [232] = 232,
  [233] = 233,
  [234] = 180,
  [235] = 223,
  [236] = 181,
  [237] = 200,
  [238] = 232,
  [239] = 222,
  [240] = 240,
  [241] = 178,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 233,
  [247] = 232,
  [248] = 248,
  [249] = 223,
  [250] = 250,
  [251] = 186,
  [252] = 191,
  [253] = 179,
  [254] = 217,
  [255] = 222,
  [256] = 233,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 261,
  [272] = 272,
  [273] = 264,
  [274] = 259,
  [275] = 275,
  [276] = 260,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 280,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 296,
  [297] = 170,
  [298] = 287,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 286,
  [303] = 303,
  [304] = 285,
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
  [360] = 360,
  [361] = 308,
  [362] = 345,
  [363] = 363,
  [364] = 342,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 366,
  [372] = 372,
  [373] = 373,
  [374] = 370,
  [375] = 369,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 354,
  [381] = 353,
  [382] = 382,
  [383] = 352,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(257);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '-') ADVANCE(329);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '<') ADVANCE(281);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '|') ADVANCE(283);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
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
          lookahead == 'u') ADVANCE(356);
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
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(48)
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
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(46)
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
          lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '-') ADVANCE(329);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '<') ADVANCE(281);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '|') ADVANCE(283);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(278);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(278);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'C') ADVANCE(363);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'b') ADVANCE(427);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == 'C') ADVANCE(363);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(278);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(363);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '|') ADVANCE(283);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == 'w') ADVANCE(421);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(358);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(267);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(286);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(328);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 239:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 240:
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 243:
      if (lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(353);
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(358);
      if (lookahead == '\r') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(359);
      END_STATE();
    case 248:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(254)
      END_STATE();
    case 249:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(254)
      if (lookahead == '\r') SKIP(248)
      END_STATE();
    case 250:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(256)
      END_STATE();
    case 251:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(256)
      if (lookahead == '\r') SKIP(250)
      END_STATE();
    case 252:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(255)
      END_STATE();
    case 253:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '\r') SKIP(252)
      END_STATE();
    case 254:
      if (eof) ADVANCE(257);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '-') ADVANCE(329);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '<') ADVANCE(281);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') SKIP(249)
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '|') ADVANCE(283);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 255:
      if (eof) ADVANCE(257);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '\\') SKIP(253)
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 256:
      if (eof) ADVANCE(257);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(251)
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_destructive);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_destructive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_suggested);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_suggested);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(267);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(358);
      if (lookahead == '\r') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(247);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 'y') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
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
  [34] = {.lex_state = 256},
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
  [56] = {.lex_state = 255},
  [57] = {.lex_state = 255},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 47},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 47},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 47},
  [75] = {.lex_state = 47},
  [76] = {.lex_state = 47},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 48},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 48},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 256},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 49},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 33},
  [132] = {.lex_state = 256},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 255},
  [143] = {.lex_state = 255},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 36},
  [154] = {.lex_state = 36},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 46},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 255},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 255},
  [166] = {.lex_state = 255},
  [167] = {.lex_state = 47},
  [168] = {.lex_state = 255},
  [169] = {.lex_state = 255},
  [170] = {.lex_state = 47},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 255},
  [173] = {.lex_state = 47},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 47},
  [179] = {.lex_state = 47},
  [180] = {.lex_state = 47},
  [181] = {.lex_state = 47},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 47},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 255},
  [186] = {.lex_state = 47},
  [187] = {.lex_state = 47},
  [188] = {.lex_state = 47},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 47},
  [192] = {.lex_state = 47},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 36},
  [195] = {.lex_state = 47},
  [196] = {.lex_state = 255},
  [197] = {.lex_state = 47},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 47},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 48},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 48},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 48},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 48},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 29},
  [223] = {.lex_state = 29},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 48},
  [226] = {.lex_state = 48},
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 48},
  [230] = {.lex_state = 48},
  [231] = {.lex_state = 48},
  [232] = {.lex_state = 29},
  [233] = {.lex_state = 29},
  [234] = {.lex_state = 48},
  [235] = {.lex_state = 29},
  [236] = {.lex_state = 48},
  [237] = {.lex_state = 48},
  [238] = {.lex_state = 29},
  [239] = {.lex_state = 29},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 48},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 29},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 29},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 48},
  [252] = {.lex_state = 48},
  [253] = {.lex_state = 48},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 29},
  [256] = {.lex_state = 29},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 36},
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
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 36},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 36},
  [322] = {.lex_state = 37},
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
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
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
  [349] = {.lex_state = 32},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 36},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 36},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 48},
  [368] = {.lex_state = 36},
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
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
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
    [anon_sym_bidirectional] = ACTIONS(1),
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_no_DASHsync_DASHcreate] = ACTIONS(1),
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
    [sym_source_file] = STATE(344),
    [sym_using] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
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
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_accessibility,
    ACTIONS(17), 1,
      anon_sym_setters,
    ACTIONS(19), 1,
      anon_sym_responses,
    ACTIONS(21), 1,
      anon_sym_items,
    ACTIONS(23), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(25), 1,
      anon_sym_patterns,
    ACTIONS(27), 1,
      anon_sym_suffixes,
    ACTIONS(29), 1,
      anon_sym_layout,
    ACTIONS(31), 1,
      anon_sym_widgets,
    ACTIONS(33), 1,
      anon_sym_strings,
    ACTIONS(35), 1,
      anon_sym_styles,
    ACTIONS(37), 1,
      sym_ident,
    STATE(51), 1,
      sym_object,
    STATE(129), 1,
      sym_child_annotation,
    STATE(264), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_accessibility,
    ACTIONS(17), 1,
      anon_sym_setters,
    ACTIONS(19), 1,
      anon_sym_responses,
    ACTIONS(21), 1,
      anon_sym_items,
    ACTIONS(23), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(25), 1,
      anon_sym_patterns,
    ACTIONS(27), 1,
      anon_sym_suffixes,
    ACTIONS(29), 1,
      anon_sym_layout,
    ACTIONS(31), 1,
      anon_sym_widgets,
    ACTIONS(33), 1,
      anon_sym_strings,
    ACTIONS(35), 1,
      anon_sym_styles,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_object,
    STATE(129), 1,
      sym_child_annotation,
    STATE(264), 1,
      sym_type_name,
    STATE(207), 3,
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_accessibility,
    ACTIONS(17), 1,
      anon_sym_setters,
    ACTIONS(19), 1,
      anon_sym_responses,
    ACTIONS(21), 1,
      anon_sym_items,
    ACTIONS(23), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(25), 1,
      anon_sym_patterns,
    ACTIONS(27), 1,
      anon_sym_suffixes,
    ACTIONS(29), 1,
      anon_sym_layout,
    ACTIONS(31), 1,
      anon_sym_widgets,
    ACTIONS(33), 1,
      anon_sym_strings,
    ACTIONS(35), 1,
      anon_sym_styles,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_object,
    STATE(129), 1,
      sym_child_annotation,
    STATE(264), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
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
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_template,
    ACTIONS(54), 1,
      anon_sym_accessibility,
    ACTIONS(57), 1,
      anon_sym_setters,
    ACTIONS(60), 1,
      anon_sym_responses,
    ACTIONS(63), 1,
      anon_sym_items,
    ACTIONS(66), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(69), 1,
      anon_sym_patterns,
    ACTIONS(72), 1,
      anon_sym_suffixes,
    ACTIONS(75), 1,
      anon_sym_layout,
    ACTIONS(78), 1,
      anon_sym_widgets,
    ACTIONS(81), 1,
      anon_sym_strings,
    ACTIONS(84), 1,
      anon_sym_styles,
    ACTIONS(87), 1,
      sym_ident,
    STATE(51), 1,
      sym_object,
    STATE(129), 1,
      sym_child_annotation,
    STATE(264), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(5), 5,
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_accessibility,
    ACTIONS(17), 1,
      anon_sym_setters,
    ACTIONS(19), 1,
      anon_sym_responses,
    ACTIONS(21), 1,
      anon_sym_items,
    ACTIONS(23), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(25), 1,
      anon_sym_patterns,
    ACTIONS(27), 1,
      anon_sym_suffixes,
    ACTIONS(29), 1,
      anon_sym_layout,
    ACTIONS(31), 1,
      anon_sym_widgets,
    ACTIONS(33), 1,
      anon_sym_strings,
    ACTIONS(35), 1,
      anon_sym_styles,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_object,
    STATE(129), 1,
      sym_child_annotation,
    STATE(264), 1,
      sym_type_name,
    STATE(207), 3,
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
  [435] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
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
    STATE(99), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(273), 1,
      sym_type_name,
    STATE(325), 1,
      sym_object,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(323), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(324), 3,
      sym_value,
      sym_binding,
      sym_object_value,
    STATE(117), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [505] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(120), 1,
      aux_sym_number_literal_token1,
    ACTIONS(123), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      aux_sym_number_token1,
    ACTIONS(129), 1,
      aux_sym_number_token2,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_ident,
    STATE(8), 1,
      aux_sym_closure_expression_repeat1,
    STATE(114), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(355), 1,
      sym_expression,
    STATE(80), 2,
      sym_literal,
      sym_closure_expression,
    STATE(117), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [561] = 17,
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
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      sym_ident,
    STATE(8), 1,
      aux_sym_closure_expression_repeat1,
    STATE(114), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(355), 1,
      sym_expression,
    STATE(80), 2,
      sym_literal,
      sym_closure_expression,
    STATE(117), 4,
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
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      sym_ident,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_closure_expression_repeat1,
    STATE(114), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(355), 1,
      sym_expression,
    STATE(80), 2,
      sym_literal,
      sym_closure_expression,
    STATE(117), 4,
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
    STATE(99), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(358), 1,
      sym_value,
    STATE(323), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(117), 4,
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
    STATE(99), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(373), 1,
      sym_value,
    STATE(323), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(117), 4,
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
    STATE(99), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(363), 1,
      sym_value,
    STATE(323), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(117), 4,
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
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      sym_ident,
    STATE(114), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(331), 1,
      sym_expression,
    STATE(80), 2,
      sym_literal,
      sym_closure_expression,
    STATE(117), 4,
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
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      sym_ident,
    STATE(114), 1,
      sym_quoted,
    STATE(115), 1,
      sym_number,
    STATE(163), 1,
      sym_expression,
    STATE(80), 2,
      sym_literal,
      sym_closure_expression,
    STATE(117), 4,
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
  [1358] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_using,
    ACTIONS(233), 1,
      anon_sym_template,
    ACTIONS(235), 1,
      anon_sym_menu,
    ACTIONS(237), 1,
      sym_ident,
    STATE(273), 1,
      sym_type_name,
    STATE(103), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(57), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(241), 13,
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
  [1422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(245), 13,
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
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(249), 13,
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
  [1470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(253), 13,
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
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(257), 13,
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
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(261), 13,
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
  [1542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(265), 13,
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
  [1566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(269), 13,
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
  [1590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(273), 13,
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
  [1614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(277), 13,
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
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(281), 13,
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
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(285), 13,
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
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(289), 13,
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
  [1710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(293), 13,
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
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(297), 13,
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
  [1758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(301), 13,
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
  [1782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(305), 13,
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
  [1806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(309), 13,
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
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(313), 13,
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
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(317), 13,
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
  [1878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(321), 13,
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
    STATE(273), 1,
      sym_type_name,
    STATE(207), 3,
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_template,
    ACTIONS(235), 1,
      anon_sym_menu,
    ACTIONS(237), 1,
      sym_ident,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    STATE(273), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(56), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1968] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      anon_sym__,
    ACTIONS(344), 1,
      anon_sym_C_,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      sym_ident,
    STATE(58), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(99), 1,
      sym_quoted,
    STATE(125), 1,
      sym_string_value,
    STATE(126), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2006] = 12,
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
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(358), 1,
      sym_ident,
    STATE(58), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(99), 1,
      sym_quoted,
    STATE(125), 1,
      sym_string_value,
    STATE(126), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2044] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2074] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2104] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      anon_sym_section,
    ACTIONS(377), 1,
      anon_sym_submenu,
    ACTIONS(380), 1,
      anon_sym_item,
    ACTIONS(383), 1,
      sym_ident,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2134] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2164] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(67), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2254] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2284] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(63), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2314] = 12,
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
    ACTIONS(358), 1,
      sym_ident,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(99), 1,
      sym_quoted,
    STATE(125), 1,
      sym_string_value,
    STATE(126), 1,
      sym_ext_combo_box_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2412] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2442] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(60), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(70), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2562] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_section,
    ACTIONS(364), 1,
      anon_sym_submenu,
    ACTIONS(366), 1,
      anon_sym_item,
    ACTIONS(368), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(72), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(187), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2592] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    STATE(85), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(99), 1,
      sym_quoted,
    STATE(144), 1,
      sym_string_value,
    STATE(145), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_as,
    STATE(81), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
    ACTIONS(422), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
  [2650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_as,
    STATE(82), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
    ACTIONS(428), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
  [2673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_as,
    STATE(83), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
    ACTIONS(430), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
  [2696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_as,
    STATE(83), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
    ACTIONS(432), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
  [2719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(439), 1,
      anon_sym_as,
    STATE(83), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym_expression_repeat1,
    ACTIONS(434), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
  [2742] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(99), 1,
      sym_quoted,
    STATE(144), 1,
      sym_string_value,
    STATE(145), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2777] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(446), 1,
      anon_sym__,
    ACTIONS(449), 1,
      anon_sym_C_,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(99), 1,
      sym_quoted,
    STATE(144), 1,
      sym_string_value,
    STATE(145), 1,
      sym_ext_string_list_item,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [2812] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      anon_sym_section,
    ACTIONS(462), 1,
      anon_sym_submenu,
    ACTIONS(464), 1,
      anon_sym_item,
    STATE(91), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 3,
      anon_sym_typeof,
      aux_sym_number_token1,
      sym_ident,
    ACTIONS(118), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_number_literal_token1,
      aux_sym_number_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_section,
    ACTIONS(462), 1,
      anon_sym_submenu,
    ACTIONS(464), 1,
      anon_sym_item,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2882] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      anon_sym_section,
    ACTIONS(475), 1,
      anon_sym_submenu,
    ACTIONS(478), 1,
      anon_sym_item,
    STATE(89), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 10,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_default,
  [2924] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_section,
    ACTIONS(462), 1,
      anon_sym_submenu,
    ACTIONS(464), 1,
      anon_sym_item,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_section,
    ACTIONS(462), 1,
      anon_sym_submenu,
    ACTIONS(464), 1,
      anon_sym_item,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(88), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2976] = 3,
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
  [2993] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_quoted,
    STATE(287), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(493), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3039] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_quoted,
    STATE(366), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(499), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(503), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(507), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_quoted,
    STATE(371), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(513), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3165] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_quoted,
    STATE(298), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_using,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(103), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(524), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_ident,
    ACTIONS(528), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(118), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(530), 3,
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
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    STATE(99), 1,
      sym_quoted,
    STATE(289), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(536), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(538), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    STATE(99), 1,
      sym_quoted,
    STATE(308), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3376] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    STATE(99), 1,
      sym_quoted,
    STATE(361), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_ident,
    ACTIONS(555), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(530), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3478] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    STATE(99), 1,
      sym_quoted,
    STATE(290), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym__,
    ACTIONS(561), 1,
      anon_sym_C_,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym_string_value,
    STATE(149), 1,
      sym_quoted,
    STATE(137), 2,
      sym_quoted_literal,
      sym_translated,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_COMMA,
      anon_sym_as,
  [3572] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym__,
    ACTIONS(420), 1,
      anon_sym_C_,
    STATE(99), 1,
      sym_quoted,
    STATE(128), 1,
      sym_string_value,
    STATE(95), 2,
      sym_quoted_literal,
      sym_translated,
  [3598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(569), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(573), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(575), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(581), 1,
      anon_sym_action,
    ACTIONS(583), 1,
      sym_ident,
    STATE(359), 1,
      sym_ext_response,
    STATE(360), 3,
      sym_child_internal,
      sym_child_type,
      sym_child_extension,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(585), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      sym_ident,
    STATE(48), 1,
      sym_object,
    STATE(264), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SEMI,
    STATE(130), 2,
      sym_binding_flag,
      aux_sym_binding_repeat1,
    ACTIONS(593), 3,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(596), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(600), 4,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3731] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [3753] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [3775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    STATE(130), 2,
      sym_binding_flag,
      aux_sym_binding_repeat1,
    ACTIONS(608), 3,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(501), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(495), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3819] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(610), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_ext_styles_repeat1,
    STATE(203), 1,
      sym_ext_styles_class,
    STATE(228), 1,
      sym_quoted,
  [3841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(505), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3855] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [3877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      aux_sym_ext_styles_repeat1,
    STATE(203), 1,
      sym_ext_styles_class,
    STATE(228), 1,
      sym_quoted,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(261), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(301), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 6,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(630), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(636), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(638), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [3989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      sym_ident,
    STATE(348), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [4007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(509), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [4021] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      aux_sym_ext_styles_repeat1,
    STATE(203), 1,
      sym_ext_styles_class,
    STATE(228), 1,
      sym_quoted,
  [4043] = 3,
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
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(515), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [4071] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      sym_ident,
    STATE(288), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [4089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_PIPE,
    STATE(278), 1,
      aux_sym_flags_repeat1,
    ACTIONS(642), 2,
      anon_sym_LBRACE,
      sym_ident,
  [4109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      sym_ident,
    STATE(275), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [4127] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
    ACTIONS(650), 1,
      anon_sym_default,
    ACTIONS(652), 1,
      sym_ident,
    STATE(292), 1,
      sym_number,
  [4149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      sym_ident,
    STATE(378), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [4167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      sym_ident,
    STATE(283), 1,
      sym_type_name,
    STATE(207), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [4185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [4207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(317), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4221] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(656), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [4243] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(211), 1,
      sym_quoted,
    STATE(212), 1,
      sym_ext_file_filter_item,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
    STATE(135), 2,
      sym_binding_flag,
      aux_sym_binding_repeat1,
    ACTIONS(608), 3,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [4281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_COLON_COLON,
    ACTIONS(666), 1,
      anon_sym_EQ_GT,
    ACTIONS(642), 2,
      anon_sym_LBRACE,
      sym_ident,
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(175), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(670), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(674), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(678), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(682), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(174), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(694), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(182), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(189), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4451] = 4,
    ACTIONS(709), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(704), 2,
      sym_string,
      sym_escape_sequence,
    ACTIONS(707), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(190), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    ACTIONS(719), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(731), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(182), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(740), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(744), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    ACTIONS(752), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(182), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(182), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    ACTIONS(764), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    ACTIONS(768), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(199), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(642), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(774), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(778), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    ACTIONS(782), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_SEMI,
    ACTIONS(690), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(182), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    ACTIONS(792), 1,
      sym_ident,
    STATE(201), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(266), 1,
      sym_ext_adw_message_dialog_response,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(795), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
    ACTIONS(803), 1,
      sym_ident,
    STATE(210), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(257), 1,
      sym_ext_size_group_widget,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    ACTIONS(809), 1,
      sym_ident,
    STATE(209), 1,
      aux_sym_ext_layout_repeat1,
    STATE(267), 1,
      sym_ext_layout_prop,
  [4888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(813), 1,
      sym_ident,
    STATE(209), 1,
      aux_sym_ext_layout_repeat1,
    STATE(267), 1,
      sym_ext_layout_prop,
  [4904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
    ACTIONS(818), 1,
      sym_ident,
    STATE(210), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(257), 1,
      sym_ext_size_group_widget,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(823), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    ACTIONS(829), 1,
      sym_ident,
    STATE(201), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(266), 1,
      sym_ext_adw_message_dialog_response,
  [4958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    ACTIONS(833), 1,
      sym_ident,
    STATE(220), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      sym_ident,
    STATE(221), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 1,
      sym_ident,
    STATE(224), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [5030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    ACTIONS(847), 1,
      sym_ident,
    STATE(220), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    ACTIONS(852), 1,
      sym_ident,
    STATE(221), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5058] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(855), 2,
      sym_string,
      sym_escape_sequence,
  [5072] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(859), 2,
      sym_string,
      sym_escape_sequence,
  [5086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    STATE(250), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(250), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5174] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_string,
      sym_escape_sequence,
  [5188] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_string,
      sym_escape_sequence,
  [5202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5212] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(871), 2,
      sym_string,
      sym_escape_sequence,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5246] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_string,
      sym_escape_sequence,
  [5260] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(877), 2,
      sym_string,
      sym_escape_sequence,
  [5274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(257), 1,
      sym_ext_size_group_widget,
  [5290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      aux_sym_ext_layout_repeat1,
    STATE(267), 1,
      sym_ext_layout_prop,
  [5316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(266), 1,
      sym_ext_adw_message_dialog_response,
  [5332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(215), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [5360] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_string,
      sym_escape_sequence,
  [5374] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_string,
      sym_escape_sequence,
  [5388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 4,
      anon_sym_SEMI,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [5398] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(893), 2,
      sym_string,
      sym_escape_sequence,
  [5412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    ACTIONS(899), 1,
      sym_ident,
    STATE(250), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
    STATE(227), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5470] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(904), 2,
      sym_string,
      sym_escape_sequence,
  [5484] = 4,
    ACTIONS(709), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(867), 2,
      sym_string,
      sym_escape_sequence,
  [5498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(906), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 3,
      anon_sym_SEMI,
      anon_sym_after,
      anon_sym_swapped,
  [5518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_quoted,
  [5531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym_quoted,
  [5544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      sym_quoted,
  [5557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(314), 1,
      sym_number,
  [5570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    ACTIONS(914), 1,
      anon_sym_PIPE,
    STATE(263), 1,
      aux_sym_flags_repeat1,
  [5583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
    ACTIONS(919), 1,
      sym_ident,
    STATE(40), 1,
      sym_object_content,
  [5596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
  [5605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(923), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(927), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_ident,
  [5645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(123), 1,
      sym_number,
  [5658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym_quoted,
  [5671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    ACTIONS(646), 1,
      anon_sym_PIPE,
    STATE(278), 1,
      aux_sym_flags_repeat1,
  [5684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      sym_ident,
    STATE(142), 1,
      sym_object_content,
  [5697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      sym_quoted,
  [5710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    ACTIONS(937), 1,
      anon_sym_COLON,
    STATE(196), 1,
      sym_object_content,
  [5723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(342), 1,
      sym_quoted,
  [5736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_PIPE,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      aux_sym_flags_repeat1,
  [5758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    ACTIONS(943), 1,
      anon_sym_default,
  [5768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LBRACE,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_object_content,
  [5804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_LBRACE,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
  [5814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    ACTIONS(959), 1,
      sym_ident,
  [5824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      sym_ident,
  [5834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      anon_sym_COMMA,
  [5844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_object_content,
  [5854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(971), 1,
      anon_sym_COMMA,
  [5864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    ACTIONS(975), 1,
      anon_sym_COMMA,
  [5874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_DOLLAR,
      sym_ident,
  [5882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    ACTIONS(981), 1,
      anon_sym_default,
  [5892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_object_content,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      sym_ident,
  [5912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_object_content,
  [5922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(989), 1,
      sym_ident,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(993), 1,
      anon_sym_COMMA,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    ACTIONS(999), 1,
      sym_ident,
  [5976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      sym_ident,
  [5986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LBRACE,
    ACTIONS(1007), 1,
      sym_ident,
  [6004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_RBRACE,
      sym_ident,
  [6012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LBRACK,
  [6019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [6026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_SEMI,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [6040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_DOLLAR,
  [6047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [6054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_ident,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym_ident,
  [6068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
  [6075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym_ident,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LBRACK,
  [6089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_ident,
  [6096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym_ident,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_LBRACE,
  [6117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym_ident,
  [6124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_EQ_GT,
  [6131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_SEMI,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_SEMI,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
  [6152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LBRACK,
  [6159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LT,
  [6166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
  [6173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_LBRACK,
  [6180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_LBRACK,
  [6187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_ident,
  [6208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_LBRACK,
  [6215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_LT,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_COLON,
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LBRACK,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COLON,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RBRACK,
  [6257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym_ident,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
  [6271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
  [6278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_DOT,
  [6299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_COLON,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_GT,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_EQ,
  [6320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RBRACK,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym_ident,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
  [6341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COLON,
  [6355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_DOLLAR,
  [6369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      sym_ident,
  [6376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_SEMI,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
  [6390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_SEMI,
  [6404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
  [6411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_SEMI,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
  [6432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_response,
  [6446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym_ident,
  [6453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LBRACE,
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
  [6467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_COLON,
  [6481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
  [6488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_LBRACE,
  [6495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LBRACE,
  [6502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
  [6509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_LBRACK,
  [6516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_GT,
  [6523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
  [6530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_COLON,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LPAREN,
  [6544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_RBRACK,
  [6551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
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
  [SMALL_STATE(35)] = 1398,
  [SMALL_STATE(36)] = 1422,
  [SMALL_STATE(37)] = 1446,
  [SMALL_STATE(38)] = 1470,
  [SMALL_STATE(39)] = 1494,
  [SMALL_STATE(40)] = 1518,
  [SMALL_STATE(41)] = 1542,
  [SMALL_STATE(42)] = 1566,
  [SMALL_STATE(43)] = 1590,
  [SMALL_STATE(44)] = 1614,
  [SMALL_STATE(45)] = 1638,
  [SMALL_STATE(46)] = 1662,
  [SMALL_STATE(47)] = 1686,
  [SMALL_STATE(48)] = 1710,
  [SMALL_STATE(49)] = 1734,
  [SMALL_STATE(50)] = 1758,
  [SMALL_STATE(51)] = 1782,
  [SMALL_STATE(52)] = 1806,
  [SMALL_STATE(53)] = 1830,
  [SMALL_STATE(54)] = 1854,
  [SMALL_STATE(55)] = 1878,
  [SMALL_STATE(56)] = 1902,
  [SMALL_STATE(57)] = 1935,
  [SMALL_STATE(58)] = 1968,
  [SMALL_STATE(59)] = 2006,
  [SMALL_STATE(60)] = 2044,
  [SMALL_STATE(61)] = 2074,
  [SMALL_STATE(62)] = 2104,
  [SMALL_STATE(63)] = 2134,
  [SMALL_STATE(64)] = 2164,
  [SMALL_STATE(65)] = 2194,
  [SMALL_STATE(66)] = 2224,
  [SMALL_STATE(67)] = 2254,
  [SMALL_STATE(68)] = 2284,
  [SMALL_STATE(69)] = 2314,
  [SMALL_STATE(70)] = 2352,
  [SMALL_STATE(71)] = 2382,
  [SMALL_STATE(72)] = 2412,
  [SMALL_STATE(73)] = 2442,
  [SMALL_STATE(74)] = 2472,
  [SMALL_STATE(75)] = 2502,
  [SMALL_STATE(76)] = 2532,
  [SMALL_STATE(77)] = 2562,
  [SMALL_STATE(78)] = 2592,
  [SMALL_STATE(79)] = 2627,
  [SMALL_STATE(80)] = 2650,
  [SMALL_STATE(81)] = 2673,
  [SMALL_STATE(82)] = 2696,
  [SMALL_STATE(83)] = 2719,
  [SMALL_STATE(84)] = 2742,
  [SMALL_STATE(85)] = 2777,
  [SMALL_STATE(86)] = 2812,
  [SMALL_STATE(87)] = 2838,
  [SMALL_STATE(88)] = 2856,
  [SMALL_STATE(89)] = 2882,
  [SMALL_STATE(90)] = 2908,
  [SMALL_STATE(91)] = 2924,
  [SMALL_STATE(92)] = 2950,
  [SMALL_STATE(93)] = 2976,
  [SMALL_STATE(94)] = 2993,
  [SMALL_STATE(95)] = 3022,
  [SMALL_STATE(96)] = 3039,
  [SMALL_STATE(97)] = 3068,
  [SMALL_STATE(98)] = 3085,
  [SMALL_STATE(99)] = 3102,
  [SMALL_STATE(100)] = 3119,
  [SMALL_STATE(101)] = 3148,
  [SMALL_STATE(102)] = 3165,
  [SMALL_STATE(103)] = 3194,
  [SMALL_STATE(104)] = 3214,
  [SMALL_STATE(105)] = 3228,
  [SMALL_STATE(106)] = 3248,
  [SMALL_STATE(107)] = 3274,
  [SMALL_STATE(108)] = 3288,
  [SMALL_STATE(109)] = 3308,
  [SMALL_STATE(110)] = 3322,
  [SMALL_STATE(111)] = 3336,
  [SMALL_STATE(112)] = 3350,
  [SMALL_STATE(113)] = 3376,
  [SMALL_STATE(114)] = 3402,
  [SMALL_STATE(115)] = 3416,
  [SMALL_STATE(116)] = 3430,
  [SMALL_STATE(117)] = 3444,
  [SMALL_STATE(118)] = 3458,
  [SMALL_STATE(119)] = 3478,
  [SMALL_STATE(120)] = 3504,
  [SMALL_STATE(121)] = 3518,
  [SMALL_STATE(122)] = 3544,
  [SMALL_STATE(123)] = 3558,
  [SMALL_STATE(124)] = 3572,
  [SMALL_STATE(125)] = 3598,
  [SMALL_STATE(126)] = 3613,
  [SMALL_STATE(127)] = 3630,
  [SMALL_STATE(128)] = 3651,
  [SMALL_STATE(129)] = 3666,
  [SMALL_STATE(130)] = 3687,
  [SMALL_STATE(131)] = 3703,
  [SMALL_STATE(132)] = 3717,
  [SMALL_STATE(133)] = 3731,
  [SMALL_STATE(134)] = 3753,
  [SMALL_STATE(135)] = 3775,
  [SMALL_STATE(136)] = 3791,
  [SMALL_STATE(137)] = 3805,
  [SMALL_STATE(138)] = 3819,
  [SMALL_STATE(139)] = 3841,
  [SMALL_STATE(140)] = 3855,
  [SMALL_STATE(141)] = 3877,
  [SMALL_STATE(142)] = 3899,
  [SMALL_STATE(143)] = 3913,
  [SMALL_STATE(144)] = 3927,
  [SMALL_STATE(145)] = 3939,
  [SMALL_STATE(146)] = 3953,
  [SMALL_STATE(147)] = 3967,
  [SMALL_STATE(148)] = 3989,
  [SMALL_STATE(149)] = 4007,
  [SMALL_STATE(150)] = 4021,
  [SMALL_STATE(151)] = 4043,
  [SMALL_STATE(152)] = 4057,
  [SMALL_STATE(153)] = 4071,
  [SMALL_STATE(154)] = 4089,
  [SMALL_STATE(155)] = 4109,
  [SMALL_STATE(156)] = 4127,
  [SMALL_STATE(157)] = 4149,
  [SMALL_STATE(158)] = 4167,
  [SMALL_STATE(159)] = 4185,
  [SMALL_STATE(160)] = 4207,
  [SMALL_STATE(161)] = 4221,
  [SMALL_STATE(162)] = 4243,
  [SMALL_STATE(163)] = 4265,
  [SMALL_STATE(164)] = 4281,
  [SMALL_STATE(165)] = 4301,
  [SMALL_STATE(166)] = 4315,
  [SMALL_STATE(167)] = 4328,
  [SMALL_STATE(168)] = 4341,
  [SMALL_STATE(169)] = 4354,
  [SMALL_STATE(170)] = 4367,
  [SMALL_STATE(171)] = 4380,
  [SMALL_STATE(172)] = 4395,
  [SMALL_STATE(173)] = 4408,
  [SMALL_STATE(174)] = 4421,
  [SMALL_STATE(175)] = 4436,
  [SMALL_STATE(176)] = 4451,
  [SMALL_STATE(177)] = 4466,
  [SMALL_STATE(178)] = 4481,
  [SMALL_STATE(179)] = 4494,
  [SMALL_STATE(180)] = 4507,
  [SMALL_STATE(181)] = 4520,
  [SMALL_STATE(182)] = 4533,
  [SMALL_STATE(183)] = 4548,
  [SMALL_STATE(184)] = 4561,
  [SMALL_STATE(185)] = 4574,
  [SMALL_STATE(186)] = 4587,
  [SMALL_STATE(187)] = 4600,
  [SMALL_STATE(188)] = 4613,
  [SMALL_STATE(189)] = 4626,
  [SMALL_STATE(190)] = 4641,
  [SMALL_STATE(191)] = 4656,
  [SMALL_STATE(192)] = 4669,
  [SMALL_STATE(193)] = 4682,
  [SMALL_STATE(194)] = 4697,
  [SMALL_STATE(195)] = 4710,
  [SMALL_STATE(196)] = 4723,
  [SMALL_STATE(197)] = 4736,
  [SMALL_STATE(198)] = 4749,
  [SMALL_STATE(199)] = 4760,
  [SMALL_STATE(200)] = 4775,
  [SMALL_STATE(201)] = 4788,
  [SMALL_STATE(202)] = 4804,
  [SMALL_STATE(203)] = 4814,
  [SMALL_STATE(204)] = 4826,
  [SMALL_STATE(205)] = 4836,
  [SMALL_STATE(206)] = 4852,
  [SMALL_STATE(207)] = 4862,
  [SMALL_STATE(208)] = 4872,
  [SMALL_STATE(209)] = 4888,
  [SMALL_STATE(210)] = 4904,
  [SMALL_STATE(211)] = 4920,
  [SMALL_STATE(212)] = 4930,
  [SMALL_STATE(213)] = 4942,
  [SMALL_STATE(214)] = 4958,
  [SMALL_STATE(215)] = 4968,
  [SMALL_STATE(216)] = 4982,
  [SMALL_STATE(217)] = 4996,
  [SMALL_STATE(218)] = 5010,
  [SMALL_STATE(219)] = 5020,
  [SMALL_STATE(220)] = 5030,
  [SMALL_STATE(221)] = 5044,
  [SMALL_STATE(222)] = 5058,
  [SMALL_STATE(223)] = 5072,
  [SMALL_STATE(224)] = 5086,
  [SMALL_STATE(225)] = 5100,
  [SMALL_STATE(226)] = 5110,
  [SMALL_STATE(227)] = 5120,
  [SMALL_STATE(228)] = 5134,
  [SMALL_STATE(229)] = 5144,
  [SMALL_STATE(230)] = 5154,
  [SMALL_STATE(231)] = 5164,
  [SMALL_STATE(232)] = 5174,
  [SMALL_STATE(233)] = 5188,
  [SMALL_STATE(234)] = 5202,
  [SMALL_STATE(235)] = 5212,
  [SMALL_STATE(236)] = 5226,
  [SMALL_STATE(237)] = 5236,
  [SMALL_STATE(238)] = 5246,
  [SMALL_STATE(239)] = 5260,
  [SMALL_STATE(240)] = 5274,
  [SMALL_STATE(241)] = 5290,
  [SMALL_STATE(242)] = 5300,
  [SMALL_STATE(243)] = 5316,
  [SMALL_STATE(244)] = 5332,
  [SMALL_STATE(245)] = 5346,
  [SMALL_STATE(246)] = 5360,
  [SMALL_STATE(247)] = 5374,
  [SMALL_STATE(248)] = 5388,
  [SMALL_STATE(249)] = 5398,
  [SMALL_STATE(250)] = 5412,
  [SMALL_STATE(251)] = 5426,
  [SMALL_STATE(252)] = 5436,
  [SMALL_STATE(253)] = 5446,
  [SMALL_STATE(254)] = 5456,
  [SMALL_STATE(255)] = 5470,
  [SMALL_STATE(256)] = 5484,
  [SMALL_STATE(257)] = 5498,
  [SMALL_STATE(258)] = 5509,
  [SMALL_STATE(259)] = 5518,
  [SMALL_STATE(260)] = 5531,
  [SMALL_STATE(261)] = 5544,
  [SMALL_STATE(262)] = 5557,
  [SMALL_STATE(263)] = 5570,
  [SMALL_STATE(264)] = 5583,
  [SMALL_STATE(265)] = 5596,
  [SMALL_STATE(266)] = 5605,
  [SMALL_STATE(267)] = 5616,
  [SMALL_STATE(268)] = 5627,
  [SMALL_STATE(269)] = 5636,
  [SMALL_STATE(270)] = 5645,
  [SMALL_STATE(271)] = 5658,
  [SMALL_STATE(272)] = 5671,
  [SMALL_STATE(273)] = 5684,
  [SMALL_STATE(274)] = 5697,
  [SMALL_STATE(275)] = 5710,
  [SMALL_STATE(276)] = 5723,
  [SMALL_STATE(277)] = 5736,
  [SMALL_STATE(278)] = 5745,
  [SMALL_STATE(279)] = 5758,
  [SMALL_STATE(280)] = 5768,
  [SMALL_STATE(281)] = 5778,
  [SMALL_STATE(282)] = 5786,
  [SMALL_STATE(283)] = 5794,
  [SMALL_STATE(284)] = 5804,
  [SMALL_STATE(285)] = 5814,
  [SMALL_STATE(286)] = 5824,
  [SMALL_STATE(287)] = 5834,
  [SMALL_STATE(288)] = 5844,
  [SMALL_STATE(289)] = 5854,
  [SMALL_STATE(290)] = 5864,
  [SMALL_STATE(291)] = 5874,
  [SMALL_STATE(292)] = 5882,
  [SMALL_STATE(293)] = 5892,
  [SMALL_STATE(294)] = 5902,
  [SMALL_STATE(295)] = 5912,
  [SMALL_STATE(296)] = 5922,
  [SMALL_STATE(297)] = 5932,
  [SMALL_STATE(298)] = 5940,
  [SMALL_STATE(299)] = 5950,
  [SMALL_STATE(300)] = 5958,
  [SMALL_STATE(301)] = 5966,
  [SMALL_STATE(302)] = 5976,
  [SMALL_STATE(303)] = 5986,
  [SMALL_STATE(304)] = 5994,
  [SMALL_STATE(305)] = 6004,
  [SMALL_STATE(306)] = 6012,
  [SMALL_STATE(307)] = 6019,
  [SMALL_STATE(308)] = 6026,
  [SMALL_STATE(309)] = 6033,
  [SMALL_STATE(310)] = 6040,
  [SMALL_STATE(311)] = 6047,
  [SMALL_STATE(312)] = 6054,
  [SMALL_STATE(313)] = 6061,
  [SMALL_STATE(314)] = 6068,
  [SMALL_STATE(315)] = 6075,
  [SMALL_STATE(316)] = 6082,
  [SMALL_STATE(317)] = 6089,
  [SMALL_STATE(318)] = 6096,
  [SMALL_STATE(319)] = 6103,
  [SMALL_STATE(320)] = 6110,
  [SMALL_STATE(321)] = 6117,
  [SMALL_STATE(322)] = 6124,
  [SMALL_STATE(323)] = 6131,
  [SMALL_STATE(324)] = 6138,
  [SMALL_STATE(325)] = 6145,
  [SMALL_STATE(326)] = 6152,
  [SMALL_STATE(327)] = 6159,
  [SMALL_STATE(328)] = 6166,
  [SMALL_STATE(329)] = 6173,
  [SMALL_STATE(330)] = 6180,
  [SMALL_STATE(331)] = 6187,
  [SMALL_STATE(332)] = 6194,
  [SMALL_STATE(333)] = 6201,
  [SMALL_STATE(334)] = 6208,
  [SMALL_STATE(335)] = 6215,
  [SMALL_STATE(336)] = 6222,
  [SMALL_STATE(337)] = 6229,
  [SMALL_STATE(338)] = 6236,
  [SMALL_STATE(339)] = 6243,
  [SMALL_STATE(340)] = 6250,
  [SMALL_STATE(341)] = 6257,
  [SMALL_STATE(342)] = 6264,
  [SMALL_STATE(343)] = 6271,
  [SMALL_STATE(344)] = 6278,
  [SMALL_STATE(345)] = 6285,
  [SMALL_STATE(346)] = 6292,
  [SMALL_STATE(347)] = 6299,
  [SMALL_STATE(348)] = 6306,
  [SMALL_STATE(349)] = 6313,
  [SMALL_STATE(350)] = 6320,
  [SMALL_STATE(351)] = 6327,
  [SMALL_STATE(352)] = 6334,
  [SMALL_STATE(353)] = 6341,
  [SMALL_STATE(354)] = 6348,
  [SMALL_STATE(355)] = 6355,
  [SMALL_STATE(356)] = 6362,
  [SMALL_STATE(357)] = 6369,
  [SMALL_STATE(358)] = 6376,
  [SMALL_STATE(359)] = 6383,
  [SMALL_STATE(360)] = 6390,
  [SMALL_STATE(361)] = 6397,
  [SMALL_STATE(362)] = 6404,
  [SMALL_STATE(363)] = 6411,
  [SMALL_STATE(364)] = 6418,
  [SMALL_STATE(365)] = 6425,
  [SMALL_STATE(366)] = 6432,
  [SMALL_STATE(367)] = 6439,
  [SMALL_STATE(368)] = 6446,
  [SMALL_STATE(369)] = 6453,
  [SMALL_STATE(370)] = 6460,
  [SMALL_STATE(371)] = 6467,
  [SMALL_STATE(372)] = 6474,
  [SMALL_STATE(373)] = 6481,
  [SMALL_STATE(374)] = 6488,
  [SMALL_STATE(375)] = 6495,
  [SMALL_STATE(376)] = 6502,
  [SMALL_STATE(377)] = 6509,
  [SMALL_STATE(378)] = 6516,
  [SMALL_STATE(379)] = 6523,
  [SMALL_STATE(380)] = 6530,
  [SMALL_STATE(381)] = 6537,
  [SMALL_STATE(382)] = 6544,
  [SMALL_STATE(383)] = 6551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(317),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(127),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(153),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(319),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(320),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(326),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(329),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(330),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(334),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(337),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(338),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(306),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(316),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(377),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(164),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(315),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(270),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(327),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(90),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(90),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(235),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(239),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(104),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 23),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 23),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 22),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 22),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 23),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 23),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 22),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 22),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 20),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 20),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 20),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 24),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 24),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 24),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 24),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(317),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(155),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(301),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(194),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(353),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(352),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(223),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(222),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(339),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(286),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(285),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(284),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(354),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(333),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(335),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(353),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(352),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(223),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(222),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(302),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(304),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(280),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 5, .production_id = 19),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 5, .production_id = 19),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, .production_id = 17),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 4, .production_id = 17),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_literal, 1, .production_id = 6),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_literal, 1, .production_id = 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_literal, 1, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 8),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 8),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, .production_id = 18),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2), SHIFT_REPEAT(146),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1, .production_id = 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 8),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 8),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2, .production_id = 11),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 8),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 8),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(248),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(223),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(222),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(223),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(222),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_item, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_short, 1, .production_id = 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 5),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(176),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 5),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(258),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 5),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 5),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 5),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 5),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 5),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 5),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2), SHIFT_REPEAT(307),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_full, 3, .production_id = 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2), SHIFT_REPEAT(336),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2), SHIFT_REPEAT(269),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_item, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_external, 2, .production_id = 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2), SHIFT_REPEAT(346),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2), SHIFT_REPEAT(347),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles_class, 1, .production_id = 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_flag, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(380),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_flag, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 16),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 16), SHIFT_REPEAT(313),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout_prop, 4, .production_id = 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widget, 1, .production_id = 8),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, .production_id = 12),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 13),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility_prop, 4, .production_id = 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 15),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 14),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_setter, 6, .production_id = 21),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 13),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1085] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 7),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_type, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 14),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
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
