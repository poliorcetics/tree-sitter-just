#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  anon_sym_env_var = 13,
  anon_sym_env_var_or_default = 14,
  anon_sym_COMMA = 15,
  anon_sym_set = 16,
  anon_sym_allow_DASHduplicate_DASHrecipes = 17,
  anon_sym_allow_DASHduplicate_DASHvariables = 18,
  anon_sym_dotenv_DASHfilename = 19,
  anon_sym_dotenv_DASHload = 20,
  anon_sym_dotenv_DASHpath = 21,
  anon_sym_dotenv_DASHrequired = 22,
  anon_sym_export = 23,
  anon_sym_fallback = 24,
  anon_sym_ignore_DASHcomments = 25,
  anon_sym_positional_DASHarguments = 26,
  anon_sym_tempdir = 27,
  anon_sym_unstable = 28,
  anon_sym_windows_DASHpowershell = 29,
  anon_sym_windows_DASHshell = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_BQUOTE = 33,
  aux_sym_backtick_token1 = 34,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 35,
  aux_sym_indented_backtick_token1 = 36,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 37,
  aux_sym_indented_normal_string_token1 = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_normal_string_token1 = 40,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 41,
  aux_sym_indented_raw_string_token1 = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_raw_string_token1 = 44,
  anon_sym_BSLASHn = 45,
  anon_sym_BSLASHr = 46,
  anon_sym_BSLASHt = 47,
  anon_sym_BSLASH_DQUOTE = 48,
  anon_sym_BSLASH_BSLASH = 49,
  anon_sym_true = 50,
  anon_sym_false = 51,
  aux_sym_comment_token1 = 52,
  sym_file = 53,
  sym_alias = 54,
  sym_import = 55,
  sym_mod = 56,
  sym_expression = 57,
  sym_value = 58,
  sym_builtin_function_call = 59,
  sym__p0 = 60,
  sym__p1 = 61,
  sym__p2 = 62,
  sym_function_call = 63,
  sym_function_parameters = 64,
  sym_setting = 65,
  sym__setting_boolean = 66,
  sym__setting_string = 67,
  sym__setting_list = 68,
  sym_backtick = 69,
  sym_indented_backtick = 70,
  sym_string = 71,
  sym_indented_normal_string = 72,
  sym_normal_string = 73,
  sym_indented_raw_string = 74,
  sym_raw_string = 75,
  sym_escape_sequence = 76,
  sym_boolean = 77,
  sym_comment = 78,
  aux_sym_file_repeat1 = 79,
  aux_sym_function_parameters_repeat1 = 80,
  aux_sym__setting_list_repeat1 = 81,
  aux_sym_indented_backtick_repeat1 = 82,
  aux_sym_indented_normal_string_repeat1 = 83,
  aux_sym_normal_string_repeat1 = 84,
  aux_sym_indented_raw_string_repeat1 = 85,
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
  [anon_sym_env_var] = "env_var",
  [anon_sym_env_var_or_default] = "env_var_or_default",
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
  [sym__p1] = "_p1",
  [sym__p2] = "_p2",
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
  [anon_sym_env_var] = anon_sym_env_var,
  [anon_sym_env_var_or_default] = anon_sym_env_var_or_default,
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
  [sym__p1] = sym__p1,
  [sym__p2] = sym__p2,
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
  [anon_sym_env_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var_or_default] = {
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
  [sym__p1] = {
    .visible = false,
    .named = true,
  },
  [sym__p2] = {
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
  [109] = 109,
  [110] = 110,
  [111] = 111,
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
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'q') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 133:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 'v') ADVANCE(180);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(198);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 202:
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
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 0},
  [111] = {(TSStateId)(-1)},
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
    [anon_sym_env_var] = ACTIONS(1),
    [anon_sym_env_var_or_default] = ACTIONS(1),
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
    [sym_file] = STATE(110),
    [sym_alias] = STATE(44),
    [sym_import] = STATE(44),
    [sym_mod] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(24),
    [sym_function_call] = STATE(24),
    [sym_setting] = STATE(44),
    [sym_backtick] = STATE(24),
    [sym_indented_backtick] = STATE(24),
    [sym_string] = STATE(24),
    [sym_indented_normal_string] = STATE(21),
    [sym_normal_string] = STATE(21),
    [sym_indented_raw_string] = STATE(21),
    [sym_raw_string] = STATE(21),
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
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
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
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_set,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_file_repeat1,
    STATE(27), 1,
      sym_value,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    STATE(44), 5,
      sym_alias,
      sym_import,
      sym_mod,
      sym_expression,
      sym_setting,
  [87] = 23,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_alias,
    ACTIONS(49), 1,
      aux_sym_import_token1,
    ACTIONS(52), 1,
      aux_sym_mod_token1,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_shell,
    ACTIONS(64), 1,
      anon_sym_env_var,
    ACTIONS(67), 1,
      anon_sym_env_var_or_default,
    ACTIONS(70), 1,
      anon_sym_set,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_value,
    STATE(3), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(58), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    STATE(44), 5,
      sym_alias,
      sym_import,
      sym_mod,
      sym_expression,
      sym_setting,
  [172] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(74), 1,
      sym_expression,
    STATE(106), 1,
      sym_function_parameters,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [243] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(92), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [311] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(92), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [379] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(74), 1,
      sym_expression,
    STATE(97), 1,
      sym_function_parameters,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [447] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(92), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [512] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(96), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [577] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(87), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [642] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(105), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [707] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(27), 1,
      sym_value,
    STATE(84), 1,
      sym_expression,
    ACTIONS(17), 4,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(24), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [772] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_comment,
    STATE(40), 1,
      sym_string,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(99), 13,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      sym_identifier,
  [820] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      anon_sym_COLON_EQ,
    STATE(14), 1,
      sym_comment,
    STATE(42), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(103), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [859] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(109), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [893] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(113), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [927] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(117), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [961] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(121), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [995] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(125), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1029] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(129), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1063] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(133), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1097] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(137), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1131] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(141), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1164] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(145), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1197] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(149), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1230] = 4,
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
    ACTIONS(153), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1263] = 4,
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
    ACTIONS(157), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1296] = 4,
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
    ACTIONS(161), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1329] = 4,
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
    ACTIONS(165), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1362] = 4,
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
    ACTIONS(169), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1395] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_comment,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(145), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1430] = 4,
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
    ACTIONS(175), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1463] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(179), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1496] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(183), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1529] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(185), 1,
      anon_sym_COLON_EQ,
    STATE(35), 1,
      sym_comment,
    STATE(42), 1,
      sym__setting_boolean,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(103), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1566] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(189), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1599] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(193), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1632] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(197), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1665] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(201), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1698] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(205), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1729] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(209), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1760] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(213), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1791] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(217), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1822] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(221), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1853] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(225), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1884] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(229), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1915] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(233), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1946] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(237), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1977] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(241), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2008] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(245), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2039] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(253), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(251), 10,
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
  [2070] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_string,
    STATE(50), 1,
      sym_boolean,
    STATE(52), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2108] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_comment,
    STATE(82), 1,
      sym_string,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2139] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      sym_comment,
    STATE(82), 1,
      sym_string,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2170] = 7,
    ACTIONS(263), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(265), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(68), 1,
      sym_escape_sequence,
    ACTIONS(267), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2196] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym_string,
    STATE(56), 1,
      sym_comment,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2224] = 7,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_normal_string_token1,
    STATE(57), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_normal_string_repeat1,
    STATE(66), 1,
      sym_escape_sequence,
    ACTIONS(275), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2250] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(70), 1,
      sym_string,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2278] = 7,
    ACTIONS(265), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(277), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(59), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(68), 1,
      sym_escape_sequence,
    ACTIONS(267), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2304] = 7,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      aux_sym_normal_string_token1,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_normal_string_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(66), 1,
      sym_escape_sequence,
    ACTIONS(275), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2330] = 6,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_indented_normal_string_token1,
    STATE(68), 1,
      sym_escape_sequence,
    STATE(61), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(286), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2354] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_string,
    STATE(62), 1,
      sym_comment,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2382] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_comment,
    STATE(82), 1,
      sym_string,
    STATE(21), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2410] = 6,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_normal_string_token1,
    STATE(66), 1,
      sym_escape_sequence,
    STATE(64), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(294), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2434] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(297), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2450] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2466] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(297), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2482] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(301), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2498] = 5,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(305), 1,
      aux_sym_indented_raw_string_token1,
    STATE(69), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_indented_raw_string_repeat1,
  [2514] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__setting_list_repeat1,
  [2530] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_boolean,
    STATE(71), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
  [2544] = 4,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(313), 1,
      aux_sym_indented_backtick_token1,
    STATE(72), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [2558] = 5,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(316), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(318), 1,
      aux_sym_indented_backtick_token1,
    STATE(72), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(73), 1,
      sym_comment,
  [2574] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_function_parameters_repeat1,
  [2590] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(75), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [2604] = 4,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(331), 1,
      aux_sym_indented_raw_string_token1,
    STATE(76), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [2618] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(77), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [2632] = 5,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(305), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(339), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(76), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(78), 1,
      sym_comment,
  [2648] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_function_parameters_repeat1,
    STATE(79), 1,
      sym_comment,
  [2664] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym__setting_list_repeat1,
    STATE(80), 1,
      sym_comment,
  [2680] = 5,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(318), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(345), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(73), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(81), 1,
      sym_comment,
  [2696] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2707] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_COLON_EQ,
    STATE(42), 1,
      sym__setting_list,
    STATE(83), 1,
      sym_comment,
  [2720] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_comment,
  [2733] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(353), 1,
      anon_sym_COLON_EQ,
    STATE(42), 1,
      sym__setting_string,
    STATE(85), 1,
      sym_comment,
  [2746] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__p2,
    STATE(86), 1,
      sym_comment,
  [2759] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
  [2772] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [2783] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__p0,
    STATE(89), 1,
      sym_comment,
  [2796] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [2807] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__p1,
    STATE(91), 1,
      sym_comment,
  [2820] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2831] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_comment,
  [2841] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_comment,
  [2851] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(373), 1,
      anon_sym_COLON_EQ,
    STATE(95), 1,
      sym_comment,
  [2861] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
  [2871] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_comment,
  [2881] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
  [2891] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(99), 1,
      sym_comment,
  [2901] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [2911] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [2921] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      aux_sym_backtick_token1,
    STATE(102), 1,
      sym_comment,
  [2931] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
  [2941] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_comment,
  [2951] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_comment,
  [2961] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_comment,
  [2971] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym_comment,
  [2981] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_BQUOTE,
    STATE(108), 1,
      sym_comment,
  [2991] = 3,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      aux_sym_raw_string_token1,
    STATE(109), 1,
      sym_comment,
  [3001] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_comment,
  [3011] = 1,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 379,
  [SMALL_STATE(8)] = 447,
  [SMALL_STATE(9)] = 512,
  [SMALL_STATE(10)] = 577,
  [SMALL_STATE(11)] = 642,
  [SMALL_STATE(12)] = 707,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 820,
  [SMALL_STATE(15)] = 859,
  [SMALL_STATE(16)] = 893,
  [SMALL_STATE(17)] = 927,
  [SMALL_STATE(18)] = 961,
  [SMALL_STATE(19)] = 995,
  [SMALL_STATE(20)] = 1029,
  [SMALL_STATE(21)] = 1063,
  [SMALL_STATE(22)] = 1097,
  [SMALL_STATE(23)] = 1131,
  [SMALL_STATE(24)] = 1164,
  [SMALL_STATE(25)] = 1197,
  [SMALL_STATE(26)] = 1230,
  [SMALL_STATE(27)] = 1263,
  [SMALL_STATE(28)] = 1296,
  [SMALL_STATE(29)] = 1329,
  [SMALL_STATE(30)] = 1362,
  [SMALL_STATE(31)] = 1395,
  [SMALL_STATE(32)] = 1430,
  [SMALL_STATE(33)] = 1463,
  [SMALL_STATE(34)] = 1496,
  [SMALL_STATE(35)] = 1529,
  [SMALL_STATE(36)] = 1566,
  [SMALL_STATE(37)] = 1599,
  [SMALL_STATE(38)] = 1632,
  [SMALL_STATE(39)] = 1665,
  [SMALL_STATE(40)] = 1698,
  [SMALL_STATE(41)] = 1729,
  [SMALL_STATE(42)] = 1760,
  [SMALL_STATE(43)] = 1791,
  [SMALL_STATE(44)] = 1822,
  [SMALL_STATE(45)] = 1853,
  [SMALL_STATE(46)] = 1884,
  [SMALL_STATE(47)] = 1915,
  [SMALL_STATE(48)] = 1946,
  [SMALL_STATE(49)] = 1977,
  [SMALL_STATE(50)] = 2008,
  [SMALL_STATE(51)] = 2039,
  [SMALL_STATE(52)] = 2070,
  [SMALL_STATE(53)] = 2108,
  [SMALL_STATE(54)] = 2139,
  [SMALL_STATE(55)] = 2170,
  [SMALL_STATE(56)] = 2196,
  [SMALL_STATE(57)] = 2224,
  [SMALL_STATE(58)] = 2250,
  [SMALL_STATE(59)] = 2278,
  [SMALL_STATE(60)] = 2304,
  [SMALL_STATE(61)] = 2330,
  [SMALL_STATE(62)] = 2354,
  [SMALL_STATE(63)] = 2382,
  [SMALL_STATE(64)] = 2410,
  [SMALL_STATE(65)] = 2434,
  [SMALL_STATE(66)] = 2450,
  [SMALL_STATE(67)] = 2466,
  [SMALL_STATE(68)] = 2482,
  [SMALL_STATE(69)] = 2498,
  [SMALL_STATE(70)] = 2514,
  [SMALL_STATE(71)] = 2530,
  [SMALL_STATE(72)] = 2544,
  [SMALL_STATE(73)] = 2558,
  [SMALL_STATE(74)] = 2574,
  [SMALL_STATE(75)] = 2590,
  [SMALL_STATE(76)] = 2604,
  [SMALL_STATE(77)] = 2618,
  [SMALL_STATE(78)] = 2632,
  [SMALL_STATE(79)] = 2648,
  [SMALL_STATE(80)] = 2664,
  [SMALL_STATE(81)] = 2680,
  [SMALL_STATE(82)] = 2696,
  [SMALL_STATE(83)] = 2707,
  [SMALL_STATE(84)] = 2720,
  [SMALL_STATE(85)] = 2733,
  [SMALL_STATE(86)] = 2746,
  [SMALL_STATE(87)] = 2759,
  [SMALL_STATE(88)] = 2772,
  [SMALL_STATE(89)] = 2783,
  [SMALL_STATE(90)] = 2796,
  [SMALL_STATE(91)] = 2807,
  [SMALL_STATE(92)] = 2820,
  [SMALL_STATE(93)] = 2831,
  [SMALL_STATE(94)] = 2841,
  [SMALL_STATE(95)] = 2851,
  [SMALL_STATE(96)] = 2861,
  [SMALL_STATE(97)] = 2871,
  [SMALL_STATE(98)] = 2881,
  [SMALL_STATE(99)] = 2891,
  [SMALL_STATE(100)] = 2901,
  [SMALL_STATE(101)] = 2911,
  [SMALL_STATE(102)] = 2921,
  [SMALL_STATE(103)] = 2931,
  [SMALL_STATE(104)] = 2941,
  [SMALL_STATE(105)] = 2951,
  [SMALL_STATE(106)] = 2961,
  [SMALL_STATE(107)] = 2971,
  [SMALL_STATE(108)] = 2981,
  [SMALL_STATE(109)] = 2991,
  [SMALL_STATE(110)] = 3001,
  [SMALL_STATE(111)] = 3011,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [401] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
