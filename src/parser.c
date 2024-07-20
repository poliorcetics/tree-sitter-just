#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_env = 15,
  anon_sym_is_dependency = 16,
  anon_sym_invocation_dir = 17,
  anon_sym_invocation_dir_native = 18,
  anon_sym_invocation_directory = 19,
  anon_sym_invocation_directory_native = 20,
  anon_sym_justfile = 21,
  anon_sym_justfile_dir = 22,
  anon_sym_justfile_directory = 23,
  anon_sym_source_dir = 24,
  anon_sym_source_directory = 25,
  anon_sym_source_file = 26,
  anon_sym_just_executable = 27,
  anon_sym_just_pid = 28,
  anon_sym_append = 29,
  anon_sym_prepend = 30,
  anon_sym_encode_uri_component = 31,
  anon_sym_quote = 32,
  anon_sym_replace = 33,
  anon_sym_replace_regex = 34,
  anon_sym_trim = 35,
  anon_sym_trim_end = 36,
  anon_sym_trim_end_match = 37,
  anon_sym_trim_end_matches = 38,
  anon_sym_trim_start = 39,
  anon_sym_trim_start_match = 40,
  anon_sym_trim_start_matches = 41,
  anon_sym_capitalize = 42,
  anon_sym_kebabcase = 43,
  anon_sym_lowercamelcase = 44,
  anon_sym_lowercase = 45,
  anon_sym_shoutykebabcase = 46,
  anon_sym_shoutysnakecase = 47,
  anon_sym_snakecase = 48,
  anon_sym_titlecase = 49,
  anon_sym_uppercamelcase = 50,
  anon_sym_uppercase = 51,
  anon_sym_COMMA = 52,
  anon_sym_set = 53,
  anon_sym_allow_DASHduplicate_DASHrecipes = 54,
  anon_sym_allow_DASHduplicate_DASHvariables = 55,
  anon_sym_dotenv_DASHfilename = 56,
  anon_sym_dotenv_DASHload = 57,
  anon_sym_dotenv_DASHpath = 58,
  anon_sym_dotenv_DASHrequired = 59,
  anon_sym_export = 60,
  anon_sym_fallback = 61,
  anon_sym_ignore_DASHcomments = 62,
  anon_sym_positional_DASHarguments = 63,
  anon_sym_tempdir = 64,
  anon_sym_unstable = 65,
  anon_sym_windows_DASHpowershell = 66,
  anon_sym_windows_DASHshell = 67,
  anon_sym_LBRACK = 68,
  anon_sym_RBRACK = 69,
  anon_sym_BQUOTE = 70,
  aux_sym_backtick_token1 = 71,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 72,
  aux_sym_indented_backtick_token1 = 73,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 74,
  aux_sym_indented_normal_string_token1 = 75,
  anon_sym_DQUOTE = 76,
  aux_sym_normal_string_token1 = 77,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 78,
  aux_sym_indented_raw_string_token1 = 79,
  anon_sym_SQUOTE = 80,
  aux_sym_raw_string_token1 = 81,
  anon_sym_BSLASHn = 82,
  anon_sym_BSLASHr = 83,
  anon_sym_BSLASHt = 84,
  anon_sym_BSLASH_DQUOTE = 85,
  anon_sym_BSLASH_BSLASH = 86,
  anon_sym_true = 87,
  anon_sym_false = 88,
  aux_sym_comment_token1 = 89,
  sym_file = 90,
  sym_alias = 91,
  sym_import = 92,
  sym_mod = 93,
  sym_expression = 94,
  sym_value = 95,
  sym_builtin_function_call = 96,
  sym__p0 = 97,
  sym__p1 = 98,
  sym__p2 = 99,
  sym__p3 = 100,
  sym_function_call = 101,
  sym_function_parameters = 102,
  sym_setting = 103,
  sym__setting_boolean = 104,
  sym__setting_string = 105,
  sym__setting_list = 106,
  sym_backtick = 107,
  sym_indented_backtick = 108,
  sym_string = 109,
  sym_indented_normal_string = 110,
  sym_normal_string = 111,
  sym_indented_raw_string = 112,
  sym_raw_string = 113,
  sym_escape_sequence = 114,
  sym_boolean = 115,
  sym_comment = 116,
  aux_sym_file_repeat1 = 117,
  aux_sym_function_parameters_repeat1 = 118,
  aux_sym__setting_list_repeat1 = 119,
  aux_sym_indented_backtick_repeat1 = 120,
  aux_sym_indented_normal_string_repeat1 = 121,
  aux_sym_normal_string_repeat1 = 122,
  aux_sym_indented_raw_string_repeat1 = 123,
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
  [anon_sym_env] = "env",
  [anon_sym_is_dependency] = "is_dependency",
  [anon_sym_invocation_dir] = "invocation_dir",
  [anon_sym_invocation_dir_native] = "invocation_dir_native",
  [anon_sym_invocation_directory] = "invocation_directory",
  [anon_sym_invocation_directory_native] = "invocation_directory_native",
  [anon_sym_justfile] = "justfile",
  [anon_sym_justfile_dir] = "justfile_dir",
  [anon_sym_justfile_directory] = "justfile_directory",
  [anon_sym_source_dir] = "source_dir",
  [anon_sym_source_directory] = "source_directory",
  [anon_sym_source_file] = "source_file",
  [anon_sym_just_executable] = "just_executable",
  [anon_sym_just_pid] = "just_pid",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_encode_uri_component] = "encode_uri_component",
  [anon_sym_quote] = "quote",
  [anon_sym_replace] = "replace",
  [anon_sym_replace_regex] = "replace_regex",
  [anon_sym_trim] = "trim",
  [anon_sym_trim_end] = "trim_end",
  [anon_sym_trim_end_match] = "trim_end_match",
  [anon_sym_trim_end_matches] = "trim_end_matches",
  [anon_sym_trim_start] = "trim_start",
  [anon_sym_trim_start_match] = "trim_start_match",
  [anon_sym_trim_start_matches] = "trim_start_matches",
  [anon_sym_capitalize] = "capitalize",
  [anon_sym_kebabcase] = "kebabcase",
  [anon_sym_lowercamelcase] = "lowercamelcase",
  [anon_sym_lowercase] = "lowercase",
  [anon_sym_shoutykebabcase] = "shoutykebabcase",
  [anon_sym_shoutysnakecase] = "shoutysnakecase",
  [anon_sym_snakecase] = "snakecase",
  [anon_sym_titlecase] = "titlecase",
  [anon_sym_uppercamelcase] = "uppercamelcase",
  [anon_sym_uppercase] = "uppercase",
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
  [sym__p3] = "_p3",
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
  [anon_sym_env] = anon_sym_env,
  [anon_sym_is_dependency] = anon_sym_is_dependency,
  [anon_sym_invocation_dir] = anon_sym_invocation_dir,
  [anon_sym_invocation_dir_native] = anon_sym_invocation_dir_native,
  [anon_sym_invocation_directory] = anon_sym_invocation_directory,
  [anon_sym_invocation_directory_native] = anon_sym_invocation_directory_native,
  [anon_sym_justfile] = anon_sym_justfile,
  [anon_sym_justfile_dir] = anon_sym_justfile_dir,
  [anon_sym_justfile_directory] = anon_sym_justfile_directory,
  [anon_sym_source_dir] = anon_sym_source_dir,
  [anon_sym_source_directory] = anon_sym_source_directory,
  [anon_sym_source_file] = anon_sym_source_file,
  [anon_sym_just_executable] = anon_sym_just_executable,
  [anon_sym_just_pid] = anon_sym_just_pid,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_encode_uri_component] = anon_sym_encode_uri_component,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_replace_regex] = anon_sym_replace_regex,
  [anon_sym_trim] = anon_sym_trim,
  [anon_sym_trim_end] = anon_sym_trim_end,
  [anon_sym_trim_end_match] = anon_sym_trim_end_match,
  [anon_sym_trim_end_matches] = anon_sym_trim_end_matches,
  [anon_sym_trim_start] = anon_sym_trim_start,
  [anon_sym_trim_start_match] = anon_sym_trim_start_match,
  [anon_sym_trim_start_matches] = anon_sym_trim_start_matches,
  [anon_sym_capitalize] = anon_sym_capitalize,
  [anon_sym_kebabcase] = anon_sym_kebabcase,
  [anon_sym_lowercamelcase] = anon_sym_lowercamelcase,
  [anon_sym_lowercase] = anon_sym_lowercase,
  [anon_sym_shoutykebabcase] = anon_sym_shoutykebabcase,
  [anon_sym_shoutysnakecase] = anon_sym_shoutysnakecase,
  [anon_sym_snakecase] = anon_sym_snakecase,
  [anon_sym_titlecase] = anon_sym_titlecase,
  [anon_sym_uppercamelcase] = anon_sym_uppercamelcase,
  [anon_sym_uppercase] = anon_sym_uppercase,
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
  [sym__p3] = sym__p3,
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
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_dependency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_dir_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_directory_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_just_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_just_pid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encode_uri_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capitalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kebabcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shoutykebabcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shoutysnakecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snakecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_titlecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercase] = {
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
  [sym__p3] = {
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
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
  [124] = 124,
  [125] = 125,
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
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
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
        'c', 2,
        'd', 3,
        'e', 4,
        'f', 5,
        'i', 6,
        'j', 7,
        'k', 8,
        'l', 9,
        'n', 10,
        'o', 11,
        'p', 12,
        'q', 13,
        'r', 14,
        's', 15,
        't', 16,
        'u', 17,
        'w', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 149:
      if (lookahead == 'w') ADVANCE(180);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 161:
      if (lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 171:
      if (lookahead == 'k') ADVANCE(200);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 173:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 186:
      if (lookahead == 'k') ADVANCE(219);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(244);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 212:
      if (lookahead == 'z') ADVANCE(246);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(261);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 233:
      if (lookahead == 'b') ADVANCE(264);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 250:
      if (lookahead == 'q') ADVANCE(281);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 253:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 265:
      if (lookahead == 'k') ADVANCE(293);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 270:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 280:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 282:
      if (lookahead == '_') ADVANCE(306);
      END_STATE();
    case 283:
      if (lookahead == '_') ADVANCE(307);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 285:
      if (lookahead == '_') ADVANCE(309);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 290:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 291:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 299:
      if (lookahead == 'w') ADVANCE(323);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 321:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 332:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 333:
      if (lookahead == 'b') ADVANCE(354);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 337:
      if (lookahead == 'x') ADVANCE(358);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(368);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 359:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 362:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 382:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 385:
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 395:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 398:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(411);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 'v') ADVANCE(414);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 419:
      if (lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 436:
      if (lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 437:
      if (lookahead == 'y') ADVANCE(443);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 446:
      if (lookahead == 'b') ADVANCE(450);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 458:
      if (lookahead == 'v') ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_invocation_directory_native);
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
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
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
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {(TSStateId)(-1)},
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
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_is_dependency] = ACTIONS(1),
    [anon_sym_invocation_dir] = ACTIONS(1),
    [anon_sym_invocation_dir_native] = ACTIONS(1),
    [anon_sym_invocation_directory] = ACTIONS(1),
    [anon_sym_invocation_directory_native] = ACTIONS(1),
    [anon_sym_justfile] = ACTIONS(1),
    [anon_sym_justfile_dir] = ACTIONS(1),
    [anon_sym_justfile_directory] = ACTIONS(1),
    [anon_sym_source_dir] = ACTIONS(1),
    [anon_sym_source_directory] = ACTIONS(1),
    [anon_sym_source_file] = ACTIONS(1),
    [anon_sym_just_executable] = ACTIONS(1),
    [anon_sym_just_pid] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_encode_uri_component] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_replace_regex] = ACTIONS(1),
    [anon_sym_trim] = ACTIONS(1),
    [anon_sym_trim_end] = ACTIONS(1),
    [anon_sym_trim_end_match] = ACTIONS(1),
    [anon_sym_trim_end_matches] = ACTIONS(1),
    [anon_sym_trim_start] = ACTIONS(1),
    [anon_sym_trim_start_match] = ACTIONS(1),
    [anon_sym_trim_start_matches] = ACTIONS(1),
    [anon_sym_capitalize] = ACTIONS(1),
    [anon_sym_kebabcase] = ACTIONS(1),
    [anon_sym_lowercamelcase] = ACTIONS(1),
    [anon_sym_lowercase] = ACTIONS(1),
    [anon_sym_shoutykebabcase] = ACTIONS(1),
    [anon_sym_shoutysnakecase] = ACTIONS(1),
    [anon_sym_snakecase] = ACTIONS(1),
    [anon_sym_titlecase] = ACTIONS(1),
    [anon_sym_uppercamelcase] = ACTIONS(1),
    [anon_sym_uppercase] = ACTIONS(1),
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
    [sym_file] = STATE(124),
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
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
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
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
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_alias] = ACTIONS(50),
    [aux_sym_import_token1] = ACTIONS(53),
    [aux_sym_mod_token1] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_arch] = ACTIONS(62),
    [anon_sym_num_cpus] = ACTIONS(62),
    [anon_sym_os] = ACTIONS(62),
    [anon_sym_os_family] = ACTIONS(62),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_env_var] = ACTIONS(68),
    [anon_sym_env_var_or_default] = ACTIONS(71),
    [anon_sym_env] = ACTIONS(74),
    [anon_sym_is_dependency] = ACTIONS(62),
    [anon_sym_invocation_dir] = ACTIONS(62),
    [anon_sym_invocation_dir_native] = ACTIONS(62),
    [anon_sym_invocation_directory] = ACTIONS(62),
    [anon_sym_invocation_directory_native] = ACTIONS(62),
    [anon_sym_justfile] = ACTIONS(62),
    [anon_sym_justfile_dir] = ACTIONS(62),
    [anon_sym_justfile_directory] = ACTIONS(62),
    [anon_sym_source_dir] = ACTIONS(62),
    [anon_sym_source_directory] = ACTIONS(62),
    [anon_sym_source_file] = ACTIONS(62),
    [anon_sym_just_executable] = ACTIONS(62),
    [anon_sym_just_pid] = ACTIONS(62),
    [anon_sym_append] = ACTIONS(71),
    [anon_sym_prepend] = ACTIONS(71),
    [anon_sym_encode_uri_component] = ACTIONS(68),
    [anon_sym_quote] = ACTIONS(68),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(68),
    [anon_sym_trim_end] = ACTIONS(68),
    [anon_sym_trim_end_match] = ACTIONS(71),
    [anon_sym_trim_end_matches] = ACTIONS(71),
    [anon_sym_trim_start] = ACTIONS(68),
    [anon_sym_trim_start_match] = ACTIONS(71),
    [anon_sym_trim_start_matches] = ACTIONS(71),
    [anon_sym_capitalize] = ACTIONS(68),
    [anon_sym_kebabcase] = ACTIONS(68),
    [anon_sym_lowercamelcase] = ACTIONS(68),
    [anon_sym_lowercase] = ACTIONS(68),
    [anon_sym_shoutykebabcase] = ACTIONS(68),
    [anon_sym_shoutysnakecase] = ACTIONS(68),
    [anon_sym_snakecase] = ACTIONS(68),
    [anon_sym_titlecase] = ACTIONS(68),
    [anon_sym_uppercamelcase] = ACTIONS(68),
    [anon_sym_uppercase] = ACTIONS(68),
    [anon_sym_set] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(87),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(118),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(87),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(113),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(9),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(91),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(10),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(115),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(11),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(122),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(96),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(104),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(14),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(98),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(119),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_string] = STATE(55),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_alias] = ACTIONS(111),
    [aux_sym_import_token1] = ACTIONS(111),
    [aux_sym_mod_token1] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_arch] = ACTIONS(111),
    [anon_sym_num_cpus] = ACTIONS(111),
    [anon_sym_os] = ACTIONS(111),
    [anon_sym_os_family] = ACTIONS(111),
    [anon_sym_shell] = ACTIONS(111),
    [anon_sym_env_var] = ACTIONS(111),
    [anon_sym_env_var_or_default] = ACTIONS(111),
    [anon_sym_env] = ACTIONS(111),
    [anon_sym_is_dependency] = ACTIONS(111),
    [anon_sym_invocation_dir] = ACTIONS(111),
    [anon_sym_invocation_dir_native] = ACTIONS(111),
    [anon_sym_invocation_directory] = ACTIONS(111),
    [anon_sym_invocation_directory_native] = ACTIONS(111),
    [anon_sym_justfile] = ACTIONS(111),
    [anon_sym_justfile_dir] = ACTIONS(111),
    [anon_sym_justfile_directory] = ACTIONS(111),
    [anon_sym_source_dir] = ACTIONS(111),
    [anon_sym_source_directory] = ACTIONS(111),
    [anon_sym_source_file] = ACTIONS(111),
    [anon_sym_just_executable] = ACTIONS(111),
    [anon_sym_just_pid] = ACTIONS(111),
    [anon_sym_append] = ACTIONS(111),
    [anon_sym_prepend] = ACTIONS(111),
    [anon_sym_encode_uri_component] = ACTIONS(111),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_replace] = ACTIONS(111),
    [anon_sym_replace_regex] = ACTIONS(111),
    [anon_sym_trim] = ACTIONS(111),
    [anon_sym_trim_end] = ACTIONS(111),
    [anon_sym_trim_end_match] = ACTIONS(111),
    [anon_sym_trim_end_matches] = ACTIONS(111),
    [anon_sym_trim_start] = ACTIONS(111),
    [anon_sym_trim_start_match] = ACTIONS(111),
    [anon_sym_trim_start_matches] = ACTIONS(111),
    [anon_sym_capitalize] = ACTIONS(111),
    [anon_sym_kebabcase] = ACTIONS(111),
    [anon_sym_lowercamelcase] = ACTIONS(111),
    [anon_sym_lowercase] = ACTIONS(111),
    [anon_sym_shoutykebabcase] = ACTIONS(111),
    [anon_sym_shoutysnakecase] = ACTIONS(111),
    [anon_sym_snakecase] = ACTIONS(111),
    [anon_sym_titlecase] = ACTIONS(111),
    [anon_sym_uppercamelcase] = ACTIONS(111),
    [anon_sym_uppercase] = ACTIONS(111),
    [anon_sym_set] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym__setting_boolean] = STATE(47),
    [sym__setting_string] = STATE(47),
    [sym__setting_list] = STATE(47),
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_alias] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(117),
    [aux_sym_import_token1] = ACTIONS(115),
    [aux_sym_mod_token1] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_arch] = ACTIONS(115),
    [anon_sym_num_cpus] = ACTIONS(115),
    [anon_sym_os] = ACTIONS(115),
    [anon_sym_os_family] = ACTIONS(115),
    [anon_sym_shell] = ACTIONS(115),
    [anon_sym_env_var] = ACTIONS(115),
    [anon_sym_env_var_or_default] = ACTIONS(115),
    [anon_sym_env] = ACTIONS(115),
    [anon_sym_is_dependency] = ACTIONS(115),
    [anon_sym_invocation_dir] = ACTIONS(115),
    [anon_sym_invocation_dir_native] = ACTIONS(115),
    [anon_sym_invocation_directory] = ACTIONS(115),
    [anon_sym_invocation_directory_native] = ACTIONS(115),
    [anon_sym_justfile] = ACTIONS(115),
    [anon_sym_justfile_dir] = ACTIONS(115),
    [anon_sym_justfile_directory] = ACTIONS(115),
    [anon_sym_source_dir] = ACTIONS(115),
    [anon_sym_source_directory] = ACTIONS(115),
    [anon_sym_source_file] = ACTIONS(115),
    [anon_sym_just_executable] = ACTIONS(115),
    [anon_sym_just_pid] = ACTIONS(115),
    [anon_sym_append] = ACTIONS(115),
    [anon_sym_prepend] = ACTIONS(115),
    [anon_sym_encode_uri_component] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_replace] = ACTIONS(115),
    [anon_sym_replace_regex] = ACTIONS(115),
    [anon_sym_trim] = ACTIONS(115),
    [anon_sym_trim_end] = ACTIONS(115),
    [anon_sym_trim_end_match] = ACTIONS(115),
    [anon_sym_trim_end_matches] = ACTIONS(115),
    [anon_sym_trim_start] = ACTIONS(115),
    [anon_sym_trim_start_match] = ACTIONS(115),
    [anon_sym_trim_start_matches] = ACTIONS(115),
    [anon_sym_capitalize] = ACTIONS(115),
    [anon_sym_kebabcase] = ACTIONS(115),
    [anon_sym_lowercamelcase] = ACTIONS(115),
    [anon_sym_lowercase] = ACTIONS(115),
    [anon_sym_shoutykebabcase] = ACTIONS(115),
    [anon_sym_shoutysnakecase] = ACTIONS(115),
    [anon_sym_snakecase] = ACTIONS(115),
    [anon_sym_titlecase] = ACTIONS(115),
    [anon_sym_uppercamelcase] = ACTIONS(115),
    [anon_sym_uppercase] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
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
    ACTIONS(121), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [71] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
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
    ACTIONS(125), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [142] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
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
    ACTIONS(129), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [213] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
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
    ACTIONS(133), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [284] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
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
    ACTIONS(137), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [355] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(141), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [426] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(145), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [497] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(149), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(153), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [638] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      anon_sym_COLON_EQ,
    STATE(29), 1,
      sym_comment,
    STATE(47), 1,
      sym__setting_boolean,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(115), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [712] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [782] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(163), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [852] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(167), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [924] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(173), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [994] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(177), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1064] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(181), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1134] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(167), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1204] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(185), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1274] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(189), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1344] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(193), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1414] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(197), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1484] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(201), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1554] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(205), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1624] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(209), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1694] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(213), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1764] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(217), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1834] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(221), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1904] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(225), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1972] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(229), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2040] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(233), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2108] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(237), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2176] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(241), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2244] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(245), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2312] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(249), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2380] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(253), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2448] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(257), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2516] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(259), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(261), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2584] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(263), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(265), 52,
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
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_capitalize,
      anon_sym_kebabcase,
      anon_sym_lowercamelcase,
      anon_sym_lowercase,
      anon_sym_shoutykebabcase,
      anon_sym_shoutysnakecase,
      anon_sym_snakecase,
      anon_sym_titlecase,
      anon_sym_uppercamelcase,
      anon_sym_uppercase,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2652] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(273), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(271), 10,
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
  [2683] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_string,
    STATE(54), 1,
      sym_boolean,
    STATE(59), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2721] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(101), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2752] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(101), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2783] = 7,
    ACTIONS(283), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(287), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2809] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_string,
    STATE(63), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2837] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_comment,
    STATE(81), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2865] = 7,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_normal_string_token1,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_normal_string_repeat1,
    STATE(73), 1,
      sym_escape_sequence,
    ACTIONS(295), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2891] = 7,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(287), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2917] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym_normal_string_token1,
    STATE(73), 1,
      sym_escape_sequence,
    STATE(67), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(304), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2941] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_indented_normal_string_token1,
    STATE(75), 1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(312), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2965] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_string,
    STATE(69), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2993] = 7,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      aux_sym_normal_string_token1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_normal_string_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(73), 1,
      sym_escape_sequence,
    ACTIONS(295), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [3019] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym_comment,
    STATE(101), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [3047] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [3063] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [3079] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [3095] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [3111] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [3125] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__setting_list_repeat1,
  [3141] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    STATE(78), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_indented_raw_string_repeat1,
  [3157] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_boolean,
    STATE(79), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
  [3171] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(80), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [3185] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__setting_list_repeat1,
    STATE(81), 1,
      sym_comment,
  [3201] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(345), 1,
      aux_sym_indented_raw_string_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [3215] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(41), 2,
      sym__p1,
      sym__p2,
  [3229] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(84), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [3243] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(357), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(85), 1,
      sym_comment,
  [3259] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(359), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(85), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(86), 1,
      sym_comment,
  [3275] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_function_parameters_repeat1,
  [3291] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_function_parameters_repeat1,
    STATE(88), 1,
      sym_comment,
  [3307] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(367), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(82), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(89), 1,
      sym_comment,
  [3323] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_string,
    STATE(90), 1,
      sym_comment,
  [3336] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_comment,
  [3349] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p1,
    STATE(92), 1,
      sym_comment,
  [3362] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p3,
    STATE(93), 1,
      sym_comment,
  [3375] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p0,
    STATE(94), 1,
      sym_comment,
  [3388] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [3399] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
  [3412] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p2,
    STATE(97), 1,
      sym_comment,
  [3425] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_comment,
  [3438] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [3449] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3460] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3471] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_comment,
  [3484] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_list,
    STATE(103), 1,
      sym_comment,
  [3497] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_comment,
  [3507] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_comment,
  [3517] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_comment,
  [3527] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
  [3537] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_comment,
  [3547] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [3557] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      sym_identifier,
    STATE(110), 1,
      sym_comment,
  [3567] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      aux_sym_raw_string_token1,
    STATE(111), 1,
      sym_comment,
  [3577] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(112), 1,
      sym_comment,
  [3587] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [3597] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    STATE(114), 1,
      sym_comment,
  [3607] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      sym_comment,
  [3617] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
  [3627] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      aux_sym_backtick_token1,
    STATE(117), 1,
      sym_comment,
  [3637] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [3647] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_comment,
  [3657] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [3667] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [3677] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [3687] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_COLON_EQ,
    STATE(123), 1,
      sym_comment,
  [3697] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_comment,
  [3707] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 71,
  [SMALL_STATE(22)] = 142,
  [SMALL_STATE(23)] = 213,
  [SMALL_STATE(24)] = 284,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 497,
  [SMALL_STATE(28)] = 568,
  [SMALL_STATE(29)] = 638,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 782,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 924,
  [SMALL_STATE(34)] = 994,
  [SMALL_STATE(35)] = 1064,
  [SMALL_STATE(36)] = 1134,
  [SMALL_STATE(37)] = 1204,
  [SMALL_STATE(38)] = 1274,
  [SMALL_STATE(39)] = 1344,
  [SMALL_STATE(40)] = 1414,
  [SMALL_STATE(41)] = 1484,
  [SMALL_STATE(42)] = 1554,
  [SMALL_STATE(43)] = 1624,
  [SMALL_STATE(44)] = 1694,
  [SMALL_STATE(45)] = 1764,
  [SMALL_STATE(46)] = 1834,
  [SMALL_STATE(47)] = 1904,
  [SMALL_STATE(48)] = 1972,
  [SMALL_STATE(49)] = 2040,
  [SMALL_STATE(50)] = 2108,
  [SMALL_STATE(51)] = 2176,
  [SMALL_STATE(52)] = 2244,
  [SMALL_STATE(53)] = 2312,
  [SMALL_STATE(54)] = 2380,
  [SMALL_STATE(55)] = 2448,
  [SMALL_STATE(56)] = 2516,
  [SMALL_STATE(57)] = 2584,
  [SMALL_STATE(58)] = 2652,
  [SMALL_STATE(59)] = 2683,
  [SMALL_STATE(60)] = 2721,
  [SMALL_STATE(61)] = 2752,
  [SMALL_STATE(62)] = 2783,
  [SMALL_STATE(63)] = 2809,
  [SMALL_STATE(64)] = 2837,
  [SMALL_STATE(65)] = 2865,
  [SMALL_STATE(66)] = 2891,
  [SMALL_STATE(67)] = 2917,
  [SMALL_STATE(68)] = 2941,
  [SMALL_STATE(69)] = 2965,
  [SMALL_STATE(70)] = 2993,
  [SMALL_STATE(71)] = 3019,
  [SMALL_STATE(72)] = 3047,
  [SMALL_STATE(73)] = 3063,
  [SMALL_STATE(74)] = 3079,
  [SMALL_STATE(75)] = 3095,
  [SMALL_STATE(76)] = 3111,
  [SMALL_STATE(77)] = 3125,
  [SMALL_STATE(78)] = 3141,
  [SMALL_STATE(79)] = 3157,
  [SMALL_STATE(80)] = 3171,
  [SMALL_STATE(81)] = 3185,
  [SMALL_STATE(82)] = 3201,
  [SMALL_STATE(83)] = 3215,
  [SMALL_STATE(84)] = 3229,
  [SMALL_STATE(85)] = 3243,
  [SMALL_STATE(86)] = 3259,
  [SMALL_STATE(87)] = 3275,
  [SMALL_STATE(88)] = 3291,
  [SMALL_STATE(89)] = 3307,
  [SMALL_STATE(90)] = 3323,
  [SMALL_STATE(91)] = 3336,
  [SMALL_STATE(92)] = 3349,
  [SMALL_STATE(93)] = 3362,
  [SMALL_STATE(94)] = 3375,
  [SMALL_STATE(95)] = 3388,
  [SMALL_STATE(96)] = 3399,
  [SMALL_STATE(97)] = 3412,
  [SMALL_STATE(98)] = 3425,
  [SMALL_STATE(99)] = 3438,
  [SMALL_STATE(100)] = 3449,
  [SMALL_STATE(101)] = 3460,
  [SMALL_STATE(102)] = 3471,
  [SMALL_STATE(103)] = 3484,
  [SMALL_STATE(104)] = 3497,
  [SMALL_STATE(105)] = 3507,
  [SMALL_STATE(106)] = 3517,
  [SMALL_STATE(107)] = 3527,
  [SMALL_STATE(108)] = 3537,
  [SMALL_STATE(109)] = 3547,
  [SMALL_STATE(110)] = 3557,
  [SMALL_STATE(111)] = 3567,
  [SMALL_STATE(112)] = 3577,
  [SMALL_STATE(113)] = 3587,
  [SMALL_STATE(114)] = 3597,
  [SMALL_STATE(115)] = 3607,
  [SMALL_STATE(116)] = 3617,
  [SMALL_STATE(117)] = 3627,
  [SMALL_STATE(118)] = 3637,
  [SMALL_STATE(119)] = 3647,
  [SMALL_STATE(120)] = 3657,
  [SMALL_STATE(121)] = 3667,
  [SMALL_STATE(122)] = 3677,
  [SMALL_STATE(123)] = 3687,
  [SMALL_STATE(124)] = 3697,
  [SMALL_STATE(125)] = 3707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [435] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
