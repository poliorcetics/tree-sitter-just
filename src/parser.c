#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 320
#define LARGE_STATE_COUNT 74
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 0
#define TOKEN_COUNT 153
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  anon_sym_export = 4,
  aux_sym_import_token1 = 5,
  aux_sym_mod_token1 = 6,
  anon_sym_AT = 7,
  anon_sym_COLON = 8,
  aux_sym_recipe_token1 = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_confirm = 13,
  anon_sym_doc = 14,
  anon_sym_extension = 15,
  anon_sym_group = 16,
  anon_sym_linux = 17,
  anon_sym_macos = 18,
  anon_sym_no_DASHcd = 19,
  anon_sym_no_DASHexit_DASHmessage = 20,
  anon_sym_no_DASHquiet = 21,
  anon_sym_positional_DASHarguments = 22,
  anon_sym_private = 23,
  anon_sym_script = 24,
  anon_sym_unix = 25,
  anon_sym_windows = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_DOLLAR = 29,
  anon_sym_EQ = 30,
  anon_sym_PLUS = 31,
  anon_sym_STAR = 32,
  anon_sym_set = 33,
  anon_sym_allow_DASHduplicate_DASHrecipes = 34,
  anon_sym_allow_DASHduplicate_DASHvariables = 35,
  anon_sym_dotenv_DASHfilename = 36,
  anon_sym_dotenv_DASHload = 37,
  anon_sym_dotenv_DASHpath = 38,
  anon_sym_dotenv_DASHrequired = 39,
  anon_sym_fallback = 40,
  anon_sym_ignore_DASHcomments = 41,
  anon_sym_shell = 42,
  anon_sym_tempdir = 43,
  anon_sym_unstable = 44,
  anon_sym_windows_DASHpowershell = 45,
  anon_sym_windows_DASHshell = 46,
  anon_sym_true = 47,
  anon_sym_false = 48,
  anon_sym_if = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_else = 52,
  anon_sym_assert = 53,
  anon_sym_SLASH = 54,
  anon_sym_EQ_EQ = 55,
  anon_sym_BANG_EQ = 56,
  anon_sym_EQ_TILDE = 57,
  anon_sym_arch = 58,
  anon_sym_num_cpus = 59,
  anon_sym_os = 60,
  anon_sym_os_family = 61,
  anon_sym_env_var = 62,
  anon_sym_env_var_or_default = 63,
  anon_sym_env = 64,
  anon_sym_is_dependency = 65,
  anon_sym_invocation_dir = 66,
  anon_sym_invocation_dir_native = 67,
  anon_sym_invocation_directory = 68,
  anon_sym_invocation_directory_native = 69,
  anon_sym_justfile = 70,
  anon_sym_justfile_dir = 71,
  anon_sym_justfile_directory = 72,
  anon_sym_source_dir = 73,
  anon_sym_source_directory = 74,
  anon_sym_source_file = 75,
  anon_sym_just_executable = 76,
  anon_sym_just_pid = 77,
  anon_sym_append = 78,
  anon_sym_prepend = 79,
  anon_sym_encode_uri_component = 80,
  anon_sym_quote = 81,
  anon_sym_replace = 82,
  anon_sym_replace_regex = 83,
  anon_sym_trim = 84,
  anon_sym_trim_end = 85,
  anon_sym_trim_end_match = 86,
  anon_sym_trim_end_matches = 87,
  anon_sym_trim_start = 88,
  anon_sym_trim_start_match = 89,
  anon_sym_trim_start_matches = 90,
  anon_sym_capitalize = 91,
  anon_sym_kebabcase = 92,
  anon_sym_lowercamelcase = 93,
  anon_sym_lowercase = 94,
  anon_sym_shoutykebabcase = 95,
  anon_sym_shoutysnakecase = 96,
  anon_sym_snakecase = 97,
  anon_sym_titlecase = 98,
  anon_sym_uppercamelcase = 99,
  anon_sym_uppercase = 100,
  anon_sym_absolute_path = 101,
  anon_sym_canonicalize = 102,
  anon_sym_file_name = 103,
  anon_sym_file_stem = 104,
  anon_sym_parent_dir = 105,
  anon_sym_parent_directory = 106,
  anon_sym_without_extension = 107,
  anon_sym_clean = 108,
  anon_sym_join = 109,
  anon_sym_path_exists = 110,
  anon_sym_error = 111,
  anon_sym_blake3 = 112,
  anon_sym_blake3_file = 113,
  anon_sym_sha256 = 114,
  anon_sym_sha256_file = 115,
  anon_sym_uuid = 116,
  anon_sym_choose = 117,
  anon_sym_datetime = 118,
  anon_sym_datetime_utc = 119,
  anon_sym_semver_matches = 120,
  anon_sym_cache_dir = 121,
  anon_sym_cache_directory = 122,
  anon_sym_config_dir = 123,
  anon_sym_config_directory = 124,
  anon_sym_config_local_dir = 125,
  anon_sym_config_local_directory = 126,
  anon_sym_data_dir = 127,
  anon_sym_data_directory = 128,
  anon_sym_data_local_dir = 129,
  anon_sym_data_local_directory = 130,
  anon_sym_executable_dir = 131,
  anon_sym_executable_directory = 132,
  anon_sym_home_dir = 133,
  anon_sym_home_directory = 134,
  anon_sym_BQUOTE = 135,
  aux_sym_backtick_token1 = 136,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 137,
  aux_sym_indented_backtick_token1 = 138,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 139,
  aux_sym__indented_normal_string_token1 = 140,
  anon_sym_DQUOTE = 141,
  aux_sym__normal_string_token1 = 142,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 143,
  aux_sym__indented_raw_string_token1 = 144,
  anon_sym_SQUOTE = 145,
  aux_sym__raw_string_token1 = 146,
  anon_sym_BSLASHn = 147,
  anon_sym_BSLASHr = 148,
  anon_sym_BSLASHt = 149,
  anon_sym_BSLASH_DQUOTE = 150,
  anon_sym_BSLASH_BSLASH = 151,
  aux_sym_comment_token1 = 152,
  sym_file = 153,
  sym_alias = 154,
  sym_assignment = 155,
  sym_import = 156,
  sym_mod = 157,
  sym_recipe = 158,
  sym__attribute_list = 159,
  sym__attribute = 160,
  sym_builtin_attribute = 161,
  sym_attribute = 162,
  sym__a1 = 163,
  sym_recipe_parameter = 164,
  sym_variadic_parameter = 165,
  sym_recipe_dependency = 166,
  sym__recipe_dependency = 167,
  sym_setting = 168,
  sym__setting_boolean = 169,
  sym__setting_string = 170,
  sym__setting_list = 171,
  sym_expression = 172,
  sym_condition = 173,
  sym_value = 174,
  sym_builtin_function_call = 175,
  sym__p0 = 176,
  sym__p1 = 177,
  sym__p2 = 178,
  sym__p3 = 179,
  sym__pN = 180,
  sym_function_call = 181,
  sym_function_parameters = 182,
  sym_backtick = 183,
  sym_indented_backtick = 184,
  sym_string = 185,
  sym_escape_sequence = 186,
  sym_comment = 187,
  aux_sym_file_repeat1 = 188,
  aux_sym_recipe_repeat1 = 189,
  aux_sym_recipe_repeat2 = 190,
  aux_sym_recipe_repeat3 = 191,
  aux_sym__attribute_list_repeat1 = 192,
  aux_sym_recipe_dependency_repeat1 = 193,
  aux_sym__setting_list_repeat1 = 194,
  aux_sym_function_parameters_repeat1 = 195,
  aux_sym_indented_backtick_repeat1 = 196,
  aux_sym__indented_normal_string_repeat1 = 197,
  aux_sym__normal_string_repeat1 = 198,
  aux_sym__indented_raw_string_repeat1 = 199,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [aux_sym_recipe_token1] = "recipe_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_confirm] = "confirm",
  [anon_sym_doc] = "doc",
  [anon_sym_extension] = "extension",
  [anon_sym_group] = "group",
  [anon_sym_linux] = "linux",
  [anon_sym_macos] = "macos",
  [anon_sym_no_DASHcd] = "no-cd",
  [anon_sym_no_DASHexit_DASHmessage] = "no-exit-message",
  [anon_sym_no_DASHquiet] = "no-quiet",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_private] = "private",
  [anon_sym_script] = "script",
  [anon_sym_unix] = "unix",
  [anon_sym_windows] = "windows",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_shell] = "shell",
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_assert] = "assert",
  [anon_sym_SLASH] = "/",
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
  [aux_sym__indented_normal_string_token1] = "_indented_normal_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__normal_string_token1] = "_normal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__indented_raw_string_token1] = "_indented_raw_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__raw_string_token1] = "_raw_string_token1",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_file] = "file",
  [sym_alias] = "alias",
  [sym_assignment] = "assignment",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_recipe] = "recipe",
  [sym__attribute_list] = "_attribute_list",
  [sym__attribute] = "_attribute",
  [sym_builtin_attribute] = "builtin_attribute",
  [sym_attribute] = "attribute",
  [sym__a1] = "_a1",
  [sym_recipe_parameter] = "recipe_parameter",
  [sym_variadic_parameter] = "variadic_parameter",
  [sym_recipe_dependency] = "recipe_dependency",
  [sym__recipe_dependency] = "_recipe_dependency",
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
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_repeat2] = "recipe_repeat2",
  [aux_sym_recipe_repeat3] = "recipe_repeat3",
  [aux_sym__attribute_list_repeat1] = "_attribute_list_repeat1",
  [aux_sym_recipe_dependency_repeat1] = "recipe_dependency_repeat1",
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_indented_backtick_repeat1] = "indented_backtick_repeat1",
  [aux_sym__indented_normal_string_repeat1] = "_indented_normal_string_repeat1",
  [aux_sym__normal_string_repeat1] = "_normal_string_repeat1",
  [aux_sym__indented_raw_string_repeat1] = "_indented_raw_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_export] = anon_sym_export,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_recipe_token1] = aux_sym_recipe_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_confirm] = anon_sym_confirm,
  [anon_sym_doc] = anon_sym_doc,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_linux] = anon_sym_linux,
  [anon_sym_macos] = anon_sym_macos,
  [anon_sym_no_DASHcd] = anon_sym_no_DASHcd,
  [anon_sym_no_DASHexit_DASHmessage] = anon_sym_no_DASHexit_DASHmessage,
  [anon_sym_no_DASHquiet] = anon_sym_no_DASHquiet,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_unix] = anon_sym_unix,
  [anon_sym_windows] = anon_sym_windows,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [aux_sym__indented_normal_string_token1] = aux_sym__indented_normal_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__normal_string_token1] = aux_sym__normal_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym__indented_raw_string_token1] = aux_sym__indented_raw_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__raw_string_token1] = aux_sym__raw_string_token1,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_file] = sym_file,
  [sym_alias] = sym_alias,
  [sym_assignment] = sym_assignment,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_recipe] = sym_recipe,
  [sym__attribute_list] = sym__attribute_list,
  [sym__attribute] = sym__attribute,
  [sym_builtin_attribute] = sym_builtin_attribute,
  [sym_attribute] = sym_attribute,
  [sym__a1] = sym__a1,
  [sym_recipe_parameter] = sym_recipe_parameter,
  [sym_variadic_parameter] = sym_variadic_parameter,
  [sym_recipe_dependency] = sym_recipe_dependency,
  [sym__recipe_dependency] = sym__recipe_dependency,
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
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_repeat2] = aux_sym_recipe_repeat2,
  [aux_sym_recipe_repeat3] = aux_sym_recipe_repeat3,
  [aux_sym__attribute_list_repeat1] = aux_sym__attribute_list_repeat1,
  [aux_sym_recipe_dependency_repeat1] = aux_sym_recipe_dependency_repeat1,
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_indented_backtick_repeat1] = aux_sym_indented_backtick_repeat1,
  [aux_sym__indented_normal_string_repeat1] = aux_sym__indented_normal_string_repeat1,
  [aux_sym__normal_string_repeat1] = aux_sym__normal_string_repeat1,
  [aux_sym__indented_raw_string_repeat1] = aux_sym__indented_raw_string_repeat1,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_recipe_token1] = {
    .visible = false,
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
  [anon_sym_confirm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHexit_DASHmessage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHquiet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positional_DASHarguments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcomments] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [anon_sym_SLASH] = {
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
  [aux_sym__indented_normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__indented_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__raw_string_token1] = {
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
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_list] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__a1] = {
    .visible = false,
    .named = true,
  },
  [sym_recipe_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_variadic_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym__recipe_dependency] = {
    .visible = false,
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
  [sym_escape_sequence] = {
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
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_dependency_repeat1] = {
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
  [aux_sym__indented_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indented_raw_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias_name = 1,
  field_attribute_name = 2,
  field_dependency_name = 3,
  field_function_name = 4,
  field_mod_name = 5,
  field_parameter_name = 6,
  field_recipe_name = 7,
  field_setting_name = 8,
  field_variable_name = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_attribute_name] = "attribute_name",
  [field_dependency_name] = "dependency_name",
  [field_function_name] = "function_name",
  [field_mod_name] = "mod_name",
  [field_parameter_name] = "parameter_name",
  [field_recipe_name] = "recipe_name",
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
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 1},
  [14] = {.index = 13, .length = 1},
  [15] = {.index = 14, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mod_name, 1},
  [1] =
    {field_attribute_name, 0},
  [2] =
    {field_setting_name, 1},
  [3] =
    {field_parameter_name, 0},
  [4] =
    {field_variable_name, 0},
  [5] =
    {field_recipe_name, 0},
  [6] =
    {field_dependency_name, 0},
  [7] =
    {field_dependency_name, 0, .inherited = true},
  [8] =
    {field_parameter_name, 1},
  [9] =
    {field_alias_name, 1},
  [10] =
    {field_variable_name, 1},
  [11] =
    {field_recipe_name, 1},
  [12] =
    {field_function_name, 0},
  [13] =
    {field_dependency_name, 1, .inherited = true},
  [14] =
    {field_recipe_name, 2},
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 9,
  [14] = 10,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 18,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 36,
  [38] = 17,
  [39] = 22,
  [40] = 40,
  [41] = 32,
  [42] = 34,
  [43] = 43,
  [44] = 20,
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
  [66] = 65,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 58,
  [75] = 52,
  [76] = 62,
  [77] = 55,
  [78] = 61,
  [79] = 59,
  [80] = 51,
  [81] = 49,
  [82] = 53,
  [83] = 46,
  [84] = 50,
  [85] = 60,
  [86] = 56,
  [87] = 45,
  [88] = 54,
  [89] = 63,
  [90] = 48,
  [91] = 57,
  [92] = 47,
  [93] = 68,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 69,
  [99] = 71,
  [100] = 70,
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
  [133] = 130,
  [134] = 134,
  [135] = 135,
  [136] = 127,
  [137] = 132,
  [138] = 134,
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
  [149] = 147,
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
  [194] = 193,
  [195] = 195,
  [196] = 189,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 197,
  [202] = 73,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 187,
  [214] = 191,
  [215] = 215,
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
  [228] = 227,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 168,
  [234] = 234,
  [235] = 217,
  [236] = 230,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 232,
  [241] = 241,
  [242] = 218,
  [243] = 229,
  [244] = 244,
  [245] = 245,
  [246] = 158,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 239,
  [251] = 237,
  [252] = 238,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
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
  [271] = 271,
  [272] = 272,
  [273] = 268,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 264,
  [278] = 266,
  [279] = 267,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 271,
  [284] = 254,
  [285] = 276,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 291,
  [294] = 294,
  [295] = 295,
  [296] = 295,
  [297] = 259,
  [298] = 292,
  [299] = 288,
  [300] = 300,
  [301] = 290,
  [302] = 302,
  [303] = 294,
  [304] = 304,
  [305] = 272,
  [306] = 274,
  [307] = 302,
  [308] = 262,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 300,
  [313] = 260,
  [314] = 275,
  [315] = 289,
  [316] = 316,
  [317] = 317,
  [318] = 265,
  [319] = 319,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '"', 63,
        '#', 94,
        '$', 29,
        '\'', 77,
        '(', 27,
        ')', 28,
        '*', 33,
        '+', 32,
        ',', 25,
        '/', 36,
        ':', 22,
        '=', 31,
        '@', 20,
        '[', 24,
        '\\', 6,
        ']', 26,
        '`', 41,
        'i', 87,
        'm', 88,
        '{', 34,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '(') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '`') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 63,
        '#', 94,
        '$', 29,
        '\'', 77,
        '(', 27,
        ')', 28,
        '*', 33,
        '+', 32,
        '/', 36,
        ':', 22,
        '=', 30,
        '@', 20,
        '[', 24,
        '`', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '~') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(45);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '#', 94,
        '\'', 76,
        '(', 27,
        ')', 28,
        '+', 32,
        ',', 25,
        '/', 36,
        ':', 21,
        '=', 11,
        '@', 20,
        '[', 24,
        ']', 26,
        '`', 40,
        'i', 87,
        'm', 88,
        '{', 34,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_recipe_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '~') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(12);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '`') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__normal_string_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__normal_string_token1);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__normal_string_token1);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(69);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '#') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
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
        'g', 7,
        'h', 8,
        'i', 9,
        'j', 10,
        'k', 11,
        'l', 12,
        'm', 13,
        'n', 14,
        'o', 15,
        'p', 16,
        'q', 17,
        'r', 18,
        's', 19,
        't', 20,
        'u', 21,
        'w', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'q') ADVANCE(176);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 122:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 131:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 139:
      if (lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 155:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(228);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 180:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(252);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(259);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 208:
      if (lookahead == '3') ADVANCE(268);
      END_STATE();
    case 209:
      if (lookahead == '_') ADVANCE(269);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_linux);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_macos);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_no_DASHcd);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 252:
      if (lookahead == '6') ADVANCE(308);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 260:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 262:
      if (lookahead == 'w') ADVANCE(318);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 273:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 278:
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 279:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 288:
      if (lookahead == '-') ADVANCE(340);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(343);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(353);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 307:
      if (lookahead == '_') ADVANCE(358);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 309:
      if (lookahead == 'k') ADVANCE(360);
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 311:
      if (lookahead == '_') ADVANCE(363);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 322:
      if (lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 332:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(388);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 336:
      if (lookahead == 'k') ADVANCE(391);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(392);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 348:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 358:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(413);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(418);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 369:
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_windows);
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 371:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 372:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 377:
      if (lookahead == 'z') ADVANCE(432);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_data_dir);
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_home_dir);
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 398:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(453);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_no_DASHquiet);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 407:
      if (lookahead == 'y') ADVANCE(458);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 414:
      if (lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(471);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(475);
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_cache_dir);
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 434:
      if (lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 435:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 441:
      if (lookahead == 'q') ADVANCE(492);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 448:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(497);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 453:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(511);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 471:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 477:
      if (lookahead == 'x') ADVANCE(519);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 481:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 482:
      if (lookahead == 'z') ADVANCE(524);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_config_dir);
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 487:
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 490:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 491:
      if (lookahead == 'h') ADVANCE(532);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 493:
      if (lookahead == '_') ADVANCE(534);
      END_STATE();
    case 494:
      if (lookahead == '_') ADVANCE(535);
      END_STATE();
    case 495:
      if (lookahead == '_') ADVANCE(536);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 498:
      if (lookahead == '_') ADVANCE(539);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 502:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 506:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 507:
      if (lookahead == 'g') ADVANCE(548);
      END_STATE();
    case 508:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 510:
      if (lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 514:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(556);
      END_STATE();
    case 516:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 517:
      if (lookahead == 'w') ADVANCE(558);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 521:
      if (lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 525:
      if (lookahead == 'c') ADVANCE(565);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 528:
      if (lookahead == 'd') ADVANCE(568);
      END_STATE();
    case 529:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 534:
      if (lookahead == 'c') ADVANCE(572);
      END_STATE();
    case 535:
      if (lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 536:
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 539:
      if (lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 540:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 541:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 543:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 545:
      if (lookahead == 'c') ADVANCE(583);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 547:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 549:
      if (lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(589);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 557:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 561:
      if (lookahead == 'h') ADVANCE(596);
      END_STATE();
    case 562:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 566:
      if (lookahead == '_') ADVANCE(600);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_datetime_utc);
      END_STATE();
    case 570:
      if (lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(611);
      END_STATE();
    case 579:
      if (lookahead == 'b') ADVANCE(612);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 582:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 585:
      if (lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 587:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 588:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 591:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 601:
      if (lookahead == 'y') ADVANCE(633);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 603:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 604:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 605:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 606:
      if (lookahead == 'f') ADVANCE(638);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(639);
      END_STATE();
    case 608:
      if (lookahead == 'y') ADVANCE(640);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(644);
      END_STATE();
    case 614:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 615:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(648);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 623:
      if (lookahead == 'h') ADVANCE(653);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 625:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 629:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 630:
      if (lookahead == 'y') ADVANCE(659);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_data_directory);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_data_local_dir);
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 635:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 636:
      if (lookahead == 'd') ADVANCE(664);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(665);
      END_STATE();
    case 638:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_executable_dir);
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_home_directory);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 643:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 648:
      if (lookahead == 'u') ADVANCE(675);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_semver_matches);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 654:
      if (lookahead == 'c') ADVANCE(680);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 656:
      if (lookahead == 'h') ADVANCE(681);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 658:
      if (lookahead == '-') ADVANCE(683);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_cache_directory);
      END_STATE();
    case 660:
      if (lookahead == 'y') ADVANCE(684);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 662:
      if (lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 667:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 670:
      if (lookahead == 'c') ADVANCE(691);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_no_DASHexit_DASHmessage);
      END_STATE();
    case 674:
      if (lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 675:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 678:
      if (lookahead == 'y') ADVANCE(695);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 680:
      if (lookahead == 'h') ADVANCE(697);
      END_STATE();
    case 681:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead == 'v') ADVANCE(701);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_config_directory);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_config_local_dir);
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 688:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 690:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 694:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 698:
      if (lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 700:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 701:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 702:
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(723);
      END_STATE();
    case 710:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 712:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 714:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(730);
      END_STATE();
    case 718:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 728:
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 730:
      if (lookahead == 'y') ADVANCE(739);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 732:
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 733:
      if (lookahead == 'v') ADVANCE(742);
      END_STATE();
    case 734:
      if (lookahead == 'y') ADVANCE(743);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_data_local_directory);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_executable_directory);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(749);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 746:
      if (lookahead == 'b') ADVANCE(751);
      END_STATE();
    case 747:
      if (lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 749:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 751:
      if (lookahead == 'l') ADVANCE(755);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_config_local_directory);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 758:
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 760:
      if (lookahead == 'v') ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_invocation_directory_native);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
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
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 43},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 13},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 79},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 43},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 79},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 0},
  [319] = {(TSStateId)(-1)},
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_confirm] = ACTIONS(1),
    [anon_sym_doc] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_linux] = ACTIONS(1),
    [anon_sym_macos] = ACTIONS(1),
    [anon_sym_no_DASHcd] = ACTIONS(1),
    [anon_sym_no_DASHexit_DASHmessage] = ACTIONS(1),
    [anon_sym_no_DASHquiet] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_unix] = ACTIONS(1),
    [anon_sym_windows] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(310),
    [sym_alias] = STATE(117),
    [sym_assignment] = STATE(117),
    [sym_import] = STATE(117),
    [sym_mod] = STATE(117),
    [sym_recipe] = STATE(117),
    [sym__attribute_list] = STATE(216),
    [sym_setting] = STATE(117),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(94),
    [aux_sym_recipe_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [aux_sym_import_token1] = ACTIONS(13),
    [aux_sym_mod_token1] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(72),
    [sym_value] = STATE(68),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(2),
    [aux_sym_recipe_dependency_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
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
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(192),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_function_parameters] = STATE(276),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(3),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(72),
    [sym_value] = STATE(68),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(4),
    [aux_sym_recipe_dependency_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
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
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(192),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_function_parameters] = STATE(285),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(72),
    [sym_value] = STATE(68),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(6),
    [aux_sym_recipe_dependency_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_extension] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_shell] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_arch] = ACTIONS(115),
    [anon_sym_num_cpus] = ACTIONS(115),
    [anon_sym_os] = ACTIONS(115),
    [anon_sym_os_family] = ACTIONS(115),
    [anon_sym_env_var] = ACTIONS(98),
    [anon_sym_env_var_or_default] = ACTIONS(118),
    [anon_sym_env] = ACTIONS(121),
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
    [anon_sym_append] = ACTIONS(118),
    [anon_sym_prepend] = ACTIONS(118),
    [anon_sym_encode_uri_component] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_replace] = ACTIONS(124),
    [anon_sym_replace_regex] = ACTIONS(124),
    [anon_sym_trim] = ACTIONS(98),
    [anon_sym_trim_end] = ACTIONS(98),
    [anon_sym_trim_end_match] = ACTIONS(118),
    [anon_sym_trim_end_matches] = ACTIONS(118),
    [anon_sym_trim_start] = ACTIONS(98),
    [anon_sym_trim_start_match] = ACTIONS(118),
    [anon_sym_trim_start_matches] = ACTIONS(118),
    [anon_sym_capitalize] = ACTIONS(98),
    [anon_sym_kebabcase] = ACTIONS(98),
    [anon_sym_lowercamelcase] = ACTIONS(98),
    [anon_sym_lowercase] = ACTIONS(98),
    [anon_sym_shoutykebabcase] = ACTIONS(98),
    [anon_sym_shoutysnakecase] = ACTIONS(98),
    [anon_sym_snakecase] = ACTIONS(98),
    [anon_sym_titlecase] = ACTIONS(98),
    [anon_sym_uppercamelcase] = ACTIONS(98),
    [anon_sym_uppercase] = ACTIONS(98),
    [anon_sym_absolute_path] = ACTIONS(98),
    [anon_sym_canonicalize] = ACTIONS(98),
    [anon_sym_file_name] = ACTIONS(98),
    [anon_sym_file_stem] = ACTIONS(98),
    [anon_sym_parent_dir] = ACTIONS(98),
    [anon_sym_parent_directory] = ACTIONS(98),
    [anon_sym_without_extension] = ACTIONS(98),
    [anon_sym_clean] = ACTIONS(98),
    [anon_sym_join] = ACTIONS(106),
    [anon_sym_path_exists] = ACTIONS(98),
    [anon_sym_error] = ACTIONS(98),
    [anon_sym_blake3] = ACTIONS(98),
    [anon_sym_blake3_file] = ACTIONS(98),
    [anon_sym_sha256] = ACTIONS(98),
    [anon_sym_sha256_file] = ACTIONS(98),
    [anon_sym_uuid] = ACTIONS(115),
    [anon_sym_choose] = ACTIONS(118),
    [anon_sym_datetime] = ACTIONS(98),
    [anon_sym_datetime_utc] = ACTIONS(98),
    [anon_sym_semver_matches] = ACTIONS(118),
    [anon_sym_cache_dir] = ACTIONS(115),
    [anon_sym_cache_directory] = ACTIONS(115),
    [anon_sym_config_dir] = ACTIONS(115),
    [anon_sym_config_directory] = ACTIONS(115),
    [anon_sym_config_local_dir] = ACTIONS(115),
    [anon_sym_config_local_directory] = ACTIONS(115),
    [anon_sym_data_dir] = ACTIONS(115),
    [anon_sym_data_directory] = ACTIONS(115),
    [anon_sym_data_local_dir] = ACTIONS(115),
    [anon_sym_data_local_directory] = ACTIONS(115),
    [anon_sym_executable_dir] = ACTIONS(115),
    [anon_sym_executable_directory] = ACTIONS(115),
    [anon_sym_home_dir] = ACTIONS(115),
    [anon_sym_home_directory] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(243),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(203),
    [sym_condition] = STATE(318),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(203),
    [sym_condition] = STATE(272),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(9),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(192),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_function_parameters] = STATE(271),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(10),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(223),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(11),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(203),
    [sym_condition] = STATE(265),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(203),
    [sym_condition] = STATE(305),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(13),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(192),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_function_parameters] = STATE(283),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(14),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(223),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(229),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(264),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(243),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(18),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(227),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(19),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(289),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(20),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(231),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(21),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(292),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(22),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(228),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(23),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(314),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(24),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(99),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(25),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(71),
    [sym_value] = STATE(68),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(26),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
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
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(229),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(27),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(275),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(28),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(236),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(29),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(274),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(30),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(223),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(31),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_expression] = STATE(288),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(32),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(230),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(33),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(307),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(34),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_expression] = STATE(306),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_expression] = STATE(240),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(36),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_expression] = STATE(232),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(37),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_expression] = STATE(277),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(38),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_expression] = STATE(298),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(39),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_expression] = STATE(125),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(40),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_expression] = STATE(299),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(41),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym_expression] = STATE(302),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(42),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_expression] = STATE(107),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(43),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [44] = {
    [sym_expression] = STATE(315),
    [sym_value] = STATE(93),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(44),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_assert] = ACTIONS(69),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [45] = {
    [sym_comment] = STATE(45),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_extension] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_shell] = ACTIONS(153),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_assert] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_arch] = ACTIONS(153),
    [anon_sym_num_cpus] = ACTIONS(153),
    [anon_sym_os] = ACTIONS(153),
    [anon_sym_os_family] = ACTIONS(153),
    [anon_sym_env_var] = ACTIONS(153),
    [anon_sym_env_var_or_default] = ACTIONS(153),
    [anon_sym_env] = ACTIONS(153),
    [anon_sym_is_dependency] = ACTIONS(153),
    [anon_sym_invocation_dir] = ACTIONS(153),
    [anon_sym_invocation_dir_native] = ACTIONS(153),
    [anon_sym_invocation_directory] = ACTIONS(153),
    [anon_sym_invocation_directory_native] = ACTIONS(153),
    [anon_sym_justfile] = ACTIONS(153),
    [anon_sym_justfile_dir] = ACTIONS(153),
    [anon_sym_justfile_directory] = ACTIONS(153),
    [anon_sym_source_dir] = ACTIONS(153),
    [anon_sym_source_directory] = ACTIONS(153),
    [anon_sym_source_file] = ACTIONS(153),
    [anon_sym_just_executable] = ACTIONS(153),
    [anon_sym_just_pid] = ACTIONS(153),
    [anon_sym_append] = ACTIONS(153),
    [anon_sym_prepend] = ACTIONS(153),
    [anon_sym_encode_uri_component] = ACTIONS(153),
    [anon_sym_quote] = ACTIONS(153),
    [anon_sym_replace] = ACTIONS(153),
    [anon_sym_replace_regex] = ACTIONS(153),
    [anon_sym_trim] = ACTIONS(153),
    [anon_sym_trim_end] = ACTIONS(153),
    [anon_sym_trim_end_match] = ACTIONS(153),
    [anon_sym_trim_end_matches] = ACTIONS(153),
    [anon_sym_trim_start] = ACTIONS(153),
    [anon_sym_trim_start_match] = ACTIONS(153),
    [anon_sym_trim_start_matches] = ACTIONS(153),
    [anon_sym_capitalize] = ACTIONS(153),
    [anon_sym_kebabcase] = ACTIONS(153),
    [anon_sym_lowercamelcase] = ACTIONS(153),
    [anon_sym_lowercase] = ACTIONS(153),
    [anon_sym_shoutykebabcase] = ACTIONS(153),
    [anon_sym_shoutysnakecase] = ACTIONS(153),
    [anon_sym_snakecase] = ACTIONS(153),
    [anon_sym_titlecase] = ACTIONS(153),
    [anon_sym_uppercamelcase] = ACTIONS(153),
    [anon_sym_uppercase] = ACTIONS(153),
    [anon_sym_absolute_path] = ACTIONS(153),
    [anon_sym_canonicalize] = ACTIONS(153),
    [anon_sym_file_name] = ACTIONS(153),
    [anon_sym_file_stem] = ACTIONS(153),
    [anon_sym_parent_dir] = ACTIONS(153),
    [anon_sym_parent_directory] = ACTIONS(153),
    [anon_sym_without_extension] = ACTIONS(153),
    [anon_sym_clean] = ACTIONS(153),
    [anon_sym_join] = ACTIONS(153),
    [anon_sym_path_exists] = ACTIONS(153),
    [anon_sym_error] = ACTIONS(153),
    [anon_sym_blake3] = ACTIONS(153),
    [anon_sym_blake3_file] = ACTIONS(153),
    [anon_sym_sha256] = ACTIONS(153),
    [anon_sym_sha256_file] = ACTIONS(153),
    [anon_sym_uuid] = ACTIONS(153),
    [anon_sym_choose] = ACTIONS(153),
    [anon_sym_datetime] = ACTIONS(153),
    [anon_sym_datetime_utc] = ACTIONS(153),
    [anon_sym_semver_matches] = ACTIONS(153),
    [anon_sym_cache_dir] = ACTIONS(153),
    [anon_sym_cache_directory] = ACTIONS(153),
    [anon_sym_config_dir] = ACTIONS(153),
    [anon_sym_config_directory] = ACTIONS(153),
    [anon_sym_config_local_dir] = ACTIONS(153),
    [anon_sym_config_local_directory] = ACTIONS(153),
    [anon_sym_data_dir] = ACTIONS(153),
    [anon_sym_data_directory] = ACTIONS(153),
    [anon_sym_data_local_dir] = ACTIONS(153),
    [anon_sym_data_local_directory] = ACTIONS(153),
    [anon_sym_executable_dir] = ACTIONS(153),
    [anon_sym_executable_directory] = ACTIONS(153),
    [anon_sym_home_dir] = ACTIONS(153),
    [anon_sym_home_directory] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [sym_identifier] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_extension] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_shell] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_assert] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_arch] = ACTIONS(157),
    [anon_sym_num_cpus] = ACTIONS(157),
    [anon_sym_os] = ACTIONS(157),
    [anon_sym_os_family] = ACTIONS(157),
    [anon_sym_env_var] = ACTIONS(157),
    [anon_sym_env_var_or_default] = ACTIONS(157),
    [anon_sym_env] = ACTIONS(157),
    [anon_sym_is_dependency] = ACTIONS(157),
    [anon_sym_invocation_dir] = ACTIONS(157),
    [anon_sym_invocation_dir_native] = ACTIONS(157),
    [anon_sym_invocation_directory] = ACTIONS(157),
    [anon_sym_invocation_directory_native] = ACTIONS(157),
    [anon_sym_justfile] = ACTIONS(157),
    [anon_sym_justfile_dir] = ACTIONS(157),
    [anon_sym_justfile_directory] = ACTIONS(157),
    [anon_sym_source_dir] = ACTIONS(157),
    [anon_sym_source_directory] = ACTIONS(157),
    [anon_sym_source_file] = ACTIONS(157),
    [anon_sym_just_executable] = ACTIONS(157),
    [anon_sym_just_pid] = ACTIONS(157),
    [anon_sym_append] = ACTIONS(157),
    [anon_sym_prepend] = ACTIONS(157),
    [anon_sym_encode_uri_component] = ACTIONS(157),
    [anon_sym_quote] = ACTIONS(157),
    [anon_sym_replace] = ACTIONS(157),
    [anon_sym_replace_regex] = ACTIONS(157),
    [anon_sym_trim] = ACTIONS(157),
    [anon_sym_trim_end] = ACTIONS(157),
    [anon_sym_trim_end_match] = ACTIONS(157),
    [anon_sym_trim_end_matches] = ACTIONS(157),
    [anon_sym_trim_start] = ACTIONS(157),
    [anon_sym_trim_start_match] = ACTIONS(157),
    [anon_sym_trim_start_matches] = ACTIONS(157),
    [anon_sym_capitalize] = ACTIONS(157),
    [anon_sym_kebabcase] = ACTIONS(157),
    [anon_sym_lowercamelcase] = ACTIONS(157),
    [anon_sym_lowercase] = ACTIONS(157),
    [anon_sym_shoutykebabcase] = ACTIONS(157),
    [anon_sym_shoutysnakecase] = ACTIONS(157),
    [anon_sym_snakecase] = ACTIONS(157),
    [anon_sym_titlecase] = ACTIONS(157),
    [anon_sym_uppercamelcase] = ACTIONS(157),
    [anon_sym_uppercase] = ACTIONS(157),
    [anon_sym_absolute_path] = ACTIONS(157),
    [anon_sym_canonicalize] = ACTIONS(157),
    [anon_sym_file_name] = ACTIONS(157),
    [anon_sym_file_stem] = ACTIONS(157),
    [anon_sym_parent_dir] = ACTIONS(157),
    [anon_sym_parent_directory] = ACTIONS(157),
    [anon_sym_without_extension] = ACTIONS(157),
    [anon_sym_clean] = ACTIONS(157),
    [anon_sym_join] = ACTIONS(157),
    [anon_sym_path_exists] = ACTIONS(157),
    [anon_sym_error] = ACTIONS(157),
    [anon_sym_blake3] = ACTIONS(157),
    [anon_sym_blake3_file] = ACTIONS(157),
    [anon_sym_sha256] = ACTIONS(157),
    [anon_sym_sha256_file] = ACTIONS(157),
    [anon_sym_uuid] = ACTIONS(157),
    [anon_sym_choose] = ACTIONS(157),
    [anon_sym_datetime] = ACTIONS(157),
    [anon_sym_datetime_utc] = ACTIONS(157),
    [anon_sym_semver_matches] = ACTIONS(157),
    [anon_sym_cache_dir] = ACTIONS(157),
    [anon_sym_cache_directory] = ACTIONS(157),
    [anon_sym_config_dir] = ACTIONS(157),
    [anon_sym_config_directory] = ACTIONS(157),
    [anon_sym_config_local_dir] = ACTIONS(157),
    [anon_sym_config_local_directory] = ACTIONS(157),
    [anon_sym_data_dir] = ACTIONS(157),
    [anon_sym_data_directory] = ACTIONS(157),
    [anon_sym_data_local_dir] = ACTIONS(157),
    [anon_sym_data_local_directory] = ACTIONS(157),
    [anon_sym_executable_dir] = ACTIONS(157),
    [anon_sym_executable_directory] = ACTIONS(157),
    [anon_sym_home_dir] = ACTIONS(157),
    [anon_sym_home_directory] = ACTIONS(157),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [47] = {
    [sym_comment] = STATE(47),
    [sym_identifier] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_extension] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_shell] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_assert] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_arch] = ACTIONS(161),
    [anon_sym_num_cpus] = ACTIONS(161),
    [anon_sym_os] = ACTIONS(161),
    [anon_sym_os_family] = ACTIONS(161),
    [anon_sym_env_var] = ACTIONS(161),
    [anon_sym_env_var_or_default] = ACTIONS(161),
    [anon_sym_env] = ACTIONS(161),
    [anon_sym_is_dependency] = ACTIONS(161),
    [anon_sym_invocation_dir] = ACTIONS(161),
    [anon_sym_invocation_dir_native] = ACTIONS(161),
    [anon_sym_invocation_directory] = ACTIONS(161),
    [anon_sym_invocation_directory_native] = ACTIONS(161),
    [anon_sym_justfile] = ACTIONS(161),
    [anon_sym_justfile_dir] = ACTIONS(161),
    [anon_sym_justfile_directory] = ACTIONS(161),
    [anon_sym_source_dir] = ACTIONS(161),
    [anon_sym_source_directory] = ACTIONS(161),
    [anon_sym_source_file] = ACTIONS(161),
    [anon_sym_just_executable] = ACTIONS(161),
    [anon_sym_just_pid] = ACTIONS(161),
    [anon_sym_append] = ACTIONS(161),
    [anon_sym_prepend] = ACTIONS(161),
    [anon_sym_encode_uri_component] = ACTIONS(161),
    [anon_sym_quote] = ACTIONS(161),
    [anon_sym_replace] = ACTIONS(161),
    [anon_sym_replace_regex] = ACTIONS(161),
    [anon_sym_trim] = ACTIONS(161),
    [anon_sym_trim_end] = ACTIONS(161),
    [anon_sym_trim_end_match] = ACTIONS(161),
    [anon_sym_trim_end_matches] = ACTIONS(161),
    [anon_sym_trim_start] = ACTIONS(161),
    [anon_sym_trim_start_match] = ACTIONS(161),
    [anon_sym_trim_start_matches] = ACTIONS(161),
    [anon_sym_capitalize] = ACTIONS(161),
    [anon_sym_kebabcase] = ACTIONS(161),
    [anon_sym_lowercamelcase] = ACTIONS(161),
    [anon_sym_lowercase] = ACTIONS(161),
    [anon_sym_shoutykebabcase] = ACTIONS(161),
    [anon_sym_shoutysnakecase] = ACTIONS(161),
    [anon_sym_snakecase] = ACTIONS(161),
    [anon_sym_titlecase] = ACTIONS(161),
    [anon_sym_uppercamelcase] = ACTIONS(161),
    [anon_sym_uppercase] = ACTIONS(161),
    [anon_sym_absolute_path] = ACTIONS(161),
    [anon_sym_canonicalize] = ACTIONS(161),
    [anon_sym_file_name] = ACTIONS(161),
    [anon_sym_file_stem] = ACTIONS(161),
    [anon_sym_parent_dir] = ACTIONS(161),
    [anon_sym_parent_directory] = ACTIONS(161),
    [anon_sym_without_extension] = ACTIONS(161),
    [anon_sym_clean] = ACTIONS(161),
    [anon_sym_join] = ACTIONS(161),
    [anon_sym_path_exists] = ACTIONS(161),
    [anon_sym_error] = ACTIONS(161),
    [anon_sym_blake3] = ACTIONS(161),
    [anon_sym_blake3_file] = ACTIONS(161),
    [anon_sym_sha256] = ACTIONS(161),
    [anon_sym_sha256_file] = ACTIONS(161),
    [anon_sym_uuid] = ACTIONS(161),
    [anon_sym_choose] = ACTIONS(161),
    [anon_sym_datetime] = ACTIONS(161),
    [anon_sym_datetime_utc] = ACTIONS(161),
    [anon_sym_semver_matches] = ACTIONS(161),
    [anon_sym_cache_dir] = ACTIONS(161),
    [anon_sym_cache_directory] = ACTIONS(161),
    [anon_sym_config_dir] = ACTIONS(161),
    [anon_sym_config_directory] = ACTIONS(161),
    [anon_sym_config_local_dir] = ACTIONS(161),
    [anon_sym_config_local_directory] = ACTIONS(161),
    [anon_sym_data_dir] = ACTIONS(161),
    [anon_sym_data_directory] = ACTIONS(161),
    [anon_sym_data_local_dir] = ACTIONS(161),
    [anon_sym_data_local_directory] = ACTIONS(161),
    [anon_sym_executable_dir] = ACTIONS(161),
    [anon_sym_executable_directory] = ACTIONS(161),
    [anon_sym_home_dir] = ACTIONS(161),
    [anon_sym_home_directory] = ACTIONS(161),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [48] = {
    [sym_comment] = STATE(48),
    [sym_identifier] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_extension] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_shell] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_assert] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_arch] = ACTIONS(165),
    [anon_sym_num_cpus] = ACTIONS(165),
    [anon_sym_os] = ACTIONS(165),
    [anon_sym_os_family] = ACTIONS(165),
    [anon_sym_env_var] = ACTIONS(165),
    [anon_sym_env_var_or_default] = ACTIONS(165),
    [anon_sym_env] = ACTIONS(165),
    [anon_sym_is_dependency] = ACTIONS(165),
    [anon_sym_invocation_dir] = ACTIONS(165),
    [anon_sym_invocation_dir_native] = ACTIONS(165),
    [anon_sym_invocation_directory] = ACTIONS(165),
    [anon_sym_invocation_directory_native] = ACTIONS(165),
    [anon_sym_justfile] = ACTIONS(165),
    [anon_sym_justfile_dir] = ACTIONS(165),
    [anon_sym_justfile_directory] = ACTIONS(165),
    [anon_sym_source_dir] = ACTIONS(165),
    [anon_sym_source_directory] = ACTIONS(165),
    [anon_sym_source_file] = ACTIONS(165),
    [anon_sym_just_executable] = ACTIONS(165),
    [anon_sym_just_pid] = ACTIONS(165),
    [anon_sym_append] = ACTIONS(165),
    [anon_sym_prepend] = ACTIONS(165),
    [anon_sym_encode_uri_component] = ACTIONS(165),
    [anon_sym_quote] = ACTIONS(165),
    [anon_sym_replace] = ACTIONS(165),
    [anon_sym_replace_regex] = ACTIONS(165),
    [anon_sym_trim] = ACTIONS(165),
    [anon_sym_trim_end] = ACTIONS(165),
    [anon_sym_trim_end_match] = ACTIONS(165),
    [anon_sym_trim_end_matches] = ACTIONS(165),
    [anon_sym_trim_start] = ACTIONS(165),
    [anon_sym_trim_start_match] = ACTIONS(165),
    [anon_sym_trim_start_matches] = ACTIONS(165),
    [anon_sym_capitalize] = ACTIONS(165),
    [anon_sym_kebabcase] = ACTIONS(165),
    [anon_sym_lowercamelcase] = ACTIONS(165),
    [anon_sym_lowercase] = ACTIONS(165),
    [anon_sym_shoutykebabcase] = ACTIONS(165),
    [anon_sym_shoutysnakecase] = ACTIONS(165),
    [anon_sym_snakecase] = ACTIONS(165),
    [anon_sym_titlecase] = ACTIONS(165),
    [anon_sym_uppercamelcase] = ACTIONS(165),
    [anon_sym_uppercase] = ACTIONS(165),
    [anon_sym_absolute_path] = ACTIONS(165),
    [anon_sym_canonicalize] = ACTIONS(165),
    [anon_sym_file_name] = ACTIONS(165),
    [anon_sym_file_stem] = ACTIONS(165),
    [anon_sym_parent_dir] = ACTIONS(165),
    [anon_sym_parent_directory] = ACTIONS(165),
    [anon_sym_without_extension] = ACTIONS(165),
    [anon_sym_clean] = ACTIONS(165),
    [anon_sym_join] = ACTIONS(165),
    [anon_sym_path_exists] = ACTIONS(165),
    [anon_sym_error] = ACTIONS(165),
    [anon_sym_blake3] = ACTIONS(165),
    [anon_sym_blake3_file] = ACTIONS(165),
    [anon_sym_sha256] = ACTIONS(165),
    [anon_sym_sha256_file] = ACTIONS(165),
    [anon_sym_uuid] = ACTIONS(165),
    [anon_sym_choose] = ACTIONS(165),
    [anon_sym_datetime] = ACTIONS(165),
    [anon_sym_datetime_utc] = ACTIONS(165),
    [anon_sym_semver_matches] = ACTIONS(165),
    [anon_sym_cache_dir] = ACTIONS(165),
    [anon_sym_cache_directory] = ACTIONS(165),
    [anon_sym_config_dir] = ACTIONS(165),
    [anon_sym_config_directory] = ACTIONS(165),
    [anon_sym_config_local_dir] = ACTIONS(165),
    [anon_sym_config_local_directory] = ACTIONS(165),
    [anon_sym_data_dir] = ACTIONS(165),
    [anon_sym_data_directory] = ACTIONS(165),
    [anon_sym_data_local_dir] = ACTIONS(165),
    [anon_sym_data_local_directory] = ACTIONS(165),
    [anon_sym_executable_dir] = ACTIONS(165),
    [anon_sym_executable_directory] = ACTIONS(165),
    [anon_sym_home_dir] = ACTIONS(165),
    [anon_sym_home_directory] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = STATE(49),
    [sym_identifier] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_extension] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_shell] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_assert] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_arch] = ACTIONS(169),
    [anon_sym_num_cpus] = ACTIONS(169),
    [anon_sym_os] = ACTIONS(169),
    [anon_sym_os_family] = ACTIONS(169),
    [anon_sym_env_var] = ACTIONS(169),
    [anon_sym_env_var_or_default] = ACTIONS(169),
    [anon_sym_env] = ACTIONS(169),
    [anon_sym_is_dependency] = ACTIONS(169),
    [anon_sym_invocation_dir] = ACTIONS(169),
    [anon_sym_invocation_dir_native] = ACTIONS(169),
    [anon_sym_invocation_directory] = ACTIONS(169),
    [anon_sym_invocation_directory_native] = ACTIONS(169),
    [anon_sym_justfile] = ACTIONS(169),
    [anon_sym_justfile_dir] = ACTIONS(169),
    [anon_sym_justfile_directory] = ACTIONS(169),
    [anon_sym_source_dir] = ACTIONS(169),
    [anon_sym_source_directory] = ACTIONS(169),
    [anon_sym_source_file] = ACTIONS(169),
    [anon_sym_just_executable] = ACTIONS(169),
    [anon_sym_just_pid] = ACTIONS(169),
    [anon_sym_append] = ACTIONS(169),
    [anon_sym_prepend] = ACTIONS(169),
    [anon_sym_encode_uri_component] = ACTIONS(169),
    [anon_sym_quote] = ACTIONS(169),
    [anon_sym_replace] = ACTIONS(169),
    [anon_sym_replace_regex] = ACTIONS(169),
    [anon_sym_trim] = ACTIONS(169),
    [anon_sym_trim_end] = ACTIONS(169),
    [anon_sym_trim_end_match] = ACTIONS(169),
    [anon_sym_trim_end_matches] = ACTIONS(169),
    [anon_sym_trim_start] = ACTIONS(169),
    [anon_sym_trim_start_match] = ACTIONS(169),
    [anon_sym_trim_start_matches] = ACTIONS(169),
    [anon_sym_capitalize] = ACTIONS(169),
    [anon_sym_kebabcase] = ACTIONS(169),
    [anon_sym_lowercamelcase] = ACTIONS(169),
    [anon_sym_lowercase] = ACTIONS(169),
    [anon_sym_shoutykebabcase] = ACTIONS(169),
    [anon_sym_shoutysnakecase] = ACTIONS(169),
    [anon_sym_snakecase] = ACTIONS(169),
    [anon_sym_titlecase] = ACTIONS(169),
    [anon_sym_uppercamelcase] = ACTIONS(169),
    [anon_sym_uppercase] = ACTIONS(169),
    [anon_sym_absolute_path] = ACTIONS(169),
    [anon_sym_canonicalize] = ACTIONS(169),
    [anon_sym_file_name] = ACTIONS(169),
    [anon_sym_file_stem] = ACTIONS(169),
    [anon_sym_parent_dir] = ACTIONS(169),
    [anon_sym_parent_directory] = ACTIONS(169),
    [anon_sym_without_extension] = ACTIONS(169),
    [anon_sym_clean] = ACTIONS(169),
    [anon_sym_join] = ACTIONS(169),
    [anon_sym_path_exists] = ACTIONS(169),
    [anon_sym_error] = ACTIONS(169),
    [anon_sym_blake3] = ACTIONS(169),
    [anon_sym_blake3_file] = ACTIONS(169),
    [anon_sym_sha256] = ACTIONS(169),
    [anon_sym_sha256_file] = ACTIONS(169),
    [anon_sym_uuid] = ACTIONS(169),
    [anon_sym_choose] = ACTIONS(169),
    [anon_sym_datetime] = ACTIONS(169),
    [anon_sym_datetime_utc] = ACTIONS(169),
    [anon_sym_semver_matches] = ACTIONS(169),
    [anon_sym_cache_dir] = ACTIONS(169),
    [anon_sym_cache_directory] = ACTIONS(169),
    [anon_sym_config_dir] = ACTIONS(169),
    [anon_sym_config_directory] = ACTIONS(169),
    [anon_sym_config_local_dir] = ACTIONS(169),
    [anon_sym_config_local_directory] = ACTIONS(169),
    [anon_sym_data_dir] = ACTIONS(169),
    [anon_sym_data_directory] = ACTIONS(169),
    [anon_sym_data_local_dir] = ACTIONS(169),
    [anon_sym_data_local_directory] = ACTIONS(169),
    [anon_sym_executable_dir] = ACTIONS(169),
    [anon_sym_executable_directory] = ACTIONS(169),
    [anon_sym_home_dir] = ACTIONS(169),
    [anon_sym_home_directory] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_comment] = STATE(50),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_extension] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_shell] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_assert] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_arch] = ACTIONS(173),
    [anon_sym_num_cpus] = ACTIONS(173),
    [anon_sym_os] = ACTIONS(173),
    [anon_sym_os_family] = ACTIONS(173),
    [anon_sym_env_var] = ACTIONS(173),
    [anon_sym_env_var_or_default] = ACTIONS(173),
    [anon_sym_env] = ACTIONS(173),
    [anon_sym_is_dependency] = ACTIONS(173),
    [anon_sym_invocation_dir] = ACTIONS(173),
    [anon_sym_invocation_dir_native] = ACTIONS(173),
    [anon_sym_invocation_directory] = ACTIONS(173),
    [anon_sym_invocation_directory_native] = ACTIONS(173),
    [anon_sym_justfile] = ACTIONS(173),
    [anon_sym_justfile_dir] = ACTIONS(173),
    [anon_sym_justfile_directory] = ACTIONS(173),
    [anon_sym_source_dir] = ACTIONS(173),
    [anon_sym_source_directory] = ACTIONS(173),
    [anon_sym_source_file] = ACTIONS(173),
    [anon_sym_just_executable] = ACTIONS(173),
    [anon_sym_just_pid] = ACTIONS(173),
    [anon_sym_append] = ACTIONS(173),
    [anon_sym_prepend] = ACTIONS(173),
    [anon_sym_encode_uri_component] = ACTIONS(173),
    [anon_sym_quote] = ACTIONS(173),
    [anon_sym_replace] = ACTIONS(173),
    [anon_sym_replace_regex] = ACTIONS(173),
    [anon_sym_trim] = ACTIONS(173),
    [anon_sym_trim_end] = ACTIONS(173),
    [anon_sym_trim_end_match] = ACTIONS(173),
    [anon_sym_trim_end_matches] = ACTIONS(173),
    [anon_sym_trim_start] = ACTIONS(173),
    [anon_sym_trim_start_match] = ACTIONS(173),
    [anon_sym_trim_start_matches] = ACTIONS(173),
    [anon_sym_capitalize] = ACTIONS(173),
    [anon_sym_kebabcase] = ACTIONS(173),
    [anon_sym_lowercamelcase] = ACTIONS(173),
    [anon_sym_lowercase] = ACTIONS(173),
    [anon_sym_shoutykebabcase] = ACTIONS(173),
    [anon_sym_shoutysnakecase] = ACTIONS(173),
    [anon_sym_snakecase] = ACTIONS(173),
    [anon_sym_titlecase] = ACTIONS(173),
    [anon_sym_uppercamelcase] = ACTIONS(173),
    [anon_sym_uppercase] = ACTIONS(173),
    [anon_sym_absolute_path] = ACTIONS(173),
    [anon_sym_canonicalize] = ACTIONS(173),
    [anon_sym_file_name] = ACTIONS(173),
    [anon_sym_file_stem] = ACTIONS(173),
    [anon_sym_parent_dir] = ACTIONS(173),
    [anon_sym_parent_directory] = ACTIONS(173),
    [anon_sym_without_extension] = ACTIONS(173),
    [anon_sym_clean] = ACTIONS(173),
    [anon_sym_join] = ACTIONS(173),
    [anon_sym_path_exists] = ACTIONS(173),
    [anon_sym_error] = ACTIONS(173),
    [anon_sym_blake3] = ACTIONS(173),
    [anon_sym_blake3_file] = ACTIONS(173),
    [anon_sym_sha256] = ACTIONS(173),
    [anon_sym_sha256_file] = ACTIONS(173),
    [anon_sym_uuid] = ACTIONS(173),
    [anon_sym_choose] = ACTIONS(173),
    [anon_sym_datetime] = ACTIONS(173),
    [anon_sym_datetime_utc] = ACTIONS(173),
    [anon_sym_semver_matches] = ACTIONS(173),
    [anon_sym_cache_dir] = ACTIONS(173),
    [anon_sym_cache_directory] = ACTIONS(173),
    [anon_sym_config_dir] = ACTIONS(173),
    [anon_sym_config_directory] = ACTIONS(173),
    [anon_sym_config_local_dir] = ACTIONS(173),
    [anon_sym_config_local_directory] = ACTIONS(173),
    [anon_sym_data_dir] = ACTIONS(173),
    [anon_sym_data_directory] = ACTIONS(173),
    [anon_sym_data_local_dir] = ACTIONS(173),
    [anon_sym_data_local_directory] = ACTIONS(173),
    [anon_sym_executable_dir] = ACTIONS(173),
    [anon_sym_executable_directory] = ACTIONS(173),
    [anon_sym_home_dir] = ACTIONS(173),
    [anon_sym_home_directory] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = STATE(51),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_extension] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_shell] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_assert] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_arch] = ACTIONS(177),
    [anon_sym_num_cpus] = ACTIONS(177),
    [anon_sym_os] = ACTIONS(177),
    [anon_sym_os_family] = ACTIONS(177),
    [anon_sym_env_var] = ACTIONS(177),
    [anon_sym_env_var_or_default] = ACTIONS(177),
    [anon_sym_env] = ACTIONS(177),
    [anon_sym_is_dependency] = ACTIONS(177),
    [anon_sym_invocation_dir] = ACTIONS(177),
    [anon_sym_invocation_dir_native] = ACTIONS(177),
    [anon_sym_invocation_directory] = ACTIONS(177),
    [anon_sym_invocation_directory_native] = ACTIONS(177),
    [anon_sym_justfile] = ACTIONS(177),
    [anon_sym_justfile_dir] = ACTIONS(177),
    [anon_sym_justfile_directory] = ACTIONS(177),
    [anon_sym_source_dir] = ACTIONS(177),
    [anon_sym_source_directory] = ACTIONS(177),
    [anon_sym_source_file] = ACTIONS(177),
    [anon_sym_just_executable] = ACTIONS(177),
    [anon_sym_just_pid] = ACTIONS(177),
    [anon_sym_append] = ACTIONS(177),
    [anon_sym_prepend] = ACTIONS(177),
    [anon_sym_encode_uri_component] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(177),
    [anon_sym_replace] = ACTIONS(177),
    [anon_sym_replace_regex] = ACTIONS(177),
    [anon_sym_trim] = ACTIONS(177),
    [anon_sym_trim_end] = ACTIONS(177),
    [anon_sym_trim_end_match] = ACTIONS(177),
    [anon_sym_trim_end_matches] = ACTIONS(177),
    [anon_sym_trim_start] = ACTIONS(177),
    [anon_sym_trim_start_match] = ACTIONS(177),
    [anon_sym_trim_start_matches] = ACTIONS(177),
    [anon_sym_capitalize] = ACTIONS(177),
    [anon_sym_kebabcase] = ACTIONS(177),
    [anon_sym_lowercamelcase] = ACTIONS(177),
    [anon_sym_lowercase] = ACTIONS(177),
    [anon_sym_shoutykebabcase] = ACTIONS(177),
    [anon_sym_shoutysnakecase] = ACTIONS(177),
    [anon_sym_snakecase] = ACTIONS(177),
    [anon_sym_titlecase] = ACTIONS(177),
    [anon_sym_uppercamelcase] = ACTIONS(177),
    [anon_sym_uppercase] = ACTIONS(177),
    [anon_sym_absolute_path] = ACTIONS(177),
    [anon_sym_canonicalize] = ACTIONS(177),
    [anon_sym_file_name] = ACTIONS(177),
    [anon_sym_file_stem] = ACTIONS(177),
    [anon_sym_parent_dir] = ACTIONS(177),
    [anon_sym_parent_directory] = ACTIONS(177),
    [anon_sym_without_extension] = ACTIONS(177),
    [anon_sym_clean] = ACTIONS(177),
    [anon_sym_join] = ACTIONS(177),
    [anon_sym_path_exists] = ACTIONS(177),
    [anon_sym_error] = ACTIONS(177),
    [anon_sym_blake3] = ACTIONS(177),
    [anon_sym_blake3_file] = ACTIONS(177),
    [anon_sym_sha256] = ACTIONS(177),
    [anon_sym_sha256_file] = ACTIONS(177),
    [anon_sym_uuid] = ACTIONS(177),
    [anon_sym_choose] = ACTIONS(177),
    [anon_sym_datetime] = ACTIONS(177),
    [anon_sym_datetime_utc] = ACTIONS(177),
    [anon_sym_semver_matches] = ACTIONS(177),
    [anon_sym_cache_dir] = ACTIONS(177),
    [anon_sym_cache_directory] = ACTIONS(177),
    [anon_sym_config_dir] = ACTIONS(177),
    [anon_sym_config_directory] = ACTIONS(177),
    [anon_sym_config_local_dir] = ACTIONS(177),
    [anon_sym_config_local_directory] = ACTIONS(177),
    [anon_sym_data_dir] = ACTIONS(177),
    [anon_sym_data_directory] = ACTIONS(177),
    [anon_sym_data_local_dir] = ACTIONS(177),
    [anon_sym_data_local_directory] = ACTIONS(177),
    [anon_sym_executable_dir] = ACTIONS(177),
    [anon_sym_executable_directory] = ACTIONS(177),
    [anon_sym_home_dir] = ACTIONS(177),
    [anon_sym_home_directory] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = STATE(52),
    [sym_identifier] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_extension] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_shell] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_assert] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_arch] = ACTIONS(157),
    [anon_sym_num_cpus] = ACTIONS(157),
    [anon_sym_os] = ACTIONS(157),
    [anon_sym_os_family] = ACTIONS(157),
    [anon_sym_env_var] = ACTIONS(157),
    [anon_sym_env_var_or_default] = ACTIONS(157),
    [anon_sym_env] = ACTIONS(157),
    [anon_sym_is_dependency] = ACTIONS(157),
    [anon_sym_invocation_dir] = ACTIONS(157),
    [anon_sym_invocation_dir_native] = ACTIONS(157),
    [anon_sym_invocation_directory] = ACTIONS(157),
    [anon_sym_invocation_directory_native] = ACTIONS(157),
    [anon_sym_justfile] = ACTIONS(157),
    [anon_sym_justfile_dir] = ACTIONS(157),
    [anon_sym_justfile_directory] = ACTIONS(157),
    [anon_sym_source_dir] = ACTIONS(157),
    [anon_sym_source_directory] = ACTIONS(157),
    [anon_sym_source_file] = ACTIONS(157),
    [anon_sym_just_executable] = ACTIONS(157),
    [anon_sym_just_pid] = ACTIONS(157),
    [anon_sym_append] = ACTIONS(157),
    [anon_sym_prepend] = ACTIONS(157),
    [anon_sym_encode_uri_component] = ACTIONS(157),
    [anon_sym_quote] = ACTIONS(157),
    [anon_sym_replace] = ACTIONS(157),
    [anon_sym_replace_regex] = ACTIONS(157),
    [anon_sym_trim] = ACTIONS(157),
    [anon_sym_trim_end] = ACTIONS(157),
    [anon_sym_trim_end_match] = ACTIONS(157),
    [anon_sym_trim_end_matches] = ACTIONS(157),
    [anon_sym_trim_start] = ACTIONS(157),
    [anon_sym_trim_start_match] = ACTIONS(157),
    [anon_sym_trim_start_matches] = ACTIONS(157),
    [anon_sym_capitalize] = ACTIONS(157),
    [anon_sym_kebabcase] = ACTIONS(157),
    [anon_sym_lowercamelcase] = ACTIONS(157),
    [anon_sym_lowercase] = ACTIONS(157),
    [anon_sym_shoutykebabcase] = ACTIONS(157),
    [anon_sym_shoutysnakecase] = ACTIONS(157),
    [anon_sym_snakecase] = ACTIONS(157),
    [anon_sym_titlecase] = ACTIONS(157),
    [anon_sym_uppercamelcase] = ACTIONS(157),
    [anon_sym_uppercase] = ACTIONS(157),
    [anon_sym_absolute_path] = ACTIONS(157),
    [anon_sym_canonicalize] = ACTIONS(157),
    [anon_sym_file_name] = ACTIONS(157),
    [anon_sym_file_stem] = ACTIONS(157),
    [anon_sym_parent_dir] = ACTIONS(157),
    [anon_sym_parent_directory] = ACTIONS(157),
    [anon_sym_without_extension] = ACTIONS(157),
    [anon_sym_clean] = ACTIONS(157),
    [anon_sym_join] = ACTIONS(157),
    [anon_sym_path_exists] = ACTIONS(157),
    [anon_sym_error] = ACTIONS(157),
    [anon_sym_blake3] = ACTIONS(157),
    [anon_sym_blake3_file] = ACTIONS(157),
    [anon_sym_sha256] = ACTIONS(157),
    [anon_sym_sha256_file] = ACTIONS(157),
    [anon_sym_uuid] = ACTIONS(157),
    [anon_sym_choose] = ACTIONS(157),
    [anon_sym_datetime] = ACTIONS(157),
    [anon_sym_datetime_utc] = ACTIONS(157),
    [anon_sym_semver_matches] = ACTIONS(157),
    [anon_sym_cache_dir] = ACTIONS(157),
    [anon_sym_cache_directory] = ACTIONS(157),
    [anon_sym_config_dir] = ACTIONS(157),
    [anon_sym_config_directory] = ACTIONS(157),
    [anon_sym_config_local_dir] = ACTIONS(157),
    [anon_sym_config_local_directory] = ACTIONS(157),
    [anon_sym_data_dir] = ACTIONS(157),
    [anon_sym_data_directory] = ACTIONS(157),
    [anon_sym_data_local_dir] = ACTIONS(157),
    [anon_sym_data_local_directory] = ACTIONS(157),
    [anon_sym_executable_dir] = ACTIONS(157),
    [anon_sym_executable_directory] = ACTIONS(157),
    [anon_sym_home_dir] = ACTIONS(157),
    [anon_sym_home_directory] = ACTIONS(157),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_comment] = STATE(53),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_extension] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_shell] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_assert] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_arch] = ACTIONS(183),
    [anon_sym_num_cpus] = ACTIONS(183),
    [anon_sym_os] = ACTIONS(183),
    [anon_sym_os_family] = ACTIONS(183),
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
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_comment] = STATE(54),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_extension] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_shell] = ACTIONS(187),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_assert] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_arch] = ACTIONS(187),
    [anon_sym_num_cpus] = ACTIONS(187),
    [anon_sym_os] = ACTIONS(187),
    [anon_sym_os_family] = ACTIONS(187),
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
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym_comment] = STATE(55),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_extension] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_DOLLAR] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_shell] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_assert] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_arch] = ACTIONS(191),
    [anon_sym_num_cpus] = ACTIONS(191),
    [anon_sym_os] = ACTIONS(191),
    [anon_sym_os_family] = ACTIONS(191),
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
    [anon_sym_BQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_extension] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_shell] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_assert] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_arch] = ACTIONS(195),
    [anon_sym_num_cpus] = ACTIONS(195),
    [anon_sym_os] = ACTIONS(195),
    [anon_sym_os_family] = ACTIONS(195),
    [anon_sym_env_var] = ACTIONS(195),
    [anon_sym_env_var_or_default] = ACTIONS(195),
    [anon_sym_env] = ACTIONS(195),
    [anon_sym_is_dependency] = ACTIONS(195),
    [anon_sym_invocation_dir] = ACTIONS(195),
    [anon_sym_invocation_dir_native] = ACTIONS(195),
    [anon_sym_invocation_directory] = ACTIONS(195),
    [anon_sym_invocation_directory_native] = ACTIONS(195),
    [anon_sym_justfile] = ACTIONS(195),
    [anon_sym_justfile_dir] = ACTIONS(195),
    [anon_sym_justfile_directory] = ACTIONS(195),
    [anon_sym_source_dir] = ACTIONS(195),
    [anon_sym_source_directory] = ACTIONS(195),
    [anon_sym_source_file] = ACTIONS(195),
    [anon_sym_just_executable] = ACTIONS(195),
    [anon_sym_just_pid] = ACTIONS(195),
    [anon_sym_append] = ACTIONS(195),
    [anon_sym_prepend] = ACTIONS(195),
    [anon_sym_encode_uri_component] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_replace] = ACTIONS(195),
    [anon_sym_replace_regex] = ACTIONS(195),
    [anon_sym_trim] = ACTIONS(195),
    [anon_sym_trim_end] = ACTIONS(195),
    [anon_sym_trim_end_match] = ACTIONS(195),
    [anon_sym_trim_end_matches] = ACTIONS(195),
    [anon_sym_trim_start] = ACTIONS(195),
    [anon_sym_trim_start_match] = ACTIONS(195),
    [anon_sym_trim_start_matches] = ACTIONS(195),
    [anon_sym_capitalize] = ACTIONS(195),
    [anon_sym_kebabcase] = ACTIONS(195),
    [anon_sym_lowercamelcase] = ACTIONS(195),
    [anon_sym_lowercase] = ACTIONS(195),
    [anon_sym_shoutykebabcase] = ACTIONS(195),
    [anon_sym_shoutysnakecase] = ACTIONS(195),
    [anon_sym_snakecase] = ACTIONS(195),
    [anon_sym_titlecase] = ACTIONS(195),
    [anon_sym_uppercamelcase] = ACTIONS(195),
    [anon_sym_uppercase] = ACTIONS(195),
    [anon_sym_absolute_path] = ACTIONS(195),
    [anon_sym_canonicalize] = ACTIONS(195),
    [anon_sym_file_name] = ACTIONS(195),
    [anon_sym_file_stem] = ACTIONS(195),
    [anon_sym_parent_dir] = ACTIONS(195),
    [anon_sym_parent_directory] = ACTIONS(195),
    [anon_sym_without_extension] = ACTIONS(195),
    [anon_sym_clean] = ACTIONS(195),
    [anon_sym_join] = ACTIONS(195),
    [anon_sym_path_exists] = ACTIONS(195),
    [anon_sym_error] = ACTIONS(195),
    [anon_sym_blake3] = ACTIONS(195),
    [anon_sym_blake3_file] = ACTIONS(195),
    [anon_sym_sha256] = ACTIONS(195),
    [anon_sym_sha256_file] = ACTIONS(195),
    [anon_sym_uuid] = ACTIONS(195),
    [anon_sym_choose] = ACTIONS(195),
    [anon_sym_datetime] = ACTIONS(195),
    [anon_sym_datetime_utc] = ACTIONS(195),
    [anon_sym_semver_matches] = ACTIONS(195),
    [anon_sym_cache_dir] = ACTIONS(195),
    [anon_sym_cache_directory] = ACTIONS(195),
    [anon_sym_config_dir] = ACTIONS(195),
    [anon_sym_config_directory] = ACTIONS(195),
    [anon_sym_config_local_dir] = ACTIONS(195),
    [anon_sym_config_local_directory] = ACTIONS(195),
    [anon_sym_data_dir] = ACTIONS(195),
    [anon_sym_data_directory] = ACTIONS(195),
    [anon_sym_data_local_dir] = ACTIONS(195),
    [anon_sym_data_local_directory] = ACTIONS(195),
    [anon_sym_executable_dir] = ACTIONS(195),
    [anon_sym_executable_directory] = ACTIONS(195),
    [anon_sym_home_dir] = ACTIONS(195),
    [anon_sym_home_directory] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [sym_identifier] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_extension] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_shell] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_assert] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_arch] = ACTIONS(199),
    [anon_sym_num_cpus] = ACTIONS(199),
    [anon_sym_os] = ACTIONS(199),
    [anon_sym_os_family] = ACTIONS(199),
    [anon_sym_env_var] = ACTIONS(199),
    [anon_sym_env_var_or_default] = ACTIONS(199),
    [anon_sym_env] = ACTIONS(199),
    [anon_sym_is_dependency] = ACTIONS(199),
    [anon_sym_invocation_dir] = ACTIONS(199),
    [anon_sym_invocation_dir_native] = ACTIONS(199),
    [anon_sym_invocation_directory] = ACTIONS(199),
    [anon_sym_invocation_directory_native] = ACTIONS(199),
    [anon_sym_justfile] = ACTIONS(199),
    [anon_sym_justfile_dir] = ACTIONS(199),
    [anon_sym_justfile_directory] = ACTIONS(199),
    [anon_sym_source_dir] = ACTIONS(199),
    [anon_sym_source_directory] = ACTIONS(199),
    [anon_sym_source_file] = ACTIONS(199),
    [anon_sym_just_executable] = ACTIONS(199),
    [anon_sym_just_pid] = ACTIONS(199),
    [anon_sym_append] = ACTIONS(199),
    [anon_sym_prepend] = ACTIONS(199),
    [anon_sym_encode_uri_component] = ACTIONS(199),
    [anon_sym_quote] = ACTIONS(199),
    [anon_sym_replace] = ACTIONS(199),
    [anon_sym_replace_regex] = ACTIONS(199),
    [anon_sym_trim] = ACTIONS(199),
    [anon_sym_trim_end] = ACTIONS(199),
    [anon_sym_trim_end_match] = ACTIONS(199),
    [anon_sym_trim_end_matches] = ACTIONS(199),
    [anon_sym_trim_start] = ACTIONS(199),
    [anon_sym_trim_start_match] = ACTIONS(199),
    [anon_sym_trim_start_matches] = ACTIONS(199),
    [anon_sym_capitalize] = ACTIONS(199),
    [anon_sym_kebabcase] = ACTIONS(199),
    [anon_sym_lowercamelcase] = ACTIONS(199),
    [anon_sym_lowercase] = ACTIONS(199),
    [anon_sym_shoutykebabcase] = ACTIONS(199),
    [anon_sym_shoutysnakecase] = ACTIONS(199),
    [anon_sym_snakecase] = ACTIONS(199),
    [anon_sym_titlecase] = ACTIONS(199),
    [anon_sym_uppercamelcase] = ACTIONS(199),
    [anon_sym_uppercase] = ACTIONS(199),
    [anon_sym_absolute_path] = ACTIONS(199),
    [anon_sym_canonicalize] = ACTIONS(199),
    [anon_sym_file_name] = ACTIONS(199),
    [anon_sym_file_stem] = ACTIONS(199),
    [anon_sym_parent_dir] = ACTIONS(199),
    [anon_sym_parent_directory] = ACTIONS(199),
    [anon_sym_without_extension] = ACTIONS(199),
    [anon_sym_clean] = ACTIONS(199),
    [anon_sym_join] = ACTIONS(199),
    [anon_sym_path_exists] = ACTIONS(199),
    [anon_sym_error] = ACTIONS(199),
    [anon_sym_blake3] = ACTIONS(199),
    [anon_sym_blake3_file] = ACTIONS(199),
    [anon_sym_sha256] = ACTIONS(199),
    [anon_sym_sha256_file] = ACTIONS(199),
    [anon_sym_uuid] = ACTIONS(199),
    [anon_sym_choose] = ACTIONS(199),
    [anon_sym_datetime] = ACTIONS(199),
    [anon_sym_datetime_utc] = ACTIONS(199),
    [anon_sym_semver_matches] = ACTIONS(199),
    [anon_sym_cache_dir] = ACTIONS(199),
    [anon_sym_cache_directory] = ACTIONS(199),
    [anon_sym_config_dir] = ACTIONS(199),
    [anon_sym_config_directory] = ACTIONS(199),
    [anon_sym_config_local_dir] = ACTIONS(199),
    [anon_sym_config_local_directory] = ACTIONS(199),
    [anon_sym_data_dir] = ACTIONS(199),
    [anon_sym_data_directory] = ACTIONS(199),
    [anon_sym_data_local_dir] = ACTIONS(199),
    [anon_sym_data_local_directory] = ACTIONS(199),
    [anon_sym_executable_dir] = ACTIONS(199),
    [anon_sym_executable_directory] = ACTIONS(199),
    [anon_sym_home_dir] = ACTIONS(199),
    [anon_sym_home_directory] = ACTIONS(199),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_extension] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_shell] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_assert] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_arch] = ACTIONS(203),
    [anon_sym_num_cpus] = ACTIONS(203),
    [anon_sym_os] = ACTIONS(203),
    [anon_sym_os_family] = ACTIONS(203),
    [anon_sym_env_var] = ACTIONS(203),
    [anon_sym_env_var_or_default] = ACTIONS(203),
    [anon_sym_env] = ACTIONS(203),
    [anon_sym_is_dependency] = ACTIONS(203),
    [anon_sym_invocation_dir] = ACTIONS(203),
    [anon_sym_invocation_dir_native] = ACTIONS(203),
    [anon_sym_invocation_directory] = ACTIONS(203),
    [anon_sym_invocation_directory_native] = ACTIONS(203),
    [anon_sym_justfile] = ACTIONS(203),
    [anon_sym_justfile_dir] = ACTIONS(203),
    [anon_sym_justfile_directory] = ACTIONS(203),
    [anon_sym_source_dir] = ACTIONS(203),
    [anon_sym_source_directory] = ACTIONS(203),
    [anon_sym_source_file] = ACTIONS(203),
    [anon_sym_just_executable] = ACTIONS(203),
    [anon_sym_just_pid] = ACTIONS(203),
    [anon_sym_append] = ACTIONS(203),
    [anon_sym_prepend] = ACTIONS(203),
    [anon_sym_encode_uri_component] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_replace] = ACTIONS(203),
    [anon_sym_replace_regex] = ACTIONS(203),
    [anon_sym_trim] = ACTIONS(203),
    [anon_sym_trim_end] = ACTIONS(203),
    [anon_sym_trim_end_match] = ACTIONS(203),
    [anon_sym_trim_end_matches] = ACTIONS(203),
    [anon_sym_trim_start] = ACTIONS(203),
    [anon_sym_trim_start_match] = ACTIONS(203),
    [anon_sym_trim_start_matches] = ACTIONS(203),
    [anon_sym_capitalize] = ACTIONS(203),
    [anon_sym_kebabcase] = ACTIONS(203),
    [anon_sym_lowercamelcase] = ACTIONS(203),
    [anon_sym_lowercase] = ACTIONS(203),
    [anon_sym_shoutykebabcase] = ACTIONS(203),
    [anon_sym_shoutysnakecase] = ACTIONS(203),
    [anon_sym_snakecase] = ACTIONS(203),
    [anon_sym_titlecase] = ACTIONS(203),
    [anon_sym_uppercamelcase] = ACTIONS(203),
    [anon_sym_uppercase] = ACTIONS(203),
    [anon_sym_absolute_path] = ACTIONS(203),
    [anon_sym_canonicalize] = ACTIONS(203),
    [anon_sym_file_name] = ACTIONS(203),
    [anon_sym_file_stem] = ACTIONS(203),
    [anon_sym_parent_dir] = ACTIONS(203),
    [anon_sym_parent_directory] = ACTIONS(203),
    [anon_sym_without_extension] = ACTIONS(203),
    [anon_sym_clean] = ACTIONS(203),
    [anon_sym_join] = ACTIONS(203),
    [anon_sym_path_exists] = ACTIONS(203),
    [anon_sym_error] = ACTIONS(203),
    [anon_sym_blake3] = ACTIONS(203),
    [anon_sym_blake3_file] = ACTIONS(203),
    [anon_sym_sha256] = ACTIONS(203),
    [anon_sym_sha256_file] = ACTIONS(203),
    [anon_sym_uuid] = ACTIONS(203),
    [anon_sym_choose] = ACTIONS(203),
    [anon_sym_datetime] = ACTIONS(203),
    [anon_sym_datetime_utc] = ACTIONS(203),
    [anon_sym_semver_matches] = ACTIONS(203),
    [anon_sym_cache_dir] = ACTIONS(203),
    [anon_sym_cache_directory] = ACTIONS(203),
    [anon_sym_config_dir] = ACTIONS(203),
    [anon_sym_config_directory] = ACTIONS(203),
    [anon_sym_config_local_dir] = ACTIONS(203),
    [anon_sym_config_local_directory] = ACTIONS(203),
    [anon_sym_data_dir] = ACTIONS(203),
    [anon_sym_data_directory] = ACTIONS(203),
    [anon_sym_data_local_dir] = ACTIONS(203),
    [anon_sym_data_local_directory] = ACTIONS(203),
    [anon_sym_executable_dir] = ACTIONS(203),
    [anon_sym_executable_directory] = ACTIONS(203),
    [anon_sym_home_dir] = ACTIONS(203),
    [anon_sym_home_directory] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(205),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [59] = {
    [sym_comment] = STATE(59),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_extension] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_shell] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_assert] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_arch] = ACTIONS(207),
    [anon_sym_num_cpus] = ACTIONS(207),
    [anon_sym_os] = ACTIONS(207),
    [anon_sym_os_family] = ACTIONS(207),
    [anon_sym_env_var] = ACTIONS(207),
    [anon_sym_env_var_or_default] = ACTIONS(207),
    [anon_sym_env] = ACTIONS(207),
    [anon_sym_is_dependency] = ACTIONS(207),
    [anon_sym_invocation_dir] = ACTIONS(207),
    [anon_sym_invocation_dir_native] = ACTIONS(207),
    [anon_sym_invocation_directory] = ACTIONS(207),
    [anon_sym_invocation_directory_native] = ACTIONS(207),
    [anon_sym_justfile] = ACTIONS(207),
    [anon_sym_justfile_dir] = ACTIONS(207),
    [anon_sym_justfile_directory] = ACTIONS(207),
    [anon_sym_source_dir] = ACTIONS(207),
    [anon_sym_source_directory] = ACTIONS(207),
    [anon_sym_source_file] = ACTIONS(207),
    [anon_sym_just_executable] = ACTIONS(207),
    [anon_sym_just_pid] = ACTIONS(207),
    [anon_sym_append] = ACTIONS(207),
    [anon_sym_prepend] = ACTIONS(207),
    [anon_sym_encode_uri_component] = ACTIONS(207),
    [anon_sym_quote] = ACTIONS(207),
    [anon_sym_replace] = ACTIONS(207),
    [anon_sym_replace_regex] = ACTIONS(207),
    [anon_sym_trim] = ACTIONS(207),
    [anon_sym_trim_end] = ACTIONS(207),
    [anon_sym_trim_end_match] = ACTIONS(207),
    [anon_sym_trim_end_matches] = ACTIONS(207),
    [anon_sym_trim_start] = ACTIONS(207),
    [anon_sym_trim_start_match] = ACTIONS(207),
    [anon_sym_trim_start_matches] = ACTIONS(207),
    [anon_sym_capitalize] = ACTIONS(207),
    [anon_sym_kebabcase] = ACTIONS(207),
    [anon_sym_lowercamelcase] = ACTIONS(207),
    [anon_sym_lowercase] = ACTIONS(207),
    [anon_sym_shoutykebabcase] = ACTIONS(207),
    [anon_sym_shoutysnakecase] = ACTIONS(207),
    [anon_sym_snakecase] = ACTIONS(207),
    [anon_sym_titlecase] = ACTIONS(207),
    [anon_sym_uppercamelcase] = ACTIONS(207),
    [anon_sym_uppercase] = ACTIONS(207),
    [anon_sym_absolute_path] = ACTIONS(207),
    [anon_sym_canonicalize] = ACTIONS(207),
    [anon_sym_file_name] = ACTIONS(207),
    [anon_sym_file_stem] = ACTIONS(207),
    [anon_sym_parent_dir] = ACTIONS(207),
    [anon_sym_parent_directory] = ACTIONS(207),
    [anon_sym_without_extension] = ACTIONS(207),
    [anon_sym_clean] = ACTIONS(207),
    [anon_sym_join] = ACTIONS(207),
    [anon_sym_path_exists] = ACTIONS(207),
    [anon_sym_error] = ACTIONS(207),
    [anon_sym_blake3] = ACTIONS(207),
    [anon_sym_blake3_file] = ACTIONS(207),
    [anon_sym_sha256] = ACTIONS(207),
    [anon_sym_sha256_file] = ACTIONS(207),
    [anon_sym_uuid] = ACTIONS(207),
    [anon_sym_choose] = ACTIONS(207),
    [anon_sym_datetime] = ACTIONS(207),
    [anon_sym_datetime_utc] = ACTIONS(207),
    [anon_sym_semver_matches] = ACTIONS(207),
    [anon_sym_cache_dir] = ACTIONS(207),
    [anon_sym_cache_directory] = ACTIONS(207),
    [anon_sym_config_dir] = ACTIONS(207),
    [anon_sym_config_directory] = ACTIONS(207),
    [anon_sym_config_local_dir] = ACTIONS(207),
    [anon_sym_config_local_directory] = ACTIONS(207),
    [anon_sym_data_dir] = ACTIONS(207),
    [anon_sym_data_directory] = ACTIONS(207),
    [anon_sym_data_local_dir] = ACTIONS(207),
    [anon_sym_data_local_directory] = ACTIONS(207),
    [anon_sym_executable_dir] = ACTIONS(207),
    [anon_sym_executable_directory] = ACTIONS(207),
    [anon_sym_home_dir] = ACTIONS(207),
    [anon_sym_home_directory] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(207),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [60] = {
    [sym_comment] = STATE(60),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_extension] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_shell] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_assert] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_arch] = ACTIONS(211),
    [anon_sym_num_cpus] = ACTIONS(211),
    [anon_sym_os] = ACTIONS(211),
    [anon_sym_os_family] = ACTIONS(211),
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
    [anon_sym_BQUOTE] = ACTIONS(211),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [61] = {
    [sym_comment] = STATE(61),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_extension] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_shell] = ACTIONS(215),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_assert] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_arch] = ACTIONS(215),
    [anon_sym_num_cpus] = ACTIONS(215),
    [anon_sym_os] = ACTIONS(215),
    [anon_sym_os_family] = ACTIONS(215),
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
    [anon_sym_BQUOTE] = ACTIONS(215),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [62] = {
    [sym_comment] = STATE(62),
    [sym_identifier] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_extension] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_shell] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(219),
    [anon_sym_assert] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_arch] = ACTIONS(219),
    [anon_sym_num_cpus] = ACTIONS(219),
    [anon_sym_os] = ACTIONS(219),
    [anon_sym_os_family] = ACTIONS(219),
    [anon_sym_env_var] = ACTIONS(219),
    [anon_sym_env_var_or_default] = ACTIONS(219),
    [anon_sym_env] = ACTIONS(219),
    [anon_sym_is_dependency] = ACTIONS(219),
    [anon_sym_invocation_dir] = ACTIONS(219),
    [anon_sym_invocation_dir_native] = ACTIONS(219),
    [anon_sym_invocation_directory] = ACTIONS(219),
    [anon_sym_invocation_directory_native] = ACTIONS(219),
    [anon_sym_justfile] = ACTIONS(219),
    [anon_sym_justfile_dir] = ACTIONS(219),
    [anon_sym_justfile_directory] = ACTIONS(219),
    [anon_sym_source_dir] = ACTIONS(219),
    [anon_sym_source_directory] = ACTIONS(219),
    [anon_sym_source_file] = ACTIONS(219),
    [anon_sym_just_executable] = ACTIONS(219),
    [anon_sym_just_pid] = ACTIONS(219),
    [anon_sym_append] = ACTIONS(219),
    [anon_sym_prepend] = ACTIONS(219),
    [anon_sym_encode_uri_component] = ACTIONS(219),
    [anon_sym_quote] = ACTIONS(219),
    [anon_sym_replace] = ACTIONS(219),
    [anon_sym_replace_regex] = ACTIONS(219),
    [anon_sym_trim] = ACTIONS(219),
    [anon_sym_trim_end] = ACTIONS(219),
    [anon_sym_trim_end_match] = ACTIONS(219),
    [anon_sym_trim_end_matches] = ACTIONS(219),
    [anon_sym_trim_start] = ACTIONS(219),
    [anon_sym_trim_start_match] = ACTIONS(219),
    [anon_sym_trim_start_matches] = ACTIONS(219),
    [anon_sym_capitalize] = ACTIONS(219),
    [anon_sym_kebabcase] = ACTIONS(219),
    [anon_sym_lowercamelcase] = ACTIONS(219),
    [anon_sym_lowercase] = ACTIONS(219),
    [anon_sym_shoutykebabcase] = ACTIONS(219),
    [anon_sym_shoutysnakecase] = ACTIONS(219),
    [anon_sym_snakecase] = ACTIONS(219),
    [anon_sym_titlecase] = ACTIONS(219),
    [anon_sym_uppercamelcase] = ACTIONS(219),
    [anon_sym_uppercase] = ACTIONS(219),
    [anon_sym_absolute_path] = ACTIONS(219),
    [anon_sym_canonicalize] = ACTIONS(219),
    [anon_sym_file_name] = ACTIONS(219),
    [anon_sym_file_stem] = ACTIONS(219),
    [anon_sym_parent_dir] = ACTIONS(219),
    [anon_sym_parent_directory] = ACTIONS(219),
    [anon_sym_without_extension] = ACTIONS(219),
    [anon_sym_clean] = ACTIONS(219),
    [anon_sym_join] = ACTIONS(219),
    [anon_sym_path_exists] = ACTIONS(219),
    [anon_sym_error] = ACTIONS(219),
    [anon_sym_blake3] = ACTIONS(219),
    [anon_sym_blake3_file] = ACTIONS(219),
    [anon_sym_sha256] = ACTIONS(219),
    [anon_sym_sha256_file] = ACTIONS(219),
    [anon_sym_uuid] = ACTIONS(219),
    [anon_sym_choose] = ACTIONS(219),
    [anon_sym_datetime] = ACTIONS(219),
    [anon_sym_datetime_utc] = ACTIONS(219),
    [anon_sym_semver_matches] = ACTIONS(219),
    [anon_sym_cache_dir] = ACTIONS(219),
    [anon_sym_cache_directory] = ACTIONS(219),
    [anon_sym_config_dir] = ACTIONS(219),
    [anon_sym_config_directory] = ACTIONS(219),
    [anon_sym_config_local_dir] = ACTIONS(219),
    [anon_sym_config_local_directory] = ACTIONS(219),
    [anon_sym_data_dir] = ACTIONS(219),
    [anon_sym_data_directory] = ACTIONS(219),
    [anon_sym_data_local_dir] = ACTIONS(219),
    [anon_sym_data_local_directory] = ACTIONS(219),
    [anon_sym_executable_dir] = ACTIONS(219),
    [anon_sym_executable_directory] = ACTIONS(219),
    [anon_sym_home_dir] = ACTIONS(219),
    [anon_sym_home_directory] = ACTIONS(219),
    [anon_sym_BQUOTE] = ACTIONS(219),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [63] = {
    [sym_comment] = STATE(63),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_extension] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_shell] = ACTIONS(223),
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_assert] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_arch] = ACTIONS(223),
    [anon_sym_num_cpus] = ACTIONS(223),
    [anon_sym_os] = ACTIONS(223),
    [anon_sym_os_family] = ACTIONS(223),
    [anon_sym_env_var] = ACTIONS(223),
    [anon_sym_env_var_or_default] = ACTIONS(223),
    [anon_sym_env] = ACTIONS(223),
    [anon_sym_is_dependency] = ACTIONS(223),
    [anon_sym_invocation_dir] = ACTIONS(223),
    [anon_sym_invocation_dir_native] = ACTIONS(223),
    [anon_sym_invocation_directory] = ACTIONS(223),
    [anon_sym_invocation_directory_native] = ACTIONS(223),
    [anon_sym_justfile] = ACTIONS(223),
    [anon_sym_justfile_dir] = ACTIONS(223),
    [anon_sym_justfile_directory] = ACTIONS(223),
    [anon_sym_source_dir] = ACTIONS(223),
    [anon_sym_source_directory] = ACTIONS(223),
    [anon_sym_source_file] = ACTIONS(223),
    [anon_sym_just_executable] = ACTIONS(223),
    [anon_sym_just_pid] = ACTIONS(223),
    [anon_sym_append] = ACTIONS(223),
    [anon_sym_prepend] = ACTIONS(223),
    [anon_sym_encode_uri_component] = ACTIONS(223),
    [anon_sym_quote] = ACTIONS(223),
    [anon_sym_replace] = ACTIONS(223),
    [anon_sym_replace_regex] = ACTIONS(223),
    [anon_sym_trim] = ACTIONS(223),
    [anon_sym_trim_end] = ACTIONS(223),
    [anon_sym_trim_end_match] = ACTIONS(223),
    [anon_sym_trim_end_matches] = ACTIONS(223),
    [anon_sym_trim_start] = ACTIONS(223),
    [anon_sym_trim_start_match] = ACTIONS(223),
    [anon_sym_trim_start_matches] = ACTIONS(223),
    [anon_sym_capitalize] = ACTIONS(223),
    [anon_sym_kebabcase] = ACTIONS(223),
    [anon_sym_lowercamelcase] = ACTIONS(223),
    [anon_sym_lowercase] = ACTIONS(223),
    [anon_sym_shoutykebabcase] = ACTIONS(223),
    [anon_sym_shoutysnakecase] = ACTIONS(223),
    [anon_sym_snakecase] = ACTIONS(223),
    [anon_sym_titlecase] = ACTIONS(223),
    [anon_sym_uppercamelcase] = ACTIONS(223),
    [anon_sym_uppercase] = ACTIONS(223),
    [anon_sym_absolute_path] = ACTIONS(223),
    [anon_sym_canonicalize] = ACTIONS(223),
    [anon_sym_file_name] = ACTIONS(223),
    [anon_sym_file_stem] = ACTIONS(223),
    [anon_sym_parent_dir] = ACTIONS(223),
    [anon_sym_parent_directory] = ACTIONS(223),
    [anon_sym_without_extension] = ACTIONS(223),
    [anon_sym_clean] = ACTIONS(223),
    [anon_sym_join] = ACTIONS(223),
    [anon_sym_path_exists] = ACTIONS(223),
    [anon_sym_error] = ACTIONS(223),
    [anon_sym_blake3] = ACTIONS(223),
    [anon_sym_blake3_file] = ACTIONS(223),
    [anon_sym_sha256] = ACTIONS(223),
    [anon_sym_sha256_file] = ACTIONS(223),
    [anon_sym_uuid] = ACTIONS(223),
    [anon_sym_choose] = ACTIONS(223),
    [anon_sym_datetime] = ACTIONS(223),
    [anon_sym_datetime_utc] = ACTIONS(223),
    [anon_sym_semver_matches] = ACTIONS(223),
    [anon_sym_cache_dir] = ACTIONS(223),
    [anon_sym_cache_directory] = ACTIONS(223),
    [anon_sym_config_dir] = ACTIONS(223),
    [anon_sym_config_directory] = ACTIONS(223),
    [anon_sym_config_local_dir] = ACTIONS(223),
    [anon_sym_config_local_directory] = ACTIONS(223),
    [anon_sym_data_dir] = ACTIONS(223),
    [anon_sym_data_directory] = ACTIONS(223),
    [anon_sym_data_local_dir] = ACTIONS(223),
    [anon_sym_data_local_directory] = ACTIONS(223),
    [anon_sym_executable_dir] = ACTIONS(223),
    [anon_sym_executable_directory] = ACTIONS(223),
    [anon_sym_home_dir] = ACTIONS(223),
    [anon_sym_home_directory] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(225),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [64] = {
    [sym_value] = STATE(179),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(64),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [65] = {
    [sym_value] = STATE(177),
    [sym_builtin_function_call] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_backtick] = STATE(83),
    [sym_indented_backtick] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = STATE(65),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_arch] = ACTIONS(71),
    [anon_sym_num_cpus] = ACTIONS(71),
    [anon_sym_os] = ACTIONS(71),
    [anon_sym_os_family] = ACTIONS(71),
    [anon_sym_env_var] = ACTIONS(59),
    [anon_sym_env_var_or_default] = ACTIONS(73),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_is_dependency] = ACTIONS(71),
    [anon_sym_invocation_dir] = ACTIONS(71),
    [anon_sym_invocation_dir_native] = ACTIONS(71),
    [anon_sym_invocation_directory] = ACTIONS(71),
    [anon_sym_invocation_directory_native] = ACTIONS(71),
    [anon_sym_justfile] = ACTIONS(71),
    [anon_sym_justfile_dir] = ACTIONS(71),
    [anon_sym_justfile_directory] = ACTIONS(71),
    [anon_sym_source_dir] = ACTIONS(71),
    [anon_sym_source_directory] = ACTIONS(71),
    [anon_sym_source_file] = ACTIONS(71),
    [anon_sym_just_executable] = ACTIONS(71),
    [anon_sym_just_pid] = ACTIONS(71),
    [anon_sym_append] = ACTIONS(73),
    [anon_sym_prepend] = ACTIONS(73),
    [anon_sym_encode_uri_component] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(59),
    [anon_sym_trim_end] = ACTIONS(59),
    [anon_sym_trim_end_match] = ACTIONS(73),
    [anon_sym_trim_end_matches] = ACTIONS(73),
    [anon_sym_trim_start] = ACTIONS(59),
    [anon_sym_trim_start_match] = ACTIONS(73),
    [anon_sym_trim_start_matches] = ACTIONS(73),
    [anon_sym_capitalize] = ACTIONS(59),
    [anon_sym_kebabcase] = ACTIONS(59),
    [anon_sym_lowercamelcase] = ACTIONS(59),
    [anon_sym_lowercase] = ACTIONS(59),
    [anon_sym_shoutykebabcase] = ACTIONS(59),
    [anon_sym_shoutysnakecase] = ACTIONS(59),
    [anon_sym_snakecase] = ACTIONS(59),
    [anon_sym_titlecase] = ACTIONS(59),
    [anon_sym_uppercamelcase] = ACTIONS(59),
    [anon_sym_uppercase] = ACTIONS(59),
    [anon_sym_absolute_path] = ACTIONS(59),
    [anon_sym_canonicalize] = ACTIONS(59),
    [anon_sym_file_name] = ACTIONS(59),
    [anon_sym_file_stem] = ACTIONS(59),
    [anon_sym_parent_dir] = ACTIONS(59),
    [anon_sym_parent_directory] = ACTIONS(59),
    [anon_sym_without_extension] = ACTIONS(59),
    [anon_sym_clean] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(59),
    [anon_sym_error] = ACTIONS(59),
    [anon_sym_blake3] = ACTIONS(59),
    [anon_sym_blake3_file] = ACTIONS(59),
    [anon_sym_sha256] = ACTIONS(59),
    [anon_sym_sha256_file] = ACTIONS(59),
    [anon_sym_uuid] = ACTIONS(71),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_datetime] = ACTIONS(59),
    [anon_sym_datetime_utc] = ACTIONS(59),
    [anon_sym_semver_matches] = ACTIONS(73),
    [anon_sym_cache_dir] = ACTIONS(71),
    [anon_sym_cache_directory] = ACTIONS(71),
    [anon_sym_config_dir] = ACTIONS(71),
    [anon_sym_config_directory] = ACTIONS(71),
    [anon_sym_config_local_dir] = ACTIONS(71),
    [anon_sym_config_local_directory] = ACTIONS(71),
    [anon_sym_data_dir] = ACTIONS(71),
    [anon_sym_data_directory] = ACTIONS(71),
    [anon_sym_data_local_dir] = ACTIONS(71),
    [anon_sym_data_local_directory] = ACTIONS(71),
    [anon_sym_executable_dir] = ACTIONS(71),
    [anon_sym_executable_directory] = ACTIONS(71),
    [anon_sym_home_dir] = ACTIONS(71),
    [anon_sym_home_directory] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [66] = {
    [sym_value] = STATE(177),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(66),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
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
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [67] = {
    [sym_value] = STATE(179),
    [sym_builtin_function_call] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_backtick] = STATE(46),
    [sym_indented_backtick] = STATE(46),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(67),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
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
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [68] = {
    [sym_comment] = STATE(68),
    [sym_identifier] = ACTIONS(227),
    [anon_sym_extension] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_shell] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_assert] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_arch] = ACTIONS(227),
    [anon_sym_num_cpus] = ACTIONS(227),
    [anon_sym_os] = ACTIONS(227),
    [anon_sym_os_family] = ACTIONS(227),
    [anon_sym_env_var] = ACTIONS(227),
    [anon_sym_env_var_or_default] = ACTIONS(227),
    [anon_sym_env] = ACTIONS(227),
    [anon_sym_is_dependency] = ACTIONS(227),
    [anon_sym_invocation_dir] = ACTIONS(227),
    [anon_sym_invocation_dir_native] = ACTIONS(227),
    [anon_sym_invocation_directory] = ACTIONS(227),
    [anon_sym_invocation_directory_native] = ACTIONS(227),
    [anon_sym_justfile] = ACTIONS(227),
    [anon_sym_justfile_dir] = ACTIONS(227),
    [anon_sym_justfile_directory] = ACTIONS(227),
    [anon_sym_source_dir] = ACTIONS(227),
    [anon_sym_source_directory] = ACTIONS(227),
    [anon_sym_source_file] = ACTIONS(227),
    [anon_sym_just_executable] = ACTIONS(227),
    [anon_sym_just_pid] = ACTIONS(227),
    [anon_sym_append] = ACTIONS(227),
    [anon_sym_prepend] = ACTIONS(227),
    [anon_sym_encode_uri_component] = ACTIONS(227),
    [anon_sym_quote] = ACTIONS(227),
    [anon_sym_replace] = ACTIONS(227),
    [anon_sym_replace_regex] = ACTIONS(227),
    [anon_sym_trim] = ACTIONS(227),
    [anon_sym_trim_end] = ACTIONS(227),
    [anon_sym_trim_end_match] = ACTIONS(227),
    [anon_sym_trim_end_matches] = ACTIONS(227),
    [anon_sym_trim_start] = ACTIONS(227),
    [anon_sym_trim_start_match] = ACTIONS(227),
    [anon_sym_trim_start_matches] = ACTIONS(227),
    [anon_sym_capitalize] = ACTIONS(227),
    [anon_sym_kebabcase] = ACTIONS(227),
    [anon_sym_lowercamelcase] = ACTIONS(227),
    [anon_sym_lowercase] = ACTIONS(227),
    [anon_sym_shoutykebabcase] = ACTIONS(227),
    [anon_sym_shoutysnakecase] = ACTIONS(227),
    [anon_sym_snakecase] = ACTIONS(227),
    [anon_sym_titlecase] = ACTIONS(227),
    [anon_sym_uppercamelcase] = ACTIONS(227),
    [anon_sym_uppercase] = ACTIONS(227),
    [anon_sym_absolute_path] = ACTIONS(227),
    [anon_sym_canonicalize] = ACTIONS(227),
    [anon_sym_file_name] = ACTIONS(227),
    [anon_sym_file_stem] = ACTIONS(227),
    [anon_sym_parent_dir] = ACTIONS(227),
    [anon_sym_parent_directory] = ACTIONS(227),
    [anon_sym_without_extension] = ACTIONS(227),
    [anon_sym_clean] = ACTIONS(227),
    [anon_sym_join] = ACTIONS(227),
    [anon_sym_path_exists] = ACTIONS(227),
    [anon_sym_error] = ACTIONS(227),
    [anon_sym_blake3] = ACTIONS(227),
    [anon_sym_blake3_file] = ACTIONS(227),
    [anon_sym_sha256] = ACTIONS(227),
    [anon_sym_sha256_file] = ACTIONS(227),
    [anon_sym_uuid] = ACTIONS(227),
    [anon_sym_choose] = ACTIONS(227),
    [anon_sym_datetime] = ACTIONS(227),
    [anon_sym_datetime_utc] = ACTIONS(227),
    [anon_sym_semver_matches] = ACTIONS(227),
    [anon_sym_cache_dir] = ACTIONS(227),
    [anon_sym_cache_directory] = ACTIONS(227),
    [anon_sym_config_dir] = ACTIONS(227),
    [anon_sym_config_directory] = ACTIONS(227),
    [anon_sym_config_local_dir] = ACTIONS(227),
    [anon_sym_config_local_directory] = ACTIONS(227),
    [anon_sym_data_dir] = ACTIONS(227),
    [anon_sym_data_directory] = ACTIONS(227),
    [anon_sym_data_local_dir] = ACTIONS(227),
    [anon_sym_data_local_directory] = ACTIONS(227),
    [anon_sym_executable_dir] = ACTIONS(227),
    [anon_sym_executable_directory] = ACTIONS(227),
    [anon_sym_home_dir] = ACTIONS(227),
    [anon_sym_home_directory] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(227),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [69] = {
    [sym_comment] = STATE(69),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_extension] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_shell] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(233),
    [anon_sym_assert] = ACTIONS(233),
    [anon_sym_arch] = ACTIONS(233),
    [anon_sym_num_cpus] = ACTIONS(233),
    [anon_sym_os] = ACTIONS(233),
    [anon_sym_os_family] = ACTIONS(233),
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
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [70] = {
    [sym_comment] = STATE(70),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_extension] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_shell] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(237),
    [anon_sym_assert] = ACTIONS(237),
    [anon_sym_arch] = ACTIONS(237),
    [anon_sym_num_cpus] = ACTIONS(237),
    [anon_sym_os] = ACTIONS(237),
    [anon_sym_os_family] = ACTIONS(237),
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
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [71] = {
    [sym_comment] = STATE(71),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_extension] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_shell] = ACTIONS(241),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_assert] = ACTIONS(241),
    [anon_sym_arch] = ACTIONS(241),
    [anon_sym_num_cpus] = ACTIONS(241),
    [anon_sym_os] = ACTIONS(241),
    [anon_sym_os_family] = ACTIONS(241),
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
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [72] = {
    [sym_comment] = STATE(72),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_extension] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_shell] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(245),
    [anon_sym_assert] = ACTIONS(245),
    [anon_sym_arch] = ACTIONS(245),
    [anon_sym_num_cpus] = ACTIONS(245),
    [anon_sym_os] = ACTIONS(245),
    [anon_sym_os_family] = ACTIONS(245),
    [anon_sym_env_var] = ACTIONS(245),
    [anon_sym_env_var_or_default] = ACTIONS(245),
    [anon_sym_env] = ACTIONS(245),
    [anon_sym_is_dependency] = ACTIONS(245),
    [anon_sym_invocation_dir] = ACTIONS(245),
    [anon_sym_invocation_dir_native] = ACTIONS(245),
    [anon_sym_invocation_directory] = ACTIONS(245),
    [anon_sym_invocation_directory_native] = ACTIONS(245),
    [anon_sym_justfile] = ACTIONS(245),
    [anon_sym_justfile_dir] = ACTIONS(245),
    [anon_sym_justfile_directory] = ACTIONS(245),
    [anon_sym_source_dir] = ACTIONS(245),
    [anon_sym_source_directory] = ACTIONS(245),
    [anon_sym_source_file] = ACTIONS(245),
    [anon_sym_just_executable] = ACTIONS(245),
    [anon_sym_just_pid] = ACTIONS(245),
    [anon_sym_append] = ACTIONS(245),
    [anon_sym_prepend] = ACTIONS(245),
    [anon_sym_encode_uri_component] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(245),
    [anon_sym_replace] = ACTIONS(245),
    [anon_sym_replace_regex] = ACTIONS(245),
    [anon_sym_trim] = ACTIONS(245),
    [anon_sym_trim_end] = ACTIONS(245),
    [anon_sym_trim_end_match] = ACTIONS(245),
    [anon_sym_trim_end_matches] = ACTIONS(245),
    [anon_sym_trim_start] = ACTIONS(245),
    [anon_sym_trim_start_match] = ACTIONS(245),
    [anon_sym_trim_start_matches] = ACTIONS(245),
    [anon_sym_capitalize] = ACTIONS(245),
    [anon_sym_kebabcase] = ACTIONS(245),
    [anon_sym_lowercamelcase] = ACTIONS(245),
    [anon_sym_lowercase] = ACTIONS(245),
    [anon_sym_shoutykebabcase] = ACTIONS(245),
    [anon_sym_shoutysnakecase] = ACTIONS(245),
    [anon_sym_snakecase] = ACTIONS(245),
    [anon_sym_titlecase] = ACTIONS(245),
    [anon_sym_uppercamelcase] = ACTIONS(245),
    [anon_sym_uppercase] = ACTIONS(245),
    [anon_sym_absolute_path] = ACTIONS(245),
    [anon_sym_canonicalize] = ACTIONS(245),
    [anon_sym_file_name] = ACTIONS(245),
    [anon_sym_file_stem] = ACTIONS(245),
    [anon_sym_parent_dir] = ACTIONS(245),
    [anon_sym_parent_directory] = ACTIONS(245),
    [anon_sym_without_extension] = ACTIONS(245),
    [anon_sym_clean] = ACTIONS(245),
    [anon_sym_join] = ACTIONS(245),
    [anon_sym_path_exists] = ACTIONS(245),
    [anon_sym_error] = ACTIONS(245),
    [anon_sym_blake3] = ACTIONS(245),
    [anon_sym_blake3_file] = ACTIONS(245),
    [anon_sym_sha256] = ACTIONS(245),
    [anon_sym_sha256_file] = ACTIONS(245),
    [anon_sym_uuid] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(245),
    [anon_sym_datetime] = ACTIONS(245),
    [anon_sym_datetime_utc] = ACTIONS(245),
    [anon_sym_semver_matches] = ACTIONS(245),
    [anon_sym_cache_dir] = ACTIONS(245),
    [anon_sym_cache_directory] = ACTIONS(245),
    [anon_sym_config_dir] = ACTIONS(245),
    [anon_sym_config_directory] = ACTIONS(245),
    [anon_sym_config_local_dir] = ACTIONS(245),
    [anon_sym_config_local_directory] = ACTIONS(245),
    [anon_sym_data_dir] = ACTIONS(245),
    [anon_sym_data_directory] = ACTIONS(245),
    [anon_sym_data_local_dir] = ACTIONS(245),
    [anon_sym_data_local_directory] = ACTIONS(245),
    [anon_sym_executable_dir] = ACTIONS(245),
    [anon_sym_executable_directory] = ACTIONS(245),
    [anon_sym_home_dir] = ACTIONS(245),
    [anon_sym_home_directory] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [73] = {
    [sym_comment] = STATE(73),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_extension] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_shell] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_assert] = ACTIONS(249),
    [anon_sym_arch] = ACTIONS(249),
    [anon_sym_num_cpus] = ACTIONS(249),
    [anon_sym_os] = ACTIONS(249),
    [anon_sym_os_family] = ACTIONS(249),
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
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(203), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(205), 14,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [31] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(159), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [64] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(219), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(221), 14,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [95] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(191), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [125] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [155] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [185] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(179), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [215] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [245] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(185), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [275] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(159), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [305] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [335] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [365] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(195), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [395] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(153), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(155), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [425] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(187), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(189), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [455] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(223), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [485] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [515] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(199), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(201), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [545] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [575] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(227), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(229), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [606] = 15,
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
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_set,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_file_repeat1,
    STATE(176), 1,
      aux_sym_recipe_repeat1,
    STATE(216), 1,
      sym__attribute_list,
    STATE(117), 6,
      sym_alias,
      sym_assignment,
      sym_import,
      sym_mod,
      sym_recipe,
      sym_setting,
  [657] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(95), 1,
      sym_comment,
    STATE(210), 1,
      sym__attribute,
    ACTIONS(263), 2,
      anon_sym_extension,
      anon_sym_group,
    STATE(221), 2,
      sym_builtin_attribute,
      sym_attribute,
    ACTIONS(261), 3,
      anon_sym_confirm,
      anon_sym_doc,
      anon_sym_script,
    ACTIONS(265), 9,
      anon_sym_linux,
      anon_sym_macos,
      anon_sym_no_DASHcd,
      anon_sym_no_DASHexit_DASHmessage,
      anon_sym_no_DASHquiet,
      anon_sym_positional_DASHarguments,
      anon_sym_private,
      anon_sym_unix,
      anon_sym_windows,
  [694] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(96), 1,
      sym_comment,
    STATE(249), 1,
      sym__attribute,
    ACTIONS(263), 2,
      anon_sym_extension,
      anon_sym_group,
    STATE(221), 2,
      sym_builtin_attribute,
      sym_attribute,
    ACTIONS(261), 3,
      anon_sym_confirm,
      anon_sym_doc,
      anon_sym_script,
    ACTIONS(265), 9,
      anon_sym_linux,
      anon_sym_macos,
      anon_sym_no_DASHcd,
      anon_sym_no_DASHexit_DASHmessage,
      anon_sym_no_DASHquiet,
      anon_sym_positional_DASHarguments,
      anon_sym_private,
      anon_sym_unix,
      anon_sym_windows,
  [731] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_alias,
    ACTIONS(275), 1,
      anon_sym_export,
    ACTIONS(278), 1,
      aux_sym_import_token1,
    ACTIONS(281), 1,
      aux_sym_mod_token1,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_set,
    STATE(176), 1,
      aux_sym_recipe_repeat1,
    STATE(216), 1,
      sym__attribute_list,
    STATE(97), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(117), 6,
      sym_alias,
      sym_assignment,
      sym_import,
      sym_mod,
      sym_recipe,
      sym_setting,
  [780] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(233), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [807] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(241), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [834] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(237), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(239), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [861] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(297), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(295), 10,
      anon_sym_export,
      anon_sym_positional_DASHarguments,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [892] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_comment,
    STATE(139), 1,
      sym_string,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(303), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [927] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_COLON_EQ,
    STATE(103), 1,
      sym_comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    STATE(129), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(307), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [955] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_COLON_EQ,
    STATE(104), 1,
      sym_comment,
    STATE(129), 1,
      sym__setting_boolean,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(307), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [981] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(315), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1001] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(319), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1021] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(323), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1041] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(108), 1,
      sym_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(327), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1061] = 6,
    ACTIONS(329), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(331), 1,
      aux_sym__indented_normal_string_token1,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_escape_sequence,
    STATE(109), 2,
      sym_comment,
      aux_sym__indented_normal_string_repeat1,
    ACTIONS(334), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1085] = 6,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym__normal_string_token1,
    STATE(146), 1,
      sym_escape_sequence,
    STATE(110), 2,
      sym_comment,
      aux_sym__normal_string_repeat1,
    ACTIONS(344), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1109] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(347), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(349), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1129] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(353), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1149] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(357), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1169] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(359), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(361), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1189] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(363), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(365), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1209] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(369), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1229] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(373), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1249] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(377), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1269] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(381), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1289] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(385), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1309] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(389), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1329] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(393), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1349] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(395), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(397), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1369] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(401), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1389] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(125), 1,
      sym_comment,
    ACTIONS(403), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(405), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1409] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_COLON_EQ,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_recipe_repeat2,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(287), 1,
      sym_variadic_parameter,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1441] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(419), 1,
      aux_sym__indented_normal_string_token1,
    STATE(109), 1,
      aux_sym__indented_normal_string_repeat1,
    STATE(127), 1,
      sym_comment,
    STATE(148), 1,
      sym_escape_sequence,
    ACTIONS(421), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1467] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(423), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(425), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1487] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(427), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(429), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1507] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym__normal_string_token1,
    STATE(130), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__normal_string_repeat1,
    STATE(146), 1,
      sym_escape_sequence,
    ACTIONS(435), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1533] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(439), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1553] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      aux_sym__indented_normal_string_token1,
    ACTIONS(441), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(132), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym__indented_normal_string_repeat1,
    STATE(148), 1,
      sym_escape_sequence,
    ACTIONS(421), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1579] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      aux_sym__normal_string_token1,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym__normal_string_repeat1,
    STATE(146), 1,
      sym_escape_sequence,
    ACTIONS(435), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1605] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym__normal_string_token1,
    STATE(110), 1,
      aux_sym__normal_string_repeat1,
    STATE(134), 1,
      sym_comment,
    STATE(146), 1,
      sym_escape_sequence,
    ACTIONS(435), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1631] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(443), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(445), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1651] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      aux_sym__indented_normal_string_token1,
    ACTIONS(447), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(109), 1,
      aux_sym__indented_normal_string_repeat1,
    STATE(136), 1,
      sym_comment,
    STATE(148), 1,
      sym_escape_sequence,
    ACTIONS(421), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1677] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      aux_sym__indented_normal_string_token1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(127), 1,
      aux_sym__indented_normal_string_repeat1,
    STATE(137), 1,
      sym_comment,
    STATE(148), 1,
      sym_escape_sequence,
    ACTIONS(421), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1703] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      aux_sym__normal_string_token1,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym__normal_string_repeat1,
    STATE(138), 1,
      sym_comment,
    STATE(146), 1,
      sym_escape_sequence,
    ACTIONS(435), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1729] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(139), 1,
      sym_comment,
    ACTIONS(449), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(451), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1749] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      anon_sym_COLON,
    STATE(140), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_recipe_repeat2,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(256), 1,
      sym_variadic_parameter,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1778] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(141), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_recipe_repeat2,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(282), 1,
      sym_variadic_parameter,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1807] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_string,
    STATE(142), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_true,
      anon_sym_false,
  [1836] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_COLON,
    STATE(140), 1,
      aux_sym_recipe_repeat2,
    STATE(143), 1,
      sym_comment,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(253), 1,
      sym_variadic_parameter,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1865] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(463), 1,
      anon_sym_COLON,
    STATE(144), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_recipe_repeat2,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(257), 1,
      sym_variadic_parameter,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1894] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(141), 1,
      aux_sym_recipe_repeat2,
    STATE(145), 1,
      sym_comment,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(270), 1,
      sym_variadic_parameter,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1923] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(146), 1,
      sym_comment,
    ACTIONS(467), 7,
      anon_sym_DQUOTE,
      aux_sym__normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1939] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(469), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym__indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1955] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(471), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym__indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1971] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(149), 1,
      sym_comment,
    ACTIONS(469), 7,
      anon_sym_DQUOTE,
      aux_sym__normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1987] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_DOLLAR,
    STATE(181), 1,
      sym_recipe_parameter,
    STATE(150), 2,
      sym_comment,
      aux_sym_recipe_repeat2,
    ACTIONS(476), 3,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_STAR,
  [2009] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(483), 1,
      aux_sym_recipe_token1,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2034] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      aux_sym_recipe_token1,
    STATE(152), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2059] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      aux_sym_recipe_token1,
    STATE(153), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2084] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      aux_sym_recipe_token1,
    STATE(154), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2109] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      aux_sym_recipe_token1,
    STATE(155), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2134] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      aux_sym_recipe_token1,
    STATE(156), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2159] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      aux_sym_recipe_token1,
    STATE(157), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2184] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_comment,
    ACTIONS(497), 5,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym_identifier,
  [2201] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
    STATE(222), 1,
      sym_string,
  [2226] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      aux_sym_recipe_token1,
    STATE(153), 1,
      aux_sym_recipe_repeat3,
    STATE(160), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2251] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      aux_sym_recipe_token1,
    STATE(161), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2276] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      aux_sym_recipe_token1,
    STATE(162), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2301] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      aux_sym_recipe_token1,
    STATE(163), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2326] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      aux_sym_recipe_token1,
    STATE(151), 1,
      aux_sym_recipe_repeat3,
    STATE(164), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2351] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      aux_sym_recipe_token1,
    STATE(165), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2376] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      aux_sym_recipe_token1,
    STATE(163), 1,
      aux_sym_recipe_repeat3,
    STATE(166), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2401] = 7,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(514), 1,
      aux_sym_recipe_token1,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
    STATE(167), 2,
      sym_comment,
      aux_sym_recipe_repeat3,
  [2424] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(521), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym_comment,
    ACTIONS(519), 5,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym_identifier,
  [2441] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      aux_sym_recipe_token1,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(169), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2466] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(483), 1,
      aux_sym_recipe_token1,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      aux_sym_recipe_repeat3,
    STATE(170), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2491] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      aux_sym_recipe_token1,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(171), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2516] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
    STATE(222), 1,
      sym_string,
  [2541] = 8,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(527), 1,
      aux_sym_recipe_token1,
    STATE(167), 1,
      aux_sym_recipe_repeat3,
    STATE(173), 1,
      sym_comment,
    STATE(208), 1,
      sym_recipe_dependency,
    STATE(211), 1,
      sym__recipe_dependency,
  [2566] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym_string,
    STATE(174), 1,
      sym_comment,
  [2588] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym_string,
    STATE(175), 1,
      sym_comment,
  [2610] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_AT,
    STATE(176), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_recipe_repeat1,
    STATE(216), 1,
      sym__attribute_list,
  [2632] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(533), 5,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym_identifier,
  [2646] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(178), 1,
      sym_comment,
    STATE(222), 1,
      sym_string,
  [2668] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(179), 1,
      sym_comment,
    ACTIONS(535), 5,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym_identifier,
  [2682] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym_comment,
    STATE(198), 1,
      sym_string,
  [2704] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(537), 5,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym_identifier,
  [2718] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    STATE(216), 1,
      sym__attribute_list,
    ACTIONS(539), 2,
      anon_sym_AT,
      sym_identifier,
    STATE(182), 2,
      sym_comment,
      aux_sym_recipe_repeat1,
  [2736] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_comment,
    STATE(255), 1,
      sym_string,
  [2758] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_comment,
    STATE(244), 1,
      sym__a1,
    ACTIONS(544), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2775] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_comment,
    STATE(245), 1,
      sym__a1,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2792] = 4,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      aux_sym_recipe_token1,
    STATE(186), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2806] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(554), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(556), 1,
      aux_sym_indented_backtick_token1,
    STATE(187), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_indented_backtick_repeat1,
  [2822] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_function_parameters_repeat1,
  [2838] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_comment,
    STATE(89), 2,
      sym__p1,
      sym__p2,
  [2852] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_comment,
    STATE(200), 1,
      aux_sym__attribute_list_repeat1,
  [2868] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(566), 1,
      aux_sym__indented_raw_string_token1,
    STATE(191), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym__indented_raw_string_repeat1,
  [2884] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_function_parameters_repeat1,
    STATE(192), 1,
      sym_comment,
  [2900] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(566), 1,
      aux_sym__indented_raw_string_token1,
    STATE(193), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym__indented_raw_string_repeat1,
  [2916] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(566), 1,
      aux_sym__indented_raw_string_token1,
    STATE(194), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym__indented_raw_string_repeat1,
  [2932] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(195), 1,
      sym_comment,
    ACTIONS(572), 3,
      anon_sym_AT,
      anon_sym_LBRACK,
      sym_identifier,
  [2944] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_comment,
    STATE(63), 2,
      sym__p1,
      sym__p2,
  [2958] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(576), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(187), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(197), 1,
      sym_comment,
  [2974] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym_comment,
    STATE(209), 1,
      aux_sym__setting_list_repeat1,
  [2990] = 4,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(582), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(584), 1,
      aux_sym_indented_backtick_token1,
    STATE(199), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [3004] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(200), 2,
      sym_comment,
      aux_sym__attribute_list_repeat1,
  [3018] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(592), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(201), 1,
      sym_comment,
    STATE(213), 1,
      aux_sym_indented_backtick_repeat1,
  [3034] = 4,
    ACTIONS(251), 1,
      aux_sym_recipe_token1,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(202), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3048] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(203), 1,
      sym_comment,
    ACTIONS(594), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [3060] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(204), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [3074] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(205), 1,
      sym_comment,
    ACTIONS(601), 3,
      anon_sym_AT,
      anon_sym_LBRACK,
      sym_identifier,
  [3086] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    STATE(206), 1,
      sym_comment,
    STATE(258), 1,
      sym_recipe_parameter,
  [3102] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(207), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [3116] = 4,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(614), 1,
      aux_sym_recipe_token1,
    STATE(208), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3130] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym__setting_list_repeat1,
    STATE(209), 1,
      sym_comment,
  [3146] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym__attribute_list_repeat1,
    STATE(210), 1,
      sym_comment,
  [3162] = 4,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(622), 1,
      aux_sym_recipe_token1,
    STATE(211), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3176] = 4,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(624), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(626), 1,
      aux_sym__indented_raw_string_token1,
    STATE(212), 2,
      sym_comment,
      aux_sym__indented_raw_string_repeat1,
  [3190] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(629), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(199), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(213), 1,
      sym_comment,
  [3206] = 5,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(566), 1,
      aux_sym__indented_raw_string_token1,
    STATE(194), 1,
      aux_sym__indented_raw_string_repeat1,
    STATE(214), 1,
      sym_comment,
  [3222] = 4,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(633), 1,
      aux_sym_recipe_token1,
    STATE(215), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3236] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(216), 1,
      sym_comment,
    ACTIONS(635), 3,
      anon_sym_AT,
      anon_sym_LBRACK,
      sym_identifier,
  [3248] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__p3,
    STATE(217), 1,
      sym_comment,
  [3261] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__p1,
    STATE(218), 1,
      sym_comment,
  [3274] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_comment,
    STATE(244), 1,
      sym__a1,
  [3287] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(220), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3298] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(221), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3309] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(222), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3320] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(223), 1,
      sym_comment,
    ACTIONS(610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3331] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(643), 1,
      anon_sym_COLON_EQ,
    STATE(129), 1,
      sym__setting_string,
    STATE(224), 1,
      sym_comment,
  [3344] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(645), 1,
      anon_sym_COLON_EQ,
    STATE(129), 1,
      sym__setting_list,
    STATE(225), 1,
      sym_comment,
  [3357] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(226), 1,
      sym_comment,
    ACTIONS(647), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [3368] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
  [3381] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
  [3394] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym_comment,
  [3407] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_comment,
  [3420] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(231), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [3431] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      sym_comment,
  [3444] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(669), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym_comment,
  [3457] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(234), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym__indented_raw_string_token1,
  [3468] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__p3,
    STATE(235), 1,
      sym_comment,
  [3481] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_comment,
  [3494] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__p2,
    STATE(237), 1,
      sym_comment,
  [3507] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__p0,
    STATE(238), 1,
      sym_comment,
  [3520] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__pN,
    STATE(239), 1,
      sym_comment,
  [3533] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      sym_comment,
  [3546] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(241), 1,
      sym_comment,
    ACTIONS(687), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3557] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(689), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__p1,
    STATE(242), 1,
      sym_comment,
  [3570] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_comment,
  [3583] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(244), 1,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3594] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(245), 1,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3605] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(497), 1,
      anon_sym_COLON,
    ACTIONS(699), 1,
      anon_sym_EQ,
    STATE(246), 1,
      sym_comment,
  [3618] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(247), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_true,
      anon_sym_false,
  [3629] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(701), 1,
      sym_identifier,
    STATE(2), 1,
      sym__recipe_dependency,
    STATE(248), 1,
      sym_comment,
  [3642] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(249), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3653] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__pN,
    STATE(250), 1,
      sym_comment,
  [3666] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__p2,
    STATE(251), 1,
      sym_comment,
  [3679] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__p0,
    STATE(252), 1,
      sym_comment,
  [3692] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(453), 1,
      anon_sym_COLON,
    STATE(253), 1,
      sym_comment,
  [3702] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      sym_comment,
  [3712] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_comment,
  [3722] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(711), 1,
      anon_sym_COLON,
    STATE(256), 1,
      sym_comment,
  [3732] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(713), 1,
      anon_sym_COLON,
    STATE(257), 1,
      sym_comment,
  [3742] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(715), 1,
      anon_sym_COLON,
    STATE(258), 1,
      sym_comment,
  [3752] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(717), 1,
      aux_sym_backtick_token1,
    STATE(259), 1,
      sym_comment,
  [3762] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(260), 1,
      sym_comment,
  [3772] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    STATE(261), 1,
      sym_comment,
  [3782] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_comment,
  [3792] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(723), 1,
      aux_sym_recipe_token1,
    STATE(263), 1,
      sym_comment,
  [3802] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      sym_comment,
  [3812] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(727), 1,
      anon_sym_LBRACE,
    STATE(265), 1,
      sym_comment,
  [3822] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_comment,
  [3832] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    STATE(267), 1,
      sym_comment,
  [3842] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      sym_comment,
  [3852] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(735), 1,
      sym_identifier,
    STATE(269), 1,
      sym_comment,
  [3862] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(270), 1,
      sym_comment,
  [3872] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_comment,
  [3882] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      sym_comment,
  [3892] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(741), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      sym_comment,
  [3902] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      sym_comment,
  [3912] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      sym_comment,
  [3922] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_comment,
  [3932] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_comment,
  [3942] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_comment,
  [3952] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(753), 1,
      anon_sym_BQUOTE,
    STATE(279), 1,
      sym_comment,
  [3962] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(755), 1,
      sym_identifier,
    STATE(280), 1,
      sym_comment,
  [3972] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(757), 1,
      sym_identifier,
    STATE(281), 1,
      sym_comment,
  [3982] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(759), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_comment,
  [3992] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym_comment,
  [4002] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_comment,
  [4012] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_comment,
  [4022] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(765), 1,
      aux_sym_recipe_token1,
    STATE(286), 1,
      sym_comment,
  [4032] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      anon_sym_COLON,
    STATE(287), 1,
      sym_comment,
  [4042] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_comment,
  [4052] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      sym_comment,
  [4062] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_comment,
  [4072] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
  [4082] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_comment,
  [4092] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym_comment,
  [4102] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(779), 1,
      aux_sym__raw_string_token1,
    STATE(294), 1,
      sym_comment,
  [4112] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(781), 1,
      sym_identifier,
    STATE(295), 1,
      sym_comment,
  [4122] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(783), 1,
      sym_identifier,
    STATE(296), 1,
      sym_comment,
  [4132] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(785), 1,
      aux_sym_backtick_token1,
    STATE(297), 1,
      sym_comment,
  [4142] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_comment,
  [4152] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_comment,
  [4162] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(791), 1,
      anon_sym_else,
    STATE(300), 1,
      sym_comment,
  [4172] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_comment,
  [4182] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      sym_comment,
  [4192] = 3,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    ACTIONS(797), 1,
      aux_sym__raw_string_token1,
    STATE(303), 1,
      sym_comment,
  [4202] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(799), 1,
      anon_sym_COLON_EQ,
    STATE(304), 1,
      sym_comment,
  [4212] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      sym_comment,
  [4222] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      sym_comment,
  [4232] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      sym_comment,
  [4242] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    STATE(308), 1,
      sym_comment,
  [4252] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(809), 1,
      anon_sym_COLON_EQ,
    STATE(309), 1,
      sym_comment,
  [4262] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(811), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_comment,
  [4272] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(311), 1,
      sym_comment,
  [4282] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(813), 1,
      anon_sym_else,
    STATE(312), 1,
      sym_comment,
  [4292] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym_comment,
  [4302] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      sym_comment,
  [4312] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_comment,
  [4322] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(316), 1,
      sym_comment,
  [4332] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(823), 1,
      sym_identifier,
    STATE(317), 1,
      sym_comment,
  [4342] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(318), 1,
      sym_comment,
  [4352] = 1,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(74)] = 0,
  [SMALL_STATE(75)] = 31,
  [SMALL_STATE(76)] = 64,
  [SMALL_STATE(77)] = 95,
  [SMALL_STATE(78)] = 125,
  [SMALL_STATE(79)] = 155,
  [SMALL_STATE(80)] = 185,
  [SMALL_STATE(81)] = 215,
  [SMALL_STATE(82)] = 245,
  [SMALL_STATE(83)] = 275,
  [SMALL_STATE(84)] = 305,
  [SMALL_STATE(85)] = 335,
  [SMALL_STATE(86)] = 365,
  [SMALL_STATE(87)] = 395,
  [SMALL_STATE(88)] = 425,
  [SMALL_STATE(89)] = 455,
  [SMALL_STATE(90)] = 485,
  [SMALL_STATE(91)] = 515,
  [SMALL_STATE(92)] = 545,
  [SMALL_STATE(93)] = 575,
  [SMALL_STATE(94)] = 606,
  [SMALL_STATE(95)] = 657,
  [SMALL_STATE(96)] = 694,
  [SMALL_STATE(97)] = 731,
  [SMALL_STATE(98)] = 780,
  [SMALL_STATE(99)] = 807,
  [SMALL_STATE(100)] = 834,
  [SMALL_STATE(101)] = 861,
  [SMALL_STATE(102)] = 892,
  [SMALL_STATE(103)] = 927,
  [SMALL_STATE(104)] = 955,
  [SMALL_STATE(105)] = 981,
  [SMALL_STATE(106)] = 1001,
  [SMALL_STATE(107)] = 1021,
  [SMALL_STATE(108)] = 1041,
  [SMALL_STATE(109)] = 1061,
  [SMALL_STATE(110)] = 1085,
  [SMALL_STATE(111)] = 1109,
  [SMALL_STATE(112)] = 1129,
  [SMALL_STATE(113)] = 1149,
  [SMALL_STATE(114)] = 1169,
  [SMALL_STATE(115)] = 1189,
  [SMALL_STATE(116)] = 1209,
  [SMALL_STATE(117)] = 1229,
  [SMALL_STATE(118)] = 1249,
  [SMALL_STATE(119)] = 1269,
  [SMALL_STATE(120)] = 1289,
  [SMALL_STATE(121)] = 1309,
  [SMALL_STATE(122)] = 1329,
  [SMALL_STATE(123)] = 1349,
  [SMALL_STATE(124)] = 1369,
  [SMALL_STATE(125)] = 1389,
  [SMALL_STATE(126)] = 1409,
  [SMALL_STATE(127)] = 1441,
  [SMALL_STATE(128)] = 1467,
  [SMALL_STATE(129)] = 1487,
  [SMALL_STATE(130)] = 1507,
  [SMALL_STATE(131)] = 1533,
  [SMALL_STATE(132)] = 1553,
  [SMALL_STATE(133)] = 1579,
  [SMALL_STATE(134)] = 1605,
  [SMALL_STATE(135)] = 1631,
  [SMALL_STATE(136)] = 1651,
  [SMALL_STATE(137)] = 1677,
  [SMALL_STATE(138)] = 1703,
  [SMALL_STATE(139)] = 1729,
  [SMALL_STATE(140)] = 1749,
  [SMALL_STATE(141)] = 1778,
  [SMALL_STATE(142)] = 1807,
  [SMALL_STATE(143)] = 1836,
  [SMALL_STATE(144)] = 1865,
  [SMALL_STATE(145)] = 1894,
  [SMALL_STATE(146)] = 1923,
  [SMALL_STATE(147)] = 1939,
  [SMALL_STATE(148)] = 1955,
  [SMALL_STATE(149)] = 1971,
  [SMALL_STATE(150)] = 1987,
  [SMALL_STATE(151)] = 2009,
  [SMALL_STATE(152)] = 2034,
  [SMALL_STATE(153)] = 2059,
  [SMALL_STATE(154)] = 2084,
  [SMALL_STATE(155)] = 2109,
  [SMALL_STATE(156)] = 2134,
  [SMALL_STATE(157)] = 2159,
  [SMALL_STATE(158)] = 2184,
  [SMALL_STATE(159)] = 2201,
  [SMALL_STATE(160)] = 2226,
  [SMALL_STATE(161)] = 2251,
  [SMALL_STATE(162)] = 2276,
  [SMALL_STATE(163)] = 2301,
  [SMALL_STATE(164)] = 2326,
  [SMALL_STATE(165)] = 2351,
  [SMALL_STATE(166)] = 2376,
  [SMALL_STATE(167)] = 2401,
  [SMALL_STATE(168)] = 2424,
  [SMALL_STATE(169)] = 2441,
  [SMALL_STATE(170)] = 2466,
  [SMALL_STATE(171)] = 2491,
  [SMALL_STATE(172)] = 2516,
  [SMALL_STATE(173)] = 2541,
  [SMALL_STATE(174)] = 2566,
  [SMALL_STATE(175)] = 2588,
  [SMALL_STATE(176)] = 2610,
  [SMALL_STATE(177)] = 2632,
  [SMALL_STATE(178)] = 2646,
  [SMALL_STATE(179)] = 2668,
  [SMALL_STATE(180)] = 2682,
  [SMALL_STATE(181)] = 2704,
  [SMALL_STATE(182)] = 2718,
  [SMALL_STATE(183)] = 2736,
  [SMALL_STATE(184)] = 2758,
  [SMALL_STATE(185)] = 2775,
  [SMALL_STATE(186)] = 2792,
  [SMALL_STATE(187)] = 2806,
  [SMALL_STATE(188)] = 2822,
  [SMALL_STATE(189)] = 2838,
  [SMALL_STATE(190)] = 2852,
  [SMALL_STATE(191)] = 2868,
  [SMALL_STATE(192)] = 2884,
  [SMALL_STATE(193)] = 2900,
  [SMALL_STATE(194)] = 2916,
  [SMALL_STATE(195)] = 2932,
  [SMALL_STATE(196)] = 2944,
  [SMALL_STATE(197)] = 2958,
  [SMALL_STATE(198)] = 2974,
  [SMALL_STATE(199)] = 2990,
  [SMALL_STATE(200)] = 3004,
  [SMALL_STATE(201)] = 3018,
  [SMALL_STATE(202)] = 3034,
  [SMALL_STATE(203)] = 3048,
  [SMALL_STATE(204)] = 3060,
  [SMALL_STATE(205)] = 3074,
  [SMALL_STATE(206)] = 3086,
  [SMALL_STATE(207)] = 3102,
  [SMALL_STATE(208)] = 3116,
  [SMALL_STATE(209)] = 3130,
  [SMALL_STATE(210)] = 3146,
  [SMALL_STATE(211)] = 3162,
  [SMALL_STATE(212)] = 3176,
  [SMALL_STATE(213)] = 3190,
  [SMALL_STATE(214)] = 3206,
  [SMALL_STATE(215)] = 3222,
  [SMALL_STATE(216)] = 3236,
  [SMALL_STATE(217)] = 3248,
  [SMALL_STATE(218)] = 3261,
  [SMALL_STATE(219)] = 3274,
  [SMALL_STATE(220)] = 3287,
  [SMALL_STATE(221)] = 3298,
  [SMALL_STATE(222)] = 3309,
  [SMALL_STATE(223)] = 3320,
  [SMALL_STATE(224)] = 3331,
  [SMALL_STATE(225)] = 3344,
  [SMALL_STATE(226)] = 3357,
  [SMALL_STATE(227)] = 3368,
  [SMALL_STATE(228)] = 3381,
  [SMALL_STATE(229)] = 3394,
  [SMALL_STATE(230)] = 3407,
  [SMALL_STATE(231)] = 3420,
  [SMALL_STATE(232)] = 3431,
  [SMALL_STATE(233)] = 3444,
  [SMALL_STATE(234)] = 3457,
  [SMALL_STATE(235)] = 3468,
  [SMALL_STATE(236)] = 3481,
  [SMALL_STATE(237)] = 3494,
  [SMALL_STATE(238)] = 3507,
  [SMALL_STATE(239)] = 3520,
  [SMALL_STATE(240)] = 3533,
  [SMALL_STATE(241)] = 3546,
  [SMALL_STATE(242)] = 3557,
  [SMALL_STATE(243)] = 3570,
  [SMALL_STATE(244)] = 3583,
  [SMALL_STATE(245)] = 3594,
  [SMALL_STATE(246)] = 3605,
  [SMALL_STATE(247)] = 3618,
  [SMALL_STATE(248)] = 3629,
  [SMALL_STATE(249)] = 3642,
  [SMALL_STATE(250)] = 3653,
  [SMALL_STATE(251)] = 3666,
  [SMALL_STATE(252)] = 3679,
  [SMALL_STATE(253)] = 3692,
  [SMALL_STATE(254)] = 3702,
  [SMALL_STATE(255)] = 3712,
  [SMALL_STATE(256)] = 3722,
  [SMALL_STATE(257)] = 3732,
  [SMALL_STATE(258)] = 3742,
  [SMALL_STATE(259)] = 3752,
  [SMALL_STATE(260)] = 3762,
  [SMALL_STATE(261)] = 3772,
  [SMALL_STATE(262)] = 3782,
  [SMALL_STATE(263)] = 3792,
  [SMALL_STATE(264)] = 3802,
  [SMALL_STATE(265)] = 3812,
  [SMALL_STATE(266)] = 3822,
  [SMALL_STATE(267)] = 3832,
  [SMALL_STATE(268)] = 3842,
  [SMALL_STATE(269)] = 3852,
  [SMALL_STATE(270)] = 3862,
  [SMALL_STATE(271)] = 3872,
  [SMALL_STATE(272)] = 3882,
  [SMALL_STATE(273)] = 3892,
  [SMALL_STATE(274)] = 3902,
  [SMALL_STATE(275)] = 3912,
  [SMALL_STATE(276)] = 3922,
  [SMALL_STATE(277)] = 3932,
  [SMALL_STATE(278)] = 3942,
  [SMALL_STATE(279)] = 3952,
  [SMALL_STATE(280)] = 3962,
  [SMALL_STATE(281)] = 3972,
  [SMALL_STATE(282)] = 3982,
  [SMALL_STATE(283)] = 3992,
  [SMALL_STATE(284)] = 4002,
  [SMALL_STATE(285)] = 4012,
  [SMALL_STATE(286)] = 4022,
  [SMALL_STATE(287)] = 4032,
  [SMALL_STATE(288)] = 4042,
  [SMALL_STATE(289)] = 4052,
  [SMALL_STATE(290)] = 4062,
  [SMALL_STATE(291)] = 4072,
  [SMALL_STATE(292)] = 4082,
  [SMALL_STATE(293)] = 4092,
  [SMALL_STATE(294)] = 4102,
  [SMALL_STATE(295)] = 4112,
  [SMALL_STATE(296)] = 4122,
  [SMALL_STATE(297)] = 4132,
  [SMALL_STATE(298)] = 4142,
  [SMALL_STATE(299)] = 4152,
  [SMALL_STATE(300)] = 4162,
  [SMALL_STATE(301)] = 4172,
  [SMALL_STATE(302)] = 4182,
  [SMALL_STATE(303)] = 4192,
  [SMALL_STATE(304)] = 4202,
  [SMALL_STATE(305)] = 4212,
  [SMALL_STATE(306)] = 4222,
  [SMALL_STATE(307)] = 4232,
  [SMALL_STATE(308)] = 4242,
  [SMALL_STATE(309)] = 4252,
  [SMALL_STATE(310)] = 4262,
  [SMALL_STATE(311)] = 4272,
  [SMALL_STATE(312)] = 4282,
  [SMALL_STATE(313)] = 4292,
  [SMALL_STATE(314)] = 4302,
  [SMALL_STATE(315)] = 4312,
  [SMALL_STATE(316)] = 4322,
  [SMALL_STATE(317)] = 4332,
  [SMALL_STATE(318)] = 4342,
  [SMALL_STATE(319)] = 4352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 13),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 13),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 13),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 13),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_dependency_repeat1, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_dependency_repeat1, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recipe_dependency, 1, 0, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipe_dependency, 1, 0, 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 8, 0, 15),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 8, 0, 15),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 11),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 11),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7, 0, 12),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7, 0, 12),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indented_normal_string_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_string_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 10),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 10),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6, 0, 15),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6, 0, 15),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5, 0, 6),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5, 0, 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5, 0, 15),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5, 0, 15),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6, 0, 12),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6, 0, 12),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7, 0, 15),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7, 0, 15),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6, 0, 6),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6, 0, 6),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3, 0, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3, 0, 6),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 5),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4, 0, 12),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4, 0, 12),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4, 0, 6),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4, 0, 6),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5, 0, 12),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5, 0, 12),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_string_repeat1, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indented_normal_string_repeat1, 1, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2, 0, 0), SHIFT_REPEAT(158),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2, 0, 0),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2, 0, 0), SHIFT_REPEAT(296),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 1, 0, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat3, 2, 0, 0), SHIFT_REPEAT(202),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat3, 2, 0, 0),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat3, 2, 0, 0), SHIFT_REPEAT(248),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 2, 0, 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 4, 0, 9),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 3, 0, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attribute, 1, 0, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_dependency, 4, 0, 14),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_dependency, 4, 0, 14),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_list, 5, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_list_repeat1, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_list, 4, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat3, 1, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat3, 1, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_dependency, 1, 0, 8),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_dependency, 1, 0, 8),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indented_raw_string_repeat1, 2, 0, 0),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_dependency, 3, 0, 14),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_dependency, 3, 0, 14),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indented_raw_string_repeat1, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__a1, 3, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attribute, 2, 0, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameter, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [811] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
