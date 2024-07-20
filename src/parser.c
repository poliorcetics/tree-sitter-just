#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 68
#define SYMBOL_COUNT 170
#define ALIAS_COUNT 0
#define TOKEN_COUNT 134
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_if = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_else = 9,
  anon_sym_assert = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_SLASH = 14,
  anon_sym_PLUS = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_arch = 18,
  anon_sym_num_cpus = 19,
  anon_sym_os = 20,
  anon_sym_os_family = 21,
  anon_sym_shell = 22,
  anon_sym_env_var = 23,
  anon_sym_env_var_or_default = 24,
  anon_sym_env = 25,
  anon_sym_is_dependency = 26,
  anon_sym_invocation_dir = 27,
  anon_sym_invocation_dir_native = 28,
  anon_sym_invocation_directory = 29,
  anon_sym_invocation_directory_native = 30,
  anon_sym_justfile = 31,
  anon_sym_justfile_dir = 32,
  anon_sym_justfile_directory = 33,
  anon_sym_source_dir = 34,
  anon_sym_source_directory = 35,
  anon_sym_source_file = 36,
  anon_sym_just_executable = 37,
  anon_sym_just_pid = 38,
  anon_sym_append = 39,
  anon_sym_prepend = 40,
  anon_sym_encode_uri_component = 41,
  anon_sym_quote = 42,
  anon_sym_replace = 43,
  anon_sym_replace_regex = 44,
  anon_sym_trim = 45,
  anon_sym_trim_end = 46,
  anon_sym_trim_end_match = 47,
  anon_sym_trim_end_matches = 48,
  anon_sym_trim_start = 49,
  anon_sym_trim_start_match = 50,
  anon_sym_trim_start_matches = 51,
  anon_sym_capitalize = 52,
  anon_sym_kebabcase = 53,
  anon_sym_lowercamelcase = 54,
  anon_sym_lowercase = 55,
  anon_sym_shoutykebabcase = 56,
  anon_sym_shoutysnakecase = 57,
  anon_sym_snakecase = 58,
  anon_sym_titlecase = 59,
  anon_sym_uppercamelcase = 60,
  anon_sym_uppercase = 61,
  anon_sym_absolute_path = 62,
  anon_sym_canonicalize = 63,
  anon_sym_extension = 64,
  anon_sym_file_name = 65,
  anon_sym_file_stem = 66,
  anon_sym_parent_dir = 67,
  anon_sym_parent_directory = 68,
  anon_sym_without_extension = 69,
  anon_sym_clean = 70,
  anon_sym_join = 71,
  anon_sym_path_exists = 72,
  anon_sym_error = 73,
  anon_sym_blake3 = 74,
  anon_sym_blake3_file = 75,
  anon_sym_sha256 = 76,
  anon_sym_sha256_file = 77,
  anon_sym_uuid = 78,
  anon_sym_choose = 79,
  anon_sym_datetime = 80,
  anon_sym_datetime_utc = 81,
  anon_sym_semver_matches = 82,
  anon_sym_cache_dir = 83,
  anon_sym_cache_directory = 84,
  anon_sym_config_dir = 85,
  anon_sym_config_directory = 86,
  anon_sym_config_local_dir = 87,
  anon_sym_config_local_directory = 88,
  anon_sym_data_dir = 89,
  anon_sym_data_directory = 90,
  anon_sym_data_local_dir = 91,
  anon_sym_data_local_directory = 92,
  anon_sym_executable_dir = 93,
  anon_sym_executable_directory = 94,
  anon_sym_home_dir = 95,
  anon_sym_home_directory = 96,
  anon_sym_set = 97,
  anon_sym_allow_DASHduplicate_DASHrecipes = 98,
  anon_sym_allow_DASHduplicate_DASHvariables = 99,
  anon_sym_dotenv_DASHfilename = 100,
  anon_sym_dotenv_DASHload = 101,
  anon_sym_dotenv_DASHpath = 102,
  anon_sym_dotenv_DASHrequired = 103,
  anon_sym_export = 104,
  anon_sym_fallback = 105,
  anon_sym_ignore_DASHcomments = 106,
  anon_sym_positional_DASHarguments = 107,
  anon_sym_tempdir = 108,
  anon_sym_unstable = 109,
  anon_sym_windows_DASHpowershell = 110,
  anon_sym_windows_DASHshell = 111,
  anon_sym_LBRACK = 112,
  anon_sym_RBRACK = 113,
  anon_sym_BQUOTE = 114,
  aux_sym_backtick_token1 = 115,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 116,
  aux_sym_indented_backtick_token1 = 117,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 118,
  aux_sym_indented_normal_string_token1 = 119,
  anon_sym_DQUOTE = 120,
  aux_sym_normal_string_token1 = 121,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 122,
  aux_sym_indented_raw_string_token1 = 123,
  anon_sym_SQUOTE = 124,
  aux_sym_raw_string_token1 = 125,
  anon_sym_BSLASHn = 126,
  anon_sym_BSLASHr = 127,
  anon_sym_BSLASHt = 128,
  anon_sym_BSLASH_DQUOTE = 129,
  anon_sym_BSLASH_BSLASH = 130,
  anon_sym_true = 131,
  anon_sym_false = 132,
  aux_sym_comment_token1 = 133,
  sym_file = 134,
  sym_alias = 135,
  sym_import = 136,
  sym_mod = 137,
  sym_expression = 138,
  sym_condition = 139,
  sym_value = 140,
  sym_builtin_function_call = 141,
  sym__p0 = 142,
  sym__p1 = 143,
  sym__p2 = 144,
  sym__p3 = 145,
  sym__pN = 146,
  sym_function_call = 147,
  sym_function_parameters = 148,
  sym_setting = 149,
  sym__setting_boolean = 150,
  sym__setting_string = 151,
  sym__setting_list = 152,
  sym_backtick = 153,
  sym_indented_backtick = 154,
  sym_string = 155,
  sym_indented_normal_string = 156,
  sym_normal_string = 157,
  sym_indented_raw_string = 158,
  sym_raw_string = 159,
  sym_escape_sequence = 160,
  sym_boolean = 161,
  sym_comment = 162,
  aux_sym_file_repeat1 = 163,
  aux_sym_function_parameters_repeat1 = 164,
  aux_sym__setting_list_repeat1 = 165,
  aux_sym_indented_backtick_repeat1 = 166,
  aux_sym_indented_normal_string_repeat1 = 167,
  aux_sym_normal_string_repeat1 = 168,
  aux_sym_indented_raw_string_repeat1 = 169,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_assert] = "assert",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
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
  [anon_sym_absolute_path] = "absolute_path",
  [anon_sym_canonicalize] = "canonicalize",
  [anon_sym_extension] = "extension",
  [anon_sym_file_name] = "file_name",
  [anon_sym_file_stem] = "file_stem",
  [anon_sym_parent_dir] = "parent_dir",
  [anon_sym_parent_directory] = "parent_directory",
  [anon_sym_without_extension] = "without_extension",
  [anon_sym_clean] = "clean",
  [anon_sym_join] = "join",
  [anon_sym_path_exists] = "path_exists",
  [anon_sym_error] = "error",
  [anon_sym_blake3] = "blake3",
  [anon_sym_blake3_file] = "blake3_file",
  [anon_sym_sha256] = "sha256",
  [anon_sym_sha256_file] = "sha256_file",
  [anon_sym_uuid] = "uuid",
  [anon_sym_choose] = "choose",
  [anon_sym_datetime] = "datetime",
  [anon_sym_datetime_utc] = "datetime_utc",
  [anon_sym_semver_matches] = "semver_matches",
  [anon_sym_cache_dir] = "cache_dir",
  [anon_sym_cache_directory] = "cache_directory",
  [anon_sym_config_dir] = "config_dir",
  [anon_sym_config_directory] = "config_directory",
  [anon_sym_config_local_dir] = "config_local_dir",
  [anon_sym_config_local_directory] = "config_local_directory",
  [anon_sym_data_dir] = "data_dir",
  [anon_sym_data_directory] = "data_directory",
  [anon_sym_data_local_dir] = "data_local_dir",
  [anon_sym_data_local_directory] = "data_local_directory",
  [anon_sym_executable_dir] = "executable_dir",
  [anon_sym_executable_directory] = "executable_directory",
  [anon_sym_home_dir] = "home_dir",
  [anon_sym_home_directory] = "home_directory",
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
  [sym_condition] = "condition",
  [sym_value] = "value",
  [sym_builtin_function_call] = "builtin_function_call",
  [sym__p0] = "_p0",
  [sym__p1] = "_p1",
  [sym__p2] = "_p2",
  [sym__p3] = "_p3",
  [sym__pN] = "_pN",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
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
  [anon_sym_absolute_path] = anon_sym_absolute_path,
  [anon_sym_canonicalize] = anon_sym_canonicalize,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_file_name] = anon_sym_file_name,
  [anon_sym_file_stem] = anon_sym_file_stem,
  [anon_sym_parent_dir] = anon_sym_parent_dir,
  [anon_sym_parent_directory] = anon_sym_parent_directory,
  [anon_sym_without_extension] = anon_sym_without_extension,
  [anon_sym_clean] = anon_sym_clean,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_path_exists] = anon_sym_path_exists,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_blake3] = anon_sym_blake3,
  [anon_sym_blake3_file] = anon_sym_blake3_file,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_sha256_file] = anon_sym_sha256_file,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_choose] = anon_sym_choose,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_datetime_utc] = anon_sym_datetime_utc,
  [anon_sym_semver_matches] = anon_sym_semver_matches,
  [anon_sym_cache_dir] = anon_sym_cache_dir,
  [anon_sym_cache_directory] = anon_sym_cache_directory,
  [anon_sym_config_dir] = anon_sym_config_dir,
  [anon_sym_config_directory] = anon_sym_config_directory,
  [anon_sym_config_local_dir] = anon_sym_config_local_dir,
  [anon_sym_config_local_directory] = anon_sym_config_local_directory,
  [anon_sym_data_dir] = anon_sym_data_dir,
  [anon_sym_data_directory] = anon_sym_data_directory,
  [anon_sym_data_local_dir] = anon_sym_data_local_dir,
  [anon_sym_data_local_directory] = anon_sym_data_local_directory,
  [anon_sym_executable_dir] = anon_sym_executable_dir,
  [anon_sym_executable_directory] = anon_sym_executable_directory,
  [anon_sym_home_dir] = anon_sym_home_dir,
  [anon_sym_home_directory] = anon_sym_home_directory,
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
  [sym_condition] = sym_condition,
  [sym_value] = sym_value,
  [sym_builtin_function_call] = sym_builtin_function_call,
  [sym__p0] = sym__p0,
  [sym__p1] = sym__p1,
  [sym__p2] = sym__p2,
  [sym__p3] = sym__p3,
  [sym__pN] = sym__pN,
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
  [anon_sym_if] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_absolute_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_canonicalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_stem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_without_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake3_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime_utc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_semver_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cache_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cache_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_local_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_local_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_local_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_local_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home_directory] = {
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
  [sym_condition] = {
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
  [sym__pN] = {
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
  field_setting_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_setting_name] = "setting_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
  [1] =
    {field_setting_name, 1},
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
  [85] = 83,
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
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '"', 54,
        '#', 85,
        '\'', 68,
        '(', 22,
        ')', 24,
        '+', 26,
        ',', 23,
        '/', 25,
        ':', 11,
        '=', 12,
        '[', 29,
        '\\', 5,
        ']', 30,
        '`', 32,
        'i', 78,
        'm', 79,
        '{', 20,
        '}', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '`') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '`') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '`') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(36);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(13);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '`') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '`') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(37);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
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
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'h', 7,
        'i', 8,
        'j', 9,
        'k', 10,
        'l', 11,
        'n', 12,
        'o', 13,
        'p', 14,
        'q', 15,
        'r', 16,
        's', 17,
        't', 18,
        'u', 19,
        'w', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 108:
      if (lookahead == '2') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(181);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 165:
      if (lookahead == '5') ADVANCE(220);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == '3') ADVANCE(236);
      END_STATE();
    case 185:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 220:
      if (lookahead == '6') ADVANCE(271);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 228:
      if (lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 230:
      if (lookahead == 'w') ADVANCE(281);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 241:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 246:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 258:
      if (lookahead == 'x') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 265:
      if (lookahead == '_') ADVANCE(312);
      END_STATE();
    case 266:
      if (lookahead == 'x') ADVANCE(313);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 270:
      if (lookahead == '_') ADVANCE(317);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(318);
      END_STATE();
    case 272:
      if (lookahead == 'k') ADVANCE(319);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 274:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 285:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 298:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 318:
      if (lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 330:
      if (lookahead == '_') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 336:
      if (lookahead == 'z') ADVANCE(389);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_data_dir);
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_home_dir);
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(410);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 364:
      if (lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 371:
      if (lookahead == 'b') ADVANCE(421);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_cache_dir);
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 391:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 398:
      if (lookahead == 'q') ADVANCE(448);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 405:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(456);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 422:
      if (lookahead == 'k') ADVANCE(466);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 427:
      if (lookahead == 'm') ADVANCE(469);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(473);
      END_STATE();
    case 433:
      if (lookahead == 'x') ADVANCE(474);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 437:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 438:
      if (lookahead == 'z') ADVANCE(479);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_config_dir);
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 443:
      if (lookahead == '_') ADVANCE(483);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 446:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(487);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 449:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 450:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 451:
      if (lookahead == '_') ADVANCE(491);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 453:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 454:
      if (lookahead == '_') ADVANCE(494);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 458:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 461:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 462:
      if (lookahead == 'g') ADVANCE(502);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 465:
      if (lookahead == 'b') ADVANCE(505);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(510);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 472:
      if (lookahead == 'w') ADVANCE(512);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 483:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 484:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 489:
      if (lookahead == 'c') ADVANCE(526);
      END_STATE();
    case 490:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 491:
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 494:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 498:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 499:
      if (lookahead == 'c') ADVANCE(536);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 501:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 503:
      if (lookahead == 'h') ADVANCE(539);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 505:
      if (lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 506:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 507:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(544);
      END_STATE();
    case 511:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 515:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 516:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 520:
      if (lookahead == '_') ADVANCE(553);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_datetime_utc);
      END_STATE();
    case 524:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 532:
      if (lookahead == 'y') ADVANCE(564);
      END_STATE();
    case 533:
      if (lookahead == 'b') ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 538:
      if (lookahead == 'x') ADVANCE(570);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 540:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 541:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 543:
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 544:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 553:
      if (lookahead == 'd') ADVANCE(584);
      END_STATE();
    case 554:
      if (lookahead == 'y') ADVANCE(585);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 558:
      if (lookahead == 'm') ADVANCE(589);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(590);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 561:
      if (lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(595);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 569:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 575:
      if (lookahead == 'h') ADVANCE(604);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 582:
      if (lookahead == 'y') ADVANCE(610);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_data_directory);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_data_local_dir);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 587:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 588:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 590:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_executable_dir);
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_home_directory);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(620);
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_semver_matches);
      END_STATE();
    case 601:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 602:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 605:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 607:
      if (lookahead == 'h') ADVANCE(631);
      END_STATE();
    case 608:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 609:
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_cache_directory);
      END_STATE();
    case 611:
      if (lookahead == 'y') ADVANCE(634);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 617:
      if (lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 618:
      if (lookahead == 'c') ADVANCE(639);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 621:
      if (lookahead == 'c') ADVANCE(641);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 624:
      if (lookahead == 'y') ADVANCE(643);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(644);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 628:
      if (lookahead == 'y') ADVANCE(645);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 630:
      if (lookahead == 'h') ADVANCE(647);
      END_STATE();
    case 631:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(651);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_config_directory);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_config_local_dir);
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 638:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 640:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 644:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 648:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 651:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 652:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 654:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 659:
      if (lookahead == 'y') ADVANCE(673);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 662:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 664:
      if (lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 680:
      if (lookahead == 'y') ADVANCE(689);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 682:
      if (lookahead == 'y') ADVANCE(691);
      END_STATE();
    case 683:
      if (lookahead == 'v') ADVANCE(692);
      END_STATE();
    case 684:
      if (lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_data_local_directory);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_executable_directory);
      END_STATE();
    case 692:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(699);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 695:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 696:
      if (lookahead == 'b') ADVANCE(701);
      END_STATE();
    case 697:
      if (lookahead == 'y') ADVANCE(702);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 701:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_config_local_directory);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 710:
      if (lookahead == 'v') ADVANCE(711);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 712:
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
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
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 70},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {(TSStateId)(-1)},
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
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
    [anon_sym_absolute_path] = ACTIONS(1),
    [anon_sym_canonicalize] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_file_name] = ACTIONS(1),
    [anon_sym_file_stem] = ACTIONS(1),
    [anon_sym_parent_dir] = ACTIONS(1),
    [anon_sym_parent_directory] = ACTIONS(1),
    [anon_sym_without_extension] = ACTIONS(1),
    [anon_sym_clean] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_path_exists] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_blake3] = ACTIONS(1),
    [anon_sym_blake3_file] = ACTIONS(1),
    [anon_sym_sha256] = ACTIONS(1),
    [anon_sym_sha256_file] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_datetime_utc] = ACTIONS(1),
    [anon_sym_semver_matches] = ACTIONS(1),
    [anon_sym_cache_dir] = ACTIONS(1),
    [anon_sym_cache_directory] = ACTIONS(1),
    [anon_sym_config_dir] = ACTIONS(1),
    [anon_sym_config_directory] = ACTIONS(1),
    [anon_sym_config_local_dir] = ACTIONS(1),
    [anon_sym_config_local_directory] = ACTIONS(1),
    [anon_sym_data_dir] = ACTIONS(1),
    [anon_sym_data_directory] = ACTIONS(1),
    [anon_sym_data_local_dir] = ACTIONS(1),
    [anon_sym_data_local_directory] = ACTIONS(1),
    [anon_sym_executable_dir] = ACTIONS(1),
    [anon_sym_executable_directory] = ACTIONS(1),
    [anon_sym_home_dir] = ACTIONS(1),
    [anon_sym_home_directory] = ACTIONS(1),
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
    [sym_file] = STATE(126),
    [sym_alias] = STATE(61),
    [sym_import] = STATE(61),
    [sym_mod] = STATE(61),
    [sym_expression] = STATE(61),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_setting] = STATE(61),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_set] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_alias] = STATE(61),
    [sym_import] = STATE(61),
    [sym_mod] = STATE(61),
    [sym_expression] = STATE(61),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_setting] = STATE(61),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_set] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(61),
    [sym_import] = STATE(61),
    [sym_mod] = STATE(61),
    [sym_expression] = STATE(61),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_setting] = STATE(61),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_alias] = ACTIONS(54),
    [aux_sym_import_token1] = ACTIONS(57),
    [aux_sym_mod_token1] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_assert] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(72),
    [anon_sym_num_cpus] = ACTIONS(72),
    [anon_sym_os] = ACTIONS(72),
    [anon_sym_os_family] = ACTIONS(72),
    [anon_sym_shell] = ACTIONS(75),
    [anon_sym_env_var] = ACTIONS(78),
    [anon_sym_env_var_or_default] = ACTIONS(81),
    [anon_sym_env] = ACTIONS(84),
    [anon_sym_is_dependency] = ACTIONS(72),
    [anon_sym_invocation_dir] = ACTIONS(72),
    [anon_sym_invocation_dir_native] = ACTIONS(72),
    [anon_sym_invocation_directory] = ACTIONS(72),
    [anon_sym_invocation_directory_native] = ACTIONS(72),
    [anon_sym_justfile] = ACTIONS(72),
    [anon_sym_justfile_dir] = ACTIONS(72),
    [anon_sym_justfile_directory] = ACTIONS(72),
    [anon_sym_source_dir] = ACTIONS(72),
    [anon_sym_source_directory] = ACTIONS(72),
    [anon_sym_source_file] = ACTIONS(72),
    [anon_sym_just_executable] = ACTIONS(72),
    [anon_sym_just_pid] = ACTIONS(72),
    [anon_sym_append] = ACTIONS(81),
    [anon_sym_prepend] = ACTIONS(81),
    [anon_sym_encode_uri_component] = ACTIONS(78),
    [anon_sym_quote] = ACTIONS(78),
    [anon_sym_replace] = ACTIONS(87),
    [anon_sym_replace_regex] = ACTIONS(87),
    [anon_sym_trim] = ACTIONS(78),
    [anon_sym_trim_end] = ACTIONS(78),
    [anon_sym_trim_end_match] = ACTIONS(81),
    [anon_sym_trim_end_matches] = ACTIONS(81),
    [anon_sym_trim_start] = ACTIONS(78),
    [anon_sym_trim_start_match] = ACTIONS(81),
    [anon_sym_trim_start_matches] = ACTIONS(81),
    [anon_sym_capitalize] = ACTIONS(78),
    [anon_sym_kebabcase] = ACTIONS(78),
    [anon_sym_lowercamelcase] = ACTIONS(78),
    [anon_sym_lowercase] = ACTIONS(78),
    [anon_sym_shoutykebabcase] = ACTIONS(78),
    [anon_sym_shoutysnakecase] = ACTIONS(78),
    [anon_sym_snakecase] = ACTIONS(78),
    [anon_sym_titlecase] = ACTIONS(78),
    [anon_sym_uppercamelcase] = ACTIONS(78),
    [anon_sym_uppercase] = ACTIONS(78),
    [anon_sym_absolute_path] = ACTIONS(78),
    [anon_sym_canonicalize] = ACTIONS(78),
    [anon_sym_extension] = ACTIONS(78),
    [anon_sym_file_name] = ACTIONS(78),
    [anon_sym_file_stem] = ACTIONS(78),
    [anon_sym_parent_dir] = ACTIONS(78),
    [anon_sym_parent_directory] = ACTIONS(78),
    [anon_sym_without_extension] = ACTIONS(78),
    [anon_sym_clean] = ACTIONS(78),
    [anon_sym_join] = ACTIONS(75),
    [anon_sym_path_exists] = ACTIONS(78),
    [anon_sym_error] = ACTIONS(78),
    [anon_sym_blake3] = ACTIONS(78),
    [anon_sym_blake3_file] = ACTIONS(78),
    [anon_sym_sha256] = ACTIONS(78),
    [anon_sym_sha256_file] = ACTIONS(78),
    [anon_sym_uuid] = ACTIONS(72),
    [anon_sym_choose] = ACTIONS(81),
    [anon_sym_datetime] = ACTIONS(78),
    [anon_sym_datetime_utc] = ACTIONS(78),
    [anon_sym_semver_matches] = ACTIONS(81),
    [anon_sym_cache_dir] = ACTIONS(72),
    [anon_sym_cache_directory] = ACTIONS(72),
    [anon_sym_config_dir] = ACTIONS(72),
    [anon_sym_config_directory] = ACTIONS(72),
    [anon_sym_config_local_dir] = ACTIONS(72),
    [anon_sym_config_local_directory] = ACTIONS(72),
    [anon_sym_data_dir] = ACTIONS(72),
    [anon_sym_data_directory] = ACTIONS(72),
    [anon_sym_data_local_dir] = ACTIONS(72),
    [anon_sym_data_local_directory] = ACTIONS(72),
    [anon_sym_executable_dir] = ACTIONS(72),
    [anon_sym_executable_directory] = ACTIONS(72),
    [anon_sym_home_dir] = ACTIONS(72),
    [anon_sym_home_directory] = ACTIONS(72),
    [anon_sym_set] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_alias] = ACTIONS(113),
    [aux_sym_import_token1] = ACTIONS(113),
    [aux_sym_mod_token1] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_assert] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_arch] = ACTIONS(113),
    [anon_sym_num_cpus] = ACTIONS(113),
    [anon_sym_os] = ACTIONS(113),
    [anon_sym_os_family] = ACTIONS(113),
    [anon_sym_shell] = ACTIONS(113),
    [anon_sym_env_var] = ACTIONS(113),
    [anon_sym_env_var_or_default] = ACTIONS(113),
    [anon_sym_env] = ACTIONS(113),
    [anon_sym_is_dependency] = ACTIONS(113),
    [anon_sym_invocation_dir] = ACTIONS(113),
    [anon_sym_invocation_dir_native] = ACTIONS(113),
    [anon_sym_invocation_directory] = ACTIONS(113),
    [anon_sym_invocation_directory_native] = ACTIONS(113),
    [anon_sym_justfile] = ACTIONS(113),
    [anon_sym_justfile_dir] = ACTIONS(113),
    [anon_sym_justfile_directory] = ACTIONS(113),
    [anon_sym_source_dir] = ACTIONS(113),
    [anon_sym_source_directory] = ACTIONS(113),
    [anon_sym_source_file] = ACTIONS(113),
    [anon_sym_just_executable] = ACTIONS(113),
    [anon_sym_just_pid] = ACTIONS(113),
    [anon_sym_append] = ACTIONS(113),
    [anon_sym_prepend] = ACTIONS(113),
    [anon_sym_encode_uri_component] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_replace] = ACTIONS(113),
    [anon_sym_replace_regex] = ACTIONS(113),
    [anon_sym_trim] = ACTIONS(113),
    [anon_sym_trim_end] = ACTIONS(113),
    [anon_sym_trim_end_match] = ACTIONS(113),
    [anon_sym_trim_end_matches] = ACTIONS(113),
    [anon_sym_trim_start] = ACTIONS(113),
    [anon_sym_trim_start_match] = ACTIONS(113),
    [anon_sym_trim_start_matches] = ACTIONS(113),
    [anon_sym_capitalize] = ACTIONS(113),
    [anon_sym_kebabcase] = ACTIONS(113),
    [anon_sym_lowercamelcase] = ACTIONS(113),
    [anon_sym_lowercase] = ACTIONS(113),
    [anon_sym_shoutykebabcase] = ACTIONS(113),
    [anon_sym_shoutysnakecase] = ACTIONS(113),
    [anon_sym_snakecase] = ACTIONS(113),
    [anon_sym_titlecase] = ACTIONS(113),
    [anon_sym_uppercamelcase] = ACTIONS(113),
    [anon_sym_uppercase] = ACTIONS(113),
    [anon_sym_absolute_path] = ACTIONS(113),
    [anon_sym_canonicalize] = ACTIONS(113),
    [anon_sym_extension] = ACTIONS(113),
    [anon_sym_file_name] = ACTIONS(113),
    [anon_sym_file_stem] = ACTIONS(113),
    [anon_sym_parent_dir] = ACTIONS(113),
    [anon_sym_parent_directory] = ACTIONS(113),
    [anon_sym_without_extension] = ACTIONS(113),
    [anon_sym_clean] = ACTIONS(113),
    [anon_sym_join] = ACTIONS(113),
    [anon_sym_path_exists] = ACTIONS(113),
    [anon_sym_error] = ACTIONS(113),
    [anon_sym_blake3] = ACTIONS(113),
    [anon_sym_blake3_file] = ACTIONS(113),
    [anon_sym_sha256] = ACTIONS(113),
    [anon_sym_sha256_file] = ACTIONS(113),
    [anon_sym_uuid] = ACTIONS(113),
    [anon_sym_choose] = ACTIONS(113),
    [anon_sym_datetime] = ACTIONS(113),
    [anon_sym_datetime_utc] = ACTIONS(113),
    [anon_sym_semver_matches] = ACTIONS(113),
    [anon_sym_cache_dir] = ACTIONS(113),
    [anon_sym_cache_directory] = ACTIONS(113),
    [anon_sym_config_dir] = ACTIONS(113),
    [anon_sym_config_directory] = ACTIONS(113),
    [anon_sym_config_local_dir] = ACTIONS(113),
    [anon_sym_config_local_directory] = ACTIONS(113),
    [anon_sym_data_dir] = ACTIONS(113),
    [anon_sym_data_directory] = ACTIONS(113),
    [anon_sym_data_local_dir] = ACTIONS(113),
    [anon_sym_data_local_directory] = ACTIONS(113),
    [anon_sym_executable_dir] = ACTIONS(113),
    [anon_sym_executable_directory] = ACTIONS(113),
    [anon_sym_home_dir] = ACTIONS(113),
    [anon_sym_home_directory] = ACTIONS(113),
    [anon_sym_set] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_alias] = ACTIONS(117),
    [aux_sym_import_token1] = ACTIONS(117),
    [aux_sym_mod_token1] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_assert] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_arch] = ACTIONS(117),
    [anon_sym_num_cpus] = ACTIONS(117),
    [anon_sym_os] = ACTIONS(117),
    [anon_sym_os_family] = ACTIONS(117),
    [anon_sym_shell] = ACTIONS(117),
    [anon_sym_env_var] = ACTIONS(117),
    [anon_sym_env_var_or_default] = ACTIONS(117),
    [anon_sym_env] = ACTIONS(117),
    [anon_sym_is_dependency] = ACTIONS(117),
    [anon_sym_invocation_dir] = ACTIONS(117),
    [anon_sym_invocation_dir_native] = ACTIONS(117),
    [anon_sym_invocation_directory] = ACTIONS(117),
    [anon_sym_invocation_directory_native] = ACTIONS(117),
    [anon_sym_justfile] = ACTIONS(117),
    [anon_sym_justfile_dir] = ACTIONS(117),
    [anon_sym_justfile_directory] = ACTIONS(117),
    [anon_sym_source_dir] = ACTIONS(117),
    [anon_sym_source_directory] = ACTIONS(117),
    [anon_sym_source_file] = ACTIONS(117),
    [anon_sym_just_executable] = ACTIONS(117),
    [anon_sym_just_pid] = ACTIONS(117),
    [anon_sym_append] = ACTIONS(117),
    [anon_sym_prepend] = ACTIONS(117),
    [anon_sym_encode_uri_component] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_replace] = ACTIONS(117),
    [anon_sym_replace_regex] = ACTIONS(117),
    [anon_sym_trim] = ACTIONS(117),
    [anon_sym_trim_end] = ACTIONS(117),
    [anon_sym_trim_end_match] = ACTIONS(117),
    [anon_sym_trim_end_matches] = ACTIONS(117),
    [anon_sym_trim_start] = ACTIONS(117),
    [anon_sym_trim_start_match] = ACTIONS(117),
    [anon_sym_trim_start_matches] = ACTIONS(117),
    [anon_sym_capitalize] = ACTIONS(117),
    [anon_sym_kebabcase] = ACTIONS(117),
    [anon_sym_lowercamelcase] = ACTIONS(117),
    [anon_sym_lowercase] = ACTIONS(117),
    [anon_sym_shoutykebabcase] = ACTIONS(117),
    [anon_sym_shoutysnakecase] = ACTIONS(117),
    [anon_sym_snakecase] = ACTIONS(117),
    [anon_sym_titlecase] = ACTIONS(117),
    [anon_sym_uppercamelcase] = ACTIONS(117),
    [anon_sym_uppercase] = ACTIONS(117),
    [anon_sym_absolute_path] = ACTIONS(117),
    [anon_sym_canonicalize] = ACTIONS(117),
    [anon_sym_extension] = ACTIONS(117),
    [anon_sym_file_name] = ACTIONS(117),
    [anon_sym_file_stem] = ACTIONS(117),
    [anon_sym_parent_dir] = ACTIONS(117),
    [anon_sym_parent_directory] = ACTIONS(117),
    [anon_sym_without_extension] = ACTIONS(117),
    [anon_sym_clean] = ACTIONS(117),
    [anon_sym_join] = ACTIONS(117),
    [anon_sym_path_exists] = ACTIONS(117),
    [anon_sym_error] = ACTIONS(117),
    [anon_sym_blake3] = ACTIONS(117),
    [anon_sym_blake3_file] = ACTIONS(117),
    [anon_sym_sha256] = ACTIONS(117),
    [anon_sym_sha256_file] = ACTIONS(117),
    [anon_sym_uuid] = ACTIONS(117),
    [anon_sym_choose] = ACTIONS(117),
    [anon_sym_datetime] = ACTIONS(117),
    [anon_sym_datetime_utc] = ACTIONS(117),
    [anon_sym_semver_matches] = ACTIONS(117),
    [anon_sym_cache_dir] = ACTIONS(117),
    [anon_sym_cache_directory] = ACTIONS(117),
    [anon_sym_config_dir] = ACTIONS(117),
    [anon_sym_config_directory] = ACTIONS(117),
    [anon_sym_config_local_dir] = ACTIONS(117),
    [anon_sym_config_local_directory] = ACTIONS(117),
    [anon_sym_data_dir] = ACTIONS(117),
    [anon_sym_data_directory] = ACTIONS(117),
    [anon_sym_data_local_dir] = ACTIONS(117),
    [anon_sym_data_local_directory] = ACTIONS(117),
    [anon_sym_executable_dir] = ACTIONS(117),
    [anon_sym_executable_directory] = ACTIONS(117),
    [anon_sym_home_dir] = ACTIONS(117),
    [anon_sym_home_directory] = ACTIONS(117),
    [anon_sym_set] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(115),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_alias] = ACTIONS(121),
    [aux_sym_import_token1] = ACTIONS(121),
    [aux_sym_mod_token1] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_assert] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_arch] = ACTIONS(121),
    [anon_sym_num_cpus] = ACTIONS(121),
    [anon_sym_os] = ACTIONS(121),
    [anon_sym_os_family] = ACTIONS(121),
    [anon_sym_shell] = ACTIONS(121),
    [anon_sym_env_var] = ACTIONS(121),
    [anon_sym_env_var_or_default] = ACTIONS(121),
    [anon_sym_env] = ACTIONS(121),
    [anon_sym_is_dependency] = ACTIONS(121),
    [anon_sym_invocation_dir] = ACTIONS(121),
    [anon_sym_invocation_dir_native] = ACTIONS(121),
    [anon_sym_invocation_directory] = ACTIONS(121),
    [anon_sym_invocation_directory_native] = ACTIONS(121),
    [anon_sym_justfile] = ACTIONS(121),
    [anon_sym_justfile_dir] = ACTIONS(121),
    [anon_sym_justfile_directory] = ACTIONS(121),
    [anon_sym_source_dir] = ACTIONS(121),
    [anon_sym_source_directory] = ACTIONS(121),
    [anon_sym_source_file] = ACTIONS(121),
    [anon_sym_just_executable] = ACTIONS(121),
    [anon_sym_just_pid] = ACTIONS(121),
    [anon_sym_append] = ACTIONS(121),
    [anon_sym_prepend] = ACTIONS(121),
    [anon_sym_encode_uri_component] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_replace] = ACTIONS(121),
    [anon_sym_replace_regex] = ACTIONS(121),
    [anon_sym_trim] = ACTIONS(121),
    [anon_sym_trim_end] = ACTIONS(121),
    [anon_sym_trim_end_match] = ACTIONS(121),
    [anon_sym_trim_end_matches] = ACTIONS(121),
    [anon_sym_trim_start] = ACTIONS(121),
    [anon_sym_trim_start_match] = ACTIONS(121),
    [anon_sym_trim_start_matches] = ACTIONS(121),
    [anon_sym_capitalize] = ACTIONS(121),
    [anon_sym_kebabcase] = ACTIONS(121),
    [anon_sym_lowercamelcase] = ACTIONS(121),
    [anon_sym_lowercase] = ACTIONS(121),
    [anon_sym_shoutykebabcase] = ACTIONS(121),
    [anon_sym_shoutysnakecase] = ACTIONS(121),
    [anon_sym_snakecase] = ACTIONS(121),
    [anon_sym_titlecase] = ACTIONS(121),
    [anon_sym_uppercamelcase] = ACTIONS(121),
    [anon_sym_uppercase] = ACTIONS(121),
    [anon_sym_absolute_path] = ACTIONS(121),
    [anon_sym_canonicalize] = ACTIONS(121),
    [anon_sym_extension] = ACTIONS(121),
    [anon_sym_file_name] = ACTIONS(121),
    [anon_sym_file_stem] = ACTIONS(121),
    [anon_sym_parent_dir] = ACTIONS(121),
    [anon_sym_parent_directory] = ACTIONS(121),
    [anon_sym_without_extension] = ACTIONS(121),
    [anon_sym_clean] = ACTIONS(121),
    [anon_sym_join] = ACTIONS(121),
    [anon_sym_path_exists] = ACTIONS(121),
    [anon_sym_error] = ACTIONS(121),
    [anon_sym_blake3] = ACTIONS(121),
    [anon_sym_blake3_file] = ACTIONS(121),
    [anon_sym_sha256] = ACTIONS(121),
    [anon_sym_sha256_file] = ACTIONS(121),
    [anon_sym_uuid] = ACTIONS(121),
    [anon_sym_choose] = ACTIONS(121),
    [anon_sym_datetime] = ACTIONS(121),
    [anon_sym_datetime_utc] = ACTIONS(121),
    [anon_sym_semver_matches] = ACTIONS(121),
    [anon_sym_cache_dir] = ACTIONS(121),
    [anon_sym_cache_directory] = ACTIONS(121),
    [anon_sym_config_dir] = ACTIONS(121),
    [anon_sym_config_directory] = ACTIONS(121),
    [anon_sym_config_local_dir] = ACTIONS(121),
    [anon_sym_config_local_directory] = ACTIONS(121),
    [anon_sym_data_dir] = ACTIONS(121),
    [anon_sym_data_directory] = ACTIONS(121),
    [anon_sym_data_local_dir] = ACTIONS(121),
    [anon_sym_data_local_directory] = ACTIONS(121),
    [anon_sym_executable_dir] = ACTIONS(121),
    [anon_sym_executable_directory] = ACTIONS(121),
    [anon_sym_home_dir] = ACTIONS(121),
    [anon_sym_home_directory] = ACTIONS(121),
    [anon_sym_set] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_alias] = ACTIONS(125),
    [aux_sym_import_token1] = ACTIONS(125),
    [aux_sym_mod_token1] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_assert] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_arch] = ACTIONS(125),
    [anon_sym_num_cpus] = ACTIONS(125),
    [anon_sym_os] = ACTIONS(125),
    [anon_sym_os_family] = ACTIONS(125),
    [anon_sym_shell] = ACTIONS(125),
    [anon_sym_env_var] = ACTIONS(125),
    [anon_sym_env_var_or_default] = ACTIONS(125),
    [anon_sym_env] = ACTIONS(125),
    [anon_sym_is_dependency] = ACTIONS(125),
    [anon_sym_invocation_dir] = ACTIONS(125),
    [anon_sym_invocation_dir_native] = ACTIONS(125),
    [anon_sym_invocation_directory] = ACTIONS(125),
    [anon_sym_invocation_directory_native] = ACTIONS(125),
    [anon_sym_justfile] = ACTIONS(125),
    [anon_sym_justfile_dir] = ACTIONS(125),
    [anon_sym_justfile_directory] = ACTIONS(125),
    [anon_sym_source_dir] = ACTIONS(125),
    [anon_sym_source_directory] = ACTIONS(125),
    [anon_sym_source_file] = ACTIONS(125),
    [anon_sym_just_executable] = ACTIONS(125),
    [anon_sym_just_pid] = ACTIONS(125),
    [anon_sym_append] = ACTIONS(125),
    [anon_sym_prepend] = ACTIONS(125),
    [anon_sym_encode_uri_component] = ACTIONS(125),
    [anon_sym_quote] = ACTIONS(125),
    [anon_sym_replace] = ACTIONS(125),
    [anon_sym_replace_regex] = ACTIONS(125),
    [anon_sym_trim] = ACTIONS(125),
    [anon_sym_trim_end] = ACTIONS(125),
    [anon_sym_trim_end_match] = ACTIONS(125),
    [anon_sym_trim_end_matches] = ACTIONS(125),
    [anon_sym_trim_start] = ACTIONS(125),
    [anon_sym_trim_start_match] = ACTIONS(125),
    [anon_sym_trim_start_matches] = ACTIONS(125),
    [anon_sym_capitalize] = ACTIONS(125),
    [anon_sym_kebabcase] = ACTIONS(125),
    [anon_sym_lowercamelcase] = ACTIONS(125),
    [anon_sym_lowercase] = ACTIONS(125),
    [anon_sym_shoutykebabcase] = ACTIONS(125),
    [anon_sym_shoutysnakecase] = ACTIONS(125),
    [anon_sym_snakecase] = ACTIONS(125),
    [anon_sym_titlecase] = ACTIONS(125),
    [anon_sym_uppercamelcase] = ACTIONS(125),
    [anon_sym_uppercase] = ACTIONS(125),
    [anon_sym_absolute_path] = ACTIONS(125),
    [anon_sym_canonicalize] = ACTIONS(125),
    [anon_sym_extension] = ACTIONS(125),
    [anon_sym_file_name] = ACTIONS(125),
    [anon_sym_file_stem] = ACTIONS(125),
    [anon_sym_parent_dir] = ACTIONS(125),
    [anon_sym_parent_directory] = ACTIONS(125),
    [anon_sym_without_extension] = ACTIONS(125),
    [anon_sym_clean] = ACTIONS(125),
    [anon_sym_join] = ACTIONS(125),
    [anon_sym_path_exists] = ACTIONS(125),
    [anon_sym_error] = ACTIONS(125),
    [anon_sym_blake3] = ACTIONS(125),
    [anon_sym_blake3_file] = ACTIONS(125),
    [anon_sym_sha256] = ACTIONS(125),
    [anon_sym_sha256_file] = ACTIONS(125),
    [anon_sym_uuid] = ACTIONS(125),
    [anon_sym_choose] = ACTIONS(125),
    [anon_sym_datetime] = ACTIONS(125),
    [anon_sym_datetime_utc] = ACTIONS(125),
    [anon_sym_semver_matches] = ACTIONS(125),
    [anon_sym_cache_dir] = ACTIONS(125),
    [anon_sym_cache_directory] = ACTIONS(125),
    [anon_sym_config_dir] = ACTIONS(125),
    [anon_sym_config_directory] = ACTIONS(125),
    [anon_sym_config_local_dir] = ACTIONS(125),
    [anon_sym_config_local_directory] = ACTIONS(125),
    [anon_sym_data_dir] = ACTIONS(125),
    [anon_sym_data_directory] = ACTIONS(125),
    [anon_sym_data_local_dir] = ACTIONS(125),
    [anon_sym_data_local_directory] = ACTIONS(125),
    [anon_sym_executable_dir] = ACTIONS(125),
    [anon_sym_executable_directory] = ACTIONS(125),
    [anon_sym_home_dir] = ACTIONS(125),
    [anon_sym_home_directory] = ACTIONS(125),
    [anon_sym_set] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_alias] = ACTIONS(129),
    [aux_sym_import_token1] = ACTIONS(129),
    [aux_sym_mod_token1] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_assert] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_arch] = ACTIONS(129),
    [anon_sym_num_cpus] = ACTIONS(129),
    [anon_sym_os] = ACTIONS(129),
    [anon_sym_os_family] = ACTIONS(129),
    [anon_sym_shell] = ACTIONS(129),
    [anon_sym_env_var] = ACTIONS(129),
    [anon_sym_env_var_or_default] = ACTIONS(129),
    [anon_sym_env] = ACTIONS(129),
    [anon_sym_is_dependency] = ACTIONS(129),
    [anon_sym_invocation_dir] = ACTIONS(129),
    [anon_sym_invocation_dir_native] = ACTIONS(129),
    [anon_sym_invocation_directory] = ACTIONS(129),
    [anon_sym_invocation_directory_native] = ACTIONS(129),
    [anon_sym_justfile] = ACTIONS(129),
    [anon_sym_justfile_dir] = ACTIONS(129),
    [anon_sym_justfile_directory] = ACTIONS(129),
    [anon_sym_source_dir] = ACTIONS(129),
    [anon_sym_source_directory] = ACTIONS(129),
    [anon_sym_source_file] = ACTIONS(129),
    [anon_sym_just_executable] = ACTIONS(129),
    [anon_sym_just_pid] = ACTIONS(129),
    [anon_sym_append] = ACTIONS(129),
    [anon_sym_prepend] = ACTIONS(129),
    [anon_sym_encode_uri_component] = ACTIONS(129),
    [anon_sym_quote] = ACTIONS(129),
    [anon_sym_replace] = ACTIONS(129),
    [anon_sym_replace_regex] = ACTIONS(129),
    [anon_sym_trim] = ACTIONS(129),
    [anon_sym_trim_end] = ACTIONS(129),
    [anon_sym_trim_end_match] = ACTIONS(129),
    [anon_sym_trim_end_matches] = ACTIONS(129),
    [anon_sym_trim_start] = ACTIONS(129),
    [anon_sym_trim_start_match] = ACTIONS(129),
    [anon_sym_trim_start_matches] = ACTIONS(129),
    [anon_sym_capitalize] = ACTIONS(129),
    [anon_sym_kebabcase] = ACTIONS(129),
    [anon_sym_lowercamelcase] = ACTIONS(129),
    [anon_sym_lowercase] = ACTIONS(129),
    [anon_sym_shoutykebabcase] = ACTIONS(129),
    [anon_sym_shoutysnakecase] = ACTIONS(129),
    [anon_sym_snakecase] = ACTIONS(129),
    [anon_sym_titlecase] = ACTIONS(129),
    [anon_sym_uppercamelcase] = ACTIONS(129),
    [anon_sym_uppercase] = ACTIONS(129),
    [anon_sym_absolute_path] = ACTIONS(129),
    [anon_sym_canonicalize] = ACTIONS(129),
    [anon_sym_extension] = ACTIONS(129),
    [anon_sym_file_name] = ACTIONS(129),
    [anon_sym_file_stem] = ACTIONS(129),
    [anon_sym_parent_dir] = ACTIONS(129),
    [anon_sym_parent_directory] = ACTIONS(129),
    [anon_sym_without_extension] = ACTIONS(129),
    [anon_sym_clean] = ACTIONS(129),
    [anon_sym_join] = ACTIONS(129),
    [anon_sym_path_exists] = ACTIONS(129),
    [anon_sym_error] = ACTIONS(129),
    [anon_sym_blake3] = ACTIONS(129),
    [anon_sym_blake3_file] = ACTIONS(129),
    [anon_sym_sha256] = ACTIONS(129),
    [anon_sym_sha256_file] = ACTIONS(129),
    [anon_sym_uuid] = ACTIONS(129),
    [anon_sym_choose] = ACTIONS(129),
    [anon_sym_datetime] = ACTIONS(129),
    [anon_sym_datetime_utc] = ACTIONS(129),
    [anon_sym_semver_matches] = ACTIONS(129),
    [anon_sym_cache_dir] = ACTIONS(129),
    [anon_sym_cache_directory] = ACTIONS(129),
    [anon_sym_config_dir] = ACTIONS(129),
    [anon_sym_config_directory] = ACTIONS(129),
    [anon_sym_config_local_dir] = ACTIONS(129),
    [anon_sym_config_local_directory] = ACTIONS(129),
    [anon_sym_data_dir] = ACTIONS(129),
    [anon_sym_data_directory] = ACTIONS(129),
    [anon_sym_data_local_dir] = ACTIONS(129),
    [anon_sym_data_local_directory] = ACTIONS(129),
    [anon_sym_executable_dir] = ACTIONS(129),
    [anon_sym_executable_directory] = ACTIONS(129),
    [anon_sym_home_dir] = ACTIONS(129),
    [anon_sym_home_directory] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_alias] = ACTIONS(133),
    [aux_sym_import_token1] = ACTIONS(133),
    [aux_sym_mod_token1] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_assert] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_arch] = ACTIONS(133),
    [anon_sym_num_cpus] = ACTIONS(133),
    [anon_sym_os] = ACTIONS(133),
    [anon_sym_os_family] = ACTIONS(133),
    [anon_sym_shell] = ACTIONS(133),
    [anon_sym_env_var] = ACTIONS(133),
    [anon_sym_env_var_or_default] = ACTIONS(133),
    [anon_sym_env] = ACTIONS(133),
    [anon_sym_is_dependency] = ACTIONS(133),
    [anon_sym_invocation_dir] = ACTIONS(133),
    [anon_sym_invocation_dir_native] = ACTIONS(133),
    [anon_sym_invocation_directory] = ACTIONS(133),
    [anon_sym_invocation_directory_native] = ACTIONS(133),
    [anon_sym_justfile] = ACTIONS(133),
    [anon_sym_justfile_dir] = ACTIONS(133),
    [anon_sym_justfile_directory] = ACTIONS(133),
    [anon_sym_source_dir] = ACTIONS(133),
    [anon_sym_source_directory] = ACTIONS(133),
    [anon_sym_source_file] = ACTIONS(133),
    [anon_sym_just_executable] = ACTIONS(133),
    [anon_sym_just_pid] = ACTIONS(133),
    [anon_sym_append] = ACTIONS(133),
    [anon_sym_prepend] = ACTIONS(133),
    [anon_sym_encode_uri_component] = ACTIONS(133),
    [anon_sym_quote] = ACTIONS(133),
    [anon_sym_replace] = ACTIONS(133),
    [anon_sym_replace_regex] = ACTIONS(133),
    [anon_sym_trim] = ACTIONS(133),
    [anon_sym_trim_end] = ACTIONS(133),
    [anon_sym_trim_end_match] = ACTIONS(133),
    [anon_sym_trim_end_matches] = ACTIONS(133),
    [anon_sym_trim_start] = ACTIONS(133),
    [anon_sym_trim_start_match] = ACTIONS(133),
    [anon_sym_trim_start_matches] = ACTIONS(133),
    [anon_sym_capitalize] = ACTIONS(133),
    [anon_sym_kebabcase] = ACTIONS(133),
    [anon_sym_lowercamelcase] = ACTIONS(133),
    [anon_sym_lowercase] = ACTIONS(133),
    [anon_sym_shoutykebabcase] = ACTIONS(133),
    [anon_sym_shoutysnakecase] = ACTIONS(133),
    [anon_sym_snakecase] = ACTIONS(133),
    [anon_sym_titlecase] = ACTIONS(133),
    [anon_sym_uppercamelcase] = ACTIONS(133),
    [anon_sym_uppercase] = ACTIONS(133),
    [anon_sym_absolute_path] = ACTIONS(133),
    [anon_sym_canonicalize] = ACTIONS(133),
    [anon_sym_extension] = ACTIONS(133),
    [anon_sym_file_name] = ACTIONS(133),
    [anon_sym_file_stem] = ACTIONS(133),
    [anon_sym_parent_dir] = ACTIONS(133),
    [anon_sym_parent_directory] = ACTIONS(133),
    [anon_sym_without_extension] = ACTIONS(133),
    [anon_sym_clean] = ACTIONS(133),
    [anon_sym_join] = ACTIONS(133),
    [anon_sym_path_exists] = ACTIONS(133),
    [anon_sym_error] = ACTIONS(133),
    [anon_sym_blake3] = ACTIONS(133),
    [anon_sym_blake3_file] = ACTIONS(133),
    [anon_sym_sha256] = ACTIONS(133),
    [anon_sym_sha256_file] = ACTIONS(133),
    [anon_sym_uuid] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(133),
    [anon_sym_datetime] = ACTIONS(133),
    [anon_sym_datetime_utc] = ACTIONS(133),
    [anon_sym_semver_matches] = ACTIONS(133),
    [anon_sym_cache_dir] = ACTIONS(133),
    [anon_sym_cache_directory] = ACTIONS(133),
    [anon_sym_config_dir] = ACTIONS(133),
    [anon_sym_config_directory] = ACTIONS(133),
    [anon_sym_config_local_dir] = ACTIONS(133),
    [anon_sym_config_local_directory] = ACTIONS(133),
    [anon_sym_data_dir] = ACTIONS(133),
    [anon_sym_data_directory] = ACTIONS(133),
    [anon_sym_data_local_dir] = ACTIONS(133),
    [anon_sym_data_local_directory] = ACTIONS(133),
    [anon_sym_executable_dir] = ACTIONS(133),
    [anon_sym_executable_directory] = ACTIONS(133),
    [anon_sym_home_dir] = ACTIONS(133),
    [anon_sym_home_directory] = ACTIONS(133),
    [anon_sym_set] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_alias] = ACTIONS(137),
    [aux_sym_import_token1] = ACTIONS(137),
    [aux_sym_mod_token1] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_assert] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_BANG_EQ] = ACTIONS(135),
    [anon_sym_arch] = ACTIONS(137),
    [anon_sym_num_cpus] = ACTIONS(137),
    [anon_sym_os] = ACTIONS(137),
    [anon_sym_os_family] = ACTIONS(137),
    [anon_sym_shell] = ACTIONS(137),
    [anon_sym_env_var] = ACTIONS(137),
    [anon_sym_env_var_or_default] = ACTIONS(137),
    [anon_sym_env] = ACTIONS(137),
    [anon_sym_is_dependency] = ACTIONS(137),
    [anon_sym_invocation_dir] = ACTIONS(137),
    [anon_sym_invocation_dir_native] = ACTIONS(137),
    [anon_sym_invocation_directory] = ACTIONS(137),
    [anon_sym_invocation_directory_native] = ACTIONS(137),
    [anon_sym_justfile] = ACTIONS(137),
    [anon_sym_justfile_dir] = ACTIONS(137),
    [anon_sym_justfile_directory] = ACTIONS(137),
    [anon_sym_source_dir] = ACTIONS(137),
    [anon_sym_source_directory] = ACTIONS(137),
    [anon_sym_source_file] = ACTIONS(137),
    [anon_sym_just_executable] = ACTIONS(137),
    [anon_sym_just_pid] = ACTIONS(137),
    [anon_sym_append] = ACTIONS(137),
    [anon_sym_prepend] = ACTIONS(137),
    [anon_sym_encode_uri_component] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_replace] = ACTIONS(137),
    [anon_sym_replace_regex] = ACTIONS(137),
    [anon_sym_trim] = ACTIONS(137),
    [anon_sym_trim_end] = ACTIONS(137),
    [anon_sym_trim_end_match] = ACTIONS(137),
    [anon_sym_trim_end_matches] = ACTIONS(137),
    [anon_sym_trim_start] = ACTIONS(137),
    [anon_sym_trim_start_match] = ACTIONS(137),
    [anon_sym_trim_start_matches] = ACTIONS(137),
    [anon_sym_capitalize] = ACTIONS(137),
    [anon_sym_kebabcase] = ACTIONS(137),
    [anon_sym_lowercamelcase] = ACTIONS(137),
    [anon_sym_lowercase] = ACTIONS(137),
    [anon_sym_shoutykebabcase] = ACTIONS(137),
    [anon_sym_shoutysnakecase] = ACTIONS(137),
    [anon_sym_snakecase] = ACTIONS(137),
    [anon_sym_titlecase] = ACTIONS(137),
    [anon_sym_uppercamelcase] = ACTIONS(137),
    [anon_sym_uppercase] = ACTIONS(137),
    [anon_sym_absolute_path] = ACTIONS(137),
    [anon_sym_canonicalize] = ACTIONS(137),
    [anon_sym_extension] = ACTIONS(137),
    [anon_sym_file_name] = ACTIONS(137),
    [anon_sym_file_stem] = ACTIONS(137),
    [anon_sym_parent_dir] = ACTIONS(137),
    [anon_sym_parent_directory] = ACTIONS(137),
    [anon_sym_without_extension] = ACTIONS(137),
    [anon_sym_clean] = ACTIONS(137),
    [anon_sym_join] = ACTIONS(137),
    [anon_sym_path_exists] = ACTIONS(137),
    [anon_sym_error] = ACTIONS(137),
    [anon_sym_blake3] = ACTIONS(137),
    [anon_sym_blake3_file] = ACTIONS(137),
    [anon_sym_sha256] = ACTIONS(137),
    [anon_sym_sha256_file] = ACTIONS(137),
    [anon_sym_uuid] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(137),
    [anon_sym_datetime] = ACTIONS(137),
    [anon_sym_datetime_utc] = ACTIONS(137),
    [anon_sym_semver_matches] = ACTIONS(137),
    [anon_sym_cache_dir] = ACTIONS(137),
    [anon_sym_cache_directory] = ACTIONS(137),
    [anon_sym_config_dir] = ACTIONS(137),
    [anon_sym_config_directory] = ACTIONS(137),
    [anon_sym_config_local_dir] = ACTIONS(137),
    [anon_sym_config_local_directory] = ACTIONS(137),
    [anon_sym_data_dir] = ACTIONS(137),
    [anon_sym_data_directory] = ACTIONS(137),
    [anon_sym_data_local_dir] = ACTIONS(137),
    [anon_sym_data_local_directory] = ACTIONS(137),
    [anon_sym_executable_dir] = ACTIONS(137),
    [anon_sym_executable_directory] = ACTIONS(137),
    [anon_sym_home_dir] = ACTIONS(137),
    [anon_sym_home_directory] = ACTIONS(137),
    [anon_sym_set] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_alias] = ACTIONS(141),
    [aux_sym_import_token1] = ACTIONS(141),
    [aux_sym_mod_token1] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_assert] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_arch] = ACTIONS(141),
    [anon_sym_num_cpus] = ACTIONS(141),
    [anon_sym_os] = ACTIONS(141),
    [anon_sym_os_family] = ACTIONS(141),
    [anon_sym_shell] = ACTIONS(141),
    [anon_sym_env_var] = ACTIONS(141),
    [anon_sym_env_var_or_default] = ACTIONS(141),
    [anon_sym_env] = ACTIONS(141),
    [anon_sym_is_dependency] = ACTIONS(141),
    [anon_sym_invocation_dir] = ACTIONS(141),
    [anon_sym_invocation_dir_native] = ACTIONS(141),
    [anon_sym_invocation_directory] = ACTIONS(141),
    [anon_sym_invocation_directory_native] = ACTIONS(141),
    [anon_sym_justfile] = ACTIONS(141),
    [anon_sym_justfile_dir] = ACTIONS(141),
    [anon_sym_justfile_directory] = ACTIONS(141),
    [anon_sym_source_dir] = ACTIONS(141),
    [anon_sym_source_directory] = ACTIONS(141),
    [anon_sym_source_file] = ACTIONS(141),
    [anon_sym_just_executable] = ACTIONS(141),
    [anon_sym_just_pid] = ACTIONS(141),
    [anon_sym_append] = ACTIONS(141),
    [anon_sym_prepend] = ACTIONS(141),
    [anon_sym_encode_uri_component] = ACTIONS(141),
    [anon_sym_quote] = ACTIONS(141),
    [anon_sym_replace] = ACTIONS(141),
    [anon_sym_replace_regex] = ACTIONS(141),
    [anon_sym_trim] = ACTIONS(141),
    [anon_sym_trim_end] = ACTIONS(141),
    [anon_sym_trim_end_match] = ACTIONS(141),
    [anon_sym_trim_end_matches] = ACTIONS(141),
    [anon_sym_trim_start] = ACTIONS(141),
    [anon_sym_trim_start_match] = ACTIONS(141),
    [anon_sym_trim_start_matches] = ACTIONS(141),
    [anon_sym_capitalize] = ACTIONS(141),
    [anon_sym_kebabcase] = ACTIONS(141),
    [anon_sym_lowercamelcase] = ACTIONS(141),
    [anon_sym_lowercase] = ACTIONS(141),
    [anon_sym_shoutykebabcase] = ACTIONS(141),
    [anon_sym_shoutysnakecase] = ACTIONS(141),
    [anon_sym_snakecase] = ACTIONS(141),
    [anon_sym_titlecase] = ACTIONS(141),
    [anon_sym_uppercamelcase] = ACTIONS(141),
    [anon_sym_uppercase] = ACTIONS(141),
    [anon_sym_absolute_path] = ACTIONS(141),
    [anon_sym_canonicalize] = ACTIONS(141),
    [anon_sym_extension] = ACTIONS(141),
    [anon_sym_file_name] = ACTIONS(141),
    [anon_sym_file_stem] = ACTIONS(141),
    [anon_sym_parent_dir] = ACTIONS(141),
    [anon_sym_parent_directory] = ACTIONS(141),
    [anon_sym_without_extension] = ACTIONS(141),
    [anon_sym_clean] = ACTIONS(141),
    [anon_sym_join] = ACTIONS(141),
    [anon_sym_path_exists] = ACTIONS(141),
    [anon_sym_error] = ACTIONS(141),
    [anon_sym_blake3] = ACTIONS(141),
    [anon_sym_blake3_file] = ACTIONS(141),
    [anon_sym_sha256] = ACTIONS(141),
    [anon_sym_sha256_file] = ACTIONS(141),
    [anon_sym_uuid] = ACTIONS(141),
    [anon_sym_choose] = ACTIONS(141),
    [anon_sym_datetime] = ACTIONS(141),
    [anon_sym_datetime_utc] = ACTIONS(141),
    [anon_sym_semver_matches] = ACTIONS(141),
    [anon_sym_cache_dir] = ACTIONS(141),
    [anon_sym_cache_directory] = ACTIONS(141),
    [anon_sym_config_dir] = ACTIONS(141),
    [anon_sym_config_directory] = ACTIONS(141),
    [anon_sym_config_local_dir] = ACTIONS(141),
    [anon_sym_config_local_directory] = ACTIONS(141),
    [anon_sym_data_dir] = ACTIONS(141),
    [anon_sym_data_directory] = ACTIONS(141),
    [anon_sym_data_local_dir] = ACTIONS(141),
    [anon_sym_data_local_directory] = ACTIONS(141),
    [anon_sym_executable_dir] = ACTIONS(141),
    [anon_sym_executable_directory] = ACTIONS(141),
    [anon_sym_home_dir] = ACTIONS(141),
    [anon_sym_home_directory] = ACTIONS(141),
    [anon_sym_set] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(86),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_function_parameters] = STATE(140),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_alias] = ACTIONS(147),
    [aux_sym_import_token1] = ACTIONS(147),
    [aux_sym_mod_token1] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_assert] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_arch] = ACTIONS(147),
    [anon_sym_num_cpus] = ACTIONS(147),
    [anon_sym_os] = ACTIONS(147),
    [anon_sym_os_family] = ACTIONS(147),
    [anon_sym_shell] = ACTIONS(147),
    [anon_sym_env_var] = ACTIONS(147),
    [anon_sym_env_var_or_default] = ACTIONS(147),
    [anon_sym_env] = ACTIONS(147),
    [anon_sym_is_dependency] = ACTIONS(147),
    [anon_sym_invocation_dir] = ACTIONS(147),
    [anon_sym_invocation_dir_native] = ACTIONS(147),
    [anon_sym_invocation_directory] = ACTIONS(147),
    [anon_sym_invocation_directory_native] = ACTIONS(147),
    [anon_sym_justfile] = ACTIONS(147),
    [anon_sym_justfile_dir] = ACTIONS(147),
    [anon_sym_justfile_directory] = ACTIONS(147),
    [anon_sym_source_dir] = ACTIONS(147),
    [anon_sym_source_directory] = ACTIONS(147),
    [anon_sym_source_file] = ACTIONS(147),
    [anon_sym_just_executable] = ACTIONS(147),
    [anon_sym_just_pid] = ACTIONS(147),
    [anon_sym_append] = ACTIONS(147),
    [anon_sym_prepend] = ACTIONS(147),
    [anon_sym_encode_uri_component] = ACTIONS(147),
    [anon_sym_quote] = ACTIONS(147),
    [anon_sym_replace] = ACTIONS(147),
    [anon_sym_replace_regex] = ACTIONS(147),
    [anon_sym_trim] = ACTIONS(147),
    [anon_sym_trim_end] = ACTIONS(147),
    [anon_sym_trim_end_match] = ACTIONS(147),
    [anon_sym_trim_end_matches] = ACTIONS(147),
    [anon_sym_trim_start] = ACTIONS(147),
    [anon_sym_trim_start_match] = ACTIONS(147),
    [anon_sym_trim_start_matches] = ACTIONS(147),
    [anon_sym_capitalize] = ACTIONS(147),
    [anon_sym_kebabcase] = ACTIONS(147),
    [anon_sym_lowercamelcase] = ACTIONS(147),
    [anon_sym_lowercase] = ACTIONS(147),
    [anon_sym_shoutykebabcase] = ACTIONS(147),
    [anon_sym_shoutysnakecase] = ACTIONS(147),
    [anon_sym_snakecase] = ACTIONS(147),
    [anon_sym_titlecase] = ACTIONS(147),
    [anon_sym_uppercamelcase] = ACTIONS(147),
    [anon_sym_uppercase] = ACTIONS(147),
    [anon_sym_absolute_path] = ACTIONS(147),
    [anon_sym_canonicalize] = ACTIONS(147),
    [anon_sym_extension] = ACTIONS(147),
    [anon_sym_file_name] = ACTIONS(147),
    [anon_sym_file_stem] = ACTIONS(147),
    [anon_sym_parent_dir] = ACTIONS(147),
    [anon_sym_parent_directory] = ACTIONS(147),
    [anon_sym_without_extension] = ACTIONS(147),
    [anon_sym_clean] = ACTIONS(147),
    [anon_sym_join] = ACTIONS(147),
    [anon_sym_path_exists] = ACTIONS(147),
    [anon_sym_error] = ACTIONS(147),
    [anon_sym_blake3] = ACTIONS(147),
    [anon_sym_blake3_file] = ACTIONS(147),
    [anon_sym_sha256] = ACTIONS(147),
    [anon_sym_sha256_file] = ACTIONS(147),
    [anon_sym_uuid] = ACTIONS(147),
    [anon_sym_choose] = ACTIONS(147),
    [anon_sym_datetime] = ACTIONS(147),
    [anon_sym_datetime_utc] = ACTIONS(147),
    [anon_sym_semver_matches] = ACTIONS(147),
    [anon_sym_cache_dir] = ACTIONS(147),
    [anon_sym_cache_directory] = ACTIONS(147),
    [anon_sym_config_dir] = ACTIONS(147),
    [anon_sym_config_directory] = ACTIONS(147),
    [anon_sym_config_local_dir] = ACTIONS(147),
    [anon_sym_config_local_directory] = ACTIONS(147),
    [anon_sym_data_dir] = ACTIONS(147),
    [anon_sym_data_directory] = ACTIONS(147),
    [anon_sym_data_local_dir] = ACTIONS(147),
    [anon_sym_data_local_directory] = ACTIONS(147),
    [anon_sym_executable_dir] = ACTIONS(147),
    [anon_sym_executable_directory] = ACTIONS(147),
    [anon_sym_home_dir] = ACTIONS(147),
    [anon_sym_home_directory] = ACTIONS(147),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(147),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(151),
    [anon_sym_alias] = ACTIONS(151),
    [aux_sym_import_token1] = ACTIONS(151),
    [aux_sym_mod_token1] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_assert] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_arch] = ACTIONS(151),
    [anon_sym_num_cpus] = ACTIONS(151),
    [anon_sym_os] = ACTIONS(151),
    [anon_sym_os_family] = ACTIONS(151),
    [anon_sym_shell] = ACTIONS(151),
    [anon_sym_env_var] = ACTIONS(151),
    [anon_sym_env_var_or_default] = ACTIONS(151),
    [anon_sym_env] = ACTIONS(151),
    [anon_sym_is_dependency] = ACTIONS(151),
    [anon_sym_invocation_dir] = ACTIONS(151),
    [anon_sym_invocation_dir_native] = ACTIONS(151),
    [anon_sym_invocation_directory] = ACTIONS(151),
    [anon_sym_invocation_directory_native] = ACTIONS(151),
    [anon_sym_justfile] = ACTIONS(151),
    [anon_sym_justfile_dir] = ACTIONS(151),
    [anon_sym_justfile_directory] = ACTIONS(151),
    [anon_sym_source_dir] = ACTIONS(151),
    [anon_sym_source_directory] = ACTIONS(151),
    [anon_sym_source_file] = ACTIONS(151),
    [anon_sym_just_executable] = ACTIONS(151),
    [anon_sym_just_pid] = ACTIONS(151),
    [anon_sym_append] = ACTIONS(151),
    [anon_sym_prepend] = ACTIONS(151),
    [anon_sym_encode_uri_component] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_replace] = ACTIONS(151),
    [anon_sym_replace_regex] = ACTIONS(151),
    [anon_sym_trim] = ACTIONS(151),
    [anon_sym_trim_end] = ACTIONS(151),
    [anon_sym_trim_end_match] = ACTIONS(151),
    [anon_sym_trim_end_matches] = ACTIONS(151),
    [anon_sym_trim_start] = ACTIONS(151),
    [anon_sym_trim_start_match] = ACTIONS(151),
    [anon_sym_trim_start_matches] = ACTIONS(151),
    [anon_sym_capitalize] = ACTIONS(151),
    [anon_sym_kebabcase] = ACTIONS(151),
    [anon_sym_lowercamelcase] = ACTIONS(151),
    [anon_sym_lowercase] = ACTIONS(151),
    [anon_sym_shoutykebabcase] = ACTIONS(151),
    [anon_sym_shoutysnakecase] = ACTIONS(151),
    [anon_sym_snakecase] = ACTIONS(151),
    [anon_sym_titlecase] = ACTIONS(151),
    [anon_sym_uppercamelcase] = ACTIONS(151),
    [anon_sym_uppercase] = ACTIONS(151),
    [anon_sym_absolute_path] = ACTIONS(151),
    [anon_sym_canonicalize] = ACTIONS(151),
    [anon_sym_extension] = ACTIONS(151),
    [anon_sym_file_name] = ACTIONS(151),
    [anon_sym_file_stem] = ACTIONS(151),
    [anon_sym_parent_dir] = ACTIONS(151),
    [anon_sym_parent_directory] = ACTIONS(151),
    [anon_sym_without_extension] = ACTIONS(151),
    [anon_sym_clean] = ACTIONS(151),
    [anon_sym_join] = ACTIONS(151),
    [anon_sym_path_exists] = ACTIONS(151),
    [anon_sym_error] = ACTIONS(151),
    [anon_sym_blake3] = ACTIONS(151),
    [anon_sym_blake3_file] = ACTIONS(151),
    [anon_sym_sha256] = ACTIONS(151),
    [anon_sym_sha256_file] = ACTIONS(151),
    [anon_sym_uuid] = ACTIONS(151),
    [anon_sym_choose] = ACTIONS(151),
    [anon_sym_datetime] = ACTIONS(151),
    [anon_sym_datetime_utc] = ACTIONS(151),
    [anon_sym_semver_matches] = ACTIONS(151),
    [anon_sym_cache_dir] = ACTIONS(151),
    [anon_sym_cache_directory] = ACTIONS(151),
    [anon_sym_config_dir] = ACTIONS(151),
    [anon_sym_config_directory] = ACTIONS(151),
    [anon_sym_config_local_dir] = ACTIONS(151),
    [anon_sym_config_local_directory] = ACTIONS(151),
    [anon_sym_data_dir] = ACTIONS(151),
    [anon_sym_data_directory] = ACTIONS(151),
    [anon_sym_data_local_dir] = ACTIONS(151),
    [anon_sym_data_local_directory] = ACTIONS(151),
    [anon_sym_executable_dir] = ACTIONS(151),
    [anon_sym_executable_directory] = ACTIONS(151),
    [anon_sym_home_dir] = ACTIONS(151),
    [anon_sym_home_directory] = ACTIONS(151),
    [anon_sym_set] = ACTIONS(151),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_alias] = ACTIONS(155),
    [aux_sym_import_token1] = ACTIONS(155),
    [aux_sym_mod_token1] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_assert] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_arch] = ACTIONS(155),
    [anon_sym_num_cpus] = ACTIONS(155),
    [anon_sym_os] = ACTIONS(155),
    [anon_sym_os_family] = ACTIONS(155),
    [anon_sym_shell] = ACTIONS(155),
    [anon_sym_env_var] = ACTIONS(155),
    [anon_sym_env_var_or_default] = ACTIONS(155),
    [anon_sym_env] = ACTIONS(155),
    [anon_sym_is_dependency] = ACTIONS(155),
    [anon_sym_invocation_dir] = ACTIONS(155),
    [anon_sym_invocation_dir_native] = ACTIONS(155),
    [anon_sym_invocation_directory] = ACTIONS(155),
    [anon_sym_invocation_directory_native] = ACTIONS(155),
    [anon_sym_justfile] = ACTIONS(155),
    [anon_sym_justfile_dir] = ACTIONS(155),
    [anon_sym_justfile_directory] = ACTIONS(155),
    [anon_sym_source_dir] = ACTIONS(155),
    [anon_sym_source_directory] = ACTIONS(155),
    [anon_sym_source_file] = ACTIONS(155),
    [anon_sym_just_executable] = ACTIONS(155),
    [anon_sym_just_pid] = ACTIONS(155),
    [anon_sym_append] = ACTIONS(155),
    [anon_sym_prepend] = ACTIONS(155),
    [anon_sym_encode_uri_component] = ACTIONS(155),
    [anon_sym_quote] = ACTIONS(155),
    [anon_sym_replace] = ACTIONS(155),
    [anon_sym_replace_regex] = ACTIONS(155),
    [anon_sym_trim] = ACTIONS(155),
    [anon_sym_trim_end] = ACTIONS(155),
    [anon_sym_trim_end_match] = ACTIONS(155),
    [anon_sym_trim_end_matches] = ACTIONS(155),
    [anon_sym_trim_start] = ACTIONS(155),
    [anon_sym_trim_start_match] = ACTIONS(155),
    [anon_sym_trim_start_matches] = ACTIONS(155),
    [anon_sym_capitalize] = ACTIONS(155),
    [anon_sym_kebabcase] = ACTIONS(155),
    [anon_sym_lowercamelcase] = ACTIONS(155),
    [anon_sym_lowercase] = ACTIONS(155),
    [anon_sym_shoutykebabcase] = ACTIONS(155),
    [anon_sym_shoutysnakecase] = ACTIONS(155),
    [anon_sym_snakecase] = ACTIONS(155),
    [anon_sym_titlecase] = ACTIONS(155),
    [anon_sym_uppercamelcase] = ACTIONS(155),
    [anon_sym_uppercase] = ACTIONS(155),
    [anon_sym_absolute_path] = ACTIONS(155),
    [anon_sym_canonicalize] = ACTIONS(155),
    [anon_sym_extension] = ACTIONS(155),
    [anon_sym_file_name] = ACTIONS(155),
    [anon_sym_file_stem] = ACTIONS(155),
    [anon_sym_parent_dir] = ACTIONS(155),
    [anon_sym_parent_directory] = ACTIONS(155),
    [anon_sym_without_extension] = ACTIONS(155),
    [anon_sym_clean] = ACTIONS(155),
    [anon_sym_join] = ACTIONS(155),
    [anon_sym_path_exists] = ACTIONS(155),
    [anon_sym_error] = ACTIONS(155),
    [anon_sym_blake3] = ACTIONS(155),
    [anon_sym_blake3_file] = ACTIONS(155),
    [anon_sym_sha256] = ACTIONS(155),
    [anon_sym_sha256_file] = ACTIONS(155),
    [anon_sym_uuid] = ACTIONS(155),
    [anon_sym_choose] = ACTIONS(155),
    [anon_sym_datetime] = ACTIONS(155),
    [anon_sym_datetime_utc] = ACTIONS(155),
    [anon_sym_semver_matches] = ACTIONS(155),
    [anon_sym_cache_dir] = ACTIONS(155),
    [anon_sym_cache_directory] = ACTIONS(155),
    [anon_sym_config_dir] = ACTIONS(155),
    [anon_sym_config_directory] = ACTIONS(155),
    [anon_sym_config_local_dir] = ACTIONS(155),
    [anon_sym_config_local_directory] = ACTIONS(155),
    [anon_sym_data_dir] = ACTIONS(155),
    [anon_sym_data_directory] = ACTIONS(155),
    [anon_sym_data_local_dir] = ACTIONS(155),
    [anon_sym_data_local_directory] = ACTIONS(155),
    [anon_sym_executable_dir] = ACTIONS(155),
    [anon_sym_executable_directory] = ACTIONS(155),
    [anon_sym_home_dir] = ACTIONS(155),
    [anon_sym_home_directory] = ACTIONS(155),
    [anon_sym_set] = ACTIONS(155),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_alias] = ACTIONS(159),
    [aux_sym_import_token1] = ACTIONS(159),
    [aux_sym_mod_token1] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_assert] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_arch] = ACTIONS(159),
    [anon_sym_num_cpus] = ACTIONS(159),
    [anon_sym_os] = ACTIONS(159),
    [anon_sym_os_family] = ACTIONS(159),
    [anon_sym_shell] = ACTIONS(159),
    [anon_sym_env_var] = ACTIONS(159),
    [anon_sym_env_var_or_default] = ACTIONS(159),
    [anon_sym_env] = ACTIONS(159),
    [anon_sym_is_dependency] = ACTIONS(159),
    [anon_sym_invocation_dir] = ACTIONS(159),
    [anon_sym_invocation_dir_native] = ACTIONS(159),
    [anon_sym_invocation_directory] = ACTIONS(159),
    [anon_sym_invocation_directory_native] = ACTIONS(159),
    [anon_sym_justfile] = ACTIONS(159),
    [anon_sym_justfile_dir] = ACTIONS(159),
    [anon_sym_justfile_directory] = ACTIONS(159),
    [anon_sym_source_dir] = ACTIONS(159),
    [anon_sym_source_directory] = ACTIONS(159),
    [anon_sym_source_file] = ACTIONS(159),
    [anon_sym_just_executable] = ACTIONS(159),
    [anon_sym_just_pid] = ACTIONS(159),
    [anon_sym_append] = ACTIONS(159),
    [anon_sym_prepend] = ACTIONS(159),
    [anon_sym_encode_uri_component] = ACTIONS(159),
    [anon_sym_quote] = ACTIONS(159),
    [anon_sym_replace] = ACTIONS(159),
    [anon_sym_replace_regex] = ACTIONS(159),
    [anon_sym_trim] = ACTIONS(159),
    [anon_sym_trim_end] = ACTIONS(159),
    [anon_sym_trim_end_match] = ACTIONS(159),
    [anon_sym_trim_end_matches] = ACTIONS(159),
    [anon_sym_trim_start] = ACTIONS(159),
    [anon_sym_trim_start_match] = ACTIONS(159),
    [anon_sym_trim_start_matches] = ACTIONS(159),
    [anon_sym_capitalize] = ACTIONS(159),
    [anon_sym_kebabcase] = ACTIONS(159),
    [anon_sym_lowercamelcase] = ACTIONS(159),
    [anon_sym_lowercase] = ACTIONS(159),
    [anon_sym_shoutykebabcase] = ACTIONS(159),
    [anon_sym_shoutysnakecase] = ACTIONS(159),
    [anon_sym_snakecase] = ACTIONS(159),
    [anon_sym_titlecase] = ACTIONS(159),
    [anon_sym_uppercamelcase] = ACTIONS(159),
    [anon_sym_uppercase] = ACTIONS(159),
    [anon_sym_absolute_path] = ACTIONS(159),
    [anon_sym_canonicalize] = ACTIONS(159),
    [anon_sym_extension] = ACTIONS(159),
    [anon_sym_file_name] = ACTIONS(159),
    [anon_sym_file_stem] = ACTIONS(159),
    [anon_sym_parent_dir] = ACTIONS(159),
    [anon_sym_parent_directory] = ACTIONS(159),
    [anon_sym_without_extension] = ACTIONS(159),
    [anon_sym_clean] = ACTIONS(159),
    [anon_sym_join] = ACTIONS(159),
    [anon_sym_path_exists] = ACTIONS(159),
    [anon_sym_error] = ACTIONS(159),
    [anon_sym_blake3] = ACTIONS(159),
    [anon_sym_blake3_file] = ACTIONS(159),
    [anon_sym_sha256] = ACTIONS(159),
    [anon_sym_sha256_file] = ACTIONS(159),
    [anon_sym_uuid] = ACTIONS(159),
    [anon_sym_choose] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_datetime_utc] = ACTIONS(159),
    [anon_sym_semver_matches] = ACTIONS(159),
    [anon_sym_cache_dir] = ACTIONS(159),
    [anon_sym_cache_directory] = ACTIONS(159),
    [anon_sym_config_dir] = ACTIONS(159),
    [anon_sym_config_directory] = ACTIONS(159),
    [anon_sym_config_local_dir] = ACTIONS(159),
    [anon_sym_config_local_directory] = ACTIONS(159),
    [anon_sym_data_dir] = ACTIONS(159),
    [anon_sym_data_directory] = ACTIONS(159),
    [anon_sym_data_local_dir] = ACTIONS(159),
    [anon_sym_data_local_directory] = ACTIONS(159),
    [anon_sym_executable_dir] = ACTIONS(159),
    [anon_sym_executable_directory] = ACTIONS(159),
    [anon_sym_home_dir] = ACTIONS(159),
    [anon_sym_home_directory] = ACTIONS(159),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_alias] = ACTIONS(163),
    [aux_sym_import_token1] = ACTIONS(163),
    [aux_sym_mod_token1] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_assert] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_arch] = ACTIONS(163),
    [anon_sym_num_cpus] = ACTIONS(163),
    [anon_sym_os] = ACTIONS(163),
    [anon_sym_os_family] = ACTIONS(163),
    [anon_sym_shell] = ACTIONS(163),
    [anon_sym_env_var] = ACTIONS(163),
    [anon_sym_env_var_or_default] = ACTIONS(163),
    [anon_sym_env] = ACTIONS(163),
    [anon_sym_is_dependency] = ACTIONS(163),
    [anon_sym_invocation_dir] = ACTIONS(163),
    [anon_sym_invocation_dir_native] = ACTIONS(163),
    [anon_sym_invocation_directory] = ACTIONS(163),
    [anon_sym_invocation_directory_native] = ACTIONS(163),
    [anon_sym_justfile] = ACTIONS(163),
    [anon_sym_justfile_dir] = ACTIONS(163),
    [anon_sym_justfile_directory] = ACTIONS(163),
    [anon_sym_source_dir] = ACTIONS(163),
    [anon_sym_source_directory] = ACTIONS(163),
    [anon_sym_source_file] = ACTIONS(163),
    [anon_sym_just_executable] = ACTIONS(163),
    [anon_sym_just_pid] = ACTIONS(163),
    [anon_sym_append] = ACTIONS(163),
    [anon_sym_prepend] = ACTIONS(163),
    [anon_sym_encode_uri_component] = ACTIONS(163),
    [anon_sym_quote] = ACTIONS(163),
    [anon_sym_replace] = ACTIONS(163),
    [anon_sym_replace_regex] = ACTIONS(163),
    [anon_sym_trim] = ACTIONS(163),
    [anon_sym_trim_end] = ACTIONS(163),
    [anon_sym_trim_end_match] = ACTIONS(163),
    [anon_sym_trim_end_matches] = ACTIONS(163),
    [anon_sym_trim_start] = ACTIONS(163),
    [anon_sym_trim_start_match] = ACTIONS(163),
    [anon_sym_trim_start_matches] = ACTIONS(163),
    [anon_sym_capitalize] = ACTIONS(163),
    [anon_sym_kebabcase] = ACTIONS(163),
    [anon_sym_lowercamelcase] = ACTIONS(163),
    [anon_sym_lowercase] = ACTIONS(163),
    [anon_sym_shoutykebabcase] = ACTIONS(163),
    [anon_sym_shoutysnakecase] = ACTIONS(163),
    [anon_sym_snakecase] = ACTIONS(163),
    [anon_sym_titlecase] = ACTIONS(163),
    [anon_sym_uppercamelcase] = ACTIONS(163),
    [anon_sym_uppercase] = ACTIONS(163),
    [anon_sym_absolute_path] = ACTIONS(163),
    [anon_sym_canonicalize] = ACTIONS(163),
    [anon_sym_extension] = ACTIONS(163),
    [anon_sym_file_name] = ACTIONS(163),
    [anon_sym_file_stem] = ACTIONS(163),
    [anon_sym_parent_dir] = ACTIONS(163),
    [anon_sym_parent_directory] = ACTIONS(163),
    [anon_sym_without_extension] = ACTIONS(163),
    [anon_sym_clean] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_path_exists] = ACTIONS(163),
    [anon_sym_error] = ACTIONS(163),
    [anon_sym_blake3] = ACTIONS(163),
    [anon_sym_blake3_file] = ACTIONS(163),
    [anon_sym_sha256] = ACTIONS(163),
    [anon_sym_sha256_file] = ACTIONS(163),
    [anon_sym_uuid] = ACTIONS(163),
    [anon_sym_choose] = ACTIONS(163),
    [anon_sym_datetime] = ACTIONS(163),
    [anon_sym_datetime_utc] = ACTIONS(163),
    [anon_sym_semver_matches] = ACTIONS(163),
    [anon_sym_cache_dir] = ACTIONS(163),
    [anon_sym_cache_directory] = ACTIONS(163),
    [anon_sym_config_dir] = ACTIONS(163),
    [anon_sym_config_directory] = ACTIONS(163),
    [anon_sym_config_local_dir] = ACTIONS(163),
    [anon_sym_config_local_directory] = ACTIONS(163),
    [anon_sym_data_dir] = ACTIONS(163),
    [anon_sym_data_directory] = ACTIONS(163),
    [anon_sym_data_local_dir] = ACTIONS(163),
    [anon_sym_data_local_directory] = ACTIONS(163),
    [anon_sym_executable_dir] = ACTIONS(163),
    [anon_sym_executable_directory] = ACTIONS(163),
    [anon_sym_home_dir] = ACTIONS(163),
    [anon_sym_home_directory] = ACTIONS(163),
    [anon_sym_set] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_alias] = ACTIONS(167),
    [aux_sym_import_token1] = ACTIONS(167),
    [aux_sym_mod_token1] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_assert] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_arch] = ACTIONS(167),
    [anon_sym_num_cpus] = ACTIONS(167),
    [anon_sym_os] = ACTIONS(167),
    [anon_sym_os_family] = ACTIONS(167),
    [anon_sym_shell] = ACTIONS(167),
    [anon_sym_env_var] = ACTIONS(167),
    [anon_sym_env_var_or_default] = ACTIONS(167),
    [anon_sym_env] = ACTIONS(167),
    [anon_sym_is_dependency] = ACTIONS(167),
    [anon_sym_invocation_dir] = ACTIONS(167),
    [anon_sym_invocation_dir_native] = ACTIONS(167),
    [anon_sym_invocation_directory] = ACTIONS(167),
    [anon_sym_invocation_directory_native] = ACTIONS(167),
    [anon_sym_justfile] = ACTIONS(167),
    [anon_sym_justfile_dir] = ACTIONS(167),
    [anon_sym_justfile_directory] = ACTIONS(167),
    [anon_sym_source_dir] = ACTIONS(167),
    [anon_sym_source_directory] = ACTIONS(167),
    [anon_sym_source_file] = ACTIONS(167),
    [anon_sym_just_executable] = ACTIONS(167),
    [anon_sym_just_pid] = ACTIONS(167),
    [anon_sym_append] = ACTIONS(167),
    [anon_sym_prepend] = ACTIONS(167),
    [anon_sym_encode_uri_component] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_replace] = ACTIONS(167),
    [anon_sym_replace_regex] = ACTIONS(167),
    [anon_sym_trim] = ACTIONS(167),
    [anon_sym_trim_end] = ACTIONS(167),
    [anon_sym_trim_end_match] = ACTIONS(167),
    [anon_sym_trim_end_matches] = ACTIONS(167),
    [anon_sym_trim_start] = ACTIONS(167),
    [anon_sym_trim_start_match] = ACTIONS(167),
    [anon_sym_trim_start_matches] = ACTIONS(167),
    [anon_sym_capitalize] = ACTIONS(167),
    [anon_sym_kebabcase] = ACTIONS(167),
    [anon_sym_lowercamelcase] = ACTIONS(167),
    [anon_sym_lowercase] = ACTIONS(167),
    [anon_sym_shoutykebabcase] = ACTIONS(167),
    [anon_sym_shoutysnakecase] = ACTIONS(167),
    [anon_sym_snakecase] = ACTIONS(167),
    [anon_sym_titlecase] = ACTIONS(167),
    [anon_sym_uppercamelcase] = ACTIONS(167),
    [anon_sym_uppercase] = ACTIONS(167),
    [anon_sym_absolute_path] = ACTIONS(167),
    [anon_sym_canonicalize] = ACTIONS(167),
    [anon_sym_extension] = ACTIONS(167),
    [anon_sym_file_name] = ACTIONS(167),
    [anon_sym_file_stem] = ACTIONS(167),
    [anon_sym_parent_dir] = ACTIONS(167),
    [anon_sym_parent_directory] = ACTIONS(167),
    [anon_sym_without_extension] = ACTIONS(167),
    [anon_sym_clean] = ACTIONS(167),
    [anon_sym_join] = ACTIONS(167),
    [anon_sym_path_exists] = ACTIONS(167),
    [anon_sym_error] = ACTIONS(167),
    [anon_sym_blake3] = ACTIONS(167),
    [anon_sym_blake3_file] = ACTIONS(167),
    [anon_sym_sha256] = ACTIONS(167),
    [anon_sym_sha256_file] = ACTIONS(167),
    [anon_sym_uuid] = ACTIONS(167),
    [anon_sym_choose] = ACTIONS(167),
    [anon_sym_datetime] = ACTIONS(167),
    [anon_sym_datetime_utc] = ACTIONS(167),
    [anon_sym_semver_matches] = ACTIONS(167),
    [anon_sym_cache_dir] = ACTIONS(167),
    [anon_sym_cache_directory] = ACTIONS(167),
    [anon_sym_config_dir] = ACTIONS(167),
    [anon_sym_config_directory] = ACTIONS(167),
    [anon_sym_config_local_dir] = ACTIONS(167),
    [anon_sym_config_local_directory] = ACTIONS(167),
    [anon_sym_data_dir] = ACTIONS(167),
    [anon_sym_data_directory] = ACTIONS(167),
    [anon_sym_data_local_dir] = ACTIONS(167),
    [anon_sym_data_local_directory] = ACTIONS(167),
    [anon_sym_executable_dir] = ACTIONS(167),
    [anon_sym_executable_directory] = ACTIONS(167),
    [anon_sym_home_dir] = ACTIONS(167),
    [anon_sym_home_directory] = ACTIONS(167),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [anon_sym_alias] = ACTIONS(171),
    [aux_sym_import_token1] = ACTIONS(171),
    [aux_sym_mod_token1] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_assert] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_arch] = ACTIONS(171),
    [anon_sym_num_cpus] = ACTIONS(171),
    [anon_sym_os] = ACTIONS(171),
    [anon_sym_os_family] = ACTIONS(171),
    [anon_sym_shell] = ACTIONS(171),
    [anon_sym_env_var] = ACTIONS(171),
    [anon_sym_env_var_or_default] = ACTIONS(171),
    [anon_sym_env] = ACTIONS(171),
    [anon_sym_is_dependency] = ACTIONS(171),
    [anon_sym_invocation_dir] = ACTIONS(171),
    [anon_sym_invocation_dir_native] = ACTIONS(171),
    [anon_sym_invocation_directory] = ACTIONS(171),
    [anon_sym_invocation_directory_native] = ACTIONS(171),
    [anon_sym_justfile] = ACTIONS(171),
    [anon_sym_justfile_dir] = ACTIONS(171),
    [anon_sym_justfile_directory] = ACTIONS(171),
    [anon_sym_source_dir] = ACTIONS(171),
    [anon_sym_source_directory] = ACTIONS(171),
    [anon_sym_source_file] = ACTIONS(171),
    [anon_sym_just_executable] = ACTIONS(171),
    [anon_sym_just_pid] = ACTIONS(171),
    [anon_sym_append] = ACTIONS(171),
    [anon_sym_prepend] = ACTIONS(171),
    [anon_sym_encode_uri_component] = ACTIONS(171),
    [anon_sym_quote] = ACTIONS(171),
    [anon_sym_replace] = ACTIONS(171),
    [anon_sym_replace_regex] = ACTIONS(171),
    [anon_sym_trim] = ACTIONS(171),
    [anon_sym_trim_end] = ACTIONS(171),
    [anon_sym_trim_end_match] = ACTIONS(171),
    [anon_sym_trim_end_matches] = ACTIONS(171),
    [anon_sym_trim_start] = ACTIONS(171),
    [anon_sym_trim_start_match] = ACTIONS(171),
    [anon_sym_trim_start_matches] = ACTIONS(171),
    [anon_sym_capitalize] = ACTIONS(171),
    [anon_sym_kebabcase] = ACTIONS(171),
    [anon_sym_lowercamelcase] = ACTIONS(171),
    [anon_sym_lowercase] = ACTIONS(171),
    [anon_sym_shoutykebabcase] = ACTIONS(171),
    [anon_sym_shoutysnakecase] = ACTIONS(171),
    [anon_sym_snakecase] = ACTIONS(171),
    [anon_sym_titlecase] = ACTIONS(171),
    [anon_sym_uppercamelcase] = ACTIONS(171),
    [anon_sym_uppercase] = ACTIONS(171),
    [anon_sym_absolute_path] = ACTIONS(171),
    [anon_sym_canonicalize] = ACTIONS(171),
    [anon_sym_extension] = ACTIONS(171),
    [anon_sym_file_name] = ACTIONS(171),
    [anon_sym_file_stem] = ACTIONS(171),
    [anon_sym_parent_dir] = ACTIONS(171),
    [anon_sym_parent_directory] = ACTIONS(171),
    [anon_sym_without_extension] = ACTIONS(171),
    [anon_sym_clean] = ACTIONS(171),
    [anon_sym_join] = ACTIONS(171),
    [anon_sym_path_exists] = ACTIONS(171),
    [anon_sym_error] = ACTIONS(171),
    [anon_sym_blake3] = ACTIONS(171),
    [anon_sym_blake3_file] = ACTIONS(171),
    [anon_sym_sha256] = ACTIONS(171),
    [anon_sym_sha256_file] = ACTIONS(171),
    [anon_sym_uuid] = ACTIONS(171),
    [anon_sym_choose] = ACTIONS(171),
    [anon_sym_datetime] = ACTIONS(171),
    [anon_sym_datetime_utc] = ACTIONS(171),
    [anon_sym_semver_matches] = ACTIONS(171),
    [anon_sym_cache_dir] = ACTIONS(171),
    [anon_sym_cache_directory] = ACTIONS(171),
    [anon_sym_config_dir] = ACTIONS(171),
    [anon_sym_config_directory] = ACTIONS(171),
    [anon_sym_config_local_dir] = ACTIONS(171),
    [anon_sym_config_local_directory] = ACTIONS(171),
    [anon_sym_data_dir] = ACTIONS(171),
    [anon_sym_data_directory] = ACTIONS(171),
    [anon_sym_data_local_dir] = ACTIONS(171),
    [anon_sym_data_local_directory] = ACTIONS(171),
    [anon_sym_executable_dir] = ACTIONS(171),
    [anon_sym_executable_directory] = ACTIONS(171),
    [anon_sym_home_dir] = ACTIONS(171),
    [anon_sym_home_directory] = ACTIONS(171),
    [anon_sym_set] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_alias] = ACTIONS(175),
    [aux_sym_import_token1] = ACTIONS(175),
    [aux_sym_mod_token1] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_assert] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_arch] = ACTIONS(175),
    [anon_sym_num_cpus] = ACTIONS(175),
    [anon_sym_os] = ACTIONS(175),
    [anon_sym_os_family] = ACTIONS(175),
    [anon_sym_shell] = ACTIONS(175),
    [anon_sym_env_var] = ACTIONS(175),
    [anon_sym_env_var_or_default] = ACTIONS(175),
    [anon_sym_env] = ACTIONS(175),
    [anon_sym_is_dependency] = ACTIONS(175),
    [anon_sym_invocation_dir] = ACTIONS(175),
    [anon_sym_invocation_dir_native] = ACTIONS(175),
    [anon_sym_invocation_directory] = ACTIONS(175),
    [anon_sym_invocation_directory_native] = ACTIONS(175),
    [anon_sym_justfile] = ACTIONS(175),
    [anon_sym_justfile_dir] = ACTIONS(175),
    [anon_sym_justfile_directory] = ACTIONS(175),
    [anon_sym_source_dir] = ACTIONS(175),
    [anon_sym_source_directory] = ACTIONS(175),
    [anon_sym_source_file] = ACTIONS(175),
    [anon_sym_just_executable] = ACTIONS(175),
    [anon_sym_just_pid] = ACTIONS(175),
    [anon_sym_append] = ACTIONS(175),
    [anon_sym_prepend] = ACTIONS(175),
    [anon_sym_encode_uri_component] = ACTIONS(175),
    [anon_sym_quote] = ACTIONS(175),
    [anon_sym_replace] = ACTIONS(175),
    [anon_sym_replace_regex] = ACTIONS(175),
    [anon_sym_trim] = ACTIONS(175),
    [anon_sym_trim_end] = ACTIONS(175),
    [anon_sym_trim_end_match] = ACTIONS(175),
    [anon_sym_trim_end_matches] = ACTIONS(175),
    [anon_sym_trim_start] = ACTIONS(175),
    [anon_sym_trim_start_match] = ACTIONS(175),
    [anon_sym_trim_start_matches] = ACTIONS(175),
    [anon_sym_capitalize] = ACTIONS(175),
    [anon_sym_kebabcase] = ACTIONS(175),
    [anon_sym_lowercamelcase] = ACTIONS(175),
    [anon_sym_lowercase] = ACTIONS(175),
    [anon_sym_shoutykebabcase] = ACTIONS(175),
    [anon_sym_shoutysnakecase] = ACTIONS(175),
    [anon_sym_snakecase] = ACTIONS(175),
    [anon_sym_titlecase] = ACTIONS(175),
    [anon_sym_uppercamelcase] = ACTIONS(175),
    [anon_sym_uppercase] = ACTIONS(175),
    [anon_sym_absolute_path] = ACTIONS(175),
    [anon_sym_canonicalize] = ACTIONS(175),
    [anon_sym_extension] = ACTIONS(175),
    [anon_sym_file_name] = ACTIONS(175),
    [anon_sym_file_stem] = ACTIONS(175),
    [anon_sym_parent_dir] = ACTIONS(175),
    [anon_sym_parent_directory] = ACTIONS(175),
    [anon_sym_without_extension] = ACTIONS(175),
    [anon_sym_clean] = ACTIONS(175),
    [anon_sym_join] = ACTIONS(175),
    [anon_sym_path_exists] = ACTIONS(175),
    [anon_sym_error] = ACTIONS(175),
    [anon_sym_blake3] = ACTIONS(175),
    [anon_sym_blake3_file] = ACTIONS(175),
    [anon_sym_sha256] = ACTIONS(175),
    [anon_sym_sha256_file] = ACTIONS(175),
    [anon_sym_uuid] = ACTIONS(175),
    [anon_sym_choose] = ACTIONS(175),
    [anon_sym_datetime] = ACTIONS(175),
    [anon_sym_datetime_utc] = ACTIONS(175),
    [anon_sym_semver_matches] = ACTIONS(175),
    [anon_sym_cache_dir] = ACTIONS(175),
    [anon_sym_cache_directory] = ACTIONS(175),
    [anon_sym_config_dir] = ACTIONS(175),
    [anon_sym_config_directory] = ACTIONS(175),
    [anon_sym_config_local_dir] = ACTIONS(175),
    [anon_sym_config_local_directory] = ACTIONS(175),
    [anon_sym_data_dir] = ACTIONS(175),
    [anon_sym_data_directory] = ACTIONS(175),
    [anon_sym_data_local_dir] = ACTIONS(175),
    [anon_sym_data_local_directory] = ACTIONS(175),
    [anon_sym_executable_dir] = ACTIONS(175),
    [anon_sym_executable_directory] = ACTIONS(175),
    [anon_sym_home_dir] = ACTIONS(175),
    [anon_sym_home_directory] = ACTIONS(175),
    [anon_sym_set] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_alias] = ACTIONS(179),
    [aux_sym_import_token1] = ACTIONS(179),
    [aux_sym_mod_token1] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_assert] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_arch] = ACTIONS(179),
    [anon_sym_num_cpus] = ACTIONS(179),
    [anon_sym_os] = ACTIONS(179),
    [anon_sym_os_family] = ACTIONS(179),
    [anon_sym_shell] = ACTIONS(179),
    [anon_sym_env_var] = ACTIONS(179),
    [anon_sym_env_var_or_default] = ACTIONS(179),
    [anon_sym_env] = ACTIONS(179),
    [anon_sym_is_dependency] = ACTIONS(179),
    [anon_sym_invocation_dir] = ACTIONS(179),
    [anon_sym_invocation_dir_native] = ACTIONS(179),
    [anon_sym_invocation_directory] = ACTIONS(179),
    [anon_sym_invocation_directory_native] = ACTIONS(179),
    [anon_sym_justfile] = ACTIONS(179),
    [anon_sym_justfile_dir] = ACTIONS(179),
    [anon_sym_justfile_directory] = ACTIONS(179),
    [anon_sym_source_dir] = ACTIONS(179),
    [anon_sym_source_directory] = ACTIONS(179),
    [anon_sym_source_file] = ACTIONS(179),
    [anon_sym_just_executable] = ACTIONS(179),
    [anon_sym_just_pid] = ACTIONS(179),
    [anon_sym_append] = ACTIONS(179),
    [anon_sym_prepend] = ACTIONS(179),
    [anon_sym_encode_uri_component] = ACTIONS(179),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_replace] = ACTIONS(179),
    [anon_sym_replace_regex] = ACTIONS(179),
    [anon_sym_trim] = ACTIONS(179),
    [anon_sym_trim_end] = ACTIONS(179),
    [anon_sym_trim_end_match] = ACTIONS(179),
    [anon_sym_trim_end_matches] = ACTIONS(179),
    [anon_sym_trim_start] = ACTIONS(179),
    [anon_sym_trim_start_match] = ACTIONS(179),
    [anon_sym_trim_start_matches] = ACTIONS(179),
    [anon_sym_capitalize] = ACTIONS(179),
    [anon_sym_kebabcase] = ACTIONS(179),
    [anon_sym_lowercamelcase] = ACTIONS(179),
    [anon_sym_lowercase] = ACTIONS(179),
    [anon_sym_shoutykebabcase] = ACTIONS(179),
    [anon_sym_shoutysnakecase] = ACTIONS(179),
    [anon_sym_snakecase] = ACTIONS(179),
    [anon_sym_titlecase] = ACTIONS(179),
    [anon_sym_uppercamelcase] = ACTIONS(179),
    [anon_sym_uppercase] = ACTIONS(179),
    [anon_sym_absolute_path] = ACTIONS(179),
    [anon_sym_canonicalize] = ACTIONS(179),
    [anon_sym_extension] = ACTIONS(179),
    [anon_sym_file_name] = ACTIONS(179),
    [anon_sym_file_stem] = ACTIONS(179),
    [anon_sym_parent_dir] = ACTIONS(179),
    [anon_sym_parent_directory] = ACTIONS(179),
    [anon_sym_without_extension] = ACTIONS(179),
    [anon_sym_clean] = ACTIONS(179),
    [anon_sym_join] = ACTIONS(179),
    [anon_sym_path_exists] = ACTIONS(179),
    [anon_sym_error] = ACTIONS(179),
    [anon_sym_blake3] = ACTIONS(179),
    [anon_sym_blake3_file] = ACTIONS(179),
    [anon_sym_sha256] = ACTIONS(179),
    [anon_sym_sha256_file] = ACTIONS(179),
    [anon_sym_uuid] = ACTIONS(179),
    [anon_sym_choose] = ACTIONS(179),
    [anon_sym_datetime] = ACTIONS(179),
    [anon_sym_datetime_utc] = ACTIONS(179),
    [anon_sym_semver_matches] = ACTIONS(179),
    [anon_sym_cache_dir] = ACTIONS(179),
    [anon_sym_cache_directory] = ACTIONS(179),
    [anon_sym_config_dir] = ACTIONS(179),
    [anon_sym_config_directory] = ACTIONS(179),
    [anon_sym_config_local_dir] = ACTIONS(179),
    [anon_sym_config_local_directory] = ACTIONS(179),
    [anon_sym_data_dir] = ACTIONS(179),
    [anon_sym_data_directory] = ACTIONS(179),
    [anon_sym_data_local_dir] = ACTIONS(179),
    [anon_sym_data_local_directory] = ACTIONS(179),
    [anon_sym_executable_dir] = ACTIONS(179),
    [anon_sym_executable_directory] = ACTIONS(179),
    [anon_sym_home_dir] = ACTIONS(179),
    [anon_sym_home_directory] = ACTIONS(179),
    [anon_sym_set] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_alias] = ACTIONS(183),
    [aux_sym_import_token1] = ACTIONS(183),
    [aux_sym_mod_token1] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_assert] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_arch] = ACTIONS(183),
    [anon_sym_num_cpus] = ACTIONS(183),
    [anon_sym_os] = ACTIONS(183),
    [anon_sym_os_family] = ACTIONS(183),
    [anon_sym_shell] = ACTIONS(183),
    [anon_sym_env_var] = ACTIONS(183),
    [anon_sym_env_var_or_default] = ACTIONS(183),
    [anon_sym_env] = ACTIONS(183),
    [anon_sym_is_dependency] = ACTIONS(183),
    [anon_sym_invocation_dir] = ACTIONS(183),
    [anon_sym_invocation_dir_native] = ACTIONS(183),
    [anon_sym_invocation_directory] = ACTIONS(183),
    [anon_sym_invocation_directory_native] = ACTIONS(183),
    [anon_sym_justfile] = ACTIONS(183),
    [anon_sym_justfile_dir] = ACTIONS(183),
    [anon_sym_justfile_directory] = ACTIONS(183),
    [anon_sym_source_dir] = ACTIONS(183),
    [anon_sym_source_directory] = ACTIONS(183),
    [anon_sym_source_file] = ACTIONS(183),
    [anon_sym_just_executable] = ACTIONS(183),
    [anon_sym_just_pid] = ACTIONS(183),
    [anon_sym_append] = ACTIONS(183),
    [anon_sym_prepend] = ACTIONS(183),
    [anon_sym_encode_uri_component] = ACTIONS(183),
    [anon_sym_quote] = ACTIONS(183),
    [anon_sym_replace] = ACTIONS(183),
    [anon_sym_replace_regex] = ACTIONS(183),
    [anon_sym_trim] = ACTIONS(183),
    [anon_sym_trim_end] = ACTIONS(183),
    [anon_sym_trim_end_match] = ACTIONS(183),
    [anon_sym_trim_end_matches] = ACTIONS(183),
    [anon_sym_trim_start] = ACTIONS(183),
    [anon_sym_trim_start_match] = ACTIONS(183),
    [anon_sym_trim_start_matches] = ACTIONS(183),
    [anon_sym_capitalize] = ACTIONS(183),
    [anon_sym_kebabcase] = ACTIONS(183),
    [anon_sym_lowercamelcase] = ACTIONS(183),
    [anon_sym_lowercase] = ACTIONS(183),
    [anon_sym_shoutykebabcase] = ACTIONS(183),
    [anon_sym_shoutysnakecase] = ACTIONS(183),
    [anon_sym_snakecase] = ACTIONS(183),
    [anon_sym_titlecase] = ACTIONS(183),
    [anon_sym_uppercamelcase] = ACTIONS(183),
    [anon_sym_uppercase] = ACTIONS(183),
    [anon_sym_absolute_path] = ACTIONS(183),
    [anon_sym_canonicalize] = ACTIONS(183),
    [anon_sym_extension] = ACTIONS(183),
    [anon_sym_file_name] = ACTIONS(183),
    [anon_sym_file_stem] = ACTIONS(183),
    [anon_sym_parent_dir] = ACTIONS(183),
    [anon_sym_parent_directory] = ACTIONS(183),
    [anon_sym_without_extension] = ACTIONS(183),
    [anon_sym_clean] = ACTIONS(183),
    [anon_sym_join] = ACTIONS(183),
    [anon_sym_path_exists] = ACTIONS(183),
    [anon_sym_error] = ACTIONS(183),
    [anon_sym_blake3] = ACTIONS(183),
    [anon_sym_blake3_file] = ACTIONS(183),
    [anon_sym_sha256] = ACTIONS(183),
    [anon_sym_sha256_file] = ACTIONS(183),
    [anon_sym_uuid] = ACTIONS(183),
    [anon_sym_choose] = ACTIONS(183),
    [anon_sym_datetime] = ACTIONS(183),
    [anon_sym_datetime_utc] = ACTIONS(183),
    [anon_sym_semver_matches] = ACTIONS(183),
    [anon_sym_cache_dir] = ACTIONS(183),
    [anon_sym_cache_directory] = ACTIONS(183),
    [anon_sym_config_dir] = ACTIONS(183),
    [anon_sym_config_directory] = ACTIONS(183),
    [anon_sym_config_local_dir] = ACTIONS(183),
    [anon_sym_config_local_directory] = ACTIONS(183),
    [anon_sym_data_dir] = ACTIONS(183),
    [anon_sym_data_directory] = ACTIONS(183),
    [anon_sym_data_local_dir] = ACTIONS(183),
    [anon_sym_data_local_directory] = ACTIONS(183),
    [anon_sym_executable_dir] = ACTIONS(183),
    [anon_sym_executable_directory] = ACTIONS(183),
    [anon_sym_home_dir] = ACTIONS(183),
    [anon_sym_home_directory] = ACTIONS(183),
    [anon_sym_set] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_alias] = ACTIONS(187),
    [aux_sym_import_token1] = ACTIONS(187),
    [aux_sym_mod_token1] = ACTIONS(187),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_assert] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_arch] = ACTIONS(187),
    [anon_sym_num_cpus] = ACTIONS(187),
    [anon_sym_os] = ACTIONS(187),
    [anon_sym_os_family] = ACTIONS(187),
    [anon_sym_shell] = ACTIONS(187),
    [anon_sym_env_var] = ACTIONS(187),
    [anon_sym_env_var_or_default] = ACTIONS(187),
    [anon_sym_env] = ACTIONS(187),
    [anon_sym_is_dependency] = ACTIONS(187),
    [anon_sym_invocation_dir] = ACTIONS(187),
    [anon_sym_invocation_dir_native] = ACTIONS(187),
    [anon_sym_invocation_directory] = ACTIONS(187),
    [anon_sym_invocation_directory_native] = ACTIONS(187),
    [anon_sym_justfile] = ACTIONS(187),
    [anon_sym_justfile_dir] = ACTIONS(187),
    [anon_sym_justfile_directory] = ACTIONS(187),
    [anon_sym_source_dir] = ACTIONS(187),
    [anon_sym_source_directory] = ACTIONS(187),
    [anon_sym_source_file] = ACTIONS(187),
    [anon_sym_just_executable] = ACTIONS(187),
    [anon_sym_just_pid] = ACTIONS(187),
    [anon_sym_append] = ACTIONS(187),
    [anon_sym_prepend] = ACTIONS(187),
    [anon_sym_encode_uri_component] = ACTIONS(187),
    [anon_sym_quote] = ACTIONS(187),
    [anon_sym_replace] = ACTIONS(187),
    [anon_sym_replace_regex] = ACTIONS(187),
    [anon_sym_trim] = ACTIONS(187),
    [anon_sym_trim_end] = ACTIONS(187),
    [anon_sym_trim_end_match] = ACTIONS(187),
    [anon_sym_trim_end_matches] = ACTIONS(187),
    [anon_sym_trim_start] = ACTIONS(187),
    [anon_sym_trim_start_match] = ACTIONS(187),
    [anon_sym_trim_start_matches] = ACTIONS(187),
    [anon_sym_capitalize] = ACTIONS(187),
    [anon_sym_kebabcase] = ACTIONS(187),
    [anon_sym_lowercamelcase] = ACTIONS(187),
    [anon_sym_lowercase] = ACTIONS(187),
    [anon_sym_shoutykebabcase] = ACTIONS(187),
    [anon_sym_shoutysnakecase] = ACTIONS(187),
    [anon_sym_snakecase] = ACTIONS(187),
    [anon_sym_titlecase] = ACTIONS(187),
    [anon_sym_uppercamelcase] = ACTIONS(187),
    [anon_sym_uppercase] = ACTIONS(187),
    [anon_sym_absolute_path] = ACTIONS(187),
    [anon_sym_canonicalize] = ACTIONS(187),
    [anon_sym_extension] = ACTIONS(187),
    [anon_sym_file_name] = ACTIONS(187),
    [anon_sym_file_stem] = ACTIONS(187),
    [anon_sym_parent_dir] = ACTIONS(187),
    [anon_sym_parent_directory] = ACTIONS(187),
    [anon_sym_without_extension] = ACTIONS(187),
    [anon_sym_clean] = ACTIONS(187),
    [anon_sym_join] = ACTIONS(187),
    [anon_sym_path_exists] = ACTIONS(187),
    [anon_sym_error] = ACTIONS(187),
    [anon_sym_blake3] = ACTIONS(187),
    [anon_sym_blake3_file] = ACTIONS(187),
    [anon_sym_sha256] = ACTIONS(187),
    [anon_sym_sha256_file] = ACTIONS(187),
    [anon_sym_uuid] = ACTIONS(187),
    [anon_sym_choose] = ACTIONS(187),
    [anon_sym_datetime] = ACTIONS(187),
    [anon_sym_datetime_utc] = ACTIONS(187),
    [anon_sym_semver_matches] = ACTIONS(187),
    [anon_sym_cache_dir] = ACTIONS(187),
    [anon_sym_cache_directory] = ACTIONS(187),
    [anon_sym_config_dir] = ACTIONS(187),
    [anon_sym_config_directory] = ACTIONS(187),
    [anon_sym_config_local_dir] = ACTIONS(187),
    [anon_sym_config_local_directory] = ACTIONS(187),
    [anon_sym_data_dir] = ACTIONS(187),
    [anon_sym_data_directory] = ACTIONS(187),
    [anon_sym_data_local_dir] = ACTIONS(187),
    [anon_sym_data_local_directory] = ACTIONS(187),
    [anon_sym_executable_dir] = ACTIONS(187),
    [anon_sym_executable_directory] = ACTIONS(187),
    [anon_sym_home_dir] = ACTIONS(187),
    [anon_sym_home_directory] = ACTIONS(187),
    [anon_sym_set] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_alias] = ACTIONS(191),
    [aux_sym_import_token1] = ACTIONS(191),
    [aux_sym_mod_token1] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_assert] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_arch] = ACTIONS(191),
    [anon_sym_num_cpus] = ACTIONS(191),
    [anon_sym_os] = ACTIONS(191),
    [anon_sym_os_family] = ACTIONS(191),
    [anon_sym_shell] = ACTIONS(191),
    [anon_sym_env_var] = ACTIONS(191),
    [anon_sym_env_var_or_default] = ACTIONS(191),
    [anon_sym_env] = ACTIONS(191),
    [anon_sym_is_dependency] = ACTIONS(191),
    [anon_sym_invocation_dir] = ACTIONS(191),
    [anon_sym_invocation_dir_native] = ACTIONS(191),
    [anon_sym_invocation_directory] = ACTIONS(191),
    [anon_sym_invocation_directory_native] = ACTIONS(191),
    [anon_sym_justfile] = ACTIONS(191),
    [anon_sym_justfile_dir] = ACTIONS(191),
    [anon_sym_justfile_directory] = ACTIONS(191),
    [anon_sym_source_dir] = ACTIONS(191),
    [anon_sym_source_directory] = ACTIONS(191),
    [anon_sym_source_file] = ACTIONS(191),
    [anon_sym_just_executable] = ACTIONS(191),
    [anon_sym_just_pid] = ACTIONS(191),
    [anon_sym_append] = ACTIONS(191),
    [anon_sym_prepend] = ACTIONS(191),
    [anon_sym_encode_uri_component] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_replace] = ACTIONS(191),
    [anon_sym_replace_regex] = ACTIONS(191),
    [anon_sym_trim] = ACTIONS(191),
    [anon_sym_trim_end] = ACTIONS(191),
    [anon_sym_trim_end_match] = ACTIONS(191),
    [anon_sym_trim_end_matches] = ACTIONS(191),
    [anon_sym_trim_start] = ACTIONS(191),
    [anon_sym_trim_start_match] = ACTIONS(191),
    [anon_sym_trim_start_matches] = ACTIONS(191),
    [anon_sym_capitalize] = ACTIONS(191),
    [anon_sym_kebabcase] = ACTIONS(191),
    [anon_sym_lowercamelcase] = ACTIONS(191),
    [anon_sym_lowercase] = ACTIONS(191),
    [anon_sym_shoutykebabcase] = ACTIONS(191),
    [anon_sym_shoutysnakecase] = ACTIONS(191),
    [anon_sym_snakecase] = ACTIONS(191),
    [anon_sym_titlecase] = ACTIONS(191),
    [anon_sym_uppercamelcase] = ACTIONS(191),
    [anon_sym_uppercase] = ACTIONS(191),
    [anon_sym_absolute_path] = ACTIONS(191),
    [anon_sym_canonicalize] = ACTIONS(191),
    [anon_sym_extension] = ACTIONS(191),
    [anon_sym_file_name] = ACTIONS(191),
    [anon_sym_file_stem] = ACTIONS(191),
    [anon_sym_parent_dir] = ACTIONS(191),
    [anon_sym_parent_directory] = ACTIONS(191),
    [anon_sym_without_extension] = ACTIONS(191),
    [anon_sym_clean] = ACTIONS(191),
    [anon_sym_join] = ACTIONS(191),
    [anon_sym_path_exists] = ACTIONS(191),
    [anon_sym_error] = ACTIONS(191),
    [anon_sym_blake3] = ACTIONS(191),
    [anon_sym_blake3_file] = ACTIONS(191),
    [anon_sym_sha256] = ACTIONS(191),
    [anon_sym_sha256_file] = ACTIONS(191),
    [anon_sym_uuid] = ACTIONS(191),
    [anon_sym_choose] = ACTIONS(191),
    [anon_sym_datetime] = ACTIONS(191),
    [anon_sym_datetime_utc] = ACTIONS(191),
    [anon_sym_semver_matches] = ACTIONS(191),
    [anon_sym_cache_dir] = ACTIONS(191),
    [anon_sym_cache_directory] = ACTIONS(191),
    [anon_sym_config_dir] = ACTIONS(191),
    [anon_sym_config_directory] = ACTIONS(191),
    [anon_sym_config_local_dir] = ACTIONS(191),
    [anon_sym_config_local_directory] = ACTIONS(191),
    [anon_sym_data_dir] = ACTIONS(191),
    [anon_sym_data_directory] = ACTIONS(191),
    [anon_sym_data_local_dir] = ACTIONS(191),
    [anon_sym_data_local_directory] = ACTIONS(191),
    [anon_sym_executable_dir] = ACTIONS(191),
    [anon_sym_executable_directory] = ACTIONS(191),
    [anon_sym_home_dir] = ACTIONS(191),
    [anon_sym_home_directory] = ACTIONS(191),
    [anon_sym_set] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_alias] = ACTIONS(197),
    [aux_sym_import_token1] = ACTIONS(197),
    [aux_sym_mod_token1] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_assert] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_arch] = ACTIONS(197),
    [anon_sym_num_cpus] = ACTIONS(197),
    [anon_sym_os] = ACTIONS(197),
    [anon_sym_os_family] = ACTIONS(197),
    [anon_sym_shell] = ACTIONS(197),
    [anon_sym_env_var] = ACTIONS(197),
    [anon_sym_env_var_or_default] = ACTIONS(197),
    [anon_sym_env] = ACTIONS(197),
    [anon_sym_is_dependency] = ACTIONS(197),
    [anon_sym_invocation_dir] = ACTIONS(197),
    [anon_sym_invocation_dir_native] = ACTIONS(197),
    [anon_sym_invocation_directory] = ACTIONS(197),
    [anon_sym_invocation_directory_native] = ACTIONS(197),
    [anon_sym_justfile] = ACTIONS(197),
    [anon_sym_justfile_dir] = ACTIONS(197),
    [anon_sym_justfile_directory] = ACTIONS(197),
    [anon_sym_source_dir] = ACTIONS(197),
    [anon_sym_source_directory] = ACTIONS(197),
    [anon_sym_source_file] = ACTIONS(197),
    [anon_sym_just_executable] = ACTIONS(197),
    [anon_sym_just_pid] = ACTIONS(197),
    [anon_sym_append] = ACTIONS(197),
    [anon_sym_prepend] = ACTIONS(197),
    [anon_sym_encode_uri_component] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_replace] = ACTIONS(197),
    [anon_sym_replace_regex] = ACTIONS(197),
    [anon_sym_trim] = ACTIONS(197),
    [anon_sym_trim_end] = ACTIONS(197),
    [anon_sym_trim_end_match] = ACTIONS(197),
    [anon_sym_trim_end_matches] = ACTIONS(197),
    [anon_sym_trim_start] = ACTIONS(197),
    [anon_sym_trim_start_match] = ACTIONS(197),
    [anon_sym_trim_start_matches] = ACTIONS(197),
    [anon_sym_capitalize] = ACTIONS(197),
    [anon_sym_kebabcase] = ACTIONS(197),
    [anon_sym_lowercamelcase] = ACTIONS(197),
    [anon_sym_lowercase] = ACTIONS(197),
    [anon_sym_shoutykebabcase] = ACTIONS(197),
    [anon_sym_shoutysnakecase] = ACTIONS(197),
    [anon_sym_snakecase] = ACTIONS(197),
    [anon_sym_titlecase] = ACTIONS(197),
    [anon_sym_uppercamelcase] = ACTIONS(197),
    [anon_sym_uppercase] = ACTIONS(197),
    [anon_sym_absolute_path] = ACTIONS(197),
    [anon_sym_canonicalize] = ACTIONS(197),
    [anon_sym_extension] = ACTIONS(197),
    [anon_sym_file_name] = ACTIONS(197),
    [anon_sym_file_stem] = ACTIONS(197),
    [anon_sym_parent_dir] = ACTIONS(197),
    [anon_sym_parent_directory] = ACTIONS(197),
    [anon_sym_without_extension] = ACTIONS(197),
    [anon_sym_clean] = ACTIONS(197),
    [anon_sym_join] = ACTIONS(197),
    [anon_sym_path_exists] = ACTIONS(197),
    [anon_sym_error] = ACTIONS(197),
    [anon_sym_blake3] = ACTIONS(197),
    [anon_sym_blake3_file] = ACTIONS(197),
    [anon_sym_sha256] = ACTIONS(197),
    [anon_sym_sha256_file] = ACTIONS(197),
    [anon_sym_uuid] = ACTIONS(197),
    [anon_sym_choose] = ACTIONS(197),
    [anon_sym_datetime] = ACTIONS(197),
    [anon_sym_datetime_utc] = ACTIONS(197),
    [anon_sym_semver_matches] = ACTIONS(197),
    [anon_sym_cache_dir] = ACTIONS(197),
    [anon_sym_cache_directory] = ACTIONS(197),
    [anon_sym_config_dir] = ACTIONS(197),
    [anon_sym_config_directory] = ACTIONS(197),
    [anon_sym_config_local_dir] = ACTIONS(197),
    [anon_sym_config_local_directory] = ACTIONS(197),
    [anon_sym_data_dir] = ACTIONS(197),
    [anon_sym_data_directory] = ACTIONS(197),
    [anon_sym_data_local_dir] = ACTIONS(197),
    [anon_sym_data_local_directory] = ACTIONS(197),
    [anon_sym_executable_dir] = ACTIONS(197),
    [anon_sym_executable_directory] = ACTIONS(197),
    [anon_sym_home_dir] = ACTIONS(197),
    [anon_sym_home_directory] = ACTIONS(197),
    [anon_sym_set] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_alias] = ACTIONS(201),
    [aux_sym_import_token1] = ACTIONS(201),
    [aux_sym_mod_token1] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_assert] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_BANG_EQ] = ACTIONS(199),
    [anon_sym_arch] = ACTIONS(201),
    [anon_sym_num_cpus] = ACTIONS(201),
    [anon_sym_os] = ACTIONS(201),
    [anon_sym_os_family] = ACTIONS(201),
    [anon_sym_shell] = ACTIONS(201),
    [anon_sym_env_var] = ACTIONS(201),
    [anon_sym_env_var_or_default] = ACTIONS(201),
    [anon_sym_env] = ACTIONS(201),
    [anon_sym_is_dependency] = ACTIONS(201),
    [anon_sym_invocation_dir] = ACTIONS(201),
    [anon_sym_invocation_dir_native] = ACTIONS(201),
    [anon_sym_invocation_directory] = ACTIONS(201),
    [anon_sym_invocation_directory_native] = ACTIONS(201),
    [anon_sym_justfile] = ACTIONS(201),
    [anon_sym_justfile_dir] = ACTIONS(201),
    [anon_sym_justfile_directory] = ACTIONS(201),
    [anon_sym_source_dir] = ACTIONS(201),
    [anon_sym_source_directory] = ACTIONS(201),
    [anon_sym_source_file] = ACTIONS(201),
    [anon_sym_just_executable] = ACTIONS(201),
    [anon_sym_just_pid] = ACTIONS(201),
    [anon_sym_append] = ACTIONS(201),
    [anon_sym_prepend] = ACTIONS(201),
    [anon_sym_encode_uri_component] = ACTIONS(201),
    [anon_sym_quote] = ACTIONS(201),
    [anon_sym_replace] = ACTIONS(201),
    [anon_sym_replace_regex] = ACTIONS(201),
    [anon_sym_trim] = ACTIONS(201),
    [anon_sym_trim_end] = ACTIONS(201),
    [anon_sym_trim_end_match] = ACTIONS(201),
    [anon_sym_trim_end_matches] = ACTIONS(201),
    [anon_sym_trim_start] = ACTIONS(201),
    [anon_sym_trim_start_match] = ACTIONS(201),
    [anon_sym_trim_start_matches] = ACTIONS(201),
    [anon_sym_capitalize] = ACTIONS(201),
    [anon_sym_kebabcase] = ACTIONS(201),
    [anon_sym_lowercamelcase] = ACTIONS(201),
    [anon_sym_lowercase] = ACTIONS(201),
    [anon_sym_shoutykebabcase] = ACTIONS(201),
    [anon_sym_shoutysnakecase] = ACTIONS(201),
    [anon_sym_snakecase] = ACTIONS(201),
    [anon_sym_titlecase] = ACTIONS(201),
    [anon_sym_uppercamelcase] = ACTIONS(201),
    [anon_sym_uppercase] = ACTIONS(201),
    [anon_sym_absolute_path] = ACTIONS(201),
    [anon_sym_canonicalize] = ACTIONS(201),
    [anon_sym_extension] = ACTIONS(201),
    [anon_sym_file_name] = ACTIONS(201),
    [anon_sym_file_stem] = ACTIONS(201),
    [anon_sym_parent_dir] = ACTIONS(201),
    [anon_sym_parent_directory] = ACTIONS(201),
    [anon_sym_without_extension] = ACTIONS(201),
    [anon_sym_clean] = ACTIONS(201),
    [anon_sym_join] = ACTIONS(201),
    [anon_sym_path_exists] = ACTIONS(201),
    [anon_sym_error] = ACTIONS(201),
    [anon_sym_blake3] = ACTIONS(201),
    [anon_sym_blake3_file] = ACTIONS(201),
    [anon_sym_sha256] = ACTIONS(201),
    [anon_sym_sha256_file] = ACTIONS(201),
    [anon_sym_uuid] = ACTIONS(201),
    [anon_sym_choose] = ACTIONS(201),
    [anon_sym_datetime] = ACTIONS(201),
    [anon_sym_datetime_utc] = ACTIONS(201),
    [anon_sym_semver_matches] = ACTIONS(201),
    [anon_sym_cache_dir] = ACTIONS(201),
    [anon_sym_cache_directory] = ACTIONS(201),
    [anon_sym_config_dir] = ACTIONS(201),
    [anon_sym_config_directory] = ACTIONS(201),
    [anon_sym_config_local_dir] = ACTIONS(201),
    [anon_sym_config_local_directory] = ACTIONS(201),
    [anon_sym_data_dir] = ACTIONS(201),
    [anon_sym_data_directory] = ACTIONS(201),
    [anon_sym_data_local_dir] = ACTIONS(201),
    [anon_sym_data_local_directory] = ACTIONS(201),
    [anon_sym_executable_dir] = ACTIONS(201),
    [anon_sym_executable_directory] = ACTIONS(201),
    [anon_sym_home_dir] = ACTIONS(201),
    [anon_sym_home_directory] = ACTIONS(201),
    [anon_sym_set] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_alias] = ACTIONS(205),
    [aux_sym_import_token1] = ACTIONS(205),
    [aux_sym_mod_token1] = ACTIONS(205),
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_assert] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_arch] = ACTIONS(205),
    [anon_sym_num_cpus] = ACTIONS(205),
    [anon_sym_os] = ACTIONS(205),
    [anon_sym_os_family] = ACTIONS(205),
    [anon_sym_shell] = ACTIONS(205),
    [anon_sym_env_var] = ACTIONS(205),
    [anon_sym_env_var_or_default] = ACTIONS(205),
    [anon_sym_env] = ACTIONS(205),
    [anon_sym_is_dependency] = ACTIONS(205),
    [anon_sym_invocation_dir] = ACTIONS(205),
    [anon_sym_invocation_dir_native] = ACTIONS(205),
    [anon_sym_invocation_directory] = ACTIONS(205),
    [anon_sym_invocation_directory_native] = ACTIONS(205),
    [anon_sym_justfile] = ACTIONS(205),
    [anon_sym_justfile_dir] = ACTIONS(205),
    [anon_sym_justfile_directory] = ACTIONS(205),
    [anon_sym_source_dir] = ACTIONS(205),
    [anon_sym_source_directory] = ACTIONS(205),
    [anon_sym_source_file] = ACTIONS(205),
    [anon_sym_just_executable] = ACTIONS(205),
    [anon_sym_just_pid] = ACTIONS(205),
    [anon_sym_append] = ACTIONS(205),
    [anon_sym_prepend] = ACTIONS(205),
    [anon_sym_encode_uri_component] = ACTIONS(205),
    [anon_sym_quote] = ACTIONS(205),
    [anon_sym_replace] = ACTIONS(205),
    [anon_sym_replace_regex] = ACTIONS(205),
    [anon_sym_trim] = ACTIONS(205),
    [anon_sym_trim_end] = ACTIONS(205),
    [anon_sym_trim_end_match] = ACTIONS(205),
    [anon_sym_trim_end_matches] = ACTIONS(205),
    [anon_sym_trim_start] = ACTIONS(205),
    [anon_sym_trim_start_match] = ACTIONS(205),
    [anon_sym_trim_start_matches] = ACTIONS(205),
    [anon_sym_capitalize] = ACTIONS(205),
    [anon_sym_kebabcase] = ACTIONS(205),
    [anon_sym_lowercamelcase] = ACTIONS(205),
    [anon_sym_lowercase] = ACTIONS(205),
    [anon_sym_shoutykebabcase] = ACTIONS(205),
    [anon_sym_shoutysnakecase] = ACTIONS(205),
    [anon_sym_snakecase] = ACTIONS(205),
    [anon_sym_titlecase] = ACTIONS(205),
    [anon_sym_uppercamelcase] = ACTIONS(205),
    [anon_sym_uppercase] = ACTIONS(205),
    [anon_sym_absolute_path] = ACTIONS(205),
    [anon_sym_canonicalize] = ACTIONS(205),
    [anon_sym_extension] = ACTIONS(205),
    [anon_sym_file_name] = ACTIONS(205),
    [anon_sym_file_stem] = ACTIONS(205),
    [anon_sym_parent_dir] = ACTIONS(205),
    [anon_sym_parent_directory] = ACTIONS(205),
    [anon_sym_without_extension] = ACTIONS(205),
    [anon_sym_clean] = ACTIONS(205),
    [anon_sym_join] = ACTIONS(205),
    [anon_sym_path_exists] = ACTIONS(205),
    [anon_sym_error] = ACTIONS(205),
    [anon_sym_blake3] = ACTIONS(205),
    [anon_sym_blake3_file] = ACTIONS(205),
    [anon_sym_sha256] = ACTIONS(205),
    [anon_sym_sha256_file] = ACTIONS(205),
    [anon_sym_uuid] = ACTIONS(205),
    [anon_sym_choose] = ACTIONS(205),
    [anon_sym_datetime] = ACTIONS(205),
    [anon_sym_datetime_utc] = ACTIONS(205),
    [anon_sym_semver_matches] = ACTIONS(205),
    [anon_sym_cache_dir] = ACTIONS(205),
    [anon_sym_cache_directory] = ACTIONS(205),
    [anon_sym_config_dir] = ACTIONS(205),
    [anon_sym_config_directory] = ACTIONS(205),
    [anon_sym_config_local_dir] = ACTIONS(205),
    [anon_sym_config_local_directory] = ACTIONS(205),
    [anon_sym_data_dir] = ACTIONS(205),
    [anon_sym_data_directory] = ACTIONS(205),
    [anon_sym_data_local_dir] = ACTIONS(205),
    [anon_sym_data_local_directory] = ACTIONS(205),
    [anon_sym_executable_dir] = ACTIONS(205),
    [anon_sym_executable_directory] = ACTIONS(205),
    [anon_sym_home_dir] = ACTIONS(205),
    [anon_sym_home_directory] = ACTIONS(205),
    [anon_sym_set] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_alias] = ACTIONS(191),
    [aux_sym_import_token1] = ACTIONS(191),
    [aux_sym_mod_token1] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_assert] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_arch] = ACTIONS(191),
    [anon_sym_num_cpus] = ACTIONS(191),
    [anon_sym_os] = ACTIONS(191),
    [anon_sym_os_family] = ACTIONS(191),
    [anon_sym_shell] = ACTIONS(191),
    [anon_sym_env_var] = ACTIONS(191),
    [anon_sym_env_var_or_default] = ACTIONS(191),
    [anon_sym_env] = ACTIONS(191),
    [anon_sym_is_dependency] = ACTIONS(191),
    [anon_sym_invocation_dir] = ACTIONS(191),
    [anon_sym_invocation_dir_native] = ACTIONS(191),
    [anon_sym_invocation_directory] = ACTIONS(191),
    [anon_sym_invocation_directory_native] = ACTIONS(191),
    [anon_sym_justfile] = ACTIONS(191),
    [anon_sym_justfile_dir] = ACTIONS(191),
    [anon_sym_justfile_directory] = ACTIONS(191),
    [anon_sym_source_dir] = ACTIONS(191),
    [anon_sym_source_directory] = ACTIONS(191),
    [anon_sym_source_file] = ACTIONS(191),
    [anon_sym_just_executable] = ACTIONS(191),
    [anon_sym_just_pid] = ACTIONS(191),
    [anon_sym_append] = ACTIONS(191),
    [anon_sym_prepend] = ACTIONS(191),
    [anon_sym_encode_uri_component] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_replace] = ACTIONS(191),
    [anon_sym_replace_regex] = ACTIONS(191),
    [anon_sym_trim] = ACTIONS(191),
    [anon_sym_trim_end] = ACTIONS(191),
    [anon_sym_trim_end_match] = ACTIONS(191),
    [anon_sym_trim_end_matches] = ACTIONS(191),
    [anon_sym_trim_start] = ACTIONS(191),
    [anon_sym_trim_start_match] = ACTIONS(191),
    [anon_sym_trim_start_matches] = ACTIONS(191),
    [anon_sym_capitalize] = ACTIONS(191),
    [anon_sym_kebabcase] = ACTIONS(191),
    [anon_sym_lowercamelcase] = ACTIONS(191),
    [anon_sym_lowercase] = ACTIONS(191),
    [anon_sym_shoutykebabcase] = ACTIONS(191),
    [anon_sym_shoutysnakecase] = ACTIONS(191),
    [anon_sym_snakecase] = ACTIONS(191),
    [anon_sym_titlecase] = ACTIONS(191),
    [anon_sym_uppercamelcase] = ACTIONS(191),
    [anon_sym_uppercase] = ACTIONS(191),
    [anon_sym_absolute_path] = ACTIONS(191),
    [anon_sym_canonicalize] = ACTIONS(191),
    [anon_sym_extension] = ACTIONS(191),
    [anon_sym_file_name] = ACTIONS(191),
    [anon_sym_file_stem] = ACTIONS(191),
    [anon_sym_parent_dir] = ACTIONS(191),
    [anon_sym_parent_directory] = ACTIONS(191),
    [anon_sym_without_extension] = ACTIONS(191),
    [anon_sym_clean] = ACTIONS(191),
    [anon_sym_join] = ACTIONS(191),
    [anon_sym_path_exists] = ACTIONS(191),
    [anon_sym_error] = ACTIONS(191),
    [anon_sym_blake3] = ACTIONS(191),
    [anon_sym_blake3_file] = ACTIONS(191),
    [anon_sym_sha256] = ACTIONS(191),
    [anon_sym_sha256_file] = ACTIONS(191),
    [anon_sym_uuid] = ACTIONS(191),
    [anon_sym_choose] = ACTIONS(191),
    [anon_sym_datetime] = ACTIONS(191),
    [anon_sym_datetime_utc] = ACTIONS(191),
    [anon_sym_semver_matches] = ACTIONS(191),
    [anon_sym_cache_dir] = ACTIONS(191),
    [anon_sym_cache_directory] = ACTIONS(191),
    [anon_sym_config_dir] = ACTIONS(191),
    [anon_sym_config_directory] = ACTIONS(191),
    [anon_sym_config_local_dir] = ACTIONS(191),
    [anon_sym_config_local_directory] = ACTIONS(191),
    [anon_sym_data_dir] = ACTIONS(191),
    [anon_sym_data_directory] = ACTIONS(191),
    [anon_sym_data_local_dir] = ACTIONS(191),
    [anon_sym_data_local_directory] = ACTIONS(191),
    [anon_sym_executable_dir] = ACTIONS(191),
    [anon_sym_executable_directory] = ACTIONS(191),
    [anon_sym_home_dir] = ACTIONS(191),
    [anon_sym_home_directory] = ACTIONS(191),
    [anon_sym_set] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_alias] = ACTIONS(211),
    [aux_sym_import_token1] = ACTIONS(211),
    [aux_sym_mod_token1] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_assert] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_arch] = ACTIONS(211),
    [anon_sym_num_cpus] = ACTIONS(211),
    [anon_sym_os] = ACTIONS(211),
    [anon_sym_os_family] = ACTIONS(211),
    [anon_sym_shell] = ACTIONS(211),
    [anon_sym_env_var] = ACTIONS(211),
    [anon_sym_env_var_or_default] = ACTIONS(211),
    [anon_sym_env] = ACTIONS(211),
    [anon_sym_is_dependency] = ACTIONS(211),
    [anon_sym_invocation_dir] = ACTIONS(211),
    [anon_sym_invocation_dir_native] = ACTIONS(211),
    [anon_sym_invocation_directory] = ACTIONS(211),
    [anon_sym_invocation_directory_native] = ACTIONS(211),
    [anon_sym_justfile] = ACTIONS(211),
    [anon_sym_justfile_dir] = ACTIONS(211),
    [anon_sym_justfile_directory] = ACTIONS(211),
    [anon_sym_source_dir] = ACTIONS(211),
    [anon_sym_source_directory] = ACTIONS(211),
    [anon_sym_source_file] = ACTIONS(211),
    [anon_sym_just_executable] = ACTIONS(211),
    [anon_sym_just_pid] = ACTIONS(211),
    [anon_sym_append] = ACTIONS(211),
    [anon_sym_prepend] = ACTIONS(211),
    [anon_sym_encode_uri_component] = ACTIONS(211),
    [anon_sym_quote] = ACTIONS(211),
    [anon_sym_replace] = ACTIONS(211),
    [anon_sym_replace_regex] = ACTIONS(211),
    [anon_sym_trim] = ACTIONS(211),
    [anon_sym_trim_end] = ACTIONS(211),
    [anon_sym_trim_end_match] = ACTIONS(211),
    [anon_sym_trim_end_matches] = ACTIONS(211),
    [anon_sym_trim_start] = ACTIONS(211),
    [anon_sym_trim_start_match] = ACTIONS(211),
    [anon_sym_trim_start_matches] = ACTIONS(211),
    [anon_sym_capitalize] = ACTIONS(211),
    [anon_sym_kebabcase] = ACTIONS(211),
    [anon_sym_lowercamelcase] = ACTIONS(211),
    [anon_sym_lowercase] = ACTIONS(211),
    [anon_sym_shoutykebabcase] = ACTIONS(211),
    [anon_sym_shoutysnakecase] = ACTIONS(211),
    [anon_sym_snakecase] = ACTIONS(211),
    [anon_sym_titlecase] = ACTIONS(211),
    [anon_sym_uppercamelcase] = ACTIONS(211),
    [anon_sym_uppercase] = ACTIONS(211),
    [anon_sym_absolute_path] = ACTIONS(211),
    [anon_sym_canonicalize] = ACTIONS(211),
    [anon_sym_extension] = ACTIONS(211),
    [anon_sym_file_name] = ACTIONS(211),
    [anon_sym_file_stem] = ACTIONS(211),
    [anon_sym_parent_dir] = ACTIONS(211),
    [anon_sym_parent_directory] = ACTIONS(211),
    [anon_sym_without_extension] = ACTIONS(211),
    [anon_sym_clean] = ACTIONS(211),
    [anon_sym_join] = ACTIONS(211),
    [anon_sym_path_exists] = ACTIONS(211),
    [anon_sym_error] = ACTIONS(211),
    [anon_sym_blake3] = ACTIONS(211),
    [anon_sym_blake3_file] = ACTIONS(211),
    [anon_sym_sha256] = ACTIONS(211),
    [anon_sym_sha256_file] = ACTIONS(211),
    [anon_sym_uuid] = ACTIONS(211),
    [anon_sym_choose] = ACTIONS(211),
    [anon_sym_datetime] = ACTIONS(211),
    [anon_sym_datetime_utc] = ACTIONS(211),
    [anon_sym_semver_matches] = ACTIONS(211),
    [anon_sym_cache_dir] = ACTIONS(211),
    [anon_sym_cache_directory] = ACTIONS(211),
    [anon_sym_config_dir] = ACTIONS(211),
    [anon_sym_config_directory] = ACTIONS(211),
    [anon_sym_config_local_dir] = ACTIONS(211),
    [anon_sym_config_local_directory] = ACTIONS(211),
    [anon_sym_data_dir] = ACTIONS(211),
    [anon_sym_data_directory] = ACTIONS(211),
    [anon_sym_data_local_dir] = ACTIONS(211),
    [anon_sym_data_local_directory] = ACTIONS(211),
    [anon_sym_executable_dir] = ACTIONS(211),
    [anon_sym_executable_directory] = ACTIONS(211),
    [anon_sym_home_dir] = ACTIONS(211),
    [anon_sym_home_directory] = ACTIONS(211),
    [anon_sym_set] = ACTIONS(211),
    [anon_sym_BQUOTE] = ACTIONS(211),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_alias] = ACTIONS(215),
    [aux_sym_import_token1] = ACTIONS(215),
    [aux_sym_mod_token1] = ACTIONS(215),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_assert] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_arch] = ACTIONS(215),
    [anon_sym_num_cpus] = ACTIONS(215),
    [anon_sym_os] = ACTIONS(215),
    [anon_sym_os_family] = ACTIONS(215),
    [anon_sym_shell] = ACTIONS(215),
    [anon_sym_env_var] = ACTIONS(215),
    [anon_sym_env_var_or_default] = ACTIONS(215),
    [anon_sym_env] = ACTIONS(215),
    [anon_sym_is_dependency] = ACTIONS(215),
    [anon_sym_invocation_dir] = ACTIONS(215),
    [anon_sym_invocation_dir_native] = ACTIONS(215),
    [anon_sym_invocation_directory] = ACTIONS(215),
    [anon_sym_invocation_directory_native] = ACTIONS(215),
    [anon_sym_justfile] = ACTIONS(215),
    [anon_sym_justfile_dir] = ACTIONS(215),
    [anon_sym_justfile_directory] = ACTIONS(215),
    [anon_sym_source_dir] = ACTIONS(215),
    [anon_sym_source_directory] = ACTIONS(215),
    [anon_sym_source_file] = ACTIONS(215),
    [anon_sym_just_executable] = ACTIONS(215),
    [anon_sym_just_pid] = ACTIONS(215),
    [anon_sym_append] = ACTIONS(215),
    [anon_sym_prepend] = ACTIONS(215),
    [anon_sym_encode_uri_component] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_replace] = ACTIONS(215),
    [anon_sym_replace_regex] = ACTIONS(215),
    [anon_sym_trim] = ACTIONS(215),
    [anon_sym_trim_end] = ACTIONS(215),
    [anon_sym_trim_end_match] = ACTIONS(215),
    [anon_sym_trim_end_matches] = ACTIONS(215),
    [anon_sym_trim_start] = ACTIONS(215),
    [anon_sym_trim_start_match] = ACTIONS(215),
    [anon_sym_trim_start_matches] = ACTIONS(215),
    [anon_sym_capitalize] = ACTIONS(215),
    [anon_sym_kebabcase] = ACTIONS(215),
    [anon_sym_lowercamelcase] = ACTIONS(215),
    [anon_sym_lowercase] = ACTIONS(215),
    [anon_sym_shoutykebabcase] = ACTIONS(215),
    [anon_sym_shoutysnakecase] = ACTIONS(215),
    [anon_sym_snakecase] = ACTIONS(215),
    [anon_sym_titlecase] = ACTIONS(215),
    [anon_sym_uppercamelcase] = ACTIONS(215),
    [anon_sym_uppercase] = ACTIONS(215),
    [anon_sym_absolute_path] = ACTIONS(215),
    [anon_sym_canonicalize] = ACTIONS(215),
    [anon_sym_extension] = ACTIONS(215),
    [anon_sym_file_name] = ACTIONS(215),
    [anon_sym_file_stem] = ACTIONS(215),
    [anon_sym_parent_dir] = ACTIONS(215),
    [anon_sym_parent_directory] = ACTIONS(215),
    [anon_sym_without_extension] = ACTIONS(215),
    [anon_sym_clean] = ACTIONS(215),
    [anon_sym_join] = ACTIONS(215),
    [anon_sym_path_exists] = ACTIONS(215),
    [anon_sym_error] = ACTIONS(215),
    [anon_sym_blake3] = ACTIONS(215),
    [anon_sym_blake3_file] = ACTIONS(215),
    [anon_sym_sha256] = ACTIONS(215),
    [anon_sym_sha256_file] = ACTIONS(215),
    [anon_sym_uuid] = ACTIONS(215),
    [anon_sym_choose] = ACTIONS(215),
    [anon_sym_datetime] = ACTIONS(215),
    [anon_sym_datetime_utc] = ACTIONS(215),
    [anon_sym_semver_matches] = ACTIONS(215),
    [anon_sym_cache_dir] = ACTIONS(215),
    [anon_sym_cache_directory] = ACTIONS(215),
    [anon_sym_config_dir] = ACTIONS(215),
    [anon_sym_config_directory] = ACTIONS(215),
    [anon_sym_config_local_dir] = ACTIONS(215),
    [anon_sym_config_local_directory] = ACTIONS(215),
    [anon_sym_data_dir] = ACTIONS(215),
    [anon_sym_data_directory] = ACTIONS(215),
    [anon_sym_data_local_dir] = ACTIONS(215),
    [anon_sym_data_local_directory] = ACTIONS(215),
    [anon_sym_executable_dir] = ACTIONS(215),
    [anon_sym_executable_directory] = ACTIONS(215),
    [anon_sym_home_dir] = ACTIONS(215),
    [anon_sym_home_directory] = ACTIONS(215),
    [anon_sym_set] = ACTIONS(215),
    [anon_sym_BQUOTE] = ACTIONS(215),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(86),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_function_parameters] = STATE(135),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(31),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_expression] = STATE(101),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(32),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(115),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(33),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(113),
    [sym_condition] = STATE(117),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(34),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_expression] = STATE(115),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(35),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_expression] = STATE(113),
    [sym_condition] = STATE(132),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(36),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_expression] = STATE(136),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(37),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_expression] = STATE(101),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(38),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_expression] = STATE(138),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(39),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_expression] = STATE(107),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(40),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym_expression] = STATE(114),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(42),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_expression] = STATE(142),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [44] = {
    [sym_comment] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_alias] = ACTIONS(225),
    [aux_sym_import_token1] = ACTIONS(225),
    [aux_sym_mod_token1] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_assert] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_arch] = ACTIONS(225),
    [anon_sym_num_cpus] = ACTIONS(225),
    [anon_sym_os] = ACTIONS(225),
    [anon_sym_os_family] = ACTIONS(225),
    [anon_sym_shell] = ACTIONS(225),
    [anon_sym_env_var] = ACTIONS(225),
    [anon_sym_env_var_or_default] = ACTIONS(225),
    [anon_sym_env] = ACTIONS(225),
    [anon_sym_is_dependency] = ACTIONS(225),
    [anon_sym_invocation_dir] = ACTIONS(225),
    [anon_sym_invocation_dir_native] = ACTIONS(225),
    [anon_sym_invocation_directory] = ACTIONS(225),
    [anon_sym_invocation_directory_native] = ACTIONS(225),
    [anon_sym_justfile] = ACTIONS(225),
    [anon_sym_justfile_dir] = ACTIONS(225),
    [anon_sym_justfile_directory] = ACTIONS(225),
    [anon_sym_source_dir] = ACTIONS(225),
    [anon_sym_source_directory] = ACTIONS(225),
    [anon_sym_source_file] = ACTIONS(225),
    [anon_sym_just_executable] = ACTIONS(225),
    [anon_sym_just_pid] = ACTIONS(225),
    [anon_sym_append] = ACTIONS(225),
    [anon_sym_prepend] = ACTIONS(225),
    [anon_sym_encode_uri_component] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_replace] = ACTIONS(225),
    [anon_sym_replace_regex] = ACTIONS(225),
    [anon_sym_trim] = ACTIONS(225),
    [anon_sym_trim_end] = ACTIONS(225),
    [anon_sym_trim_end_match] = ACTIONS(225),
    [anon_sym_trim_end_matches] = ACTIONS(225),
    [anon_sym_trim_start] = ACTIONS(225),
    [anon_sym_trim_start_match] = ACTIONS(225),
    [anon_sym_trim_start_matches] = ACTIONS(225),
    [anon_sym_capitalize] = ACTIONS(225),
    [anon_sym_kebabcase] = ACTIONS(225),
    [anon_sym_lowercamelcase] = ACTIONS(225),
    [anon_sym_lowercase] = ACTIONS(225),
    [anon_sym_shoutykebabcase] = ACTIONS(225),
    [anon_sym_shoutysnakecase] = ACTIONS(225),
    [anon_sym_snakecase] = ACTIONS(225),
    [anon_sym_titlecase] = ACTIONS(225),
    [anon_sym_uppercamelcase] = ACTIONS(225),
    [anon_sym_uppercase] = ACTIONS(225),
    [anon_sym_absolute_path] = ACTIONS(225),
    [anon_sym_canonicalize] = ACTIONS(225),
    [anon_sym_extension] = ACTIONS(225),
    [anon_sym_file_name] = ACTIONS(225),
    [anon_sym_file_stem] = ACTIONS(225),
    [anon_sym_parent_dir] = ACTIONS(225),
    [anon_sym_parent_directory] = ACTIONS(225),
    [anon_sym_without_extension] = ACTIONS(225),
    [anon_sym_clean] = ACTIONS(225),
    [anon_sym_join] = ACTIONS(225),
    [anon_sym_path_exists] = ACTIONS(225),
    [anon_sym_error] = ACTIONS(225),
    [anon_sym_blake3] = ACTIONS(225),
    [anon_sym_blake3_file] = ACTIONS(225),
    [anon_sym_sha256] = ACTIONS(225),
    [anon_sym_sha256_file] = ACTIONS(225),
    [anon_sym_uuid] = ACTIONS(225),
    [anon_sym_choose] = ACTIONS(225),
    [anon_sym_datetime] = ACTIONS(225),
    [anon_sym_datetime_utc] = ACTIONS(225),
    [anon_sym_semver_matches] = ACTIONS(225),
    [anon_sym_cache_dir] = ACTIONS(225),
    [anon_sym_cache_directory] = ACTIONS(225),
    [anon_sym_config_dir] = ACTIONS(225),
    [anon_sym_config_directory] = ACTIONS(225),
    [anon_sym_config_local_dir] = ACTIONS(225),
    [anon_sym_config_local_directory] = ACTIONS(225),
    [anon_sym_data_dir] = ACTIONS(225),
    [anon_sym_data_directory] = ACTIONS(225),
    [anon_sym_data_local_dir] = ACTIONS(225),
    [anon_sym_data_local_directory] = ACTIONS(225),
    [anon_sym_executable_dir] = ACTIONS(225),
    [anon_sym_executable_directory] = ACTIONS(225),
    [anon_sym_home_dir] = ACTIONS(225),
    [anon_sym_home_directory] = ACTIONS(225),
    [anon_sym_set] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [45] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(45),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [46] = {
    [sym_expression] = STATE(123),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(46),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [47] = {
    [sym_expression] = STATE(120),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(47),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [48] = {
    [sym_expression] = STATE(104),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(48),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym_expression] = STATE(115),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(49),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_expression] = STATE(119),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(50),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_expression] = STATE(52),
    [sym_value] = STATE(27),
    [sym_builtin_function_call] = STATE(28),
    [sym_function_call] = STATE(28),
    [sym_backtick] = STATE(28),
    [sym_indented_backtick] = STATE(28),
    [sym_string] = STATE(28),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_arch] = ACTIONS(21),
    [anon_sym_num_cpus] = ACTIONS(21),
    [anon_sym_os] = ACTIONS(21),
    [anon_sym_os_family] = ACTIONS(21),
    [anon_sym_shell] = ACTIONS(23),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_is_dependency] = ACTIONS(21),
    [anon_sym_invocation_dir] = ACTIONS(21),
    [anon_sym_invocation_dir_native] = ACTIONS(21),
    [anon_sym_invocation_directory] = ACTIONS(21),
    [anon_sym_invocation_directory_native] = ACTIONS(21),
    [anon_sym_justfile] = ACTIONS(21),
    [anon_sym_justfile_dir] = ACTIONS(21),
    [anon_sym_justfile_directory] = ACTIONS(21),
    [anon_sym_source_dir] = ACTIONS(21),
    [anon_sym_source_directory] = ACTIONS(21),
    [anon_sym_source_file] = ACTIONS(21),
    [anon_sym_just_executable] = ACTIONS(21),
    [anon_sym_just_pid] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(27),
    [anon_sym_prepend] = ACTIONS(27),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(31),
    [anon_sym_replace_regex] = ACTIONS(31),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(27),
    [anon_sym_trim_end_matches] = ACTIONS(27),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(27),
    [anon_sym_trim_start_matches] = ACTIONS(27),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(21),
    [anon_sym_choose] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(27),
    [anon_sym_cache_dir] = ACTIONS(21),
    [anon_sym_cache_directory] = ACTIONS(21),
    [anon_sym_config_dir] = ACTIONS(21),
    [anon_sym_config_directory] = ACTIONS(21),
    [anon_sym_config_local_dir] = ACTIONS(21),
    [anon_sym_config_local_directory] = ACTIONS(21),
    [anon_sym_data_dir] = ACTIONS(21),
    [anon_sym_data_directory] = ACTIONS(21),
    [anon_sym_data_local_dir] = ACTIONS(21),
    [anon_sym_data_local_directory] = ACTIONS(21),
    [anon_sym_executable_dir] = ACTIONS(21),
    [anon_sym_executable_directory] = ACTIONS(21),
    [anon_sym_home_dir] = ACTIONS(21),
    [anon_sym_home_directory] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_identifier] = ACTIONS(229),
    [anon_sym_alias] = ACTIONS(229),
    [aux_sym_import_token1] = ACTIONS(229),
    [aux_sym_mod_token1] = ACTIONS(229),
    [anon_sym_if] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_assert] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_arch] = ACTIONS(229),
    [anon_sym_num_cpus] = ACTIONS(229),
    [anon_sym_os] = ACTIONS(229),
    [anon_sym_os_family] = ACTIONS(229),
    [anon_sym_shell] = ACTIONS(229),
    [anon_sym_env_var] = ACTIONS(229),
    [anon_sym_env_var_or_default] = ACTIONS(229),
    [anon_sym_env] = ACTIONS(229),
    [anon_sym_is_dependency] = ACTIONS(229),
    [anon_sym_invocation_dir] = ACTIONS(229),
    [anon_sym_invocation_dir_native] = ACTIONS(229),
    [anon_sym_invocation_directory] = ACTIONS(229),
    [anon_sym_invocation_directory_native] = ACTIONS(229),
    [anon_sym_justfile] = ACTIONS(229),
    [anon_sym_justfile_dir] = ACTIONS(229),
    [anon_sym_justfile_directory] = ACTIONS(229),
    [anon_sym_source_dir] = ACTIONS(229),
    [anon_sym_source_directory] = ACTIONS(229),
    [anon_sym_source_file] = ACTIONS(229),
    [anon_sym_just_executable] = ACTIONS(229),
    [anon_sym_just_pid] = ACTIONS(229),
    [anon_sym_append] = ACTIONS(229),
    [anon_sym_prepend] = ACTIONS(229),
    [anon_sym_encode_uri_component] = ACTIONS(229),
    [anon_sym_quote] = ACTIONS(229),
    [anon_sym_replace] = ACTIONS(229),
    [anon_sym_replace_regex] = ACTIONS(229),
    [anon_sym_trim] = ACTIONS(229),
    [anon_sym_trim_end] = ACTIONS(229),
    [anon_sym_trim_end_match] = ACTIONS(229),
    [anon_sym_trim_end_matches] = ACTIONS(229),
    [anon_sym_trim_start] = ACTIONS(229),
    [anon_sym_trim_start_match] = ACTIONS(229),
    [anon_sym_trim_start_matches] = ACTIONS(229),
    [anon_sym_capitalize] = ACTIONS(229),
    [anon_sym_kebabcase] = ACTIONS(229),
    [anon_sym_lowercamelcase] = ACTIONS(229),
    [anon_sym_lowercase] = ACTIONS(229),
    [anon_sym_shoutykebabcase] = ACTIONS(229),
    [anon_sym_shoutysnakecase] = ACTIONS(229),
    [anon_sym_snakecase] = ACTIONS(229),
    [anon_sym_titlecase] = ACTIONS(229),
    [anon_sym_uppercamelcase] = ACTIONS(229),
    [anon_sym_uppercase] = ACTIONS(229),
    [anon_sym_absolute_path] = ACTIONS(229),
    [anon_sym_canonicalize] = ACTIONS(229),
    [anon_sym_extension] = ACTIONS(229),
    [anon_sym_file_name] = ACTIONS(229),
    [anon_sym_file_stem] = ACTIONS(229),
    [anon_sym_parent_dir] = ACTIONS(229),
    [anon_sym_parent_directory] = ACTIONS(229),
    [anon_sym_without_extension] = ACTIONS(229),
    [anon_sym_clean] = ACTIONS(229),
    [anon_sym_join] = ACTIONS(229),
    [anon_sym_path_exists] = ACTIONS(229),
    [anon_sym_error] = ACTIONS(229),
    [anon_sym_blake3] = ACTIONS(229),
    [anon_sym_blake3_file] = ACTIONS(229),
    [anon_sym_sha256] = ACTIONS(229),
    [anon_sym_sha256_file] = ACTIONS(229),
    [anon_sym_uuid] = ACTIONS(229),
    [anon_sym_choose] = ACTIONS(229),
    [anon_sym_datetime] = ACTIONS(229),
    [anon_sym_datetime_utc] = ACTIONS(229),
    [anon_sym_semver_matches] = ACTIONS(229),
    [anon_sym_cache_dir] = ACTIONS(229),
    [anon_sym_cache_directory] = ACTIONS(229),
    [anon_sym_config_dir] = ACTIONS(229),
    [anon_sym_config_directory] = ACTIONS(229),
    [anon_sym_config_local_dir] = ACTIONS(229),
    [anon_sym_config_local_directory] = ACTIONS(229),
    [anon_sym_data_dir] = ACTIONS(229),
    [anon_sym_data_directory] = ACTIONS(229),
    [anon_sym_data_local_dir] = ACTIONS(229),
    [anon_sym_data_local_directory] = ACTIONS(229),
    [anon_sym_executable_dir] = ACTIONS(229),
    [anon_sym_executable_directory] = ACTIONS(229),
    [anon_sym_home_dir] = ACTIONS(229),
    [anon_sym_home_directory] = ACTIONS(229),
    [anon_sym_set] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_comment] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_alias] = ACTIONS(233),
    [aux_sym_import_token1] = ACTIONS(233),
    [aux_sym_mod_token1] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_assert] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_arch] = ACTIONS(233),
    [anon_sym_num_cpus] = ACTIONS(233),
    [anon_sym_os] = ACTIONS(233),
    [anon_sym_os_family] = ACTIONS(233),
    [anon_sym_shell] = ACTIONS(233),
    [anon_sym_env_var] = ACTIONS(233),
    [anon_sym_env_var_or_default] = ACTIONS(233),
    [anon_sym_env] = ACTIONS(233),
    [anon_sym_is_dependency] = ACTIONS(233),
    [anon_sym_invocation_dir] = ACTIONS(233),
    [anon_sym_invocation_dir_native] = ACTIONS(233),
    [anon_sym_invocation_directory] = ACTIONS(233),
    [anon_sym_invocation_directory_native] = ACTIONS(233),
    [anon_sym_justfile] = ACTIONS(233),
    [anon_sym_justfile_dir] = ACTIONS(233),
    [anon_sym_justfile_directory] = ACTIONS(233),
    [anon_sym_source_dir] = ACTIONS(233),
    [anon_sym_source_directory] = ACTIONS(233),
    [anon_sym_source_file] = ACTIONS(233),
    [anon_sym_just_executable] = ACTIONS(233),
    [anon_sym_just_pid] = ACTIONS(233),
    [anon_sym_append] = ACTIONS(233),
    [anon_sym_prepend] = ACTIONS(233),
    [anon_sym_encode_uri_component] = ACTIONS(233),
    [anon_sym_quote] = ACTIONS(233),
    [anon_sym_replace] = ACTIONS(233),
    [anon_sym_replace_regex] = ACTIONS(233),
    [anon_sym_trim] = ACTIONS(233),
    [anon_sym_trim_end] = ACTIONS(233),
    [anon_sym_trim_end_match] = ACTIONS(233),
    [anon_sym_trim_end_matches] = ACTIONS(233),
    [anon_sym_trim_start] = ACTIONS(233),
    [anon_sym_trim_start_match] = ACTIONS(233),
    [anon_sym_trim_start_matches] = ACTIONS(233),
    [anon_sym_capitalize] = ACTIONS(233),
    [anon_sym_kebabcase] = ACTIONS(233),
    [anon_sym_lowercamelcase] = ACTIONS(233),
    [anon_sym_lowercase] = ACTIONS(233),
    [anon_sym_shoutykebabcase] = ACTIONS(233),
    [anon_sym_shoutysnakecase] = ACTIONS(233),
    [anon_sym_snakecase] = ACTIONS(233),
    [anon_sym_titlecase] = ACTIONS(233),
    [anon_sym_uppercamelcase] = ACTIONS(233),
    [anon_sym_uppercase] = ACTIONS(233),
    [anon_sym_absolute_path] = ACTIONS(233),
    [anon_sym_canonicalize] = ACTIONS(233),
    [anon_sym_extension] = ACTIONS(233),
    [anon_sym_file_name] = ACTIONS(233),
    [anon_sym_file_stem] = ACTIONS(233),
    [anon_sym_parent_dir] = ACTIONS(233),
    [anon_sym_parent_directory] = ACTIONS(233),
    [anon_sym_without_extension] = ACTIONS(233),
    [anon_sym_clean] = ACTIONS(233),
    [anon_sym_join] = ACTIONS(233),
    [anon_sym_path_exists] = ACTIONS(233),
    [anon_sym_error] = ACTIONS(233),
    [anon_sym_blake3] = ACTIONS(233),
    [anon_sym_blake3_file] = ACTIONS(233),
    [anon_sym_sha256] = ACTIONS(233),
    [anon_sym_sha256_file] = ACTIONS(233),
    [anon_sym_uuid] = ACTIONS(233),
    [anon_sym_choose] = ACTIONS(233),
    [anon_sym_datetime] = ACTIONS(233),
    [anon_sym_datetime_utc] = ACTIONS(233),
    [anon_sym_semver_matches] = ACTIONS(233),
    [anon_sym_cache_dir] = ACTIONS(233),
    [anon_sym_cache_directory] = ACTIONS(233),
    [anon_sym_config_dir] = ACTIONS(233),
    [anon_sym_config_directory] = ACTIONS(233),
    [anon_sym_config_local_dir] = ACTIONS(233),
    [anon_sym_config_local_directory] = ACTIONS(233),
    [anon_sym_data_dir] = ACTIONS(233),
    [anon_sym_data_directory] = ACTIONS(233),
    [anon_sym_data_local_dir] = ACTIONS(233),
    [anon_sym_data_local_directory] = ACTIONS(233),
    [anon_sym_executable_dir] = ACTIONS(233),
    [anon_sym_executable_directory] = ACTIONS(233),
    [anon_sym_home_dir] = ACTIONS(233),
    [anon_sym_home_directory] = ACTIONS(233),
    [anon_sym_set] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_string] = STATE(65),
    [sym_indented_normal_string] = STATE(11),
    [sym_normal_string] = STATE(11),
    [sym_indented_raw_string] = STATE(11),
    [sym_raw_string] = STATE(11),
    [sym_comment] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_alias] = ACTIONS(237),
    [aux_sym_import_token1] = ACTIONS(237),
    [aux_sym_mod_token1] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(237),
    [anon_sym_assert] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_arch] = ACTIONS(237),
    [anon_sym_num_cpus] = ACTIONS(237),
    [anon_sym_os] = ACTIONS(237),
    [anon_sym_os_family] = ACTIONS(237),
    [anon_sym_shell] = ACTIONS(237),
    [anon_sym_env_var] = ACTIONS(237),
    [anon_sym_env_var_or_default] = ACTIONS(237),
    [anon_sym_env] = ACTIONS(237),
    [anon_sym_is_dependency] = ACTIONS(237),
    [anon_sym_invocation_dir] = ACTIONS(237),
    [anon_sym_invocation_dir_native] = ACTIONS(237),
    [anon_sym_invocation_directory] = ACTIONS(237),
    [anon_sym_invocation_directory_native] = ACTIONS(237),
    [anon_sym_justfile] = ACTIONS(237),
    [anon_sym_justfile_dir] = ACTIONS(237),
    [anon_sym_justfile_directory] = ACTIONS(237),
    [anon_sym_source_dir] = ACTIONS(237),
    [anon_sym_source_directory] = ACTIONS(237),
    [anon_sym_source_file] = ACTIONS(237),
    [anon_sym_just_executable] = ACTIONS(237),
    [anon_sym_just_pid] = ACTIONS(237),
    [anon_sym_append] = ACTIONS(237),
    [anon_sym_prepend] = ACTIONS(237),
    [anon_sym_encode_uri_component] = ACTIONS(237),
    [anon_sym_quote] = ACTIONS(237),
    [anon_sym_replace] = ACTIONS(237),
    [anon_sym_replace_regex] = ACTIONS(237),
    [anon_sym_trim] = ACTIONS(237),
    [anon_sym_trim_end] = ACTIONS(237),
    [anon_sym_trim_end_match] = ACTIONS(237),
    [anon_sym_trim_end_matches] = ACTIONS(237),
    [anon_sym_trim_start] = ACTIONS(237),
    [anon_sym_trim_start_match] = ACTIONS(237),
    [anon_sym_trim_start_matches] = ACTIONS(237),
    [anon_sym_capitalize] = ACTIONS(237),
    [anon_sym_kebabcase] = ACTIONS(237),
    [anon_sym_lowercamelcase] = ACTIONS(237),
    [anon_sym_lowercase] = ACTIONS(237),
    [anon_sym_shoutykebabcase] = ACTIONS(237),
    [anon_sym_shoutysnakecase] = ACTIONS(237),
    [anon_sym_snakecase] = ACTIONS(237),
    [anon_sym_titlecase] = ACTIONS(237),
    [anon_sym_uppercamelcase] = ACTIONS(237),
    [anon_sym_uppercase] = ACTIONS(237),
    [anon_sym_absolute_path] = ACTIONS(237),
    [anon_sym_canonicalize] = ACTIONS(237),
    [anon_sym_extension] = ACTIONS(237),
    [anon_sym_file_name] = ACTIONS(237),
    [anon_sym_file_stem] = ACTIONS(237),
    [anon_sym_parent_dir] = ACTIONS(237),
    [anon_sym_parent_directory] = ACTIONS(237),
    [anon_sym_without_extension] = ACTIONS(237),
    [anon_sym_clean] = ACTIONS(237),
    [anon_sym_join] = ACTIONS(237),
    [anon_sym_path_exists] = ACTIONS(237),
    [anon_sym_error] = ACTIONS(237),
    [anon_sym_blake3] = ACTIONS(237),
    [anon_sym_blake3_file] = ACTIONS(237),
    [anon_sym_sha256] = ACTIONS(237),
    [anon_sym_sha256_file] = ACTIONS(237),
    [anon_sym_uuid] = ACTIONS(237),
    [anon_sym_choose] = ACTIONS(237),
    [anon_sym_datetime] = ACTIONS(237),
    [anon_sym_datetime_utc] = ACTIONS(237),
    [anon_sym_semver_matches] = ACTIONS(237),
    [anon_sym_cache_dir] = ACTIONS(237),
    [anon_sym_cache_directory] = ACTIONS(237),
    [anon_sym_config_dir] = ACTIONS(237),
    [anon_sym_config_directory] = ACTIONS(237),
    [anon_sym_config_local_dir] = ACTIONS(237),
    [anon_sym_config_local_directory] = ACTIONS(237),
    [anon_sym_data_dir] = ACTIONS(237),
    [anon_sym_data_directory] = ACTIONS(237),
    [anon_sym_data_local_dir] = ACTIONS(237),
    [anon_sym_data_local_directory] = ACTIONS(237),
    [anon_sym_executable_dir] = ACTIONS(237),
    [anon_sym_executable_directory] = ACTIONS(237),
    [anon_sym_home_dir] = ACTIONS(237),
    [anon_sym_home_directory] = ACTIONS(237),
    [anon_sym_set] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym__setting_boolean] = STATE(67),
    [sym__setting_string] = STATE(67),
    [sym__setting_list] = STATE(67),
    [sym_comment] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_alias] = ACTIONS(241),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [aux_sym_import_token1] = ACTIONS(241),
    [aux_sym_mod_token1] = ACTIONS(241),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_assert] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_arch] = ACTIONS(241),
    [anon_sym_num_cpus] = ACTIONS(241),
    [anon_sym_os] = ACTIONS(241),
    [anon_sym_os_family] = ACTIONS(241),
    [anon_sym_shell] = ACTIONS(241),
    [anon_sym_env_var] = ACTIONS(241),
    [anon_sym_env_var_or_default] = ACTIONS(241),
    [anon_sym_env] = ACTIONS(241),
    [anon_sym_is_dependency] = ACTIONS(241),
    [anon_sym_invocation_dir] = ACTIONS(241),
    [anon_sym_invocation_dir_native] = ACTIONS(241),
    [anon_sym_invocation_directory] = ACTIONS(241),
    [anon_sym_invocation_directory_native] = ACTIONS(241),
    [anon_sym_justfile] = ACTIONS(241),
    [anon_sym_justfile_dir] = ACTIONS(241),
    [anon_sym_justfile_directory] = ACTIONS(241),
    [anon_sym_source_dir] = ACTIONS(241),
    [anon_sym_source_directory] = ACTIONS(241),
    [anon_sym_source_file] = ACTIONS(241),
    [anon_sym_just_executable] = ACTIONS(241),
    [anon_sym_just_pid] = ACTIONS(241),
    [anon_sym_append] = ACTIONS(241),
    [anon_sym_prepend] = ACTIONS(241),
    [anon_sym_encode_uri_component] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_replace] = ACTIONS(241),
    [anon_sym_replace_regex] = ACTIONS(241),
    [anon_sym_trim] = ACTIONS(241),
    [anon_sym_trim_end] = ACTIONS(241),
    [anon_sym_trim_end_match] = ACTIONS(241),
    [anon_sym_trim_end_matches] = ACTIONS(241),
    [anon_sym_trim_start] = ACTIONS(241),
    [anon_sym_trim_start_match] = ACTIONS(241),
    [anon_sym_trim_start_matches] = ACTIONS(241),
    [anon_sym_capitalize] = ACTIONS(241),
    [anon_sym_kebabcase] = ACTIONS(241),
    [anon_sym_lowercamelcase] = ACTIONS(241),
    [anon_sym_lowercase] = ACTIONS(241),
    [anon_sym_shoutykebabcase] = ACTIONS(241),
    [anon_sym_shoutysnakecase] = ACTIONS(241),
    [anon_sym_snakecase] = ACTIONS(241),
    [anon_sym_titlecase] = ACTIONS(241),
    [anon_sym_uppercamelcase] = ACTIONS(241),
    [anon_sym_uppercase] = ACTIONS(241),
    [anon_sym_absolute_path] = ACTIONS(241),
    [anon_sym_canonicalize] = ACTIONS(241),
    [anon_sym_extension] = ACTIONS(241),
    [anon_sym_file_name] = ACTIONS(241),
    [anon_sym_file_stem] = ACTIONS(241),
    [anon_sym_parent_dir] = ACTIONS(241),
    [anon_sym_parent_directory] = ACTIONS(241),
    [anon_sym_without_extension] = ACTIONS(241),
    [anon_sym_clean] = ACTIONS(241),
    [anon_sym_join] = ACTIONS(241),
    [anon_sym_path_exists] = ACTIONS(241),
    [anon_sym_error] = ACTIONS(241),
    [anon_sym_blake3] = ACTIONS(241),
    [anon_sym_blake3_file] = ACTIONS(241),
    [anon_sym_sha256] = ACTIONS(241),
    [anon_sym_sha256_file] = ACTIONS(241),
    [anon_sym_uuid] = ACTIONS(241),
    [anon_sym_choose] = ACTIONS(241),
    [anon_sym_datetime] = ACTIONS(241),
    [anon_sym_datetime_utc] = ACTIONS(241),
    [anon_sym_semver_matches] = ACTIONS(241),
    [anon_sym_cache_dir] = ACTIONS(241),
    [anon_sym_cache_directory] = ACTIONS(241),
    [anon_sym_config_dir] = ACTIONS(241),
    [anon_sym_config_directory] = ACTIONS(241),
    [anon_sym_config_local_dir] = ACTIONS(241),
    [anon_sym_config_local_directory] = ACTIONS(241),
    [anon_sym_data_dir] = ACTIONS(241),
    [anon_sym_data_directory] = ACTIONS(241),
    [anon_sym_data_local_dir] = ACTIONS(241),
    [anon_sym_data_local_directory] = ACTIONS(241),
    [anon_sym_executable_dir] = ACTIONS(241),
    [anon_sym_executable_directory] = ACTIONS(241),
    [anon_sym_home_dir] = ACTIONS(241),
    [anon_sym_home_directory] = ACTIONS(241),
    [anon_sym_set] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym__setting_boolean] = STATE(67),
    [sym_comment] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_alias] = ACTIONS(241),
    [anon_sym_COLON_EQ] = ACTIONS(245),
    [aux_sym_import_token1] = ACTIONS(241),
    [aux_sym_mod_token1] = ACTIONS(241),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_assert] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_arch] = ACTIONS(241),
    [anon_sym_num_cpus] = ACTIONS(241),
    [anon_sym_os] = ACTIONS(241),
    [anon_sym_os_family] = ACTIONS(241),
    [anon_sym_shell] = ACTIONS(241),
    [anon_sym_env_var] = ACTIONS(241),
    [anon_sym_env_var_or_default] = ACTIONS(241),
    [anon_sym_env] = ACTIONS(241),
    [anon_sym_is_dependency] = ACTIONS(241),
    [anon_sym_invocation_dir] = ACTIONS(241),
    [anon_sym_invocation_dir_native] = ACTIONS(241),
    [anon_sym_invocation_directory] = ACTIONS(241),
    [anon_sym_invocation_directory_native] = ACTIONS(241),
    [anon_sym_justfile] = ACTIONS(241),
    [anon_sym_justfile_dir] = ACTIONS(241),
    [anon_sym_justfile_directory] = ACTIONS(241),
    [anon_sym_source_dir] = ACTIONS(241),
    [anon_sym_source_directory] = ACTIONS(241),
    [anon_sym_source_file] = ACTIONS(241),
    [anon_sym_just_executable] = ACTIONS(241),
    [anon_sym_just_pid] = ACTIONS(241),
    [anon_sym_append] = ACTIONS(241),
    [anon_sym_prepend] = ACTIONS(241),
    [anon_sym_encode_uri_component] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_replace] = ACTIONS(241),
    [anon_sym_replace_regex] = ACTIONS(241),
    [anon_sym_trim] = ACTIONS(241),
    [anon_sym_trim_end] = ACTIONS(241),
    [anon_sym_trim_end_match] = ACTIONS(241),
    [anon_sym_trim_end_matches] = ACTIONS(241),
    [anon_sym_trim_start] = ACTIONS(241),
    [anon_sym_trim_start_match] = ACTIONS(241),
    [anon_sym_trim_start_matches] = ACTIONS(241),
    [anon_sym_capitalize] = ACTIONS(241),
    [anon_sym_kebabcase] = ACTIONS(241),
    [anon_sym_lowercamelcase] = ACTIONS(241),
    [anon_sym_lowercase] = ACTIONS(241),
    [anon_sym_shoutykebabcase] = ACTIONS(241),
    [anon_sym_shoutysnakecase] = ACTIONS(241),
    [anon_sym_snakecase] = ACTIONS(241),
    [anon_sym_titlecase] = ACTIONS(241),
    [anon_sym_uppercamelcase] = ACTIONS(241),
    [anon_sym_uppercase] = ACTIONS(241),
    [anon_sym_absolute_path] = ACTIONS(241),
    [anon_sym_canonicalize] = ACTIONS(241),
    [anon_sym_extension] = ACTIONS(241),
    [anon_sym_file_name] = ACTIONS(241),
    [anon_sym_file_stem] = ACTIONS(241),
    [anon_sym_parent_dir] = ACTIONS(241),
    [anon_sym_parent_directory] = ACTIONS(241),
    [anon_sym_without_extension] = ACTIONS(241),
    [anon_sym_clean] = ACTIONS(241),
    [anon_sym_join] = ACTIONS(241),
    [anon_sym_path_exists] = ACTIONS(241),
    [anon_sym_error] = ACTIONS(241),
    [anon_sym_blake3] = ACTIONS(241),
    [anon_sym_blake3_file] = ACTIONS(241),
    [anon_sym_sha256] = ACTIONS(241),
    [anon_sym_sha256_file] = ACTIONS(241),
    [anon_sym_uuid] = ACTIONS(241),
    [anon_sym_choose] = ACTIONS(241),
    [anon_sym_datetime] = ACTIONS(241),
    [anon_sym_datetime_utc] = ACTIONS(241),
    [anon_sym_semver_matches] = ACTIONS(241),
    [anon_sym_cache_dir] = ACTIONS(241),
    [anon_sym_cache_directory] = ACTIONS(241),
    [anon_sym_config_dir] = ACTIONS(241),
    [anon_sym_config_directory] = ACTIONS(241),
    [anon_sym_config_local_dir] = ACTIONS(241),
    [anon_sym_config_local_directory] = ACTIONS(241),
    [anon_sym_data_dir] = ACTIONS(241),
    [anon_sym_data_directory] = ACTIONS(241),
    [anon_sym_data_local_dir] = ACTIONS(241),
    [anon_sym_data_local_directory] = ACTIONS(241),
    [anon_sym_executable_dir] = ACTIONS(241),
    [anon_sym_executable_directory] = ACTIONS(241),
    [anon_sym_home_dir] = ACTIONS(241),
    [anon_sym_home_directory] = ACTIONS(241),
    [anon_sym_set] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_alias] = ACTIONS(249),
    [aux_sym_import_token1] = ACTIONS(249),
    [aux_sym_mod_token1] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_assert] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_arch] = ACTIONS(249),
    [anon_sym_num_cpus] = ACTIONS(249),
    [anon_sym_os] = ACTIONS(249),
    [anon_sym_os_family] = ACTIONS(249),
    [anon_sym_shell] = ACTIONS(249),
    [anon_sym_env_var] = ACTIONS(249),
    [anon_sym_env_var_or_default] = ACTIONS(249),
    [anon_sym_env] = ACTIONS(249),
    [anon_sym_is_dependency] = ACTIONS(249),
    [anon_sym_invocation_dir] = ACTIONS(249),
    [anon_sym_invocation_dir_native] = ACTIONS(249),
    [anon_sym_invocation_directory] = ACTIONS(249),
    [anon_sym_invocation_directory_native] = ACTIONS(249),
    [anon_sym_justfile] = ACTIONS(249),
    [anon_sym_justfile_dir] = ACTIONS(249),
    [anon_sym_justfile_directory] = ACTIONS(249),
    [anon_sym_source_dir] = ACTIONS(249),
    [anon_sym_source_directory] = ACTIONS(249),
    [anon_sym_source_file] = ACTIONS(249),
    [anon_sym_just_executable] = ACTIONS(249),
    [anon_sym_just_pid] = ACTIONS(249),
    [anon_sym_append] = ACTIONS(249),
    [anon_sym_prepend] = ACTIONS(249),
    [anon_sym_encode_uri_component] = ACTIONS(249),
    [anon_sym_quote] = ACTIONS(249),
    [anon_sym_replace] = ACTIONS(249),
    [anon_sym_replace_regex] = ACTIONS(249),
    [anon_sym_trim] = ACTIONS(249),
    [anon_sym_trim_end] = ACTIONS(249),
    [anon_sym_trim_end_match] = ACTIONS(249),
    [anon_sym_trim_end_matches] = ACTIONS(249),
    [anon_sym_trim_start] = ACTIONS(249),
    [anon_sym_trim_start_match] = ACTIONS(249),
    [anon_sym_trim_start_matches] = ACTIONS(249),
    [anon_sym_capitalize] = ACTIONS(249),
    [anon_sym_kebabcase] = ACTIONS(249),
    [anon_sym_lowercamelcase] = ACTIONS(249),
    [anon_sym_lowercase] = ACTIONS(249),
    [anon_sym_shoutykebabcase] = ACTIONS(249),
    [anon_sym_shoutysnakecase] = ACTIONS(249),
    [anon_sym_snakecase] = ACTIONS(249),
    [anon_sym_titlecase] = ACTIONS(249),
    [anon_sym_uppercamelcase] = ACTIONS(249),
    [anon_sym_uppercase] = ACTIONS(249),
    [anon_sym_absolute_path] = ACTIONS(249),
    [anon_sym_canonicalize] = ACTIONS(249),
    [anon_sym_extension] = ACTIONS(249),
    [anon_sym_file_name] = ACTIONS(249),
    [anon_sym_file_stem] = ACTIONS(249),
    [anon_sym_parent_dir] = ACTIONS(249),
    [anon_sym_parent_directory] = ACTIONS(249),
    [anon_sym_without_extension] = ACTIONS(249),
    [anon_sym_clean] = ACTIONS(249),
    [anon_sym_join] = ACTIONS(249),
    [anon_sym_path_exists] = ACTIONS(249),
    [anon_sym_error] = ACTIONS(249),
    [anon_sym_blake3] = ACTIONS(249),
    [anon_sym_blake3_file] = ACTIONS(249),
    [anon_sym_sha256] = ACTIONS(249),
    [anon_sym_sha256_file] = ACTIONS(249),
    [anon_sym_uuid] = ACTIONS(249),
    [anon_sym_choose] = ACTIONS(249),
    [anon_sym_datetime] = ACTIONS(249),
    [anon_sym_datetime_utc] = ACTIONS(249),
    [anon_sym_semver_matches] = ACTIONS(249),
    [anon_sym_cache_dir] = ACTIONS(249),
    [anon_sym_cache_directory] = ACTIONS(249),
    [anon_sym_config_dir] = ACTIONS(249),
    [anon_sym_config_directory] = ACTIONS(249),
    [anon_sym_config_local_dir] = ACTIONS(249),
    [anon_sym_config_local_directory] = ACTIONS(249),
    [anon_sym_data_dir] = ACTIONS(249),
    [anon_sym_data_directory] = ACTIONS(249),
    [anon_sym_data_local_dir] = ACTIONS(249),
    [anon_sym_data_local_directory] = ACTIONS(249),
    [anon_sym_executable_dir] = ACTIONS(249),
    [anon_sym_executable_directory] = ACTIONS(249),
    [anon_sym_home_dir] = ACTIONS(249),
    [anon_sym_home_directory] = ACTIONS(249),
    [anon_sym_set] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_alias] = ACTIONS(253),
    [aux_sym_import_token1] = ACTIONS(253),
    [aux_sym_mod_token1] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_assert] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_arch] = ACTIONS(253),
    [anon_sym_num_cpus] = ACTIONS(253),
    [anon_sym_os] = ACTIONS(253),
    [anon_sym_os_family] = ACTIONS(253),
    [anon_sym_shell] = ACTIONS(253),
    [anon_sym_env_var] = ACTIONS(253),
    [anon_sym_env_var_or_default] = ACTIONS(253),
    [anon_sym_env] = ACTIONS(253),
    [anon_sym_is_dependency] = ACTIONS(253),
    [anon_sym_invocation_dir] = ACTIONS(253),
    [anon_sym_invocation_dir_native] = ACTIONS(253),
    [anon_sym_invocation_directory] = ACTIONS(253),
    [anon_sym_invocation_directory_native] = ACTIONS(253),
    [anon_sym_justfile] = ACTIONS(253),
    [anon_sym_justfile_dir] = ACTIONS(253),
    [anon_sym_justfile_directory] = ACTIONS(253),
    [anon_sym_source_dir] = ACTIONS(253),
    [anon_sym_source_directory] = ACTIONS(253),
    [anon_sym_source_file] = ACTIONS(253),
    [anon_sym_just_executable] = ACTIONS(253),
    [anon_sym_just_pid] = ACTIONS(253),
    [anon_sym_append] = ACTIONS(253),
    [anon_sym_prepend] = ACTIONS(253),
    [anon_sym_encode_uri_component] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_replace] = ACTIONS(253),
    [anon_sym_replace_regex] = ACTIONS(253),
    [anon_sym_trim] = ACTIONS(253),
    [anon_sym_trim_end] = ACTIONS(253),
    [anon_sym_trim_end_match] = ACTIONS(253),
    [anon_sym_trim_end_matches] = ACTIONS(253),
    [anon_sym_trim_start] = ACTIONS(253),
    [anon_sym_trim_start_match] = ACTIONS(253),
    [anon_sym_trim_start_matches] = ACTIONS(253),
    [anon_sym_capitalize] = ACTIONS(253),
    [anon_sym_kebabcase] = ACTIONS(253),
    [anon_sym_lowercamelcase] = ACTIONS(253),
    [anon_sym_lowercase] = ACTIONS(253),
    [anon_sym_shoutykebabcase] = ACTIONS(253),
    [anon_sym_shoutysnakecase] = ACTIONS(253),
    [anon_sym_snakecase] = ACTIONS(253),
    [anon_sym_titlecase] = ACTIONS(253),
    [anon_sym_uppercamelcase] = ACTIONS(253),
    [anon_sym_uppercase] = ACTIONS(253),
    [anon_sym_absolute_path] = ACTIONS(253),
    [anon_sym_canonicalize] = ACTIONS(253),
    [anon_sym_extension] = ACTIONS(253),
    [anon_sym_file_name] = ACTIONS(253),
    [anon_sym_file_stem] = ACTIONS(253),
    [anon_sym_parent_dir] = ACTIONS(253),
    [anon_sym_parent_directory] = ACTIONS(253),
    [anon_sym_without_extension] = ACTIONS(253),
    [anon_sym_clean] = ACTIONS(253),
    [anon_sym_join] = ACTIONS(253),
    [anon_sym_path_exists] = ACTIONS(253),
    [anon_sym_error] = ACTIONS(253),
    [anon_sym_blake3] = ACTIONS(253),
    [anon_sym_blake3_file] = ACTIONS(253),
    [anon_sym_sha256] = ACTIONS(253),
    [anon_sym_sha256_file] = ACTIONS(253),
    [anon_sym_uuid] = ACTIONS(253),
    [anon_sym_choose] = ACTIONS(253),
    [anon_sym_datetime] = ACTIONS(253),
    [anon_sym_datetime_utc] = ACTIONS(253),
    [anon_sym_semver_matches] = ACTIONS(253),
    [anon_sym_cache_dir] = ACTIONS(253),
    [anon_sym_cache_directory] = ACTIONS(253),
    [anon_sym_config_dir] = ACTIONS(253),
    [anon_sym_config_directory] = ACTIONS(253),
    [anon_sym_config_local_dir] = ACTIONS(253),
    [anon_sym_config_local_directory] = ACTIONS(253),
    [anon_sym_data_dir] = ACTIONS(253),
    [anon_sym_data_directory] = ACTIONS(253),
    [anon_sym_data_local_dir] = ACTIONS(253),
    [anon_sym_data_local_directory] = ACTIONS(253),
    [anon_sym_executable_dir] = ACTIONS(253),
    [anon_sym_executable_directory] = ACTIONS(253),
    [anon_sym_home_dir] = ACTIONS(253),
    [anon_sym_home_directory] = ACTIONS(253),
    [anon_sym_set] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [59] = {
    [sym_comment] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_identifier] = ACTIONS(257),
    [anon_sym_alias] = ACTIONS(257),
    [aux_sym_import_token1] = ACTIONS(257),
    [aux_sym_mod_token1] = ACTIONS(257),
    [anon_sym_if] = ACTIONS(257),
    [anon_sym_assert] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_arch] = ACTIONS(257),
    [anon_sym_num_cpus] = ACTIONS(257),
    [anon_sym_os] = ACTIONS(257),
    [anon_sym_os_family] = ACTIONS(257),
    [anon_sym_shell] = ACTIONS(257),
    [anon_sym_env_var] = ACTIONS(257),
    [anon_sym_env_var_or_default] = ACTIONS(257),
    [anon_sym_env] = ACTIONS(257),
    [anon_sym_is_dependency] = ACTIONS(257),
    [anon_sym_invocation_dir] = ACTIONS(257),
    [anon_sym_invocation_dir_native] = ACTIONS(257),
    [anon_sym_invocation_directory] = ACTIONS(257),
    [anon_sym_invocation_directory_native] = ACTIONS(257),
    [anon_sym_justfile] = ACTIONS(257),
    [anon_sym_justfile_dir] = ACTIONS(257),
    [anon_sym_justfile_directory] = ACTIONS(257),
    [anon_sym_source_dir] = ACTIONS(257),
    [anon_sym_source_directory] = ACTIONS(257),
    [anon_sym_source_file] = ACTIONS(257),
    [anon_sym_just_executable] = ACTIONS(257),
    [anon_sym_just_pid] = ACTIONS(257),
    [anon_sym_append] = ACTIONS(257),
    [anon_sym_prepend] = ACTIONS(257),
    [anon_sym_encode_uri_component] = ACTIONS(257),
    [anon_sym_quote] = ACTIONS(257),
    [anon_sym_replace] = ACTIONS(257),
    [anon_sym_replace_regex] = ACTIONS(257),
    [anon_sym_trim] = ACTIONS(257),
    [anon_sym_trim_end] = ACTIONS(257),
    [anon_sym_trim_end_match] = ACTIONS(257),
    [anon_sym_trim_end_matches] = ACTIONS(257),
    [anon_sym_trim_start] = ACTIONS(257),
    [anon_sym_trim_start_match] = ACTIONS(257),
    [anon_sym_trim_start_matches] = ACTIONS(257),
    [anon_sym_capitalize] = ACTIONS(257),
    [anon_sym_kebabcase] = ACTIONS(257),
    [anon_sym_lowercamelcase] = ACTIONS(257),
    [anon_sym_lowercase] = ACTIONS(257),
    [anon_sym_shoutykebabcase] = ACTIONS(257),
    [anon_sym_shoutysnakecase] = ACTIONS(257),
    [anon_sym_snakecase] = ACTIONS(257),
    [anon_sym_titlecase] = ACTIONS(257),
    [anon_sym_uppercamelcase] = ACTIONS(257),
    [anon_sym_uppercase] = ACTIONS(257),
    [anon_sym_absolute_path] = ACTIONS(257),
    [anon_sym_canonicalize] = ACTIONS(257),
    [anon_sym_extension] = ACTIONS(257),
    [anon_sym_file_name] = ACTIONS(257),
    [anon_sym_file_stem] = ACTIONS(257),
    [anon_sym_parent_dir] = ACTIONS(257),
    [anon_sym_parent_directory] = ACTIONS(257),
    [anon_sym_without_extension] = ACTIONS(257),
    [anon_sym_clean] = ACTIONS(257),
    [anon_sym_join] = ACTIONS(257),
    [anon_sym_path_exists] = ACTIONS(257),
    [anon_sym_error] = ACTIONS(257),
    [anon_sym_blake3] = ACTIONS(257),
    [anon_sym_blake3_file] = ACTIONS(257),
    [anon_sym_sha256] = ACTIONS(257),
    [anon_sym_sha256_file] = ACTIONS(257),
    [anon_sym_uuid] = ACTIONS(257),
    [anon_sym_choose] = ACTIONS(257),
    [anon_sym_datetime] = ACTIONS(257),
    [anon_sym_datetime_utc] = ACTIONS(257),
    [anon_sym_semver_matches] = ACTIONS(257),
    [anon_sym_cache_dir] = ACTIONS(257),
    [anon_sym_cache_directory] = ACTIONS(257),
    [anon_sym_config_dir] = ACTIONS(257),
    [anon_sym_config_directory] = ACTIONS(257),
    [anon_sym_config_local_dir] = ACTIONS(257),
    [anon_sym_config_local_directory] = ACTIONS(257),
    [anon_sym_data_dir] = ACTIONS(257),
    [anon_sym_data_directory] = ACTIONS(257),
    [anon_sym_data_local_dir] = ACTIONS(257),
    [anon_sym_data_local_directory] = ACTIONS(257),
    [anon_sym_executable_dir] = ACTIONS(257),
    [anon_sym_executable_directory] = ACTIONS(257),
    [anon_sym_home_dir] = ACTIONS(257),
    [anon_sym_home_directory] = ACTIONS(257),
    [anon_sym_set] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [60] = {
    [sym_comment] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_alias] = ACTIONS(261),
    [aux_sym_import_token1] = ACTIONS(261),
    [aux_sym_mod_token1] = ACTIONS(261),
    [anon_sym_if] = ACTIONS(261),
    [anon_sym_assert] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_arch] = ACTIONS(261),
    [anon_sym_num_cpus] = ACTIONS(261),
    [anon_sym_os] = ACTIONS(261),
    [anon_sym_os_family] = ACTIONS(261),
    [anon_sym_shell] = ACTIONS(261),
    [anon_sym_env_var] = ACTIONS(261),
    [anon_sym_env_var_or_default] = ACTIONS(261),
    [anon_sym_env] = ACTIONS(261),
    [anon_sym_is_dependency] = ACTIONS(261),
    [anon_sym_invocation_dir] = ACTIONS(261),
    [anon_sym_invocation_dir_native] = ACTIONS(261),
    [anon_sym_invocation_directory] = ACTIONS(261),
    [anon_sym_invocation_directory_native] = ACTIONS(261),
    [anon_sym_justfile] = ACTIONS(261),
    [anon_sym_justfile_dir] = ACTIONS(261),
    [anon_sym_justfile_directory] = ACTIONS(261),
    [anon_sym_source_dir] = ACTIONS(261),
    [anon_sym_source_directory] = ACTIONS(261),
    [anon_sym_source_file] = ACTIONS(261),
    [anon_sym_just_executable] = ACTIONS(261),
    [anon_sym_just_pid] = ACTIONS(261),
    [anon_sym_append] = ACTIONS(261),
    [anon_sym_prepend] = ACTIONS(261),
    [anon_sym_encode_uri_component] = ACTIONS(261),
    [anon_sym_quote] = ACTIONS(261),
    [anon_sym_replace] = ACTIONS(261),
    [anon_sym_replace_regex] = ACTIONS(261),
    [anon_sym_trim] = ACTIONS(261),
    [anon_sym_trim_end] = ACTIONS(261),
    [anon_sym_trim_end_match] = ACTIONS(261),
    [anon_sym_trim_end_matches] = ACTIONS(261),
    [anon_sym_trim_start] = ACTIONS(261),
    [anon_sym_trim_start_match] = ACTIONS(261),
    [anon_sym_trim_start_matches] = ACTIONS(261),
    [anon_sym_capitalize] = ACTIONS(261),
    [anon_sym_kebabcase] = ACTIONS(261),
    [anon_sym_lowercamelcase] = ACTIONS(261),
    [anon_sym_lowercase] = ACTIONS(261),
    [anon_sym_shoutykebabcase] = ACTIONS(261),
    [anon_sym_shoutysnakecase] = ACTIONS(261),
    [anon_sym_snakecase] = ACTIONS(261),
    [anon_sym_titlecase] = ACTIONS(261),
    [anon_sym_uppercamelcase] = ACTIONS(261),
    [anon_sym_uppercase] = ACTIONS(261),
    [anon_sym_absolute_path] = ACTIONS(261),
    [anon_sym_canonicalize] = ACTIONS(261),
    [anon_sym_extension] = ACTIONS(261),
    [anon_sym_file_name] = ACTIONS(261),
    [anon_sym_file_stem] = ACTIONS(261),
    [anon_sym_parent_dir] = ACTIONS(261),
    [anon_sym_parent_directory] = ACTIONS(261),
    [anon_sym_without_extension] = ACTIONS(261),
    [anon_sym_clean] = ACTIONS(261),
    [anon_sym_join] = ACTIONS(261),
    [anon_sym_path_exists] = ACTIONS(261),
    [anon_sym_error] = ACTIONS(261),
    [anon_sym_blake3] = ACTIONS(261),
    [anon_sym_blake3_file] = ACTIONS(261),
    [anon_sym_sha256] = ACTIONS(261),
    [anon_sym_sha256_file] = ACTIONS(261),
    [anon_sym_uuid] = ACTIONS(261),
    [anon_sym_choose] = ACTIONS(261),
    [anon_sym_datetime] = ACTIONS(261),
    [anon_sym_datetime_utc] = ACTIONS(261),
    [anon_sym_semver_matches] = ACTIONS(261),
    [anon_sym_cache_dir] = ACTIONS(261),
    [anon_sym_cache_directory] = ACTIONS(261),
    [anon_sym_config_dir] = ACTIONS(261),
    [anon_sym_config_directory] = ACTIONS(261),
    [anon_sym_config_local_dir] = ACTIONS(261),
    [anon_sym_config_local_directory] = ACTIONS(261),
    [anon_sym_data_dir] = ACTIONS(261),
    [anon_sym_data_directory] = ACTIONS(261),
    [anon_sym_data_local_dir] = ACTIONS(261),
    [anon_sym_data_local_directory] = ACTIONS(261),
    [anon_sym_executable_dir] = ACTIONS(261),
    [anon_sym_executable_directory] = ACTIONS(261),
    [anon_sym_home_dir] = ACTIONS(261),
    [anon_sym_home_directory] = ACTIONS(261),
    [anon_sym_set] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [61] = {
    [sym_comment] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_identifier] = ACTIONS(265),
    [anon_sym_alias] = ACTIONS(265),
    [aux_sym_import_token1] = ACTIONS(265),
    [aux_sym_mod_token1] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_assert] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_arch] = ACTIONS(265),
    [anon_sym_num_cpus] = ACTIONS(265),
    [anon_sym_os] = ACTIONS(265),
    [anon_sym_os_family] = ACTIONS(265),
    [anon_sym_shell] = ACTIONS(265),
    [anon_sym_env_var] = ACTIONS(265),
    [anon_sym_env_var_or_default] = ACTIONS(265),
    [anon_sym_env] = ACTIONS(265),
    [anon_sym_is_dependency] = ACTIONS(265),
    [anon_sym_invocation_dir] = ACTIONS(265),
    [anon_sym_invocation_dir_native] = ACTIONS(265),
    [anon_sym_invocation_directory] = ACTIONS(265),
    [anon_sym_invocation_directory_native] = ACTIONS(265),
    [anon_sym_justfile] = ACTIONS(265),
    [anon_sym_justfile_dir] = ACTIONS(265),
    [anon_sym_justfile_directory] = ACTIONS(265),
    [anon_sym_source_dir] = ACTIONS(265),
    [anon_sym_source_directory] = ACTIONS(265),
    [anon_sym_source_file] = ACTIONS(265),
    [anon_sym_just_executable] = ACTIONS(265),
    [anon_sym_just_pid] = ACTIONS(265),
    [anon_sym_append] = ACTIONS(265),
    [anon_sym_prepend] = ACTIONS(265),
    [anon_sym_encode_uri_component] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_replace] = ACTIONS(265),
    [anon_sym_replace_regex] = ACTIONS(265),
    [anon_sym_trim] = ACTIONS(265),
    [anon_sym_trim_end] = ACTIONS(265),
    [anon_sym_trim_end_match] = ACTIONS(265),
    [anon_sym_trim_end_matches] = ACTIONS(265),
    [anon_sym_trim_start] = ACTIONS(265),
    [anon_sym_trim_start_match] = ACTIONS(265),
    [anon_sym_trim_start_matches] = ACTIONS(265),
    [anon_sym_capitalize] = ACTIONS(265),
    [anon_sym_kebabcase] = ACTIONS(265),
    [anon_sym_lowercamelcase] = ACTIONS(265),
    [anon_sym_lowercase] = ACTIONS(265),
    [anon_sym_shoutykebabcase] = ACTIONS(265),
    [anon_sym_shoutysnakecase] = ACTIONS(265),
    [anon_sym_snakecase] = ACTIONS(265),
    [anon_sym_titlecase] = ACTIONS(265),
    [anon_sym_uppercamelcase] = ACTIONS(265),
    [anon_sym_uppercase] = ACTIONS(265),
    [anon_sym_absolute_path] = ACTIONS(265),
    [anon_sym_canonicalize] = ACTIONS(265),
    [anon_sym_extension] = ACTIONS(265),
    [anon_sym_file_name] = ACTIONS(265),
    [anon_sym_file_stem] = ACTIONS(265),
    [anon_sym_parent_dir] = ACTIONS(265),
    [anon_sym_parent_directory] = ACTIONS(265),
    [anon_sym_without_extension] = ACTIONS(265),
    [anon_sym_clean] = ACTIONS(265),
    [anon_sym_join] = ACTIONS(265),
    [anon_sym_path_exists] = ACTIONS(265),
    [anon_sym_error] = ACTIONS(265),
    [anon_sym_blake3] = ACTIONS(265),
    [anon_sym_blake3_file] = ACTIONS(265),
    [anon_sym_sha256] = ACTIONS(265),
    [anon_sym_sha256_file] = ACTIONS(265),
    [anon_sym_uuid] = ACTIONS(265),
    [anon_sym_choose] = ACTIONS(265),
    [anon_sym_datetime] = ACTIONS(265),
    [anon_sym_datetime_utc] = ACTIONS(265),
    [anon_sym_semver_matches] = ACTIONS(265),
    [anon_sym_cache_dir] = ACTIONS(265),
    [anon_sym_cache_directory] = ACTIONS(265),
    [anon_sym_config_dir] = ACTIONS(265),
    [anon_sym_config_directory] = ACTIONS(265),
    [anon_sym_config_local_dir] = ACTIONS(265),
    [anon_sym_config_local_directory] = ACTIONS(265),
    [anon_sym_data_dir] = ACTIONS(265),
    [anon_sym_data_directory] = ACTIONS(265),
    [anon_sym_data_local_dir] = ACTIONS(265),
    [anon_sym_data_local_directory] = ACTIONS(265),
    [anon_sym_executable_dir] = ACTIONS(265),
    [anon_sym_executable_directory] = ACTIONS(265),
    [anon_sym_home_dir] = ACTIONS(265),
    [anon_sym_home_directory] = ACTIONS(265),
    [anon_sym_set] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [62] = {
    [sym_comment] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_identifier] = ACTIONS(269),
    [anon_sym_alias] = ACTIONS(269),
    [aux_sym_import_token1] = ACTIONS(269),
    [aux_sym_mod_token1] = ACTIONS(269),
    [anon_sym_if] = ACTIONS(269),
    [anon_sym_assert] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_arch] = ACTIONS(269),
    [anon_sym_num_cpus] = ACTIONS(269),
    [anon_sym_os] = ACTIONS(269),
    [anon_sym_os_family] = ACTIONS(269),
    [anon_sym_shell] = ACTIONS(269),
    [anon_sym_env_var] = ACTIONS(269),
    [anon_sym_env_var_or_default] = ACTIONS(269),
    [anon_sym_env] = ACTIONS(269),
    [anon_sym_is_dependency] = ACTIONS(269),
    [anon_sym_invocation_dir] = ACTIONS(269),
    [anon_sym_invocation_dir_native] = ACTIONS(269),
    [anon_sym_invocation_directory] = ACTIONS(269),
    [anon_sym_invocation_directory_native] = ACTIONS(269),
    [anon_sym_justfile] = ACTIONS(269),
    [anon_sym_justfile_dir] = ACTIONS(269),
    [anon_sym_justfile_directory] = ACTIONS(269),
    [anon_sym_source_dir] = ACTIONS(269),
    [anon_sym_source_directory] = ACTIONS(269),
    [anon_sym_source_file] = ACTIONS(269),
    [anon_sym_just_executable] = ACTIONS(269),
    [anon_sym_just_pid] = ACTIONS(269),
    [anon_sym_append] = ACTIONS(269),
    [anon_sym_prepend] = ACTIONS(269),
    [anon_sym_encode_uri_component] = ACTIONS(269),
    [anon_sym_quote] = ACTIONS(269),
    [anon_sym_replace] = ACTIONS(269),
    [anon_sym_replace_regex] = ACTIONS(269),
    [anon_sym_trim] = ACTIONS(269),
    [anon_sym_trim_end] = ACTIONS(269),
    [anon_sym_trim_end_match] = ACTIONS(269),
    [anon_sym_trim_end_matches] = ACTIONS(269),
    [anon_sym_trim_start] = ACTIONS(269),
    [anon_sym_trim_start_match] = ACTIONS(269),
    [anon_sym_trim_start_matches] = ACTIONS(269),
    [anon_sym_capitalize] = ACTIONS(269),
    [anon_sym_kebabcase] = ACTIONS(269),
    [anon_sym_lowercamelcase] = ACTIONS(269),
    [anon_sym_lowercase] = ACTIONS(269),
    [anon_sym_shoutykebabcase] = ACTIONS(269),
    [anon_sym_shoutysnakecase] = ACTIONS(269),
    [anon_sym_snakecase] = ACTIONS(269),
    [anon_sym_titlecase] = ACTIONS(269),
    [anon_sym_uppercamelcase] = ACTIONS(269),
    [anon_sym_uppercase] = ACTIONS(269),
    [anon_sym_absolute_path] = ACTIONS(269),
    [anon_sym_canonicalize] = ACTIONS(269),
    [anon_sym_extension] = ACTIONS(269),
    [anon_sym_file_name] = ACTIONS(269),
    [anon_sym_file_stem] = ACTIONS(269),
    [anon_sym_parent_dir] = ACTIONS(269),
    [anon_sym_parent_directory] = ACTIONS(269),
    [anon_sym_without_extension] = ACTIONS(269),
    [anon_sym_clean] = ACTIONS(269),
    [anon_sym_join] = ACTIONS(269),
    [anon_sym_path_exists] = ACTIONS(269),
    [anon_sym_error] = ACTIONS(269),
    [anon_sym_blake3] = ACTIONS(269),
    [anon_sym_blake3_file] = ACTIONS(269),
    [anon_sym_sha256] = ACTIONS(269),
    [anon_sym_sha256_file] = ACTIONS(269),
    [anon_sym_uuid] = ACTIONS(269),
    [anon_sym_choose] = ACTIONS(269),
    [anon_sym_datetime] = ACTIONS(269),
    [anon_sym_datetime_utc] = ACTIONS(269),
    [anon_sym_semver_matches] = ACTIONS(269),
    [anon_sym_cache_dir] = ACTIONS(269),
    [anon_sym_cache_directory] = ACTIONS(269),
    [anon_sym_config_dir] = ACTIONS(269),
    [anon_sym_config_directory] = ACTIONS(269),
    [anon_sym_config_local_dir] = ACTIONS(269),
    [anon_sym_config_local_directory] = ACTIONS(269),
    [anon_sym_data_dir] = ACTIONS(269),
    [anon_sym_data_directory] = ACTIONS(269),
    [anon_sym_data_local_dir] = ACTIONS(269),
    [anon_sym_data_local_directory] = ACTIONS(269),
    [anon_sym_executable_dir] = ACTIONS(269),
    [anon_sym_executable_directory] = ACTIONS(269),
    [anon_sym_home_dir] = ACTIONS(269),
    [anon_sym_home_directory] = ACTIONS(269),
    [anon_sym_set] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(267),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [63] = {
    [sym_comment] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym_identifier] = ACTIONS(273),
    [anon_sym_alias] = ACTIONS(273),
    [aux_sym_import_token1] = ACTIONS(273),
    [aux_sym_mod_token1] = ACTIONS(273),
    [anon_sym_if] = ACTIONS(273),
    [anon_sym_assert] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_arch] = ACTIONS(273),
    [anon_sym_num_cpus] = ACTIONS(273),
    [anon_sym_os] = ACTIONS(273),
    [anon_sym_os_family] = ACTIONS(273),
    [anon_sym_shell] = ACTIONS(273),
    [anon_sym_env_var] = ACTIONS(273),
    [anon_sym_env_var_or_default] = ACTIONS(273),
    [anon_sym_env] = ACTIONS(273),
    [anon_sym_is_dependency] = ACTIONS(273),
    [anon_sym_invocation_dir] = ACTIONS(273),
    [anon_sym_invocation_dir_native] = ACTIONS(273),
    [anon_sym_invocation_directory] = ACTIONS(273),
    [anon_sym_invocation_directory_native] = ACTIONS(273),
    [anon_sym_justfile] = ACTIONS(273),
    [anon_sym_justfile_dir] = ACTIONS(273),
    [anon_sym_justfile_directory] = ACTIONS(273),
    [anon_sym_source_dir] = ACTIONS(273),
    [anon_sym_source_directory] = ACTIONS(273),
    [anon_sym_source_file] = ACTIONS(273),
    [anon_sym_just_executable] = ACTIONS(273),
    [anon_sym_just_pid] = ACTIONS(273),
    [anon_sym_append] = ACTIONS(273),
    [anon_sym_prepend] = ACTIONS(273),
    [anon_sym_encode_uri_component] = ACTIONS(273),
    [anon_sym_quote] = ACTIONS(273),
    [anon_sym_replace] = ACTIONS(273),
    [anon_sym_replace_regex] = ACTIONS(273),
    [anon_sym_trim] = ACTIONS(273),
    [anon_sym_trim_end] = ACTIONS(273),
    [anon_sym_trim_end_match] = ACTIONS(273),
    [anon_sym_trim_end_matches] = ACTIONS(273),
    [anon_sym_trim_start] = ACTIONS(273),
    [anon_sym_trim_start_match] = ACTIONS(273),
    [anon_sym_trim_start_matches] = ACTIONS(273),
    [anon_sym_capitalize] = ACTIONS(273),
    [anon_sym_kebabcase] = ACTIONS(273),
    [anon_sym_lowercamelcase] = ACTIONS(273),
    [anon_sym_lowercase] = ACTIONS(273),
    [anon_sym_shoutykebabcase] = ACTIONS(273),
    [anon_sym_shoutysnakecase] = ACTIONS(273),
    [anon_sym_snakecase] = ACTIONS(273),
    [anon_sym_titlecase] = ACTIONS(273),
    [anon_sym_uppercamelcase] = ACTIONS(273),
    [anon_sym_uppercase] = ACTIONS(273),
    [anon_sym_absolute_path] = ACTIONS(273),
    [anon_sym_canonicalize] = ACTIONS(273),
    [anon_sym_extension] = ACTIONS(273),
    [anon_sym_file_name] = ACTIONS(273),
    [anon_sym_file_stem] = ACTIONS(273),
    [anon_sym_parent_dir] = ACTIONS(273),
    [anon_sym_parent_directory] = ACTIONS(273),
    [anon_sym_without_extension] = ACTIONS(273),
    [anon_sym_clean] = ACTIONS(273),
    [anon_sym_join] = ACTIONS(273),
    [anon_sym_path_exists] = ACTIONS(273),
    [anon_sym_error] = ACTIONS(273),
    [anon_sym_blake3] = ACTIONS(273),
    [anon_sym_blake3_file] = ACTIONS(273),
    [anon_sym_sha256] = ACTIONS(273),
    [anon_sym_sha256_file] = ACTIONS(273),
    [anon_sym_uuid] = ACTIONS(273),
    [anon_sym_choose] = ACTIONS(273),
    [anon_sym_datetime] = ACTIONS(273),
    [anon_sym_datetime_utc] = ACTIONS(273),
    [anon_sym_semver_matches] = ACTIONS(273),
    [anon_sym_cache_dir] = ACTIONS(273),
    [anon_sym_cache_directory] = ACTIONS(273),
    [anon_sym_config_dir] = ACTIONS(273),
    [anon_sym_config_directory] = ACTIONS(273),
    [anon_sym_config_local_dir] = ACTIONS(273),
    [anon_sym_config_local_directory] = ACTIONS(273),
    [anon_sym_data_dir] = ACTIONS(273),
    [anon_sym_data_directory] = ACTIONS(273),
    [anon_sym_data_local_dir] = ACTIONS(273),
    [anon_sym_data_local_directory] = ACTIONS(273),
    [anon_sym_executable_dir] = ACTIONS(273),
    [anon_sym_executable_directory] = ACTIONS(273),
    [anon_sym_home_dir] = ACTIONS(273),
    [anon_sym_home_directory] = ACTIONS(273),
    [anon_sym_set] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [64] = {
    [sym_comment] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_identifier] = ACTIONS(277),
    [anon_sym_alias] = ACTIONS(277),
    [aux_sym_import_token1] = ACTIONS(277),
    [aux_sym_mod_token1] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_assert] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_arch] = ACTIONS(277),
    [anon_sym_num_cpus] = ACTIONS(277),
    [anon_sym_os] = ACTIONS(277),
    [anon_sym_os_family] = ACTIONS(277),
    [anon_sym_shell] = ACTIONS(277),
    [anon_sym_env_var] = ACTIONS(277),
    [anon_sym_env_var_or_default] = ACTIONS(277),
    [anon_sym_env] = ACTIONS(277),
    [anon_sym_is_dependency] = ACTIONS(277),
    [anon_sym_invocation_dir] = ACTIONS(277),
    [anon_sym_invocation_dir_native] = ACTIONS(277),
    [anon_sym_invocation_directory] = ACTIONS(277),
    [anon_sym_invocation_directory_native] = ACTIONS(277),
    [anon_sym_justfile] = ACTIONS(277),
    [anon_sym_justfile_dir] = ACTIONS(277),
    [anon_sym_justfile_directory] = ACTIONS(277),
    [anon_sym_source_dir] = ACTIONS(277),
    [anon_sym_source_directory] = ACTIONS(277),
    [anon_sym_source_file] = ACTIONS(277),
    [anon_sym_just_executable] = ACTIONS(277),
    [anon_sym_just_pid] = ACTIONS(277),
    [anon_sym_append] = ACTIONS(277),
    [anon_sym_prepend] = ACTIONS(277),
    [anon_sym_encode_uri_component] = ACTIONS(277),
    [anon_sym_quote] = ACTIONS(277),
    [anon_sym_replace] = ACTIONS(277),
    [anon_sym_replace_regex] = ACTIONS(277),
    [anon_sym_trim] = ACTIONS(277),
    [anon_sym_trim_end] = ACTIONS(277),
    [anon_sym_trim_end_match] = ACTIONS(277),
    [anon_sym_trim_end_matches] = ACTIONS(277),
    [anon_sym_trim_start] = ACTIONS(277),
    [anon_sym_trim_start_match] = ACTIONS(277),
    [anon_sym_trim_start_matches] = ACTIONS(277),
    [anon_sym_capitalize] = ACTIONS(277),
    [anon_sym_kebabcase] = ACTIONS(277),
    [anon_sym_lowercamelcase] = ACTIONS(277),
    [anon_sym_lowercase] = ACTIONS(277),
    [anon_sym_shoutykebabcase] = ACTIONS(277),
    [anon_sym_shoutysnakecase] = ACTIONS(277),
    [anon_sym_snakecase] = ACTIONS(277),
    [anon_sym_titlecase] = ACTIONS(277),
    [anon_sym_uppercamelcase] = ACTIONS(277),
    [anon_sym_uppercase] = ACTIONS(277),
    [anon_sym_absolute_path] = ACTIONS(277),
    [anon_sym_canonicalize] = ACTIONS(277),
    [anon_sym_extension] = ACTIONS(277),
    [anon_sym_file_name] = ACTIONS(277),
    [anon_sym_file_stem] = ACTIONS(277),
    [anon_sym_parent_dir] = ACTIONS(277),
    [anon_sym_parent_directory] = ACTIONS(277),
    [anon_sym_without_extension] = ACTIONS(277),
    [anon_sym_clean] = ACTIONS(277),
    [anon_sym_join] = ACTIONS(277),
    [anon_sym_path_exists] = ACTIONS(277),
    [anon_sym_error] = ACTIONS(277),
    [anon_sym_blake3] = ACTIONS(277),
    [anon_sym_blake3_file] = ACTIONS(277),
    [anon_sym_sha256] = ACTIONS(277),
    [anon_sym_sha256_file] = ACTIONS(277),
    [anon_sym_uuid] = ACTIONS(277),
    [anon_sym_choose] = ACTIONS(277),
    [anon_sym_datetime] = ACTIONS(277),
    [anon_sym_datetime_utc] = ACTIONS(277),
    [anon_sym_semver_matches] = ACTIONS(277),
    [anon_sym_cache_dir] = ACTIONS(277),
    [anon_sym_cache_directory] = ACTIONS(277),
    [anon_sym_config_dir] = ACTIONS(277),
    [anon_sym_config_directory] = ACTIONS(277),
    [anon_sym_config_local_dir] = ACTIONS(277),
    [anon_sym_config_local_directory] = ACTIONS(277),
    [anon_sym_data_dir] = ACTIONS(277),
    [anon_sym_data_directory] = ACTIONS(277),
    [anon_sym_data_local_dir] = ACTIONS(277),
    [anon_sym_data_local_directory] = ACTIONS(277),
    [anon_sym_executable_dir] = ACTIONS(277),
    [anon_sym_executable_directory] = ACTIONS(277),
    [anon_sym_home_dir] = ACTIONS(277),
    [anon_sym_home_directory] = ACTIONS(277),
    [anon_sym_set] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [65] = {
    [sym_comment] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_identifier] = ACTIONS(281),
    [anon_sym_alias] = ACTIONS(281),
    [aux_sym_import_token1] = ACTIONS(281),
    [aux_sym_mod_token1] = ACTIONS(281),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_assert] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_arch] = ACTIONS(281),
    [anon_sym_num_cpus] = ACTIONS(281),
    [anon_sym_os] = ACTIONS(281),
    [anon_sym_os_family] = ACTIONS(281),
    [anon_sym_shell] = ACTIONS(281),
    [anon_sym_env_var] = ACTIONS(281),
    [anon_sym_env_var_or_default] = ACTIONS(281),
    [anon_sym_env] = ACTIONS(281),
    [anon_sym_is_dependency] = ACTIONS(281),
    [anon_sym_invocation_dir] = ACTIONS(281),
    [anon_sym_invocation_dir_native] = ACTIONS(281),
    [anon_sym_invocation_directory] = ACTIONS(281),
    [anon_sym_invocation_directory_native] = ACTIONS(281),
    [anon_sym_justfile] = ACTIONS(281),
    [anon_sym_justfile_dir] = ACTIONS(281),
    [anon_sym_justfile_directory] = ACTIONS(281),
    [anon_sym_source_dir] = ACTIONS(281),
    [anon_sym_source_directory] = ACTIONS(281),
    [anon_sym_source_file] = ACTIONS(281),
    [anon_sym_just_executable] = ACTIONS(281),
    [anon_sym_just_pid] = ACTIONS(281),
    [anon_sym_append] = ACTIONS(281),
    [anon_sym_prepend] = ACTIONS(281),
    [anon_sym_encode_uri_component] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_replace] = ACTIONS(281),
    [anon_sym_replace_regex] = ACTIONS(281),
    [anon_sym_trim] = ACTIONS(281),
    [anon_sym_trim_end] = ACTIONS(281),
    [anon_sym_trim_end_match] = ACTIONS(281),
    [anon_sym_trim_end_matches] = ACTIONS(281),
    [anon_sym_trim_start] = ACTIONS(281),
    [anon_sym_trim_start_match] = ACTIONS(281),
    [anon_sym_trim_start_matches] = ACTIONS(281),
    [anon_sym_capitalize] = ACTIONS(281),
    [anon_sym_kebabcase] = ACTIONS(281),
    [anon_sym_lowercamelcase] = ACTIONS(281),
    [anon_sym_lowercase] = ACTIONS(281),
    [anon_sym_shoutykebabcase] = ACTIONS(281),
    [anon_sym_shoutysnakecase] = ACTIONS(281),
    [anon_sym_snakecase] = ACTIONS(281),
    [anon_sym_titlecase] = ACTIONS(281),
    [anon_sym_uppercamelcase] = ACTIONS(281),
    [anon_sym_uppercase] = ACTIONS(281),
    [anon_sym_absolute_path] = ACTIONS(281),
    [anon_sym_canonicalize] = ACTIONS(281),
    [anon_sym_extension] = ACTIONS(281),
    [anon_sym_file_name] = ACTIONS(281),
    [anon_sym_file_stem] = ACTIONS(281),
    [anon_sym_parent_dir] = ACTIONS(281),
    [anon_sym_parent_directory] = ACTIONS(281),
    [anon_sym_without_extension] = ACTIONS(281),
    [anon_sym_clean] = ACTIONS(281),
    [anon_sym_join] = ACTIONS(281),
    [anon_sym_path_exists] = ACTIONS(281),
    [anon_sym_error] = ACTIONS(281),
    [anon_sym_blake3] = ACTIONS(281),
    [anon_sym_blake3_file] = ACTIONS(281),
    [anon_sym_sha256] = ACTIONS(281),
    [anon_sym_sha256_file] = ACTIONS(281),
    [anon_sym_uuid] = ACTIONS(281),
    [anon_sym_choose] = ACTIONS(281),
    [anon_sym_datetime] = ACTIONS(281),
    [anon_sym_datetime_utc] = ACTIONS(281),
    [anon_sym_semver_matches] = ACTIONS(281),
    [anon_sym_cache_dir] = ACTIONS(281),
    [anon_sym_cache_directory] = ACTIONS(281),
    [anon_sym_config_dir] = ACTIONS(281),
    [anon_sym_config_directory] = ACTIONS(281),
    [anon_sym_config_local_dir] = ACTIONS(281),
    [anon_sym_config_local_directory] = ACTIONS(281),
    [anon_sym_data_dir] = ACTIONS(281),
    [anon_sym_data_directory] = ACTIONS(281),
    [anon_sym_data_local_dir] = ACTIONS(281),
    [anon_sym_data_local_directory] = ACTIONS(281),
    [anon_sym_executable_dir] = ACTIONS(281),
    [anon_sym_executable_directory] = ACTIONS(281),
    [anon_sym_home_dir] = ACTIONS(281),
    [anon_sym_home_directory] = ACTIONS(281),
    [anon_sym_set] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [66] = {
    [sym_comment] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [anon_sym_alias] = ACTIONS(285),
    [aux_sym_import_token1] = ACTIONS(285),
    [aux_sym_mod_token1] = ACTIONS(285),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_assert] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_arch] = ACTIONS(285),
    [anon_sym_num_cpus] = ACTIONS(285),
    [anon_sym_os] = ACTIONS(285),
    [anon_sym_os_family] = ACTIONS(285),
    [anon_sym_shell] = ACTIONS(285),
    [anon_sym_env_var] = ACTIONS(285),
    [anon_sym_env_var_or_default] = ACTIONS(285),
    [anon_sym_env] = ACTIONS(285),
    [anon_sym_is_dependency] = ACTIONS(285),
    [anon_sym_invocation_dir] = ACTIONS(285),
    [anon_sym_invocation_dir_native] = ACTIONS(285),
    [anon_sym_invocation_directory] = ACTIONS(285),
    [anon_sym_invocation_directory_native] = ACTIONS(285),
    [anon_sym_justfile] = ACTIONS(285),
    [anon_sym_justfile_dir] = ACTIONS(285),
    [anon_sym_justfile_directory] = ACTIONS(285),
    [anon_sym_source_dir] = ACTIONS(285),
    [anon_sym_source_directory] = ACTIONS(285),
    [anon_sym_source_file] = ACTIONS(285),
    [anon_sym_just_executable] = ACTIONS(285),
    [anon_sym_just_pid] = ACTIONS(285),
    [anon_sym_append] = ACTIONS(285),
    [anon_sym_prepend] = ACTIONS(285),
    [anon_sym_encode_uri_component] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_replace] = ACTIONS(285),
    [anon_sym_replace_regex] = ACTIONS(285),
    [anon_sym_trim] = ACTIONS(285),
    [anon_sym_trim_end] = ACTIONS(285),
    [anon_sym_trim_end_match] = ACTIONS(285),
    [anon_sym_trim_end_matches] = ACTIONS(285),
    [anon_sym_trim_start] = ACTIONS(285),
    [anon_sym_trim_start_match] = ACTIONS(285),
    [anon_sym_trim_start_matches] = ACTIONS(285),
    [anon_sym_capitalize] = ACTIONS(285),
    [anon_sym_kebabcase] = ACTIONS(285),
    [anon_sym_lowercamelcase] = ACTIONS(285),
    [anon_sym_lowercase] = ACTIONS(285),
    [anon_sym_shoutykebabcase] = ACTIONS(285),
    [anon_sym_shoutysnakecase] = ACTIONS(285),
    [anon_sym_snakecase] = ACTIONS(285),
    [anon_sym_titlecase] = ACTIONS(285),
    [anon_sym_uppercamelcase] = ACTIONS(285),
    [anon_sym_uppercase] = ACTIONS(285),
    [anon_sym_absolute_path] = ACTIONS(285),
    [anon_sym_canonicalize] = ACTIONS(285),
    [anon_sym_extension] = ACTIONS(285),
    [anon_sym_file_name] = ACTIONS(285),
    [anon_sym_file_stem] = ACTIONS(285),
    [anon_sym_parent_dir] = ACTIONS(285),
    [anon_sym_parent_directory] = ACTIONS(285),
    [anon_sym_without_extension] = ACTIONS(285),
    [anon_sym_clean] = ACTIONS(285),
    [anon_sym_join] = ACTIONS(285),
    [anon_sym_path_exists] = ACTIONS(285),
    [anon_sym_error] = ACTIONS(285),
    [anon_sym_blake3] = ACTIONS(285),
    [anon_sym_blake3_file] = ACTIONS(285),
    [anon_sym_sha256] = ACTIONS(285),
    [anon_sym_sha256_file] = ACTIONS(285),
    [anon_sym_uuid] = ACTIONS(285),
    [anon_sym_choose] = ACTIONS(285),
    [anon_sym_datetime] = ACTIONS(285),
    [anon_sym_datetime_utc] = ACTIONS(285),
    [anon_sym_semver_matches] = ACTIONS(285),
    [anon_sym_cache_dir] = ACTIONS(285),
    [anon_sym_cache_directory] = ACTIONS(285),
    [anon_sym_config_dir] = ACTIONS(285),
    [anon_sym_config_directory] = ACTIONS(285),
    [anon_sym_config_local_dir] = ACTIONS(285),
    [anon_sym_config_local_directory] = ACTIONS(285),
    [anon_sym_data_dir] = ACTIONS(285),
    [anon_sym_data_directory] = ACTIONS(285),
    [anon_sym_data_local_dir] = ACTIONS(285),
    [anon_sym_data_local_directory] = ACTIONS(285),
    [anon_sym_executable_dir] = ACTIONS(285),
    [anon_sym_executable_directory] = ACTIONS(285),
    [anon_sym_home_dir] = ACTIONS(285),
    [anon_sym_home_directory] = ACTIONS(285),
    [anon_sym_set] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [67] = {
    [sym_comment] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_identifier] = ACTIONS(289),
    [anon_sym_alias] = ACTIONS(289),
    [aux_sym_import_token1] = ACTIONS(289),
    [aux_sym_mod_token1] = ACTIONS(289),
    [anon_sym_if] = ACTIONS(289),
    [anon_sym_assert] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_arch] = ACTIONS(289),
    [anon_sym_num_cpus] = ACTIONS(289),
    [anon_sym_os] = ACTIONS(289),
    [anon_sym_os_family] = ACTIONS(289),
    [anon_sym_shell] = ACTIONS(289),
    [anon_sym_env_var] = ACTIONS(289),
    [anon_sym_env_var_or_default] = ACTIONS(289),
    [anon_sym_env] = ACTIONS(289),
    [anon_sym_is_dependency] = ACTIONS(289),
    [anon_sym_invocation_dir] = ACTIONS(289),
    [anon_sym_invocation_dir_native] = ACTIONS(289),
    [anon_sym_invocation_directory] = ACTIONS(289),
    [anon_sym_invocation_directory_native] = ACTIONS(289),
    [anon_sym_justfile] = ACTIONS(289),
    [anon_sym_justfile_dir] = ACTIONS(289),
    [anon_sym_justfile_directory] = ACTIONS(289),
    [anon_sym_source_dir] = ACTIONS(289),
    [anon_sym_source_directory] = ACTIONS(289),
    [anon_sym_source_file] = ACTIONS(289),
    [anon_sym_just_executable] = ACTIONS(289),
    [anon_sym_just_pid] = ACTIONS(289),
    [anon_sym_append] = ACTIONS(289),
    [anon_sym_prepend] = ACTIONS(289),
    [anon_sym_encode_uri_component] = ACTIONS(289),
    [anon_sym_quote] = ACTIONS(289),
    [anon_sym_replace] = ACTIONS(289),
    [anon_sym_replace_regex] = ACTIONS(289),
    [anon_sym_trim] = ACTIONS(289),
    [anon_sym_trim_end] = ACTIONS(289),
    [anon_sym_trim_end_match] = ACTIONS(289),
    [anon_sym_trim_end_matches] = ACTIONS(289),
    [anon_sym_trim_start] = ACTIONS(289),
    [anon_sym_trim_start_match] = ACTIONS(289),
    [anon_sym_trim_start_matches] = ACTIONS(289),
    [anon_sym_capitalize] = ACTIONS(289),
    [anon_sym_kebabcase] = ACTIONS(289),
    [anon_sym_lowercamelcase] = ACTIONS(289),
    [anon_sym_lowercase] = ACTIONS(289),
    [anon_sym_shoutykebabcase] = ACTIONS(289),
    [anon_sym_shoutysnakecase] = ACTIONS(289),
    [anon_sym_snakecase] = ACTIONS(289),
    [anon_sym_titlecase] = ACTIONS(289),
    [anon_sym_uppercamelcase] = ACTIONS(289),
    [anon_sym_uppercase] = ACTIONS(289),
    [anon_sym_absolute_path] = ACTIONS(289),
    [anon_sym_canonicalize] = ACTIONS(289),
    [anon_sym_extension] = ACTIONS(289),
    [anon_sym_file_name] = ACTIONS(289),
    [anon_sym_file_stem] = ACTIONS(289),
    [anon_sym_parent_dir] = ACTIONS(289),
    [anon_sym_parent_directory] = ACTIONS(289),
    [anon_sym_without_extension] = ACTIONS(289),
    [anon_sym_clean] = ACTIONS(289),
    [anon_sym_join] = ACTIONS(289),
    [anon_sym_path_exists] = ACTIONS(289),
    [anon_sym_error] = ACTIONS(289),
    [anon_sym_blake3] = ACTIONS(289),
    [anon_sym_blake3_file] = ACTIONS(289),
    [anon_sym_sha256] = ACTIONS(289),
    [anon_sym_sha256_file] = ACTIONS(289),
    [anon_sym_uuid] = ACTIONS(289),
    [anon_sym_choose] = ACTIONS(289),
    [anon_sym_datetime] = ACTIONS(289),
    [anon_sym_datetime_utc] = ACTIONS(289),
    [anon_sym_semver_matches] = ACTIONS(289),
    [anon_sym_cache_dir] = ACTIONS(289),
    [anon_sym_cache_directory] = ACTIONS(289),
    [anon_sym_config_dir] = ACTIONS(289),
    [anon_sym_config_directory] = ACTIONS(289),
    [anon_sym_config_local_dir] = ACTIONS(289),
    [anon_sym_config_local_directory] = ACTIONS(289),
    [anon_sym_data_dir] = ACTIONS(289),
    [anon_sym_data_directory] = ACTIONS(289),
    [anon_sym_data_local_dir] = ACTIONS(289),
    [anon_sym_data_local_directory] = ACTIONS(289),
    [anon_sym_executable_dir] = ACTIONS(289),
    [anon_sym_executable_directory] = ACTIONS(289),
    [anon_sym_home_dir] = ACTIONS(289),
    [anon_sym_home_directory] = ACTIONS(289),
    [anon_sym_set] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(297), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(295), 10,
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
  [31] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_boolean,
    STATE(62), 1,
      sym_string,
    STATE(69), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [69] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym_comment,
    STATE(100), 1,
      sym_string,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [100] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_comment,
    STATE(100), 1,
      sym_string,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [131] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_comment,
    STATE(100), 1,
      sym_string,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [159] = 7,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_normal_string_token1,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_normal_string_repeat1,
    STATE(82), 1,
      sym_escape_sequence,
    ACTIONS(311), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [185] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_string,
    STATE(74), 1,
      sym_comment,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [213] = 7,
    ACTIONS(309), 1,
      aux_sym_normal_string_token1,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_normal_string_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(82), 1,
      sym_escape_sequence,
    ACTIONS(311), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [239] = 7,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_indented_normal_string_token1,
    STATE(76), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(84), 1,
      sym_escape_sequence,
    ACTIONS(321), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [265] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_comment,
    STATE(89), 1,
      sym_string,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [293] = 6,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_indented_normal_string_token1,
    STATE(84), 1,
      sym_escape_sequence,
    STATE(78), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(328), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [317] = 6,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_normal_string_token1,
    STATE(82), 1,
      sym_escape_sequence,
    STATE(79), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(336), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [341] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_string,
    STATE(80), 1,
      sym_comment,
    STATE(11), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [369] = 7,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(339), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(78), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      sym_escape_sequence,
    ACTIONS(321), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [395] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(341), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [411] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(343), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [427] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(345), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [443] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(343), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [459] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_function_parameters_repeat1,
  [475] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_function_parameters_repeat1,
  [491] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [505] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym__setting_list_repeat1,
  [521] = 5,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(364), 1,
      aux_sym_indented_raw_string_token1,
    STATE(90), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_indented_raw_string_repeat1,
  [537] = 4,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(368), 1,
      aux_sym_indented_raw_string_token1,
    STATE(91), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [551] = 5,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(373), 1,
      aux_sym_indented_backtick_token1,
    STATE(92), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_indented_backtick_repeat1,
  [567] = 4,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(377), 1,
      aux_sym_indented_backtick_token1,
    STATE(93), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [581] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    STATE(94), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [595] = 5,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(373), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(385), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(93), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(95), 1,
      sym_comment,
  [611] = 5,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(387), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(91), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(96), 1,
      sym_comment,
  [627] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__setting_list_repeat1,
    STATE(97), 1,
      sym_comment,
  [643] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_boolean,
    STATE(98), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_true,
      anon_sym_false,
  [657] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
    STATE(25), 2,
      sym__p1,
      sym__p2,
  [671] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [682] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [695] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_comment,
  [708] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__p3,
    STATE(103), 1,
      sym_comment,
  [721] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [732] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__p2,
    STATE(105), 1,
      sym_comment,
  [745] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [756] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_comment,
  [769] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(108), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [780] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__p1,
    STATE(109), 1,
      sym_comment,
  [793] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_COLON_EQ,
    STATE(67), 1,
      sym__setting_string,
    STATE(110), 1,
      sym_comment,
  [806] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_COLON_EQ,
    STATE(67), 1,
      sym__setting_list,
    STATE(111), 1,
      sym_comment,
  [819] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__pN,
    STATE(112), 1,
      sym_comment,
  [832] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [843] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_comment,
  [856] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [867] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__p0,
    STATE(116), 1,
      sym_comment,
  [880] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_comment,
  [890] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_comment,
  [900] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [910] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_comment,
  [920] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_comment,
  [930] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_comment,
  [940] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [950] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_COLON_EQ,
    STATE(124), 1,
      sym_comment,
  [960] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [970] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_comment,
  [980] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      aux_sym_raw_string_token1,
    STATE(127), 1,
      sym_comment,
  [990] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(451), 1,
      anon_sym_else,
    STATE(128), 1,
      sym_comment,
  [1000] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
  [1010] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
    STATE(130), 1,
      sym_comment,
  [1020] = 3,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      aux_sym_backtick_token1,
    STATE(131), 1,
      sym_comment,
  [1030] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_comment,
  [1040] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_comment,
  [1050] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(134), 1,
      sym_comment,
  [1060] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_comment,
  [1070] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_comment,
  [1080] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(137), 1,
      sym_comment,
  [1090] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_comment,
  [1100] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_comment,
  [1110] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
  [1120] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_comment,
  [1130] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_comment,
  [1140] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_comment,
  [1150] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(144), 1,
      sym_comment,
  [1160] = 1,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(68)] = 0,
  [SMALL_STATE(69)] = 31,
  [SMALL_STATE(70)] = 69,
  [SMALL_STATE(71)] = 100,
  [SMALL_STATE(72)] = 131,
  [SMALL_STATE(73)] = 159,
  [SMALL_STATE(74)] = 185,
  [SMALL_STATE(75)] = 213,
  [SMALL_STATE(76)] = 239,
  [SMALL_STATE(77)] = 265,
  [SMALL_STATE(78)] = 293,
  [SMALL_STATE(79)] = 317,
  [SMALL_STATE(80)] = 341,
  [SMALL_STATE(81)] = 369,
  [SMALL_STATE(82)] = 395,
  [SMALL_STATE(83)] = 411,
  [SMALL_STATE(84)] = 427,
  [SMALL_STATE(85)] = 443,
  [SMALL_STATE(86)] = 459,
  [SMALL_STATE(87)] = 475,
  [SMALL_STATE(88)] = 491,
  [SMALL_STATE(89)] = 505,
  [SMALL_STATE(90)] = 521,
  [SMALL_STATE(91)] = 537,
  [SMALL_STATE(92)] = 551,
  [SMALL_STATE(93)] = 567,
  [SMALL_STATE(94)] = 581,
  [SMALL_STATE(95)] = 595,
  [SMALL_STATE(96)] = 611,
  [SMALL_STATE(97)] = 627,
  [SMALL_STATE(98)] = 643,
  [SMALL_STATE(99)] = 657,
  [SMALL_STATE(100)] = 671,
  [SMALL_STATE(101)] = 682,
  [SMALL_STATE(102)] = 695,
  [SMALL_STATE(103)] = 708,
  [SMALL_STATE(104)] = 721,
  [SMALL_STATE(105)] = 732,
  [SMALL_STATE(106)] = 745,
  [SMALL_STATE(107)] = 756,
  [SMALL_STATE(108)] = 769,
  [SMALL_STATE(109)] = 780,
  [SMALL_STATE(110)] = 793,
  [SMALL_STATE(111)] = 806,
  [SMALL_STATE(112)] = 819,
  [SMALL_STATE(113)] = 832,
  [SMALL_STATE(114)] = 843,
  [SMALL_STATE(115)] = 856,
  [SMALL_STATE(116)] = 867,
  [SMALL_STATE(117)] = 880,
  [SMALL_STATE(118)] = 890,
  [SMALL_STATE(119)] = 900,
  [SMALL_STATE(120)] = 910,
  [SMALL_STATE(121)] = 920,
  [SMALL_STATE(122)] = 930,
  [SMALL_STATE(123)] = 940,
  [SMALL_STATE(124)] = 950,
  [SMALL_STATE(125)] = 960,
  [SMALL_STATE(126)] = 970,
  [SMALL_STATE(127)] = 980,
  [SMALL_STATE(128)] = 990,
  [SMALL_STATE(129)] = 1000,
  [SMALL_STATE(130)] = 1010,
  [SMALL_STATE(131)] = 1020,
  [SMALL_STATE(132)] = 1030,
  [SMALL_STATE(133)] = 1040,
  [SMALL_STATE(134)] = 1050,
  [SMALL_STATE(135)] = 1060,
  [SMALL_STATE(136)] = 1070,
  [SMALL_STATE(137)] = 1080,
  [SMALL_STATE(138)] = 1090,
  [SMALL_STATE(139)] = 1100,
  [SMALL_STATE(140)] = 1110,
  [SMALL_STATE(141)] = 1120,
  [SMALL_STATE(142)] = 1130,
  [SMALL_STATE(143)] = 1140,
  [SMALL_STATE(144)] = 1150,
  [SMALL_STATE(145)] = 1160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
