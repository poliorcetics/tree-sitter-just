#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_arch = 8,
  anon_sym_num_cpus = 9,
  anon_sym_os = 10,
  anon_sym_os_family = 11,
  anon_sym_shell = 12,
  anon_sym_COMMA = 13,
  anon_sym_set = 14,
  anon_sym_allow_DASHduplicate_DASHrecipes = 15,
  anon_sym_allow_DASHduplicate_DASHvariables = 16,
  anon_sym_dotenv_DASHfilename = 17,
  anon_sym_dotenv_DASHload = 18,
  anon_sym_dotenv_DASHpath = 19,
  anon_sym_dotenv_DASHrequired = 20,
  anon_sym_export = 21,
  anon_sym_fallback = 22,
  anon_sym_ignore_DASHcomments = 23,
  anon_sym_positional_DASHarguments = 24,
  anon_sym_tempdir = 25,
  anon_sym_unstable = 26,
  anon_sym_windows_DASHpowershell = 27,
  anon_sym_windows_DASHshell = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_BQUOTE = 31,
  aux_sym_backtick_token1 = 32,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 33,
  aux_sym_indented_backtick_token1 = 34,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 35,
  aux_sym_indented_normal_string_token1 = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_normal_string_token1 = 38,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 39,
  aux_sym_indented_raw_string_token1 = 40,
  anon_sym_SQUOTE = 41,
  aux_sym_raw_string_token1 = 42,
  anon_sym_BSLASHn = 43,
  anon_sym_BSLASHr = 44,
  anon_sym_BSLASHt = 45,
  anon_sym_BSLASH_DQUOTE = 46,
  anon_sym_BSLASH_BSLASH = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  aux_sym_comment_token1 = 50,
  sym_file = 51,
  sym_alias = 52,
  sym_import = 53,
  sym_mod = 54,
  sym_expression = 55,
  sym_value = 56,
  sym_builtin_function_call = 57,
  sym__p0 = 58,
  sym_function_call = 59,
  sym_function_parameters = 60,
  sym_setting = 61,
  sym__setting_boolean = 62,
  sym__setting_string = 63,
  sym__setting_list = 64,
  sym_backtick = 65,
  sym_indented_backtick = 66,
  sym_string = 67,
  sym_indented_normal_string = 68,
  sym_normal_string = 69,
  sym_indented_raw_string = 70,
  sym_raw_string = 71,
  sym_escape_sequence = 72,
  sym_boolean = 73,
  sym_comment = 74,
  aux_sym_file_repeat1 = 75,
  aux_sym_function_parameters_repeat1 = 76,
  aux_sym__setting_list_repeat1 = 77,
  aux_sym_indented_backtick_repeat1 = 78,
  aux_sym_indented_normal_string_repeat1 = 79,
  aux_sym_normal_string_repeat1 = 80,
  aux_sym_indented_raw_string_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_arch] = "arch",
  [anon_sym_num_cpus] = "num_cpus",
  [anon_sym_os] = "os",
  [anon_sym_os_family] = "os_family",
  [anon_sym_shell] = "shell",
  [anon_sym_COMMA] = ",",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_export] = "export",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_backtick_token1] = "backtick_token1",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [aux_sym_indented_backtick_token1] = "indented_backtick_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_indented_normal_string_token1] = "indented_normal_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_normal_string_token1] = "normal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_indented_raw_string_token1] = "indented_raw_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_raw_string_token1] = "raw_string_token1",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_file] = "file",
  [sym_alias] = "alias",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_expression] = "expression",
  [sym_value] = "value",
  [sym_builtin_function_call] = "builtin_function_call",
  [sym__p0] = "_p0",
  [sym_function_call] = "function_call",
  [sym_function_parameters] = "function_parameters",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
  [sym_backtick] = "backtick",
  [sym_indented_backtick] = "indented_backtick",
  [sym_string] = "string",
  [sym_indented_normal_string] = "indented_normal_string",
  [sym_normal_string] = "normal_string",
  [sym_indented_raw_string] = "indented_raw_string",
  [sym_raw_string] = "raw_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_indented_backtick_repeat1] = "indented_backtick_repeat1",
  [aux_sym_indented_normal_string_repeat1] = "indented_normal_string_repeat1",
  [aux_sym_normal_string_repeat1] = "normal_string_repeat1",
  [aux_sym_indented_raw_string_repeat1] = "indented_raw_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_num_cpus] = anon_sym_num_cpus,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_os_family] = anon_sym_os_family,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_backtick_token1] = aux_sym_backtick_token1,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [aux_sym_indented_backtick_token1] = aux_sym_indented_backtick_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_indented_normal_string_token1] = aux_sym_indented_normal_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_normal_string_token1] = aux_sym_normal_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_indented_raw_string_token1] = aux_sym_indented_raw_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_raw_string_token1] = aux_sym_raw_string_token1,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_file] = sym_file,
  [sym_alias] = sym_alias,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_expression] = sym_expression,
  [sym_value] = sym_value,
  [sym_builtin_function_call] = sym_builtin_function_call,
  [sym__p0] = sym__p0,
  [sym_function_call] = sym_function_call,
  [sym_function_parameters] = sym_function_parameters,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
  [sym_backtick] = sym_backtick,
  [sym_indented_backtick] = sym_indented_backtick,
  [sym_string] = sym_string,
  [sym_indented_normal_string] = sym_indented_normal_string,
  [sym_normal_string] = sym_normal_string,
  [sym_indented_raw_string] = sym_indented_raw_string,
  [sym_raw_string] = sym_raw_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_indented_backtick_repeat1] = aux_sym_indented_backtick_repeat1,
  [aux_sym_indented_normal_string_repeat1] = aux_sym_indented_normal_string_repeat1,
  [aux_sym_normal_string_repeat1] = aux_sym_normal_string_repeat1,
  [aux_sym_indented_raw_string_repeat1] = aux_sym_indented_raw_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_token1] = {
    .visible = false,
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
  [anon_sym_arch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_num_cpus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_family] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHrecipes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHvariables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHrequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positional_DASHarguments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unstable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows_DASHpowershell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows_DASHshell] = {
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_backtick_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_backtick_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__p0] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__setting_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__setting_string] = {
    .visible = false,
    .named = true,
  },
  [sym__setting_list] = {
    .visible = false,
    .named = true,
  },
  [sym_backtick] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_backtick] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_backtick_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_raw_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
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
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 46,
        '#', 77,
        '\'', 60,
        '(', 18,
        ')', 19,
        ',', 20,
        ':', 10,
        '[', 21,
        '\\', 5,
        ']', 22,
        '`', 24,
        'i', 70,
        'm', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '`') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '`') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(11);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'd', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'n', 6,
        'o', 7,
        'p', 8,
        's', 9,
        't', 10,
        'u', 11,
        'w', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 'q') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_mod_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_num_cpus] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_os_family] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(82),
    [sym_alias] = STATE(41),
    [sym_import] = STATE(41),
    [sym_mod] = STATE(41),
    [sym_expression] = STATE(41),
    [sym_value] = STATE(21),
    [sym_builtin_function_call] = STATE(22),
    [sym_function_call] = STATE(22),
    [sym_setting] = STATE(41),
    [sym_backtick] = STATE(22),
    [sym_indented_backtick] = STATE(22),
    [sym_string] = STATE(22),
    [sym_indented_normal_string] = STATE(19),
    [sym_normal_string] = STATE(19),
    [sym_indented_raw_string] = STATE(19),
    [sym_raw_string] = STATE(19),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_alias,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_mod_token1,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_set,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_file_repeat1,
    STATE(21), 1,
      sym_value,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    STATE(41), 5,
      sym_alias,
      sym_import,
      sym_mod,
      sym_expression,
      sym_setting,
  [81] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_alias,
    ACTIONS(45), 1,
      aux_sym_import_token1,
    ACTIONS(48), 1,
      aux_sym_mod_token1,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_shell,
    ACTIONS(60), 1,
      anon_sym_set,
    ACTIONS(63), 1,
      anon_sym_BQUOTE,
    ACTIONS(66), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_value,
    STATE(3), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(54), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    STATE(41), 5,
      sym_alias,
      sym_import,
      sym_mod,
      sym_expression,
      sym_setting,
  [160] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(21), 1,
      sym_value,
    STATE(67), 1,
      sym_expression,
    STATE(86), 1,
      sym_function_parameters,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [225] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(21), 1,
      sym_value,
    STATE(75), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [287] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(21), 1,
      sym_value,
    STATE(67), 1,
      sym_expression,
    STATE(85), 1,
      sym_function_parameters,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [349] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(21), 1,
      sym_value,
    STATE(75), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [411] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(21), 1,
      sym_value,
    STATE(75), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [470] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(21), 1,
      sym_value,
    STATE(90), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(22), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [529] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_comment,
    STATE(42), 1,
      sym_string,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(89), 11,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      sym_identifier,
  [575] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_COLON_EQ,
    STATE(11), 1,
      sym_comment,
    STATE(37), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(93), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [612] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(99), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [644] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(103), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [676] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(107), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [708] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(111), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [740] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(115), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [772] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [804] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(123), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [836] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(127), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [868] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(131), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [899] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(135), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [930] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(139), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [961] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(143), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [992] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1023] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_comment,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(139), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1056] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(153), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1087] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(157), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1118] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(161), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1149] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(165), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1180] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(169), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1211] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      anon_sym_COLON_EQ,
    STATE(31), 1,
      sym_comment,
    STATE(37), 1,
      sym__setting_boolean,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(93), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1246] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(175), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1277] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(179), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1306] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(183), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1335] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(187), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1364] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(191), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1393] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(195), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1422] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(199), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1451] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(203), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1480] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1509] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(211), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1538] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1567] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(219), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1596] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(44), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(227), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(225), 10,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_export,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_positional_DASHarguments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [1627] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_boolean,
    STATE(39), 1,
      sym_string,
    STATE(45), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1665] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_comment,
    STATE(76), 1,
      sym_string,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1696] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_comment,
    STATE(76), 1,
      sym_string,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1727] = 6,
    ACTIONS(237), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_escape_sequence,
    STATE(48), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(242), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1751] = 6,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_normal_string_token1,
    STATE(59), 1,
      sym_escape_sequence,
    STATE(49), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(252), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1775] = 7,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_indented_normal_string_token1,
    STATE(50), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(61), 1,
      sym_escape_sequence,
    ACTIONS(259), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1801] = 7,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_normal_string_token1,
    STATE(49), 1,
      aux_sym_normal_string_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(59), 1,
      sym_escape_sequence,
    ACTIONS(265), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1827] = 7,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(48), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(61), 1,
      sym_escape_sequence,
    ACTIONS(259), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1853] = 7,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      aux_sym_normal_string_token1,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym_normal_string_repeat1,
    STATE(53), 1,
      sym_comment,
    STATE(59), 1,
      sym_escape_sequence,
    ACTIONS(265), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1879] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_string,
    STATE(54), 1,
      sym_comment,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1907] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_string,
    STATE(55), 1,
      sym_comment,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1935] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym_comment,
    STATE(68), 1,
      sym_string,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1963] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_comment,
    STATE(76), 1,
      sym_string,
    STATE(19), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1991] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(271), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2007] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2023] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(271), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2039] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(275), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2055] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(62), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [2069] = 5,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(284), 1,
      aux_sym_indented_raw_string_token1,
    STATE(63), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_indented_raw_string_repeat1,
  [2085] = 4,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(286), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(288), 1,
      aux_sym_indented_backtick_token1,
    STATE(64), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [2099] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_boolean,
    STATE(65), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_true,
      anon_sym_false,
  [2113] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(66), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [2127] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_function_parameters_repeat1,
  [2143] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym__setting_list_repeat1,
  [2159] = 5,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(306), 1,
      aux_sym_indented_backtick_token1,
    STATE(69), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_indented_backtick_repeat1,
  [2175] = 4,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_indented_raw_string_token1,
    STATE(70), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [2189] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym__setting_list_repeat1,
    STATE(71), 1,
      sym_comment,
  [2205] = 5,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(284), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(315), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(70), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(72), 1,
      sym_comment,
  [2221] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_function_parameters_repeat1,
    STATE(73), 1,
      sym_comment,
  [2237] = 5,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(306), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(64), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(74), 1,
      sym_comment,
  [2253] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2264] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2275] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__p0,
    STATE(77), 1,
      sym_comment,
  [2288] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_COLON_EQ,
    STATE(37), 1,
      sym__setting_string,
    STATE(78), 1,
      sym_comment,
  [2301] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [2312] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(327), 1,
      anon_sym_COLON_EQ,
    STATE(37), 1,
      sym__setting_list,
    STATE(80), 1,
      sym_comment,
  [2325] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [2336] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_comment,
  [2346] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
  [2356] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_comment,
  [2366] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_comment,
  [2376] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comment,
  [2386] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
  [2396] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
  [2406] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_COLON_EQ,
    STATE(89), 1,
      sym_comment,
  [2416] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_comment,
  [2426] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym_comment,
  [2436] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      aux_sym_backtick_token1,
    STATE(92), 1,
      sym_comment,
  [2446] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(93), 1,
      sym_comment,
  [2456] = 3,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
    ACTIONS(353), 1,
      aux_sym_raw_string_token1,
    STATE(94), 1,
      sym_comment,
  [2466] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BQUOTE,
    STATE(95), 1,
      sym_comment,
  [2476] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_comment,
  [2486] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 287,
  [SMALL_STATE(7)] = 349,
  [SMALL_STATE(8)] = 411,
  [SMALL_STATE(9)] = 470,
  [SMALL_STATE(10)] = 529,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 612,
  [SMALL_STATE(13)] = 644,
  [SMALL_STATE(14)] = 676,
  [SMALL_STATE(15)] = 708,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 772,
  [SMALL_STATE(18)] = 804,
  [SMALL_STATE(19)] = 836,
  [SMALL_STATE(20)] = 868,
  [SMALL_STATE(21)] = 899,
  [SMALL_STATE(22)] = 930,
  [SMALL_STATE(23)] = 961,
  [SMALL_STATE(24)] = 992,
  [SMALL_STATE(25)] = 1023,
  [SMALL_STATE(26)] = 1056,
  [SMALL_STATE(27)] = 1087,
  [SMALL_STATE(28)] = 1118,
  [SMALL_STATE(29)] = 1149,
  [SMALL_STATE(30)] = 1180,
  [SMALL_STATE(31)] = 1211,
  [SMALL_STATE(32)] = 1246,
  [SMALL_STATE(33)] = 1277,
  [SMALL_STATE(34)] = 1306,
  [SMALL_STATE(35)] = 1335,
  [SMALL_STATE(36)] = 1364,
  [SMALL_STATE(37)] = 1393,
  [SMALL_STATE(38)] = 1422,
  [SMALL_STATE(39)] = 1451,
  [SMALL_STATE(40)] = 1480,
  [SMALL_STATE(41)] = 1509,
  [SMALL_STATE(42)] = 1538,
  [SMALL_STATE(43)] = 1567,
  [SMALL_STATE(44)] = 1596,
  [SMALL_STATE(45)] = 1627,
  [SMALL_STATE(46)] = 1665,
  [SMALL_STATE(47)] = 1696,
  [SMALL_STATE(48)] = 1727,
  [SMALL_STATE(49)] = 1751,
  [SMALL_STATE(50)] = 1775,
  [SMALL_STATE(51)] = 1801,
  [SMALL_STATE(52)] = 1827,
  [SMALL_STATE(53)] = 1853,
  [SMALL_STATE(54)] = 1879,
  [SMALL_STATE(55)] = 1907,
  [SMALL_STATE(56)] = 1935,
  [SMALL_STATE(57)] = 1963,
  [SMALL_STATE(58)] = 1991,
  [SMALL_STATE(59)] = 2007,
  [SMALL_STATE(60)] = 2023,
  [SMALL_STATE(61)] = 2039,
  [SMALL_STATE(62)] = 2055,
  [SMALL_STATE(63)] = 2069,
  [SMALL_STATE(64)] = 2085,
  [SMALL_STATE(65)] = 2099,
  [SMALL_STATE(66)] = 2113,
  [SMALL_STATE(67)] = 2127,
  [SMALL_STATE(68)] = 2143,
  [SMALL_STATE(69)] = 2159,
  [SMALL_STATE(70)] = 2175,
  [SMALL_STATE(71)] = 2189,
  [SMALL_STATE(72)] = 2205,
  [SMALL_STATE(73)] = 2221,
  [SMALL_STATE(74)] = 2237,
  [SMALL_STATE(75)] = 2253,
  [SMALL_STATE(76)] = 2264,
  [SMALL_STATE(77)] = 2275,
  [SMALL_STATE(78)] = 2288,
  [SMALL_STATE(79)] = 2301,
  [SMALL_STATE(80)] = 2312,
  [SMALL_STATE(81)] = 2325,
  [SMALL_STATE(82)] = 2336,
  [SMALL_STATE(83)] = 2346,
  [SMALL_STATE(84)] = 2356,
  [SMALL_STATE(85)] = 2366,
  [SMALL_STATE(86)] = 2376,
  [SMALL_STATE(87)] = 2386,
  [SMALL_STATE(88)] = 2396,
  [SMALL_STATE(89)] = 2406,
  [SMALL_STATE(90)] = 2416,
  [SMALL_STATE(91)] = 2426,
  [SMALL_STATE(92)] = 2436,
  [SMALL_STATE(93)] = 2446,
  [SMALL_STATE(94)] = 2456,
  [SMALL_STATE(95)] = 2466,
  [SMALL_STATE(96)] = 2476,
  [SMALL_STATE(97)] = 2486,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_just(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
