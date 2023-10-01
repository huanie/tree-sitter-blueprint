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
#define STATE_COUNT 353
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 24

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
  aux_sym_binding_repeat1 = 133,
  aux_sym_menu_repeat1 = 134,
  aux_sym_menu_section_repeat1 = 135,
  aux_sym_menu_item_repeat1 = 136,
  aux_sym_ext_accessibility_repeat1 = 137,
  aux_sym_ext_adw_breakpoint_repeat1 = 138,
  aux_sym_ext_adw_message_dialog_repeat1 = 139,
  aux_sym_ext_adw_message_dialog_response_repeat1 = 140,
  aux_sym_ext_combo_box_items_repeat1 = 141,
  aux_sym_ext_file_filter_mime_types_repeat1 = 142,
  aux_sym_ext_layout_repeat1 = 143,
  aux_sym_ext_size_group_widgets_repeat1 = 144,
  aux_sym_ext_string_list_strings_repeat1 = 145,
  aux_sym_ext_styles_repeat1 = 146,
  aux_sym_quoted_repeat1 = 147,
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
  [18] = {.index = 21, .length = 2},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 3},
  [22] = {.index = 30, .length = 3},
  [23] = {.index = 33, .length = 4},
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
    {field_context, 2},
    {field_string, 3},
  [23] =
    {field_handler, 3},
    {field_name, 0},
  [25] =
    {field_object, 0},
    {field_property, 2},
  [27] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [30] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [33] =
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
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 58,
  [66] = 66,
  [67] = 67,
  [68] = 55,
  [69] = 63,
  [70] = 57,
  [71] = 59,
  [72] = 67,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 81,
  [86] = 84,
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
  [98] = 96,
  [99] = 93,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 25,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 89,
  [114] = 83,
  [115] = 30,
  [116] = 116,
  [117] = 31,
  [118] = 26,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 88,
  [127] = 127,
  [128] = 87,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 82,
  [134] = 134,
  [135] = 135,
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
  [180] = 169,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 153,
  [187] = 187,
  [188] = 152,
  [189] = 189,
  [190] = 151,
  [191] = 148,
  [192] = 147,
  [193] = 193,
  [194] = 194,
  [195] = 160,
  [196] = 196,
  [197] = 155,
  [198] = 146,
  [199] = 145,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 170,
  [204] = 176,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 167,
  [210] = 210,
  [211] = 211,
  [212] = 178,
  [213] = 181,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 156,
  [218] = 218,
  [219] = 157,
  [220] = 159,
  [221] = 221,
  [222] = 218,
  [223] = 223,
  [224] = 161,
  [225] = 221,
  [226] = 200,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 230,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 229,
  [249] = 246,
  [250] = 237,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 163,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 260,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 266,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 269,
  [275] = 255,
  [276] = 263,
  [277] = 264,
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
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
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
  [334] = 329,
  [335] = 328,
  [336] = 336,
  [337] = 315,
  [338] = 338,
  [339] = 288,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 296,
  [344] = 295,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 279,
  [350] = 280,
  [351] = 351,
  [352] = 284,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(290);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == ';') ADVANCE(257);
      if (lookahead == '<') ADVANCE(278);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '|') ADVANCE(280);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(30)
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
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(290);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == ';') ADVANCE(257);
      if (lookahead == '<') ADVANCE(278);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '|') ADVANCE(280);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(275);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(290);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(257);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(275);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(290);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == ';') ADVANCE(257);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '|') ADVANCE(280);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == 'w') ADVANCE(418);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(355);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(354);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(290);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(264);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 236:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 238:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(350);
      END_STATE();
    case 244:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(355);
      if (lookahead == '\r') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(356);
      END_STATE();
    case 245:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(251)
      END_STATE();
    case 246:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(251)
      if (lookahead == '\r') SKIP(245)
      END_STATE();
    case 247:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(253)
      END_STATE();
    case 248:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(253)
      if (lookahead == '\r') SKIP(247)
      END_STATE();
    case 249:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(252)
      END_STATE();
    case 250:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(252)
      if (lookahead == '\r') SKIP(249)
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(290);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == ';') ADVANCE(257);
      if (lookahead == '<') ADVANCE(278);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '\\') SKIP(246)
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '|') ADVANCE(280);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 252:
      if (eof) ADVANCE(254);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(257);
      if (lookahead == '\\') SKIP(250)
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') SKIP(248)
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_destructive);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_destructive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_suggested);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_suggested);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(264);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == 'x') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(355);
      if (lookahead == '\r') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(244);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 'y') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 253},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 252},
  [52] = {.lex_state = 252},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 30},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 38},
  [92] = {.lex_state = 253},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 38},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 38},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 30},
  [103] = {.lex_state = 46},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 252},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 43},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 38},
  [114] = {.lex_state = 38},
  [115] = {.lex_state = 252},
  [116] = {.lex_state = 38},
  [117] = {.lex_state = 252},
  [118] = {.lex_state = 252},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 38},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 38},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 38},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 38},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 252},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 252},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 252},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 44},
  [157] = {.lex_state = 44},
  [158] = {.lex_state = 27},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 44},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 44},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 252},
  [172] = {.lex_state = 252},
  [173] = {.lex_state = 33},
  [174] = {.lex_state = 252},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 27},
  [179] = {.lex_state = 33},
  [180] = {.lex_state = 45},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 33},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 33},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 45},
  [192] = {.lex_state = 45},
  [193] = {.lex_state = 33},
  [194] = {.lex_state = 33},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 33},
  [197] = {.lex_state = 45},
  [198] = {.lex_state = 45},
  [199] = {.lex_state = 45},
  [200] = {.lex_state = 33},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 33},
  [203] = {.lex_state = 45},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 33},
  [206] = {.lex_state = 33},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 45},
  [210] = {.lex_state = 33},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 27},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 33},
  [217] = {.lex_state = 45},
  [218] = {.lex_state = 27},
  [219] = {.lex_state = 45},
  [220] = {.lex_state = 45},
  [221] = {.lex_state = 27},
  [222] = {.lex_state = 27},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 45},
  [225] = {.lex_state = 27},
  [226] = {.lex_state = 33},
  [227] = {.lex_state = 33},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 33},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 33},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 33},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 33},
  [241] = {.lex_state = 33},
  [242] = {.lex_state = 33},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 33},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 33},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 33},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 33},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 33},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 33},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 33},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 33},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 33},
  [272] = {.lex_state = 33},
  [273] = {.lex_state = 33},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 33},
  [276] = {.lex_state = 33},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 33},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 45},
  [293] = {.lex_state = 33},
  [294] = {.lex_state = 34},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
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
  [317] = {.lex_state = 33},
  [318] = {.lex_state = 33},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 33},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 33},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 33},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 29},
  [348] = {.lex_state = 33},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 33},
  [352] = {.lex_state = 0},
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
    [sym_source_file] = STATE(346),
    [sym_using] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
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
    STATE(41), 1,
      sym_object,
    STATE(101), 1,
      sym_child_annotation,
    STATE(241), 1,
      sym_type_name,
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
    STATE(39), 12,
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
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_template,
    ACTIONS(50), 1,
      anon_sym_accessibility,
    ACTIONS(53), 1,
      anon_sym_setters,
    ACTIONS(56), 1,
      anon_sym_responses,
    ACTIONS(59), 1,
      anon_sym_items,
    ACTIONS(62), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(65), 1,
      anon_sym_patterns,
    ACTIONS(68), 1,
      anon_sym_suffixes,
    ACTIONS(71), 1,
      anon_sym_layout,
    ACTIONS(74), 1,
      anon_sym_widgets,
    ACTIONS(77), 1,
      anon_sym_strings,
    ACTIONS(80), 1,
      anon_sym_styles,
    ACTIONS(83), 1,
      sym_ident,
    STATE(41), 1,
      sym_object,
    STATE(101), 1,
      sym_child_annotation,
    STATE(241), 1,
      sym_type_name,
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
    STATE(39), 12,
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
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_object,
    STATE(101), 1,
      sym_child_annotation,
    STATE(241), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(6), 5,
      sym_property,
      sym_signal,
      sym_child,
      sym_extension,
      aux_sym_object_content_repeat1,
    STATE(39), 12,
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
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_object,
    STATE(101), 1,
      sym_child_annotation,
    STATE(241), 1,
      sym_type_name,
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
    STATE(39), 12,
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
    STATE(41), 1,
      sym_object,
    STATE(101), 1,
      sym_child_annotation,
    STATE(241), 1,
      sym_type_name,
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
    STATE(39), 12,
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
    STATE(82), 1,
      sym_quoted,
    STATE(230), 1,
      sym_type_name,
    STATE(336), 1,
      sym_object,
    STATE(345), 1,
      sym_number,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(340), 3,
      sym_value,
      sym_binding,
      sym_object_value,
    STATE(341), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(342), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [505] = 15,
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
    ACTIONS(112), 1,
      sym_ident,
    STATE(82), 1,
      sym_quoted,
    STATE(325), 1,
      sym_value,
    STATE(345), 1,
      sym_number,
    STATE(341), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(342), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [556] = 15,
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
    ACTIONS(112), 1,
      sym_ident,
    STATE(82), 1,
      sym_quoted,
    STATE(321), 1,
      sym_value,
    STATE(345), 1,
      sym_number,
    STATE(341), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(342), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [607] = 15,
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
    ACTIONS(112), 1,
      sym_ident,
    STATE(82), 1,
      sym_quoted,
    STATE(287), 1,
      sym_value,
    STATE(345), 1,
      sym_number,
    STATE(341), 3,
      sym_literal,
      sym_flags,
      sym_translated,
    STATE(342), 4,
      sym_quoted_literal,
      sym_number_literal,
      sym_ident_literal,
      sym_type_literal,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(116), 13,
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
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(120), 13,
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
  [706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(124), 13,
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
  [730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(128), 13,
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
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(132), 13,
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
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(136), 13,
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
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(140), 13,
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
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(144), 13,
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
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(148), 13,
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
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(152), 13,
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
  [898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(156), 13,
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
  [922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(160), 13,
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
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(164), 13,
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
  [970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(168), 13,
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
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(172), 13,
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
  [1018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(176), 13,
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
  [1042] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_using,
    ACTIONS(182), 1,
      anon_sym_template,
    ACTIONS(184), 1,
      anon_sym_menu,
    ACTIONS(186), 1,
      sym_ident,
    STATE(230), 1,
      sym_type_name,
    STATE(92), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(52), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(190), 13,
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
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(194), 13,
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
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(198), 13,
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
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(202), 13,
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
  [1178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(206), 13,
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
  [1202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(210), 13,
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
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(214), 13,
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
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(218), 13,
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
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(222), 13,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(226), 13,
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
  [1322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(230), 13,
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
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(234), 13,
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
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(238), 13,
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
  [1394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(242), 13,
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
  [1418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(246), 13,
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
  [1442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(250), 13,
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
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(254), 13,
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
  [1490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(258), 13,
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
  [1514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(262), 13,
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
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(266), 13,
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
  [1562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(270), 13,
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
  [1586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(274), 13,
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
  [1610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
    ACTIONS(278), 13,
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
  [1634] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_template,
    ACTIONS(288), 1,
      anon_sym_menu,
    ACTIONS(291), 1,
      sym_ident,
    STATE(230), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(51), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1667] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_template,
    ACTIONS(184), 1,
      anon_sym_menu,
    ACTIONS(186), 1,
      sym_ident,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
    STATE(51), 4,
      sym_object,
      sym_template,
      sym_menu,
      aux_sym_source_file_repeat2,
  [1700] = 12,
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
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(298), 1,
      sym_ident,
    STATE(66), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(82), 1,
      sym_quoted,
    STATE(104), 1,
      sym_string_value,
    STATE(105), 1,
      sym_ext_combo_box_item,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [1738] = 12,
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
    ACTIONS(298), 1,
      sym_ident,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(82), 1,
      sym_quoted,
    STATE(104), 1,
      sym_string_value,
    STATE(105), 1,
      sym_ext_combo_box_item,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [1776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    STATE(69), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1806] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_section,
    ACTIONS(317), 1,
      anon_sym_submenu,
    ACTIONS(320), 1,
      anon_sym_item,
    ACTIONS(323), 1,
      sym_ident,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1836] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(62), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1866] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(71), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1896] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1926] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(67), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1956] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(72), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [1986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2046] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2076] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(59), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2106] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(346), 1,
      anon_sym__,
    ACTIONS(349), 1,
      anon_sym_C_,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(358), 1,
      sym_ident,
    STATE(66), 1,
      aux_sym_ext_combo_box_items_repeat1,
    STATE(82), 1,
      sym_quoted,
    STATE(104), 1,
      sym_string_value,
    STATE(105), 1,
      sym_ext_combo_box_item,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2144] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2174] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(63), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2204] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2234] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(64), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2264] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_section,
    ACTIONS(306), 1,
      anon_sym_submenu,
    ACTIONS(308), 1,
      anon_sym_item,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(160), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2324] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    ACTIONS(375), 1,
      anon_sym__,
    ACTIONS(378), 1,
      anon_sym_C_,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(82), 1,
      sym_quoted,
    STATE(135), 1,
      sym_ext_string_list_item,
    STATE(136), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2359] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    STATE(73), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(82), 1,
      sym_quoted,
    STATE(135), 1,
      sym_ext_string_list_item,
    STATE(136), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2394] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_ext_string_list_strings_repeat1,
    STATE(82), 1,
      sym_quoted,
    STATE(135), 1,
      sym_ext_string_list_item,
    STATE(136), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_section,
    ACTIONS(400), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    STATE(76), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(195), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      anon_sym_section,
    ACTIONS(410), 1,
      anon_sym_submenu,
    ACTIONS(412), 1,
      anon_sym_item,
    STATE(78), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(195), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2481] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_section,
    ACTIONS(410), 1,
      anon_sym_submenu,
    ACTIONS(412), 1,
      anon_sym_item,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(195), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_section,
    ACTIONS(410), 1,
      anon_sym_submenu,
    ACTIONS(412), 1,
      anon_sym_item,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(195), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_section,
    ACTIONS(410), 1,
      anon_sym_submenu,
    ACTIONS(412), 1,
      anon_sym_item,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(195), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_quoted,
    STATE(269), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(422), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(426), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2622] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_quoted,
    STATE(288), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2651] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_quoted,
    STATE(274), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2680] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_quoted,
    STATE(339), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(436), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(440), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(444), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(448), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_ident,
    ACTIONS(452), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(95), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(454), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [2797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_using,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(92), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(463), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [2817] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    STATE(82), 1,
      sym_quoted,
    STATE(334), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2843] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym__,
    ACTIONS(467), 1,
      anon_sym_C_,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym_string_value,
    STATE(133), 1,
      sym_quoted,
    STATE(139), 2,
      sym_quoted_literal,
      sym_translated,
  [2869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_ident,
    ACTIONS(473), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(100), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(454), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [2889] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    STATE(82), 1,
      sym_quoted,
    STATE(266), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2915] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    STATE(82), 1,
      sym_quoted,
    STATE(102), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2941] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    STATE(82), 1,
      sym_quoted,
    STATE(270), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2967] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym__,
    ACTIONS(391), 1,
      anon_sym_C_,
    STATE(82), 1,
      sym_quoted,
    STATE(329), 1,
      sym_string_value,
    STATE(90), 2,
      sym_quoted_literal,
      sym_translated,
  [2993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_ident,
    ACTIONS(477), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(100), 2,
      sym_ext_adw_message_dialog_flag,
      aux_sym_ext_adw_message_dialog_response_repeat1,
    ACTIONS(479), 3,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
  [3013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      sym_ident,
    STATE(18), 1,
      sym_object,
    STATE(241), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(486), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3049] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(492), 1,
      anon_sym_action,
    ACTIONS(494), 1,
      sym_ident,
    STATE(289), 1,
      sym_ext_response,
    STATE(290), 3,
      sym_child_internal,
      sym_child_type,
      sym_child_extension,
  [3070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
    ACTIONS(496), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(500), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(502), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      sym_ident,
    STATE(320), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    STATE(107), 2,
      sym_binding_flag,
      aux_sym_binding_repeat1,
    ACTIONS(508), 3,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(172), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(513), 4,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3164] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    ACTIONS(517), 1,
      anon_sym_default,
    ACTIONS(519), 1,
      sym_ident,
    STATE(254), 1,
      sym_number,
  [3186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      sym_ident,
    STATE(258), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3204] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_ext_styles_repeat1,
    STATE(207), 1,
      sym_quoted,
    STATE(208), 1,
      sym_ext_styles_class,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(446), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(428), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(198), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(531), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(202), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(176), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(533), 3,
      anon_sym__,
      anon_sym_C_,
      sym_ident,
  [3324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      aux_sym_ext_styles_repeat1,
    STATE(207), 1,
      sym_quoted,
    STATE(208), 1,
      sym_ext_styles_class,
  [3346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      sym_ident,
    STATE(261), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(545), 1,
      anon_sym_COLON_COLON,
    ACTIONS(547), 1,
      anon_sym_EQ_GT,
    ACTIONS(539), 2,
      anon_sym_LBRACE,
      sym_ident,
  [3406] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(549), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3428] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(442), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3464] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(438), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym_flags_repeat1,
    ACTIONS(539), 2,
      anon_sym_LBRACE,
      sym_ident,
  [3520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_ext_styles_repeat1,
    STATE(207), 1,
      sym_quoted,
    STATE(208), 1,
      sym_ext_styles_class,
  [3564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(424), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    STATE(201), 1,
      sym_ext_file_filter_item,
    STATE(223), 1,
      sym_quoted,
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(573), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 6,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    STATE(107), 2,
      sym_binding_flag,
      aux_sym_binding_repeat1,
    ACTIONS(581), 3,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [3664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      sym_ident,
    STATE(236), 1,
      sym_type_name,
    STATE(216), 3,
      sym_type_name_full,
      sym_type_name_external,
      sym_type_name_short,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(450), 4,
      anon_sym_destructive,
      anon_sym_suggested,
      anon_sym_disabled,
      sym_ident,
  [3696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(137), 2,
      sym_binding_flag,
      aux_sym_binding_repeat1,
    ACTIONS(581), 3,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [3712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(144), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(591), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(166), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [3755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(164), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [3770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    ACTIONS(603), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_RBRACK,
      anon_sym__,
      anon_sym_C_,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(615), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(631), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(643), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3937] = 4,
    ACTIONS(650), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(645), 2,
      sym_string,
      sym_escape_sequence,
    ACTIONS(648), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    ACTIONS(654), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    ACTIONS(662), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [3991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(164), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(672), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(164), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(162), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(164), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(164), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(691), 4,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
      sym_ident,
  [4118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(695), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(699), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(539), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(703), 3,
      anon_sym_template,
      anon_sym_menu,
      sym_ident,
  [4170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SEMI,
    ACTIONS(587), 2,
      anon_sym_after,
      anon_sym_swapped,
    STATE(168), 2,
      sym_signal_flag,
      aux_sym_signal_repeat1,
  [4185] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(707), 2,
      sym_string,
      sym_escape_sequence,
  [4199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
    ACTIONS(713), 1,
      sym_ident,
    STATE(211), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(240), 1,
      sym_ext_adw_message_dialog_response,
  [4215] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(707), 2,
      sym_string,
      sym_escape_sequence,
  [4229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 1,
      sym_ident,
    STATE(193), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      sym_ident,
    STATE(200), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(725), 1,
      sym_ident,
    STATE(182), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(732), 1,
      sym_ident,
    STATE(184), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(737), 1,
      sym_ident,
    STATE(185), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(742), 1,
      sym_ident,
    STATE(215), 1,
      aux_sym_ext_layout_repeat1,
    STATE(235), 1,
      sym_ext_layout_prop,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
    ACTIONS(746), 1,
      sym_ident,
    STATE(189), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(240), 1,
      sym_ext_adw_message_dialog_response,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_ident,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(182), 2,
      sym_ext_accessibility_prop,
      aux_sym_ext_accessibility_repeat1,
  [4415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 1,
      sym_ident,
    STATE(206), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
    ACTIONS(757), 1,
      sym_ident,
    STATE(210), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(242), 1,
      sym_ext_size_group_widget,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_ident,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    STATE(184), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    ACTIONS(761), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 1,
      sym_ident,
    STATE(202), 1,
      aux_sym_ext_layout_repeat1,
    STATE(235), 1,
      sym_ext_layout_prop,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4537] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(707), 2,
      sym_string,
      sym_escape_sequence,
  [4551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    ACTIONS(774), 1,
      sym_ident,
    STATE(205), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(242), 1,
      sym_ext_size_group_widget,
  [4567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_ident,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(185), 2,
      sym_ext_adw_breakpoint_setter,
      aux_sym_ext_adw_breakpoint_repeat1,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(781), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_ident,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    STATE(242), 1,
      sym_ext_size_group_widget,
  [4629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_ident,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_ext_adw_message_dialog_repeat1,
    STATE(240), 1,
      sym_ext_adw_message_dialog_response,
  [4645] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(707), 2,
      sym_string,
      sym_escape_sequence,
  [4659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_ident,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(226), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 4,
      anon_sym_SEMI,
      anon_sym_bidirectional,
      anon_sym_inverted,
      anon_sym_no_DASHsync_DASHcreate,
  [4683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_ident,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      aux_sym_ext_layout_repeat1,
    STATE(235), 1,
      sym_ext_layout_prop,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4719] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(797), 2,
      sym_string,
      sym_escape_sequence,
  [4733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4753] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(801), 2,
      sym_string,
      sym_escape_sequence,
  [4767] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(805), 2,
      sym_string,
      sym_escape_sequence,
  [4781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4801] = 4,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(809), 2,
      sym_string,
      sym_escape_sequence,
  [4815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_ident,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(184), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 4,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_GT,
      sym_ident,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(315), 1,
      sym_quoted,
  [4861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    ACTIONS(817), 1,
      sym_ident,
    STATE(108), 1,
      sym_object_content,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 3,
      anon_sym_SEMI,
      anon_sym_after,
      anon_sym_swapped,
  [4883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym_flags_repeat1,
  [4896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_default,
  [4905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    STATE(239), 1,
      aux_sym_flags_repeat1,
  [4918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(825), 2,
      anon_sym_RBRACE,
      sym_ident,
  [4929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym_object_content,
  [4942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      sym_quoted,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_ident,
  [4964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    ACTIONS(835), 1,
      anon_sym_PIPE,
    STATE(239), 1,
      aux_sym_flags_repeat1,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(838), 2,
      anon_sym_RBRACK,
      sym_ident,
  [4988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    ACTIONS(844), 1,
      sym_ident,
    STATE(25), 1,
      sym_object_content,
  [5001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(846), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 3,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [5021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(332), 1,
      sym_number,
  [5034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(104), 1,
      aux_sym_number_token2,
    STATE(323), 1,
      sym_number,
  [5047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(335), 1,
      sym_quoted,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
  [5069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(337), 1,
      sym_quoted,
  [5082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(328), 1,
      sym_quoted,
  [5095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym_quoted,
  [5108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      sym_ident,
  [5118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      sym_ident,
  [5136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    ACTIONS(864), 1,
      anon_sym_default,
  [5146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_LBRACE,
    ACTIONS(868), 1,
      sym_ident,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_object_content,
  [5182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 2,
      anon_sym_DOLLAR,
      sym_ident,
  [5190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_object_content,
  [5200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_object_content,
  [5210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_object_content,
  [5220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    ACTIONS(876), 1,
      sym_ident,
  [5230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LBRACE,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
  [5240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 1,
      sym_ident,
  [5250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    ACTIONS(888), 1,
      anon_sym_COMMA,
  [5260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    ACTIONS(892), 1,
      anon_sym_default,
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    ACTIONS(896), 1,
      anon_sym_COMMA,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    ACTIONS(900), 1,
      anon_sym_COMMA,
  [5298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_RBRACE,
      sym_ident,
  [5322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(906), 1,
      anon_sym_COMMA,
  [5332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      sym_ident,
  [5342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_LBRACE,
    ACTIONS(914), 1,
      sym_ident,
  [5352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_COLON,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_DOLLAR,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_ident,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_LPAREN,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_COLON,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_SEMI,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RBRACK,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_response,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_ident,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_EQ,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_LBRACE,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_LBRACK,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_LBRACK,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_LBRACE,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LBRACK,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_LBRACK,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_LBRACK,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
  [5572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACE,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_SEMI,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_COLON,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_DOT,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
  [5628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_COLON,
  [5635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym_ident,
  [5642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym_ident,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_GT,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
  [5670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_COLON,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
  [5684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_COLON,
  [5691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
  [5698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_ident,
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
  [5719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
  [5726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_DOLLAR,
  [5733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_ident,
  [5740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
  [5747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LT,
  [5754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
  [5761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
  [5768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_SEMI,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_ident,
  [5789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
  [5796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
  [5803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LBRACE,
  [5824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LBRACE,
  [5831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      ts_builtin_sym_end,
  [5845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_EQ_GT,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_ident,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_COLON,
  [5866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
  [5873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_ident,
  [5880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
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
  [SMALL_STATE(9)] = 556,
  [SMALL_STATE(10)] = 607,
  [SMALL_STATE(11)] = 658,
  [SMALL_STATE(12)] = 682,
  [SMALL_STATE(13)] = 706,
  [SMALL_STATE(14)] = 730,
  [SMALL_STATE(15)] = 754,
  [SMALL_STATE(16)] = 778,
  [SMALL_STATE(17)] = 802,
  [SMALL_STATE(18)] = 826,
  [SMALL_STATE(19)] = 850,
  [SMALL_STATE(20)] = 874,
  [SMALL_STATE(21)] = 898,
  [SMALL_STATE(22)] = 922,
  [SMALL_STATE(23)] = 946,
  [SMALL_STATE(24)] = 970,
  [SMALL_STATE(25)] = 994,
  [SMALL_STATE(26)] = 1018,
  [SMALL_STATE(27)] = 1042,
  [SMALL_STATE(28)] = 1082,
  [SMALL_STATE(29)] = 1106,
  [SMALL_STATE(30)] = 1130,
  [SMALL_STATE(31)] = 1154,
  [SMALL_STATE(32)] = 1178,
  [SMALL_STATE(33)] = 1202,
  [SMALL_STATE(34)] = 1226,
  [SMALL_STATE(35)] = 1250,
  [SMALL_STATE(36)] = 1274,
  [SMALL_STATE(37)] = 1298,
  [SMALL_STATE(38)] = 1322,
  [SMALL_STATE(39)] = 1346,
  [SMALL_STATE(40)] = 1370,
  [SMALL_STATE(41)] = 1394,
  [SMALL_STATE(42)] = 1418,
  [SMALL_STATE(43)] = 1442,
  [SMALL_STATE(44)] = 1466,
  [SMALL_STATE(45)] = 1490,
  [SMALL_STATE(46)] = 1514,
  [SMALL_STATE(47)] = 1538,
  [SMALL_STATE(48)] = 1562,
  [SMALL_STATE(49)] = 1586,
  [SMALL_STATE(50)] = 1610,
  [SMALL_STATE(51)] = 1634,
  [SMALL_STATE(52)] = 1667,
  [SMALL_STATE(53)] = 1700,
  [SMALL_STATE(54)] = 1738,
  [SMALL_STATE(55)] = 1776,
  [SMALL_STATE(56)] = 1806,
  [SMALL_STATE(57)] = 1836,
  [SMALL_STATE(58)] = 1866,
  [SMALL_STATE(59)] = 1896,
  [SMALL_STATE(60)] = 1926,
  [SMALL_STATE(61)] = 1956,
  [SMALL_STATE(62)] = 1986,
  [SMALL_STATE(63)] = 2016,
  [SMALL_STATE(64)] = 2046,
  [SMALL_STATE(65)] = 2076,
  [SMALL_STATE(66)] = 2106,
  [SMALL_STATE(67)] = 2144,
  [SMALL_STATE(68)] = 2174,
  [SMALL_STATE(69)] = 2204,
  [SMALL_STATE(70)] = 2234,
  [SMALL_STATE(71)] = 2264,
  [SMALL_STATE(72)] = 2294,
  [SMALL_STATE(73)] = 2324,
  [SMALL_STATE(74)] = 2359,
  [SMALL_STATE(75)] = 2394,
  [SMALL_STATE(76)] = 2429,
  [SMALL_STATE(77)] = 2455,
  [SMALL_STATE(78)] = 2481,
  [SMALL_STATE(79)] = 2507,
  [SMALL_STATE(80)] = 2533,
  [SMALL_STATE(81)] = 2559,
  [SMALL_STATE(82)] = 2588,
  [SMALL_STATE(83)] = 2605,
  [SMALL_STATE(84)] = 2622,
  [SMALL_STATE(85)] = 2651,
  [SMALL_STATE(86)] = 2680,
  [SMALL_STATE(87)] = 2709,
  [SMALL_STATE(88)] = 2726,
  [SMALL_STATE(89)] = 2743,
  [SMALL_STATE(90)] = 2760,
  [SMALL_STATE(91)] = 2777,
  [SMALL_STATE(92)] = 2797,
  [SMALL_STATE(93)] = 2817,
  [SMALL_STATE(94)] = 2843,
  [SMALL_STATE(95)] = 2869,
  [SMALL_STATE(96)] = 2889,
  [SMALL_STATE(97)] = 2915,
  [SMALL_STATE(98)] = 2941,
  [SMALL_STATE(99)] = 2967,
  [SMALL_STATE(100)] = 2993,
  [SMALL_STATE(101)] = 3013,
  [SMALL_STATE(102)] = 3034,
  [SMALL_STATE(103)] = 3049,
  [SMALL_STATE(104)] = 3070,
  [SMALL_STATE(105)] = 3085,
  [SMALL_STATE(106)] = 3102,
  [SMALL_STATE(107)] = 3120,
  [SMALL_STATE(108)] = 3136,
  [SMALL_STATE(109)] = 3150,
  [SMALL_STATE(110)] = 3164,
  [SMALL_STATE(111)] = 3186,
  [SMALL_STATE(112)] = 3204,
  [SMALL_STATE(113)] = 3226,
  [SMALL_STATE(114)] = 3240,
  [SMALL_STATE(115)] = 3254,
  [SMALL_STATE(116)] = 3268,
  [SMALL_STATE(117)] = 3282,
  [SMALL_STATE(118)] = 3296,
  [SMALL_STATE(119)] = 3310,
  [SMALL_STATE(120)] = 3324,
  [SMALL_STATE(121)] = 3346,
  [SMALL_STATE(122)] = 3368,
  [SMALL_STATE(123)] = 3386,
  [SMALL_STATE(124)] = 3406,
  [SMALL_STATE(125)] = 3428,
  [SMALL_STATE(126)] = 3450,
  [SMALL_STATE(127)] = 3464,
  [SMALL_STATE(128)] = 3486,
  [SMALL_STATE(129)] = 3500,
  [SMALL_STATE(130)] = 3520,
  [SMALL_STATE(131)] = 3542,
  [SMALL_STATE(132)] = 3564,
  [SMALL_STATE(133)] = 3586,
  [SMALL_STATE(134)] = 3600,
  [SMALL_STATE(135)] = 3622,
  [SMALL_STATE(136)] = 3636,
  [SMALL_STATE(137)] = 3648,
  [SMALL_STATE(138)] = 3664,
  [SMALL_STATE(139)] = 3682,
  [SMALL_STATE(140)] = 3696,
  [SMALL_STATE(141)] = 3712,
  [SMALL_STATE(142)] = 3727,
  [SMALL_STATE(143)] = 3740,
  [SMALL_STATE(144)] = 3755,
  [SMALL_STATE(145)] = 3770,
  [SMALL_STATE(146)] = 3783,
  [SMALL_STATE(147)] = 3796,
  [SMALL_STATE(148)] = 3809,
  [SMALL_STATE(149)] = 3822,
  [SMALL_STATE(150)] = 3833,
  [SMALL_STATE(151)] = 3846,
  [SMALL_STATE(152)] = 3859,
  [SMALL_STATE(153)] = 3872,
  [SMALL_STATE(154)] = 3885,
  [SMALL_STATE(155)] = 3898,
  [SMALL_STATE(156)] = 3911,
  [SMALL_STATE(157)] = 3924,
  [SMALL_STATE(158)] = 3937,
  [SMALL_STATE(159)] = 3952,
  [SMALL_STATE(160)] = 3965,
  [SMALL_STATE(161)] = 3978,
  [SMALL_STATE(162)] = 3991,
  [SMALL_STATE(163)] = 4006,
  [SMALL_STATE(164)] = 4019,
  [SMALL_STATE(165)] = 4034,
  [SMALL_STATE(166)] = 4049,
  [SMALL_STATE(167)] = 4064,
  [SMALL_STATE(168)] = 4077,
  [SMALL_STATE(169)] = 4092,
  [SMALL_STATE(170)] = 4105,
  [SMALL_STATE(171)] = 4118,
  [SMALL_STATE(172)] = 4131,
  [SMALL_STATE(173)] = 4144,
  [SMALL_STATE(174)] = 4157,
  [SMALL_STATE(175)] = 4170,
  [SMALL_STATE(176)] = 4185,
  [SMALL_STATE(177)] = 4199,
  [SMALL_STATE(178)] = 4215,
  [SMALL_STATE(179)] = 4229,
  [SMALL_STATE(180)] = 4243,
  [SMALL_STATE(181)] = 4253,
  [SMALL_STATE(182)] = 4267,
  [SMALL_STATE(183)] = 4281,
  [SMALL_STATE(184)] = 4291,
  [SMALL_STATE(185)] = 4305,
  [SMALL_STATE(186)] = 4319,
  [SMALL_STATE(187)] = 4329,
  [SMALL_STATE(188)] = 4345,
  [SMALL_STATE(189)] = 4355,
  [SMALL_STATE(190)] = 4371,
  [SMALL_STATE(191)] = 4381,
  [SMALL_STATE(192)] = 4391,
  [SMALL_STATE(193)] = 4401,
  [SMALL_STATE(194)] = 4415,
  [SMALL_STATE(195)] = 4429,
  [SMALL_STATE(196)] = 4439,
  [SMALL_STATE(197)] = 4455,
  [SMALL_STATE(198)] = 4465,
  [SMALL_STATE(199)] = 4475,
  [SMALL_STATE(200)] = 4485,
  [SMALL_STATE(201)] = 4499,
  [SMALL_STATE(202)] = 4511,
  [SMALL_STATE(203)] = 4527,
  [SMALL_STATE(204)] = 4537,
  [SMALL_STATE(205)] = 4551,
  [SMALL_STATE(206)] = 4567,
  [SMALL_STATE(207)] = 4581,
  [SMALL_STATE(208)] = 4591,
  [SMALL_STATE(209)] = 4603,
  [SMALL_STATE(210)] = 4613,
  [SMALL_STATE(211)] = 4629,
  [SMALL_STATE(212)] = 4645,
  [SMALL_STATE(213)] = 4659,
  [SMALL_STATE(214)] = 4673,
  [SMALL_STATE(215)] = 4683,
  [SMALL_STATE(216)] = 4699,
  [SMALL_STATE(217)] = 4709,
  [SMALL_STATE(218)] = 4719,
  [SMALL_STATE(219)] = 4733,
  [SMALL_STATE(220)] = 4743,
  [SMALL_STATE(221)] = 4753,
  [SMALL_STATE(222)] = 4767,
  [SMALL_STATE(223)] = 4781,
  [SMALL_STATE(224)] = 4791,
  [SMALL_STATE(225)] = 4801,
  [SMALL_STATE(226)] = 4815,
  [SMALL_STATE(227)] = 4829,
  [SMALL_STATE(228)] = 4839,
  [SMALL_STATE(229)] = 4848,
  [SMALL_STATE(230)] = 4861,
  [SMALL_STATE(231)] = 4874,
  [SMALL_STATE(232)] = 4883,
  [SMALL_STATE(233)] = 4896,
  [SMALL_STATE(234)] = 4905,
  [SMALL_STATE(235)] = 4918,
  [SMALL_STATE(236)] = 4929,
  [SMALL_STATE(237)] = 4942,
  [SMALL_STATE(238)] = 4955,
  [SMALL_STATE(239)] = 4964,
  [SMALL_STATE(240)] = 4977,
  [SMALL_STATE(241)] = 4988,
  [SMALL_STATE(242)] = 5001,
  [SMALL_STATE(243)] = 5012,
  [SMALL_STATE(244)] = 5021,
  [SMALL_STATE(245)] = 5034,
  [SMALL_STATE(246)] = 5047,
  [SMALL_STATE(247)] = 5060,
  [SMALL_STATE(248)] = 5069,
  [SMALL_STATE(249)] = 5082,
  [SMALL_STATE(250)] = 5095,
  [SMALL_STATE(251)] = 5108,
  [SMALL_STATE(252)] = 5118,
  [SMALL_STATE(253)] = 5126,
  [SMALL_STATE(254)] = 5136,
  [SMALL_STATE(255)] = 5146,
  [SMALL_STATE(256)] = 5156,
  [SMALL_STATE(257)] = 5164,
  [SMALL_STATE(258)] = 5172,
  [SMALL_STATE(259)] = 5182,
  [SMALL_STATE(260)] = 5190,
  [SMALL_STATE(261)] = 5200,
  [SMALL_STATE(262)] = 5210,
  [SMALL_STATE(263)] = 5220,
  [SMALL_STATE(264)] = 5230,
  [SMALL_STATE(265)] = 5240,
  [SMALL_STATE(266)] = 5250,
  [SMALL_STATE(267)] = 5260,
  [SMALL_STATE(268)] = 5268,
  [SMALL_STATE(269)] = 5278,
  [SMALL_STATE(270)] = 5288,
  [SMALL_STATE(271)] = 5298,
  [SMALL_STATE(272)] = 5306,
  [SMALL_STATE(273)] = 5314,
  [SMALL_STATE(274)] = 5322,
  [SMALL_STATE(275)] = 5332,
  [SMALL_STATE(276)] = 5342,
  [SMALL_STATE(277)] = 5352,
  [SMALL_STATE(278)] = 5362,
  [SMALL_STATE(279)] = 5369,
  [SMALL_STATE(280)] = 5376,
  [SMALL_STATE(281)] = 5383,
  [SMALL_STATE(282)] = 5390,
  [SMALL_STATE(283)] = 5397,
  [SMALL_STATE(284)] = 5404,
  [SMALL_STATE(285)] = 5411,
  [SMALL_STATE(286)] = 5418,
  [SMALL_STATE(287)] = 5425,
  [SMALL_STATE(288)] = 5432,
  [SMALL_STATE(289)] = 5439,
  [SMALL_STATE(290)] = 5446,
  [SMALL_STATE(291)] = 5453,
  [SMALL_STATE(292)] = 5460,
  [SMALL_STATE(293)] = 5467,
  [SMALL_STATE(294)] = 5474,
  [SMALL_STATE(295)] = 5481,
  [SMALL_STATE(296)] = 5488,
  [SMALL_STATE(297)] = 5495,
  [SMALL_STATE(298)] = 5502,
  [SMALL_STATE(299)] = 5509,
  [SMALL_STATE(300)] = 5516,
  [SMALL_STATE(301)] = 5523,
  [SMALL_STATE(302)] = 5530,
  [SMALL_STATE(303)] = 5537,
  [SMALL_STATE(304)] = 5544,
  [SMALL_STATE(305)] = 5551,
  [SMALL_STATE(306)] = 5558,
  [SMALL_STATE(307)] = 5565,
  [SMALL_STATE(308)] = 5572,
  [SMALL_STATE(309)] = 5579,
  [SMALL_STATE(310)] = 5586,
  [SMALL_STATE(311)] = 5593,
  [SMALL_STATE(312)] = 5600,
  [SMALL_STATE(313)] = 5607,
  [SMALL_STATE(314)] = 5614,
  [SMALL_STATE(315)] = 5621,
  [SMALL_STATE(316)] = 5628,
  [SMALL_STATE(317)] = 5635,
  [SMALL_STATE(318)] = 5642,
  [SMALL_STATE(319)] = 5649,
  [SMALL_STATE(320)] = 5656,
  [SMALL_STATE(321)] = 5663,
  [SMALL_STATE(322)] = 5670,
  [SMALL_STATE(323)] = 5677,
  [SMALL_STATE(324)] = 5684,
  [SMALL_STATE(325)] = 5691,
  [SMALL_STATE(326)] = 5698,
  [SMALL_STATE(327)] = 5705,
  [SMALL_STATE(328)] = 5712,
  [SMALL_STATE(329)] = 5719,
  [SMALL_STATE(330)] = 5726,
  [SMALL_STATE(331)] = 5733,
  [SMALL_STATE(332)] = 5740,
  [SMALL_STATE(333)] = 5747,
  [SMALL_STATE(334)] = 5754,
  [SMALL_STATE(335)] = 5761,
  [SMALL_STATE(336)] = 5768,
  [SMALL_STATE(337)] = 5775,
  [SMALL_STATE(338)] = 5782,
  [SMALL_STATE(339)] = 5789,
  [SMALL_STATE(340)] = 5796,
  [SMALL_STATE(341)] = 5803,
  [SMALL_STATE(342)] = 5810,
  [SMALL_STATE(343)] = 5817,
  [SMALL_STATE(344)] = 5824,
  [SMALL_STATE(345)] = 5831,
  [SMALL_STATE(346)] = 5838,
  [SMALL_STATE(347)] = 5845,
  [SMALL_STATE(348)] = 5852,
  [SMALL_STATE(349)] = 5859,
  [SMALL_STATE(350)] = 5866,
  [SMALL_STATE(351)] = 5873,
  [SMALL_STATE(352)] = 5880,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(338),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(103),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(122),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(309),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(307),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(306),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(305),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(304),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(303),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(302),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(301),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(300),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(299),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(298),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(123),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 19),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 19),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 19),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 19),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 22),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 22),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 21),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 21),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 22),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 22),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 23),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 23),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 23),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 21),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 21),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(338),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(138),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(251),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(173),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(275),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(276),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(277),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(279),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(280),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(284),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(218),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(225),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2), SHIFT_REPEAT(322),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(280),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(284),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(218),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(225),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(255),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(263),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(264),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_literal, 1, .production_id = 6),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_literal, 1, .production_id = 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, .production_id = 17),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 4, .production_id = 17),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 5, .production_id = 18),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translated, 5, .production_id = 18),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 8),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 3, .production_id = 8),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 8),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_response, 4, .production_id = 8),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2), SHIFT_REPEAT(116),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_adw_message_dialog_response_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 8),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 3, .production_id = 8),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_item, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_item, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(214),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(218),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2), SHIFT_REPEAT(225),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_message_dialog_flag, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_short, 1, .production_id = 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(218),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2), SHIFT_REPEAT(225),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_literal, 1, .production_id = 9),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_item, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 5),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 5),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 5),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 5),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 5),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 5),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(158),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 5),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 5),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(231),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 5),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 5),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2), SHIFT_REPEAT(311),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_full, 3, .production_id = 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(349),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2), SHIFT_REPEAT(312),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 2), SHIFT_REPEAT(316),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2), SHIFT_REPEAT(286),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2), SHIFT_REPEAT(238),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles_class, 1, .production_id = 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_flag, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_item, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_external, 2, .production_id = 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_flag, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, .production_id = 12),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widget, 1, .production_id = 8),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 16),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 16), SHIFT_REPEAT(331),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_message_dialog_repeat1, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout_prop, 4, .production_id = 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility_prop, 4, .production_id = 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 14),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 15),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 13),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_setter, 6, .production_id = 20),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 7),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_type, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 4),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 14),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 13),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2, .production_id = 11),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1, .production_id = 6),
  [1056] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
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
