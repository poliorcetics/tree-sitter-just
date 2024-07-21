#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  anon_sym_export = 4,
  aux_sym_import_token1 = 5,
  aux_sym_mod_token1 = 6,
  anon_sym_set = 7,
  anon_sym_allow_DASHduplicate_DASHrecipes = 8,
  anon_sym_allow_DASHduplicate_DASHvariables = 9,
  anon_sym_dotenv_DASHfilename = 10,
  anon_sym_dotenv_DASHload = 11,
  anon_sym_dotenv_DASHpath = 12,
  anon_sym_dotenv_DASHrequired = 13,
  anon_sym_fallback = 14,
  anon_sym_ignore_DASHcomments = 15,
  anon_sym_positional_DASHarguments = 16,
  anon_sym_shell = 17,
  anon_sym_tempdir = 18,
  anon_sym_unstable = 19,
  anon_sym_windows_DASHpowershell = 20,
  anon_sym_windows_DASHshell = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_if = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_else = 28,
  anon_sym_assert = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_SLASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_EQ_TILDE = 36,
  anon_sym_arch = 37,
  anon_sym_num_cpus = 38,
  anon_sym_os = 39,
  anon_sym_os_family = 40,
  anon_sym_env_var = 41,
  anon_sym_env_var_or_default = 42,
  anon_sym_env = 43,
  anon_sym_is_dependency = 44,
  anon_sym_invocation_dir = 45,
  anon_sym_invocation_dir_native = 46,
  anon_sym_invocation_directory = 47,
  anon_sym_invocation_directory_native = 48,
  anon_sym_justfile = 49,
  anon_sym_justfile_dir = 50,
  anon_sym_justfile_directory = 51,
  anon_sym_source_dir = 52,
  anon_sym_source_directory = 53,
  anon_sym_source_file = 54,
  anon_sym_just_executable = 55,
  anon_sym_just_pid = 56,
  anon_sym_append = 57,
  anon_sym_prepend = 58,
  anon_sym_encode_uri_component = 59,
  anon_sym_quote = 60,
  anon_sym_replace = 61,
  anon_sym_replace_regex = 62,
  anon_sym_trim = 63,
  anon_sym_trim_end = 64,
  anon_sym_trim_end_match = 65,
  anon_sym_trim_end_matches = 66,
  anon_sym_trim_start = 67,
  anon_sym_trim_start_match = 68,
  anon_sym_trim_start_matches = 69,
  anon_sym_capitalize = 70,
  anon_sym_kebabcase = 71,
  anon_sym_lowercamelcase = 72,
  anon_sym_lowercase = 73,
  anon_sym_shoutykebabcase = 74,
  anon_sym_shoutysnakecase = 75,
  anon_sym_snakecase = 76,
  anon_sym_titlecase = 77,
  anon_sym_uppercamelcase = 78,
  anon_sym_uppercase = 79,
  anon_sym_absolute_path = 80,
  anon_sym_canonicalize = 81,
  anon_sym_extension = 82,
  anon_sym_file_name = 83,
  anon_sym_file_stem = 84,
  anon_sym_parent_dir = 85,
  anon_sym_parent_directory = 86,
  anon_sym_without_extension = 87,
  anon_sym_clean = 88,
  anon_sym_join = 89,
  anon_sym_path_exists = 90,
  anon_sym_error = 91,
  anon_sym_blake3 = 92,
  anon_sym_blake3_file = 93,
  anon_sym_sha256 = 94,
  anon_sym_sha256_file = 95,
  anon_sym_uuid = 96,
  anon_sym_choose = 97,
  anon_sym_datetime = 98,
  anon_sym_datetime_utc = 99,
  anon_sym_semver_matches = 100,
  anon_sym_cache_dir = 101,
  anon_sym_cache_directory = 102,
  anon_sym_config_dir = 103,
  anon_sym_config_directory = 104,
  anon_sym_config_local_dir = 105,
  anon_sym_config_local_directory = 106,
  anon_sym_data_dir = 107,
  anon_sym_data_directory = 108,
  anon_sym_data_local_dir = 109,
  anon_sym_data_local_directory = 110,
  anon_sym_executable_dir = 111,
  anon_sym_executable_directory = 112,
  anon_sym_home_dir = 113,
  anon_sym_home_directory = 114,
  anon_sym_BQUOTE = 115,
  aux_sym_backtick_token1 = 116,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 117,
  aux_sym_indented_backtick_token1 = 118,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 119,
  aux_sym_indented_normal_string_token1 = 120,
  anon_sym_DQUOTE = 121,
  aux_sym_normal_string_token1 = 122,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 123,
  aux_sym_indented_raw_string_token1 = 124,
  anon_sym_SQUOTE = 125,
  aux_sym_raw_string_token1 = 126,
  anon_sym_BSLASHn = 127,
  anon_sym_BSLASHr = 128,
  anon_sym_BSLASHt = 129,
  anon_sym_BSLASH_DQUOTE = 130,
  anon_sym_BSLASH_BSLASH = 131,
  anon_sym_true = 132,
  anon_sym_false = 133,
  aux_sym_comment_token1 = 134,
  sym_file = 135,
  sym_alias = 136,
  sym_assignment = 137,
  sym_import = 138,
  sym_mod = 139,
  sym_setting = 140,
  sym__setting_boolean = 141,
  sym__setting_string = 142,
  sym__setting_list = 143,
  sym_expression = 144,
  sym_condition = 145,
  sym_value = 146,
  sym_builtin_function_call = 147,
  sym__p0 = 148,
  sym__p1 = 149,
  sym__p2 = 150,
  sym__p3 = 151,
  sym__pN = 152,
  sym_function_call = 153,
  sym_function_parameters = 154,
  sym_backtick = 155,
  sym_indented_backtick = 156,
  sym_string = 157,
  sym_indented_normal_string = 158,
  sym_normal_string = 159,
  sym_indented_raw_string = 160,
  sym_raw_string = 161,
  sym_escape_sequence = 162,
  sym_boolean = 163,
  sym_comment = 164,
  aux_sym_file_repeat1 = 165,
  aux_sym__setting_list_repeat1 = 166,
  aux_sym_function_parameters_repeat1 = 167,
  aux_sym_indented_backtick_repeat1 = 168,
  aux_sym_indented_normal_string_repeat1 = 169,
  aux_sym_normal_string_repeat1 = 170,
  aux_sym_indented_raw_string_repeat1 = 171,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_shell] = "shell",
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_assert] = "assert",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_arch] = "arch",
  [anon_sym_num_cpus] = "num_cpus",
  [anon_sym_os] = "os",
  [anon_sym_os_family] = "os_family",
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
  [sym_assignment] = "assignment",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
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
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
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
  [anon_sym_export] = anon_sym_export,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_num_cpus] = anon_sym_num_cpus,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_os_family] = anon_sym_os_family,
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
  [sym_assignment] = sym_assignment,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
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
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
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
  [anon_sym_export] = {
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
  [anon_sym_shell] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [anon_sym_EQ_TILDE] = {
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
  [sym_assignment] = {
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
  [aux_sym__setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
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
  field_alias_name = 1,
  field_function_name = 2,
  field_mod_name = 3,
  field_setting_name = 4,
  field_variable_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_function_name] = "function_name",
  [field_mod_name] = "mod_name",
  [field_setting_name] = "setting_name",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mod_name, 1},
  [1] =
    {field_setting_name, 1},
  [2] =
    {field_variable_name, 0},
  [3] =
    {field_alias_name, 1},
  [4] =
    {field_variable_name, 1},
  [5] =
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
  [89] = 77,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 9,
        '"', 53,
        '#', 83,
        '\'', 66,
        '(', 24,
        ')', 25,
        '+', 27,
        ',', 20,
        '/', 26,
        ':', 10,
        '=', 11,
        '[', 19,
        '\\', 5,
        ']', 21,
        '`', 31,
        'i', 76,
        'm', 77,
        '{', 22,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '`') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '~') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(35);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(12);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(36);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
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
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
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
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
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
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 68},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_mod_token1] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_num_cpus] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_os_family] = ACTIONS(1),
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
    [sym_file] = STATE(145),
    [sym_alias] = STATE(88),
    [sym_assignment] = STATE(88),
    [sym_import] = STATE(88),
    [sym_mod] = STATE(88),
    [sym_setting] = STATE(88),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [aux_sym_import_token1] = ACTIONS(13),
    [aux_sym_mod_token1] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(92),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_function_parameters] = STATE(121),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(2),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(106),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(3),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(106),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(101),
    [sym_condition] = STATE(138),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(92),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_function_parameters] = STATE(124),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(6),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(101),
    [sym_condition] = STATE(130),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(109),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(109),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(9),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(135),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(10),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(127),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(11),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(118),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(132),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(115),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(14),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(54),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(147),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(106),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(74),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(18),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(142),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(19),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(86),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(20),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(110),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(21),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(134),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(22),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(108),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(23),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(137),
    [sym_value] = STATE(39),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_indented_normal_string] = STATE(32),
    [sym_normal_string] = STATE(32),
    [sym_indented_raw_string] = STATE(32),
    [sym_raw_string] = STATE(32),
    [sym_comment] = STATE(24),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_arch] = ACTIONS(31),
    [anon_sym_num_cpus] = ACTIONS(31),
    [anon_sym_os] = ACTIONS(31),
    [anon_sym_os_family] = ACTIONS(31),
    [anon_sym_env_var] = ACTIONS(33),
    [anon_sym_env_var_or_default] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_is_dependency] = ACTIONS(31),
    [anon_sym_invocation_dir] = ACTIONS(31),
    [anon_sym_invocation_dir_native] = ACTIONS(31),
    [anon_sym_invocation_directory] = ACTIONS(31),
    [anon_sym_invocation_directory_native] = ACTIONS(31),
    [anon_sym_justfile] = ACTIONS(31),
    [anon_sym_justfile_dir] = ACTIONS(31),
    [anon_sym_justfile_directory] = ACTIONS(31),
    [anon_sym_source_dir] = ACTIONS(31),
    [anon_sym_source_directory] = ACTIONS(31),
    [anon_sym_source_file] = ACTIONS(31),
    [anon_sym_just_executable] = ACTIONS(31),
    [anon_sym_just_pid] = ACTIONS(31),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(35),
    [anon_sym_encode_uri_component] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_replace] = ACTIONS(39),
    [anon_sym_replace_regex] = ACTIONS(39),
    [anon_sym_trim] = ACTIONS(33),
    [anon_sym_trim_end] = ACTIONS(33),
    [anon_sym_trim_end_match] = ACTIONS(35),
    [anon_sym_trim_end_matches] = ACTIONS(35),
    [anon_sym_trim_start] = ACTIONS(33),
    [anon_sym_trim_start_match] = ACTIONS(35),
    [anon_sym_trim_start_matches] = ACTIONS(35),
    [anon_sym_capitalize] = ACTIONS(33),
    [anon_sym_kebabcase] = ACTIONS(33),
    [anon_sym_lowercamelcase] = ACTIONS(33),
    [anon_sym_lowercase] = ACTIONS(33),
    [anon_sym_shoutykebabcase] = ACTIONS(33),
    [anon_sym_shoutysnakecase] = ACTIONS(33),
    [anon_sym_snakecase] = ACTIONS(33),
    [anon_sym_titlecase] = ACTIONS(33),
    [anon_sym_uppercamelcase] = ACTIONS(33),
    [anon_sym_uppercase] = ACTIONS(33),
    [anon_sym_absolute_path] = ACTIONS(33),
    [anon_sym_canonicalize] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_file_name] = ACTIONS(33),
    [anon_sym_file_stem] = ACTIONS(33),
    [anon_sym_parent_dir] = ACTIONS(33),
    [anon_sym_parent_directory] = ACTIONS(33),
    [anon_sym_without_extension] = ACTIONS(33),
    [anon_sym_clean] = ACTIONS(33),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_blake3] = ACTIONS(33),
    [anon_sym_blake3_file] = ACTIONS(33),
    [anon_sym_sha256] = ACTIONS(33),
    [anon_sym_sha256_file] = ACTIONS(33),
    [anon_sym_uuid] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(35),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_datetime_utc] = ACTIONS(33),
    [anon_sym_semver_matches] = ACTIONS(35),
    [anon_sym_cache_dir] = ACTIONS(31),
    [anon_sym_cache_directory] = ACTIONS(31),
    [anon_sym_config_dir] = ACTIONS(31),
    [anon_sym_config_directory] = ACTIONS(31),
    [anon_sym_config_local_dir] = ACTIONS(31),
    [anon_sym_config_local_directory] = ACTIONS(31),
    [anon_sym_data_dir] = ACTIONS(31),
    [anon_sym_data_directory] = ACTIONS(31),
    [anon_sym_data_local_dir] = ACTIONS(31),
    [anon_sym_data_local_directory] = ACTIONS(31),
    [anon_sym_executable_dir] = ACTIONS(31),
    [anon_sym_executable_directory] = ACTIONS(31),
    [anon_sym_home_dir] = ACTIONS(31),
    [anon_sym_home_directory] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [28] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(65), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [56] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_comment,
    ACTIONS(69), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [86] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(75), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(73), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [114] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [142] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(83), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [170] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [198] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [226] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(95), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [254] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(99), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [281] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [308] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
    STATE(83), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(107), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [347] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(111), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [374] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [401] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(119), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [430] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [457] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [484] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(133), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [511] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(137), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [538] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(141), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(139), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [565] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(145), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(143), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [592] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(69), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [619] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [646] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(155), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(153), 10,
      anon_sym_export,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_positional_DASHarguments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [677] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [704] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [731] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(167), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [758] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(171), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [785] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [810] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(181), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [835] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(185), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [860] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_comment,
    STATE(76), 1,
      sym_string,
    STATE(79), 1,
      sym_boolean,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [898] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_alias,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_mod_token1,
    ACTIONS(17), 1,
      anon_sym_set,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_file_repeat1,
    STATE(88), 5,
      sym_alias,
      sym_assignment,
      sym_import,
      sym_mod,
      sym_setting,
  [936] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_alias,
    ACTIONS(201), 1,
      anon_sym_export,
    ACTIONS(204), 1,
      aux_sym_import_token1,
    ACTIONS(207), 1,
      aux_sym_mod_token1,
    ACTIONS(210), 1,
      anon_sym_set,
    STATE(58), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(88), 5,
      sym_alias,
      sym_assignment,
      sym_import,
      sym_mod,
      sym_setting,
  [972] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      anon_sym_COLON_EQ,
    STATE(59), 1,
      sym_comment,
    STATE(73), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(215), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [998] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(116), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1029] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(116), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1060] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_comment,
    STATE(102), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1088] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_comment,
    STATE(84), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1116] = 7,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(78), 1,
      sym_escape_sequence,
    ACTIONS(227), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1142] = 7,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_normal_string_token1,
    STATE(65), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(235), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1168] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(76), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1196] = 6,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_indented_normal_string_token1,
    STATE(78), 1,
      sym_escape_sequence,
    STATE(67), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(242), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1220] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      anon_sym_COLON_EQ,
    STATE(68), 1,
      sym_comment,
    STATE(73), 1,
      sym__setting_boolean,
    ACTIONS(215), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1244] = 6,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_normal_string_token1,
    STATE(75), 1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(252), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1268] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym_comment,
    STATE(116), 1,
      sym_string,
    STATE(32), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1296] = 7,
    ACTIONS(225), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(78), 1,
      sym_escape_sequence,
    ACTIONS(227), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1322] = 7,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(233), 1,
      aux_sym_normal_string_token1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_normal_string_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(235), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1348] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1366] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1384] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(267), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1400] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_comment,
    ACTIONS(271), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1418] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1434] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(275), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1450] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_comment,
    ACTIONS(279), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1468] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
    ACTIONS(283), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1486] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_comment,
    ACTIONS(287), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1504] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_comment,
    ACTIONS(291), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1522] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1540] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_comment,
    ACTIONS(299), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1558] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_comment,
    ACTIONS(303), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1576] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1612] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1630] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1646] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_function_parameters_repeat1,
  [1662] = 4,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      aux_sym_indented_backtick_token1,
    STATE(91), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [1676] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_function_parameters_repeat1,
    STATE(92), 1,
      sym_comment,
  [1692] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_boolean,
    STATE(93), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
  [1706] = 5,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(328), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_indented_raw_string_token1,
    STATE(94), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_indented_raw_string_repeat1,
  [1722] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_comment,
    STATE(45), 2,
      sym__p1,
      sym__p2,
  [1736] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(96), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [1750] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym__setting_list_repeat1,
    STATE(97), 1,
      sym_comment,
  [1766] = 5,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(343), 1,
      aux_sym_indented_backtick_token1,
    STATE(91), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(98), 1,
      sym_comment,
  [1782] = 5,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(345), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(98), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(99), 1,
      sym_comment,
  [1798] = 4,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(349), 1,
      aux_sym_indented_raw_string_token1,
    STATE(100), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [1812] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [1824] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym__setting_list_repeat1,
    STATE(102), 1,
      sym_comment,
  [1840] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [1854] = 5,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(363), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(100), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(104), 1,
      sym_comment,
  [1870] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__pN,
    STATE(105), 1,
      sym_comment,
  [1883] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1894] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [1905] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_comment,
  [1918] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [1931] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_comment,
  [1944] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [1955] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(381), 1,
      anon_sym_COLON_EQ,
    STATE(73), 1,
      sym__setting_list,
    STATE(112), 1,
      sym_comment,
  [1968] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__p3,
    STATE(113), 1,
      sym_comment,
  [1981] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      anon_sym_COLON_EQ,
    STATE(73), 1,
      sym__setting_string,
    STATE(114), 1,
      sym_comment,
  [1994] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [2005] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2016] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__p2,
    STATE(117), 1,
      sym_comment,
  [2029] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [2042] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__p1,
    STATE(119), 1,
      sym_comment,
  [2055] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__p0,
    STATE(120), 1,
      sym_comment,
  [2068] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [2078] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      anon_sym_COLON_EQ,
    STATE(122), 1,
      sym_comment,
  [2088] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_comment,
  [2098] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [2108] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [2118] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      sym_comment,
  [2128] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_comment,
  [2138] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      aux_sym_backtick_token1,
    STATE(128), 1,
      sym_comment,
  [2148] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(129), 1,
      sym_comment,
  [2158] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_comment,
  [2168] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_else,
    STATE(131), 1,
      sym_comment,
  [2178] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_comment,
  [2188] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_comment,
  [2198] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_comment,
  [2208] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      sym_comment,
  [2218] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(136), 1,
      sym_comment,
  [2228] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_comment,
  [2238] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_comment,
  [2248] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_comment,
  [2258] = 3,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      aux_sym_raw_string_token1,
    STATE(140), 1,
      sym_comment,
  [2268] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_comment,
  [2278] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [2288] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_comment,
  [2298] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_COLON_EQ,
    STATE(144), 1,
      sym_comment,
  [2308] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_comment,
  [2318] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(445), 1,
      anon_sym_BQUOTE,
    STATE(146), 1,
      sym_comment,
  [2328] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
  [2338] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_comment,
  [2348] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(451), 1,
      anon_sym_COLON_EQ,
    STATE(149), 1,
      sym_comment,
  [2358] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(453), 1,
      sym_identifier,
    STATE(150), 1,
      sym_comment,
  [2368] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(151), 1,
      sym_comment,
  [2378] = 1,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 28,
  [SMALL_STATE(27)] = 56,
  [SMALL_STATE(28)] = 86,
  [SMALL_STATE(29)] = 114,
  [SMALL_STATE(30)] = 142,
  [SMALL_STATE(31)] = 170,
  [SMALL_STATE(32)] = 198,
  [SMALL_STATE(33)] = 226,
  [SMALL_STATE(34)] = 254,
  [SMALL_STATE(35)] = 281,
  [SMALL_STATE(36)] = 308,
  [SMALL_STATE(37)] = 347,
  [SMALL_STATE(38)] = 374,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 457,
  [SMALL_STATE(42)] = 484,
  [SMALL_STATE(43)] = 511,
  [SMALL_STATE(44)] = 538,
  [SMALL_STATE(45)] = 565,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 619,
  [SMALL_STATE(48)] = 646,
  [SMALL_STATE(49)] = 677,
  [SMALL_STATE(50)] = 704,
  [SMALL_STATE(51)] = 731,
  [SMALL_STATE(52)] = 758,
  [SMALL_STATE(53)] = 785,
  [SMALL_STATE(54)] = 810,
  [SMALL_STATE(55)] = 835,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 898,
  [SMALL_STATE(58)] = 936,
  [SMALL_STATE(59)] = 972,
  [SMALL_STATE(60)] = 998,
  [SMALL_STATE(61)] = 1029,
  [SMALL_STATE(62)] = 1060,
  [SMALL_STATE(63)] = 1088,
  [SMALL_STATE(64)] = 1116,
  [SMALL_STATE(65)] = 1142,
  [SMALL_STATE(66)] = 1168,
  [SMALL_STATE(67)] = 1196,
  [SMALL_STATE(68)] = 1220,
  [SMALL_STATE(69)] = 1244,
  [SMALL_STATE(70)] = 1268,
  [SMALL_STATE(71)] = 1296,
  [SMALL_STATE(72)] = 1322,
  [SMALL_STATE(73)] = 1348,
  [SMALL_STATE(74)] = 1366,
  [SMALL_STATE(75)] = 1384,
  [SMALL_STATE(76)] = 1400,
  [SMALL_STATE(77)] = 1418,
  [SMALL_STATE(78)] = 1434,
  [SMALL_STATE(79)] = 1450,
  [SMALL_STATE(80)] = 1468,
  [SMALL_STATE(81)] = 1486,
  [SMALL_STATE(82)] = 1504,
  [SMALL_STATE(83)] = 1522,
  [SMALL_STATE(84)] = 1540,
  [SMALL_STATE(85)] = 1558,
  [SMALL_STATE(86)] = 1576,
  [SMALL_STATE(87)] = 1594,
  [SMALL_STATE(88)] = 1612,
  [SMALL_STATE(89)] = 1630,
  [SMALL_STATE(90)] = 1646,
  [SMALL_STATE(91)] = 1662,
  [SMALL_STATE(92)] = 1676,
  [SMALL_STATE(93)] = 1692,
  [SMALL_STATE(94)] = 1706,
  [SMALL_STATE(95)] = 1722,
  [SMALL_STATE(96)] = 1736,
  [SMALL_STATE(97)] = 1750,
  [SMALL_STATE(98)] = 1766,
  [SMALL_STATE(99)] = 1782,
  [SMALL_STATE(100)] = 1798,
  [SMALL_STATE(101)] = 1812,
  [SMALL_STATE(102)] = 1824,
  [SMALL_STATE(103)] = 1840,
  [SMALL_STATE(104)] = 1854,
  [SMALL_STATE(105)] = 1870,
  [SMALL_STATE(106)] = 1883,
  [SMALL_STATE(107)] = 1894,
  [SMALL_STATE(108)] = 1905,
  [SMALL_STATE(109)] = 1918,
  [SMALL_STATE(110)] = 1931,
  [SMALL_STATE(111)] = 1944,
  [SMALL_STATE(112)] = 1955,
  [SMALL_STATE(113)] = 1968,
  [SMALL_STATE(114)] = 1981,
  [SMALL_STATE(115)] = 1994,
  [SMALL_STATE(116)] = 2005,
  [SMALL_STATE(117)] = 2016,
  [SMALL_STATE(118)] = 2029,
  [SMALL_STATE(119)] = 2042,
  [SMALL_STATE(120)] = 2055,
  [SMALL_STATE(121)] = 2068,
  [SMALL_STATE(122)] = 2078,
  [SMALL_STATE(123)] = 2088,
  [SMALL_STATE(124)] = 2098,
  [SMALL_STATE(125)] = 2108,
  [SMALL_STATE(126)] = 2118,
  [SMALL_STATE(127)] = 2128,
  [SMALL_STATE(128)] = 2138,
  [SMALL_STATE(129)] = 2148,
  [SMALL_STATE(130)] = 2158,
  [SMALL_STATE(131)] = 2168,
  [SMALL_STATE(132)] = 2178,
  [SMALL_STATE(133)] = 2188,
  [SMALL_STATE(134)] = 2198,
  [SMALL_STATE(135)] = 2208,
  [SMALL_STATE(136)] = 2218,
  [SMALL_STATE(137)] = 2228,
  [SMALL_STATE(138)] = 2238,
  [SMALL_STATE(139)] = 2248,
  [SMALL_STATE(140)] = 2258,
  [SMALL_STATE(141)] = 2268,
  [SMALL_STATE(142)] = 2278,
  [SMALL_STATE(143)] = 2288,
  [SMALL_STATE(144)] = 2298,
  [SMALL_STATE(145)] = 2308,
  [SMALL_STATE(146)] = 2318,
  [SMALL_STATE(147)] = 2328,
  [SMALL_STATE(148)] = 2338,
  [SMALL_STATE(149)] = 2348,
  [SMALL_STATE(150)] = 2358,
  [SMALL_STATE(151)] = 2368,
  [SMALL_STATE(152)] = 2378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 6),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 6),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [443] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
