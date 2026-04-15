#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_command_name = 1,
  aux_sym_program_token1 = 2,
  anon_sym_AT = 3,
  aux_sym_echo_off_token1 = 4,
  aux_sym_echo_off_token2 = 5,
  aux_sym_echo_off_token3 = 6,
  sym_comment = 7,
  aux_sym_label_token1 = 8,
  aux_sym_variable_assignment_token1 = 9,
  aux_sym_variable_assignment_token2 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_variable_assignment_token3 = 12,
  anon_sym_EQ = 13,
  aux_sym_arithmetic_assignment_token1 = 14,
  aux_sym_prompt_assignment_token1 = 15,
  sym_arithmetic_expression = 16,
  aux_sym_assignment_value_token1 = 17,
  aux_sym_quoted_assignment_value_token1 = 18,
  aux_sym_if_stmt_token1 = 19,
  aux_sym_if_stmt_token2 = 20,
  aux_sym_if_stmt_token3 = 21,
  aux_sym_if_stmt_token4 = 22,
  aux_sym_if_stmt_token5 = 23,
  aux_sym_else_clause_token1 = 24,
  sym_comparison_op = 25,
  aux_sym_goto_stmt_token1 = 26,
  aux_sym_goto_stmt_token2 = 27,
  aux_sym_goto_stmt_token3 = 28,
  aux_sym_call_stmt_token1 = 29,
  aux_sym_exit_stmt_token1 = 30,
  aux_sym_exit_stmt_token2 = 31,
  aux_sym_setlocal_stmt_token1 = 32,
  aux_sym_setlocal_stmt_token2 = 33,
  aux_sym_setlocal_stmt_token3 = 34,
  aux_sym_setlocal_stmt_token4 = 35,
  aux_sym_setlocal_stmt_token5 = 36,
  aux_sym_endlocal_stmt_token1 = 37,
  aux_sym_for_stmt_token1 = 38,
  aux_sym_for_stmt_token2 = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  aux_sym_for_stmt_token3 = 42,
  sym_for_options = 43,
  sym_for_variable = 44,
  aux_sym_for_set_token1 = 45,
  aux_sym_redirection_token1 = 46,
  sym_fd_redirect = 47,
  sym_redirect_op = 48,
  sym_redirect_target = 49,
  anon_sym_PIPE = 50,
  anon_sym_AMP_AMP = 51,
  anon_sym_PIPE_PIPE = 52,
  anon_sym_AMP = 53,
  sym_variable_reference = 54,
  sym_string = 55,
  sym_command_option = 56,
  sym_argument_value = 57,
  sym_integer = 58,
  sym_program = 59,
  sym__stmt = 60,
  sym_echo_off = 61,
  sym_label = 62,
  sym_variable_assignment = 63,
  sym_arithmetic_assignment = 64,
  sym_prompt_assignment = 65,
  sym_assignment_value = 66,
  sym_quoted_assignment_value = 67,
  sym_if_stmt = 68,
  sym_else_clause = 69,
  sym_goto_stmt = 70,
  sym_call_stmt = 71,
  sym_exit_stmt = 72,
  sym_setlocal_stmt = 73,
  sym_endlocal_stmt = 74,
  sym_for_stmt = 75,
  sym_for_set = 76,
  sym_parenthesized = 77,
  sym_redirect_stmt = 78,
  sym_redirection = 79,
  sym_pipe_stmt = 80,
  sym_cond_exec = 81,
  sym_command_sep = 82,
  sym_cmd = 83,
  sym_argument_list = 84,
  sym__arg = 85,
  sym_paren_expression = 86,
  aux_sym_program_repeat1 = 87,
  aux_sym_assignment_value_repeat1 = 88,
  aux_sym_quoted_assignment_value_repeat1 = 89,
  aux_sym_for_set_repeat1 = 90,
  aux_sym_redirection_repeat1 = 91,
  aux_sym_argument_list_repeat1 = 92,
  alias_sym_variable_name = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_command_name] = "command_name",
  [aux_sym_program_token1] = "program_token1",
  [anon_sym_AT] = "@",
  [aux_sym_echo_off_token1] = "echo_off_token1",
  [aux_sym_echo_off_token2] = "echo_off_token2",
  [aux_sym_echo_off_token3] = "echo_off_token3",
  [sym_comment] = "comment",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_variable_assignment_token1] = "set_keyword",
  [aux_sym_variable_assignment_token2] = "variable_assignment_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_variable_assignment_token3] = "variable_assignment_token3",
  [anon_sym_EQ] = "=",
  [aux_sym_arithmetic_assignment_token1] = "set_option",
  [aux_sym_prompt_assignment_token1] = "set_option",
  [sym_arithmetic_expression] = "arithmetic_expression",
  [aux_sym_assignment_value_token1] = "assignment_literal",
  [aux_sym_quoted_assignment_value_token1] = "assignment_literal",
  [aux_sym_if_stmt_token1] = "if_stmt_token1",
  [aux_sym_if_stmt_token2] = "if_stmt_token2",
  [aux_sym_if_stmt_token3] = "if_stmt_token3",
  [aux_sym_if_stmt_token4] = "if_stmt_token4",
  [aux_sym_if_stmt_token5] = "if_stmt_token5",
  [aux_sym_else_clause_token1] = "else_clause_token1",
  [sym_comparison_op] = "comparison_op",
  [aux_sym_goto_stmt_token1] = "goto_stmt_token1",
  [aux_sym_goto_stmt_token2] = "goto_stmt_token2",
  [aux_sym_goto_stmt_token3] = "goto_stmt_token3",
  [aux_sym_call_stmt_token1] = "call_stmt_token1",
  [aux_sym_exit_stmt_token1] = "exit_stmt_token1",
  [aux_sym_exit_stmt_token2] = "exit_stmt_token2",
  [aux_sym_setlocal_stmt_token1] = "setlocal_stmt_token1",
  [aux_sym_setlocal_stmt_token2] = "setlocal_stmt_token2",
  [aux_sym_setlocal_stmt_token3] = "setlocal_stmt_token3",
  [aux_sym_setlocal_stmt_token4] = "setlocal_stmt_token4",
  [aux_sym_setlocal_stmt_token5] = "setlocal_stmt_token5",
  [aux_sym_endlocal_stmt_token1] = "endlocal_stmt_token1",
  [aux_sym_for_stmt_token1] = "for_stmt_token1",
  [aux_sym_for_stmt_token2] = "for_stmt_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_for_stmt_token3] = "for_stmt_token3",
  [sym_for_options] = "for_options",
  [sym_for_variable] = "for_variable",
  [aux_sym_for_set_token1] = "for_set_literal",
  [aux_sym_redirection_token1] = "redirection_token1",
  [sym_fd_redirect] = "fd_redirect",
  [sym_redirect_op] = "redirect_op",
  [sym_redirect_target] = "redirect_target",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [sym_variable_reference] = "variable_reference",
  [sym_string] = "string",
  [sym_command_option] = "command_option",
  [sym_argument_value] = "argument_value",
  [sym_integer] = "integer",
  [sym_program] = "program",
  [sym__stmt] = "_stmt",
  [sym_echo_off] = "echo_off",
  [sym_label] = "label",
  [sym_variable_assignment] = "variable_assignment",
  [sym_arithmetic_assignment] = "arithmetic_assignment",
  [sym_prompt_assignment] = "prompt_assignment",
  [sym_assignment_value] = "assignment_value",
  [sym_quoted_assignment_value] = "quoted_assignment_value",
  [sym_if_stmt] = "if_stmt",
  [sym_else_clause] = "else_clause",
  [sym_goto_stmt] = "goto_stmt",
  [sym_call_stmt] = "call_stmt",
  [sym_exit_stmt] = "exit_stmt",
  [sym_setlocal_stmt] = "setlocal_stmt",
  [sym_endlocal_stmt] = "endlocal_stmt",
  [sym_for_stmt] = "for_stmt",
  [sym_for_set] = "for_set",
  [sym_parenthesized] = "parenthesized",
  [sym_redirect_stmt] = "redirect_stmt",
  [sym_redirection] = "redirection",
  [sym_pipe_stmt] = "pipe_stmt",
  [sym_cond_exec] = "cond_exec",
  [sym_command_sep] = "command_sep",
  [sym_cmd] = "cmd",
  [sym_argument_list] = "argument_list",
  [sym__arg] = "_arg",
  [sym_paren_expression] = "paren_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_assignment_value_repeat1] = "assignment_value_repeat1",
  [aux_sym_quoted_assignment_value_repeat1] = "quoted_assignment_value_repeat1",
  [aux_sym_for_set_repeat1] = "for_set_repeat1",
  [aux_sym_redirection_repeat1] = "redirection_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_variable_name] = "variable_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_command_name] = sym_command_name,
  [aux_sym_program_token1] = aux_sym_program_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_echo_off_token1] = aux_sym_echo_off_token1,
  [aux_sym_echo_off_token2] = aux_sym_echo_off_token2,
  [aux_sym_echo_off_token3] = aux_sym_echo_off_token3,
  [sym_comment] = sym_comment,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [aux_sym_variable_assignment_token1] = aux_sym_variable_assignment_token1,
  [aux_sym_variable_assignment_token2] = aux_sym_variable_assignment_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_variable_assignment_token3] = aux_sym_variable_assignment_token3,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_arithmetic_assignment_token1] = aux_sym_arithmetic_assignment_token1,
  [aux_sym_prompt_assignment_token1] = aux_sym_arithmetic_assignment_token1,
  [sym_arithmetic_expression] = sym_arithmetic_expression,
  [aux_sym_assignment_value_token1] = aux_sym_assignment_value_token1,
  [aux_sym_quoted_assignment_value_token1] = aux_sym_assignment_value_token1,
  [aux_sym_if_stmt_token1] = aux_sym_if_stmt_token1,
  [aux_sym_if_stmt_token2] = aux_sym_if_stmt_token2,
  [aux_sym_if_stmt_token3] = aux_sym_if_stmt_token3,
  [aux_sym_if_stmt_token4] = aux_sym_if_stmt_token4,
  [aux_sym_if_stmt_token5] = aux_sym_if_stmt_token5,
  [aux_sym_else_clause_token1] = aux_sym_else_clause_token1,
  [sym_comparison_op] = sym_comparison_op,
  [aux_sym_goto_stmt_token1] = aux_sym_goto_stmt_token1,
  [aux_sym_goto_stmt_token2] = aux_sym_goto_stmt_token2,
  [aux_sym_goto_stmt_token3] = aux_sym_goto_stmt_token3,
  [aux_sym_call_stmt_token1] = aux_sym_call_stmt_token1,
  [aux_sym_exit_stmt_token1] = aux_sym_exit_stmt_token1,
  [aux_sym_exit_stmt_token2] = aux_sym_exit_stmt_token2,
  [aux_sym_setlocal_stmt_token1] = aux_sym_setlocal_stmt_token1,
  [aux_sym_setlocal_stmt_token2] = aux_sym_setlocal_stmt_token2,
  [aux_sym_setlocal_stmt_token3] = aux_sym_setlocal_stmt_token3,
  [aux_sym_setlocal_stmt_token4] = aux_sym_setlocal_stmt_token4,
  [aux_sym_setlocal_stmt_token5] = aux_sym_setlocal_stmt_token5,
  [aux_sym_endlocal_stmt_token1] = aux_sym_endlocal_stmt_token1,
  [aux_sym_for_stmt_token1] = aux_sym_for_stmt_token1,
  [aux_sym_for_stmt_token2] = aux_sym_for_stmt_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_for_stmt_token3] = aux_sym_for_stmt_token3,
  [sym_for_options] = sym_for_options,
  [sym_for_variable] = sym_for_variable,
  [aux_sym_for_set_token1] = aux_sym_for_set_token1,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
  [sym_fd_redirect] = sym_fd_redirect,
  [sym_redirect_op] = sym_redirect_op,
  [sym_redirect_target] = sym_redirect_target,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_variable_reference] = sym_variable_reference,
  [sym_string] = sym_string,
  [sym_command_option] = sym_command_option,
  [sym_argument_value] = sym_argument_value,
  [sym_integer] = sym_integer,
  [sym_program] = sym_program,
  [sym__stmt] = sym__stmt,
  [sym_echo_off] = sym_echo_off,
  [sym_label] = sym_label,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_arithmetic_assignment] = sym_arithmetic_assignment,
  [sym_prompt_assignment] = sym_prompt_assignment,
  [sym_assignment_value] = sym_assignment_value,
  [sym_quoted_assignment_value] = sym_quoted_assignment_value,
  [sym_if_stmt] = sym_if_stmt,
  [sym_else_clause] = sym_else_clause,
  [sym_goto_stmt] = sym_goto_stmt,
  [sym_call_stmt] = sym_call_stmt,
  [sym_exit_stmt] = sym_exit_stmt,
  [sym_setlocal_stmt] = sym_setlocal_stmt,
  [sym_endlocal_stmt] = sym_endlocal_stmt,
  [sym_for_stmt] = sym_for_stmt,
  [sym_for_set] = sym_for_set,
  [sym_parenthesized] = sym_parenthesized,
  [sym_redirect_stmt] = sym_redirect_stmt,
  [sym_redirection] = sym_redirection,
  [sym_pipe_stmt] = sym_pipe_stmt,
  [sym_cond_exec] = sym_cond_exec,
  [sym_command_sep] = sym_command_sep,
  [sym_cmd] = sym_cmd,
  [sym_argument_list] = sym_argument_list,
  [sym__arg] = sym__arg,
  [sym_paren_expression] = sym_paren_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_assignment_value_repeat1] = aux_sym_assignment_value_repeat1,
  [aux_sym_quoted_assignment_value_repeat1] = aux_sym_quoted_assignment_value_repeat1,
  [aux_sym_for_set_repeat1] = aux_sym_for_set_repeat1,
  [aux_sym_redirection_repeat1] = aux_sym_redirection_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_variable_name] = alias_sym_variable_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_echo_off_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_echo_off_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_echo_off_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_assignment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_assignment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arithmetic_assignment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prompt_assignment_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_assignment_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_assignment_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_if_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comparison_op] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_goto_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goto_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goto_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_endlocal_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_stmt_token2] = {
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
  [aux_sym_for_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_for_options] = {
    .visible = true,
    .named = true,
  },
  [sym_for_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_for_set_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_redirection_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fd_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_op] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_command_option] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_echo_off] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_assignment_value] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_goto_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_call_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_setlocal_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_endlocal_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_set] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_redirection] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_exec] = {
    .visible = true,
    .named = true,
  },
  [sym_command_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_paren_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_assignment_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_redirection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_variable_name,
  },
  [2] = {
    [3] = alias_sym_variable_name,
  },
  [3] = {
    [4] = alias_sym_variable_name,
  },
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
  [19] = 6,
  [20] = 7,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 10,
  [29] = 11,
  [30] = 21,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 32,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 13,
  [46] = 14,
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
  [63] = 55,
  [64] = 64,
  [65] = 47,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 58,
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
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 78,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 90,
  [97] = 84,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 99,
  [104] = 104,
  [105] = 104,
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
  [184] = 170,
  [185] = 185,
  [186] = 185,
  [187] = 164,
  [188] = 188,
  [189] = 189,
  [190] = 169,
  [191] = 191,
  [192] = 192,
  [193] = 173,
  [194] = 194,
  [195] = 195,
};

static TSCharacterRange sym_argument_value_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '%'}, {'\'', '\''}, {'*', ';'}, {'=', '='}, {'?', '{'},
  {'}', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 67,
        '%', 18,
        '&', 116,
        '(', 90,
        ')', 91,
        '/', 34,
        '2', 102,
        ':', 24,
        '<', 106,
        '=', 72,
        '>', 107,
        '@', 60,
        '|', 113,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 14,
        '%', 22,
        '&', 116,
        '(', 90,
        ')', 91,
        '/', 125,
        '2', 103,
        '<', 106,
        '>', 107,
        '^', 124,
        '|', 113,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(126);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 14,
        '%', 22,
        '(', 90,
        ')', 91,
        '/', 125,
        '^', 124,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '%', 17,
        '&', 116,
        '(', 90,
        ')', 91,
        '/', 42,
        '2', 102,
        ':', 53,
        '<', 106,
        '>', 107,
        '@', 59,
        '|', 113,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(41);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == '~') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == '~') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'A', 73,
        'a', 73,
        'B', 89,
        'b', 89,
        'F', 95,
        'f', 95,
        'P', 74,
        'p', 74,
        'R', 96,
        'r', 96,
        'D', 93,
        'L', 93,
        'd', 93,
        'l', 93,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        'F', 95,
        'f', 95,
        'R', 96,
        'r', 96,
        'D', 93,
        'L', 93,
        'd', 93,
        'l', 93,
      );
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 52:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 53:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(20);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 14,
        '%', 22,
        '(', 90,
        ')', 91,
        '/', 36,
        ':', 25,
        '@', 60,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_arithmetic_assignment_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_prompt_assignment_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_arithmetic_expression);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_arithmetic_expression);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_arithmetic_expression);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_assignment_value_token1);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_assignment_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_assignment_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_assignment_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quoted_assignment_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(80);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_for_set_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%' &&
          lookahead != ')') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_for_set_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%' &&
          lookahead != ')') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '^') ADVANCE(127);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '^') ADVANCE(127);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_fd_redirect);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_command_option);
      if (lookahead == '^') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(127);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
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
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(5);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'C', 14,
        'c', 14,
        'L', 15,
        'l', 15,
        'N', 16,
        'n', 16,
        'R', 17,
        'r', 17,
        'X', 18,
        'x', 18,
      );
      END_STATE();
    case 4:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(21);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_for_stmt_token3);
      END_STATE();
    case 14:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_if_stmt_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_for_stmt_token2);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_echo_off_token3);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_for_stmt_token1);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_if_stmt_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_echo_off_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_call_stmt_token1);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_echo_off_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_else_clause_token1);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token1);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_if_stmt_token3);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_if_stmt_token4);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_endlocal_stmt_token1);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token1);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_if_stmt_token5);
      END_STATE();
    case 90:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token4);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token5);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 56},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 56},
  [92] = {.lex_state = 56},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 56},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 56},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 56},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 56},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 56},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
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
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 56},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 56},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 32},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 56},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 27},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 56},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 56},
  [192] = {.lex_state = 27},
  [193] = {.lex_state = 31},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [aux_sym_program_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_echo_off_token1] = ACTIONS(1),
    [aux_sym_echo_off_token2] = ACTIONS(1),
    [aux_sym_echo_off_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [aux_sym_variable_assignment_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_variable_assignment_token3] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_arithmetic_assignment_token1] = ACTIONS(1),
    [aux_sym_prompt_assignment_token1] = ACTIONS(1),
    [aux_sym_if_stmt_token1] = ACTIONS(1),
    [aux_sym_if_stmt_token2] = ACTIONS(1),
    [aux_sym_if_stmt_token3] = ACTIONS(1),
    [aux_sym_if_stmt_token4] = ACTIONS(1),
    [aux_sym_if_stmt_token5] = ACTIONS(1),
    [aux_sym_else_clause_token1] = ACTIONS(1),
    [aux_sym_goto_stmt_token1] = ACTIONS(1),
    [aux_sym_goto_stmt_token2] = ACTIONS(1),
    [aux_sym_goto_stmt_token3] = ACTIONS(1),
    [aux_sym_call_stmt_token1] = ACTIONS(1),
    [aux_sym_exit_stmt_token1] = ACTIONS(1),
    [aux_sym_exit_stmt_token2] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token1] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token2] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token3] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token4] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token5] = ACTIONS(1),
    [aux_sym_endlocal_stmt_token1] = ACTIONS(1),
    [aux_sym_for_stmt_token1] = ACTIONS(1),
    [aux_sym_for_stmt_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_for_stmt_token3] = ACTIONS(1),
    [sym_for_options] = ACTIONS(1),
    [sym_for_variable] = ACTIONS(1),
    [aux_sym_redirection_token1] = ACTIONS(1),
    [sym_fd_redirect] = ACTIONS(1),
    [sym_redirect_op] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_variable_reference] = ACTIONS(1),
    [sym_command_option] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(179),
    [sym__stmt] = STATE(180),
    [sym_echo_off] = STATE(180),
    [sym_label] = STATE(180),
    [sym_variable_assignment] = STATE(180),
    [sym_if_stmt] = STATE(180),
    [sym_goto_stmt] = STATE(180),
    [sym_call_stmt] = STATE(15),
    [sym_exit_stmt] = STATE(180),
    [sym_setlocal_stmt] = STATE(180),
    [sym_endlocal_stmt] = STATE(180),
    [sym_for_stmt] = STATE(180),
    [sym_parenthesized] = STATE(15),
    [sym_redirect_stmt] = STATE(49),
    [sym_pipe_stmt] = STATE(49),
    [sym_cond_exec] = STATE(59),
    [sym_command_sep] = STATE(101),
    [sym_cmd] = STATE(15),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_command_name] = ACTIONS(5),
    [aux_sym_program_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_label_token1] = ACTIONS(13),
    [aux_sym_variable_assignment_token1] = ACTIONS(15),
    [aux_sym_if_stmt_token1] = ACTIONS(17),
    [aux_sym_goto_stmt_token1] = ACTIONS(19),
    [aux_sym_call_stmt_token1] = ACTIONS(21),
    [aux_sym_exit_stmt_token1] = ACTIONS(23),
    [aux_sym_setlocal_stmt_token1] = ACTIONS(25),
    [aux_sym_endlocal_stmt_token1] = ACTIONS(27),
    [aux_sym_for_stmt_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(35), 1,
      sym_command_name,
    ACTIONS(38), 1,
      aux_sym_program_token1,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_label_token1,
    ACTIONS(50), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(53), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(56), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(59), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(62), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(65), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(68), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(71), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(59), 1,
      sym_cond_exec,
    STATE(101), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(180), 10,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [77] = 21,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(13), 1,
      aux_sym_label_token1,
    ACTIONS(17), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(29), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_program_token1,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(59), 1,
      sym_cond_exec,
    STATE(101), 1,
      sym_command_sep,
    STATE(49), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(113), 10,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [153] = 21,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_label_token1,
    ACTIONS(15), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(17), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(29), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_program_token1,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(59), 1,
      sym_cond_exec,
    STATE(101), 1,
      sym_command_sep,
    STATE(49), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(180), 10,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [229] = 21,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(13), 1,
      aux_sym_label_token1,
    ACTIONS(17), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(29), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(89), 1,
      aux_sym_program_token1,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(59), 1,
      sym_cond_exec,
    STATE(101), 1,
      sym_command_sep,
    STATE(49), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(125), 10,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [305] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(99), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(95), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [338] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(107), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [371] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(111), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(109), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [404] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(115), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(113), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [437] = 6,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(123), 2,
      sym_command_option,
      sym_argument_value,
    STATE(11), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(117), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [467] = 6,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(135), 2,
      sym_command_option,
      sym_argument_value,
    STATE(11), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(130), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(125), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [497] = 2,
    ACTIONS(138), 3,
      anon_sym_AT,
      aux_sym_variable_assignment_token1,
      sym_command_name,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      aux_sym_program_token1,
      sym_comment,
      aux_sym_label_token1,
      aux_sym_if_stmt_token1,
      aux_sym_goto_stmt_token1,
      aux_sym_call_stmt_token1,
      aux_sym_exit_stmt_token1,
      aux_sym_setlocal_stmt_token1,
      aux_sym_endlocal_stmt_token1,
      aux_sym_for_stmt_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [518] = 2,
    ACTIONS(142), 6,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(140), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [537] = 2,
    ACTIONS(146), 6,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(144), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [556] = 9,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_AMP,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(50), 1,
      sym_redirection,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [586] = 8,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      anon_sym_AMP,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(50), 1,
      sym_redirection,
    ACTIONS(162), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [614] = 7,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(50), 1,
      sym_redirection,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [640] = 9,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(172), 1,
      anon_sym_AMP,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(50), 1,
      sym_redirection,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [670] = 6,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(95), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(176), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(178), 2,
      sym_command_option,
      sym_argument_value,
    STATE(28), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [694] = 6,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_argument_list,
    ACTIONS(105), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(176), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(178), 2,
      sym_command_option,
      sym_argument_value,
    STATE(28), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [718] = 10,
    ACTIONS(180), 1,
      sym_command_name,
    ACTIONS(182), 1,
      aux_sym_echo_off_token1,
    ACTIONS(184), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(186), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(188), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(190), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(192), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(194), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(196), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(198), 1,
      aux_sym_for_stmt_token1,
  [749] = 2,
    ACTIONS(202), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(200), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [764] = 7,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_AT,
    STATE(61), 1,
      sym_cond_exec,
    STATE(51), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(18), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [789] = 6,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(208), 1,
      sym_fd_redirect,
    STATE(26), 1,
      aux_sym_redirection_repeat1,
    ACTIONS(210), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(206), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [812] = 2,
    ACTIONS(214), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(212), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [827] = 6,
    ACTIONS(218), 1,
      aux_sym_redirection_token1,
    ACTIONS(221), 1,
      sym_fd_redirect,
    ACTIONS(224), 1,
      sym_redirect_op,
    STATE(26), 1,
      aux_sym_redirection_repeat1,
    ACTIONS(227), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(216), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [850] = 2,
    ACTIONS(231), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(229), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [865] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(233), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(235), 2,
      sym_command_option,
      sym_argument_value,
    STATE(29), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [886] = 5,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(240), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(243), 2,
      sym_command_option,
      sym_argument_value,
    STATE(29), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [907] = 10,
    ACTIONS(180), 1,
      sym_command_name,
    ACTIONS(182), 1,
      aux_sym_echo_off_token1,
    ACTIONS(186), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(188), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(190), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(192), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(194), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(196), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(198), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(246), 1,
      aux_sym_variable_assignment_token1,
  [938] = 2,
    ACTIONS(250), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(248), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [952] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(235), 2,
      sym_command_option,
      sym_argument_value,
    STATE(29), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [972] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(258), 2,
      sym_command_option,
      sym_argument_value,
    STATE(40), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [992] = 2,
    ACTIONS(107), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1006] = 2,
    ACTIONS(115), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(113), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1020] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_AT,
    STATE(53), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(16), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1042] = 2,
    ACTIONS(262), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(260), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1056] = 2,
    ACTIONS(266), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(264), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1070] = 2,
    ACTIONS(227), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(216), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1084] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(235), 2,
      sym_command_option,
      sym_argument_value,
    STATE(29), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1104] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(274), 2,
      sym_command_option,
      sym_argument_value,
    STATE(32), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1124] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_redirect_stmt,
    STATE(17), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1145] = 5,
    ACTIONS(276), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(278), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(280), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(282), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(284), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1163] = 5,
    ACTIONS(286), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(288), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(290), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(292), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(294), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1181] = 2,
    ACTIONS(142), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(140), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1193] = 2,
    ACTIONS(146), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(144), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1205] = 4,
    STATE(78), 1,
      aux_sym_assignment_value_repeat1,
    STATE(119), 1,
      sym_assignment_value,
    ACTIONS(296), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(298), 2,
      aux_sym_assignment_value_token1,
      sym_variable_reference,
  [1220] = 2,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1231] = 4,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1246] = 2,
    ACTIONS(302), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(300), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1257] = 4,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1272] = 4,
    ACTIONS(304), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(306), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(308), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(310), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1287] = 3,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(162), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1300] = 4,
    ACTIONS(278), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(280), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(282), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(284), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1315] = 4,
    STATE(78), 1,
      aux_sym_assignment_value_repeat1,
    STATE(117), 1,
      sym_assignment_value,
    ACTIONS(298), 2,
      aux_sym_assignment_value_token1,
      sym_variable_reference,
    ACTIONS(312), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1330] = 2,
    ACTIONS(314), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(316), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1341] = 2,
    ACTIONS(318), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(320), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1352] = 4,
    STATE(78), 1,
      aux_sym_assignment_value_repeat1,
    STATE(130), 1,
      sym_assignment_value,
    ACTIONS(298), 2,
      aux_sym_assignment_value_token1,
      sym_variable_reference,
    ACTIONS(322), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1367] = 3,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1379] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(87), 1,
      sym_parenthesized,
    STATE(110), 1,
      sym_cmd,
  [1395] = 3,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1407] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_parenthesized,
    STATE(116), 1,
      sym_cmd,
  [1423] = 5,
    ACTIONS(312), 1,
      aux_sym_program_token1,
    ACTIONS(328), 1,
      aux_sym_assignment_value_token1,
    ACTIONS(330), 1,
      sym_variable_reference,
    STATE(88), 1,
      aux_sym_assignment_value_repeat1,
    STATE(117), 1,
      sym_assignment_value,
  [1439] = 5,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      aux_sym_for_set_token1,
    ACTIONS(336), 1,
      sym_variable_reference,
    STATE(80), 1,
      aux_sym_for_set_repeat1,
    STATE(195), 1,
      sym_for_set,
  [1455] = 5,
    ACTIONS(296), 1,
      aux_sym_program_token1,
    ACTIONS(328), 1,
      aux_sym_assignment_value_token1,
    ACTIONS(330), 1,
      sym_variable_reference,
    STATE(88), 1,
      aux_sym_assignment_value_repeat1,
    STATE(119), 1,
      sym_assignment_value,
  [1471] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(93), 1,
      sym_parenthesized,
    STATE(120), 1,
      sym_cmd,
  [1487] = 5,
    ACTIONS(334), 1,
      aux_sym_for_set_token1,
    ACTIONS(336), 1,
      sym_variable_reference,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_for_set_repeat1,
    STATE(178), 1,
      sym_for_set,
  [1503] = 5,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(344), 1,
      sym_variable_reference,
    STATE(95), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(181), 1,
      sym_quoted_assignment_value,
  [1519] = 5,
    ACTIONS(334), 1,
      aux_sym_for_set_token1,
    ACTIONS(336), 1,
      sym_variable_reference,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_for_set_repeat1,
    STATE(158), 1,
      sym_for_set,
  [1535] = 5,
    ACTIONS(322), 1,
      aux_sym_program_token1,
    ACTIONS(328), 1,
      aux_sym_assignment_value_token1,
    ACTIONS(330), 1,
      sym_variable_reference,
    STATE(88), 1,
      aux_sym_assignment_value_repeat1,
    STATE(130), 1,
      sym_assignment_value,
  [1551] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(134), 2,
      sym_parenthesized,
      sym_cmd,
  [1565] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(135), 2,
      sym_parenthesized,
      sym_cmd,
  [1579] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(137), 2,
      sym_parenthesized,
      sym_cmd,
  [1593] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(83), 1,
      sym_parenthesized,
    STATE(127), 1,
      sym_cmd,
  [1609] = 5,
    ACTIONS(342), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(344), 1,
      sym_variable_reference,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(154), 1,
      sym_quoted_assignment_value,
  [1625] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(131), 2,
      sym_parenthesized,
      sym_cmd,
  [1639] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_command_name,
    ACTIONS(326), 1,
      anon_sym_AT,
    STATE(124), 2,
      sym_parenthesized,
      sym_cmd,
  [1653] = 3,
    STATE(79), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(350), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(352), 2,
      aux_sym_assignment_value_token1,
      sym_variable_reference,
  [1665] = 3,
    STATE(79), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(354), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(356), 2,
      aux_sym_assignment_value_token1,
      sym_variable_reference,
  [1677] = 4,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 1,
      aux_sym_for_set_token1,
    ACTIONS(363), 1,
      sym_variable_reference,
    STATE(85), 1,
      aux_sym_for_set_repeat1,
  [1690] = 4,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(370), 1,
      sym_variable_reference,
    STATE(81), 1,
      aux_sym_quoted_assignment_value_repeat1,
  [1703] = 4,
    ACTIONS(354), 1,
      aux_sym_program_token1,
    ACTIONS(373), 1,
      aux_sym_assignment_value_token1,
    ACTIONS(376), 1,
      sym_variable_reference,
    STATE(82), 1,
      aux_sym_assignment_value_repeat1,
  [1716] = 3,
    ACTIONS(381), 1,
      aux_sym_else_clause_token1,
    STATE(133), 1,
      sym_else_clause,
    ACTIONS(379), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1727] = 4,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(387), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(389), 1,
      aux_sym_prompt_assignment_token1,
  [1740] = 4,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      aux_sym_for_set_token1,
    ACTIONS(396), 1,
      sym_variable_reference,
    STATE(85), 1,
      aux_sym_for_set_repeat1,
  [1753] = 3,
    ACTIONS(381), 1,
      aux_sym_else_clause_token1,
    STATE(120), 1,
      sym_else_clause,
    ACTIONS(399), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1764] = 3,
    ACTIONS(381), 1,
      aux_sym_else_clause_token1,
    STATE(116), 1,
      sym_else_clause,
    ACTIONS(401), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1775] = 4,
    ACTIONS(350), 1,
      aux_sym_program_token1,
    ACTIONS(403), 1,
      aux_sym_assignment_value_token1,
    ACTIONS(405), 1,
      sym_variable_reference,
    STATE(82), 1,
      aux_sym_assignment_value_repeat1,
  [1788] = 2,
    ACTIONS(407), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(409), 2,
      sym_variable_reference,
      sym_integer,
  [1797] = 4,
    ACTIONS(387), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(389), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      aux_sym_variable_assignment_token3,
  [1810] = 3,
    ACTIONS(417), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(419), 1,
      sym_integer,
    ACTIONS(415), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1821] = 3,
    ACTIONS(423), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(425), 1,
      sym_integer,
    ACTIONS(421), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1832] = 3,
    ACTIONS(381), 1,
      aux_sym_else_clause_token1,
    STATE(127), 1,
      sym_else_clause,
    ACTIONS(427), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1843] = 2,
    ACTIONS(421), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(425), 2,
      sym_variable_reference,
      sym_integer,
  [1852] = 4,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
    ACTIONS(431), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(433), 1,
      sym_variable_reference,
    STATE(81), 1,
      aux_sym_quoted_assignment_value_repeat1,
  [1865] = 4,
    ACTIONS(387), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(437), 1,
      aux_sym_prompt_assignment_token1,
  [1878] = 4,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(437), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(439), 1,
      aux_sym_variable_assignment_token3,
  [1891] = 1,
    ACTIONS(441), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1897] = 2,
    ACTIONS(443), 1,
      aux_sym_variable_assignment_token2,
    STATE(111), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1905] = 1,
    ACTIONS(445), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1911] = 2,
    ACTIONS(447), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1919] = 1,
    ACTIONS(449), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1925] = 2,
    ACTIONS(451), 1,
      aux_sym_variable_assignment_token2,
    STATE(111), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1933] = 2,
    ACTIONS(453), 1,
      aux_sym_variable_assignment_token2,
    STATE(147), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1941] = 2,
    ACTIONS(455), 1,
      aux_sym_variable_assignment_token2,
    STATE(147), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1949] = 1,
    ACTIONS(457), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1954] = 1,
    ACTIONS(459), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1959] = 1,
    ACTIONS(449), 2,
      sym_variable_reference,
      sym_string,
  [1964] = 1,
    ACTIONS(461), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1969] = 1,
    ACTIONS(401), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1974] = 1,
    ACTIONS(463), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1979] = 1,
    ACTIONS(465), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1984] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      aux_sym_program_token1,
  [1991] = 1,
    ACTIONS(407), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1996] = 1,
    ACTIONS(469), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2001] = 1,
    ACTIONS(399), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2006] = 1,
    ACTIONS(471), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2011] = 1,
    ACTIONS(473), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2016] = 1,
    ACTIONS(475), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2021] = 1,
    ACTIONS(427), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2026] = 1,
    ACTIONS(477), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2031] = 2,
    ACTIONS(479), 1,
      sym_for_options,
    ACTIONS(481), 1,
      sym_for_variable,
  [2038] = 1,
    ACTIONS(483), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2043] = 1,
    ACTIONS(485), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2048] = 2,
    ACTIONS(467), 1,
      aux_sym_program_token1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [2055] = 2,
    ACTIONS(489), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(491), 1,
      aux_sym_goto_stmt_token3,
  [2062] = 1,
    ACTIONS(379), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2067] = 1,
    ACTIONS(493), 2,
      sym_variable_reference,
      sym_string,
  [2072] = 1,
    ACTIONS(495), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2077] = 1,
    ACTIONS(497), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2082] = 1,
    ACTIONS(499), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2087] = 1,
    ACTIONS(501), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2092] = 1,
    ACTIONS(503), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2097] = 1,
    ACTIONS(505), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2102] = 1,
    ACTIONS(507), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2107] = 2,
    ACTIONS(180), 1,
      sym_command_name,
    ACTIONS(190), 1,
      aux_sym_call_stmt_token1,
  [2114] = 1,
    ACTIONS(509), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2119] = 2,
    ACTIONS(511), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(513), 1,
      aux_sym_goto_stmt_token3,
  [2126] = 1,
    ACTIONS(515), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2131] = 2,
    ACTIONS(517), 1,
      sym_for_options,
    ACTIONS(519), 1,
      sym_for_variable,
  [2138] = 1,
    ACTIONS(421), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2143] = 1,
    ACTIONS(521), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2148] = 1,
    ACTIONS(523), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [2153] = 1,
    ACTIONS(314), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2158] = 1,
    ACTIONS(525), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2163] = 1,
    ACTIONS(441), 2,
      sym_variable_reference,
      sym_string,
  [2168] = 1,
    ACTIONS(527), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2173] = 1,
    ACTIONS(529), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2178] = 1,
    ACTIONS(531), 1,
      aux_sym_for_stmt_token3,
  [2182] = 1,
    ACTIONS(533), 1,
      sym_command_name,
  [2186] = 1,
    ACTIONS(449), 1,
      aux_sym_variable_assignment_token3,
  [2190] = 1,
    ACTIONS(535), 1,
      sym_redirect_op,
  [2194] = 1,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [2198] = 1,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
  [2202] = 1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
  [2206] = 1,
    ACTIONS(543), 1,
      sym_redirect_target,
  [2210] = 1,
    ACTIONS(545), 1,
      aux_sym_for_stmt_token2,
  [2214] = 1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [2218] = 1,
    ACTIONS(549), 1,
      sym_for_variable,
  [2222] = 1,
    ACTIONS(551), 1,
      aux_sym_for_stmt_token2,
  [2226] = 1,
    ACTIONS(553), 1,
      sym_redirect_target,
  [2230] = 1,
    ACTIONS(449), 1,
      sym_integer,
  [2234] = 1,
    ACTIONS(555), 1,
      aux_sym_for_stmt_token2,
  [2238] = 1,
    ACTIONS(557), 1,
      anon_sym_EQ,
  [2242] = 1,
    ACTIONS(559), 1,
      aux_sym_variable_assignment_token3,
  [2246] = 1,
    ACTIONS(493), 1,
      aux_sym_variable_assignment_token3,
  [2250] = 1,
    ACTIONS(561), 1,
      aux_sym_for_stmt_token3,
  [2254] = 1,
    ACTIONS(563), 1,
      aux_sym_for_stmt_token3,
  [2258] = 1,
    ACTIONS(565), 1,
      aux_sym_variable_assignment_token3,
  [2262] = 1,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [2266] = 1,
    ACTIONS(569), 1,
      sym_arithmetic_expression,
  [2270] = 1,
    ACTIONS(571), 1,
      sym_comparison_op,
  [2274] = 1,
    ACTIONS(573), 1,
      aux_sym_variable_assignment_token2,
  [2278] = 1,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [2282] = 1,
    ACTIONS(577), 1,
      sym_comparison_op,
  [2286] = 1,
    ACTIONS(579), 1,
      anon_sym_EQ,
  [2290] = 1,
    ACTIONS(581), 1,
      aux_sym_for_stmt_token3,
  [2294] = 1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [2298] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [2302] = 1,
    ACTIONS(467), 1,
      aux_sym_program_token1,
  [2306] = 1,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
  [2310] = 1,
    ACTIONS(519), 1,
      sym_for_variable,
  [2314] = 1,
    ACTIONS(589), 1,
      aux_sym_variable_assignment_token3,
  [2318] = 1,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [2322] = 1,
    ACTIONS(593), 1,
      anon_sym_EQ,
  [2326] = 1,
    ACTIONS(595), 1,
      anon_sym_EQ,
  [2330] = 1,
    ACTIONS(597), 1,
      anon_sym_EQ,
  [2334] = 1,
    ACTIONS(493), 1,
      sym_integer,
  [2338] = 1,
    ACTIONS(441), 1,
      aux_sym_variable_assignment_token3,
  [2342] = 1,
    ACTIONS(599), 1,
      aux_sym_variable_assignment_token3,
  [2346] = 1,
    ACTIONS(441), 1,
      sym_integer,
  [2350] = 1,
    ACTIONS(601), 1,
      sym_comparison_op,
  [2354] = 1,
    ACTIONS(603), 1,
      aux_sym_variable_assignment_token2,
  [2358] = 1,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
  [2362] = 1,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 153,
  [SMALL_STATE(5)] = 229,
  [SMALL_STATE(6)] = 305,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 371,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 437,
  [SMALL_STATE(11)] = 467,
  [SMALL_STATE(12)] = 497,
  [SMALL_STATE(13)] = 518,
  [SMALL_STATE(14)] = 537,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 749,
  [SMALL_STATE(23)] = 764,
  [SMALL_STATE(24)] = 789,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 850,
  [SMALL_STATE(28)] = 865,
  [SMALL_STATE(29)] = 886,
  [SMALL_STATE(30)] = 907,
  [SMALL_STATE(31)] = 938,
  [SMALL_STATE(32)] = 952,
  [SMALL_STATE(33)] = 972,
  [SMALL_STATE(34)] = 992,
  [SMALL_STATE(35)] = 1006,
  [SMALL_STATE(36)] = 1020,
  [SMALL_STATE(37)] = 1042,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1070,
  [SMALL_STATE(40)] = 1084,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1124,
  [SMALL_STATE(43)] = 1145,
  [SMALL_STATE(44)] = 1163,
  [SMALL_STATE(45)] = 1181,
  [SMALL_STATE(46)] = 1193,
  [SMALL_STATE(47)] = 1205,
  [SMALL_STATE(48)] = 1220,
  [SMALL_STATE(49)] = 1231,
  [SMALL_STATE(50)] = 1246,
  [SMALL_STATE(51)] = 1257,
  [SMALL_STATE(52)] = 1272,
  [SMALL_STATE(53)] = 1287,
  [SMALL_STATE(54)] = 1300,
  [SMALL_STATE(55)] = 1315,
  [SMALL_STATE(56)] = 1330,
  [SMALL_STATE(57)] = 1341,
  [SMALL_STATE(58)] = 1352,
  [SMALL_STATE(59)] = 1367,
  [SMALL_STATE(60)] = 1379,
  [SMALL_STATE(61)] = 1395,
  [SMALL_STATE(62)] = 1407,
  [SMALL_STATE(63)] = 1423,
  [SMALL_STATE(64)] = 1439,
  [SMALL_STATE(65)] = 1455,
  [SMALL_STATE(66)] = 1471,
  [SMALL_STATE(67)] = 1487,
  [SMALL_STATE(68)] = 1503,
  [SMALL_STATE(69)] = 1519,
  [SMALL_STATE(70)] = 1535,
  [SMALL_STATE(71)] = 1551,
  [SMALL_STATE(72)] = 1565,
  [SMALL_STATE(73)] = 1579,
  [SMALL_STATE(74)] = 1593,
  [SMALL_STATE(75)] = 1609,
  [SMALL_STATE(76)] = 1625,
  [SMALL_STATE(77)] = 1639,
  [SMALL_STATE(78)] = 1653,
  [SMALL_STATE(79)] = 1665,
  [SMALL_STATE(80)] = 1677,
  [SMALL_STATE(81)] = 1690,
  [SMALL_STATE(82)] = 1703,
  [SMALL_STATE(83)] = 1716,
  [SMALL_STATE(84)] = 1727,
  [SMALL_STATE(85)] = 1740,
  [SMALL_STATE(86)] = 1753,
  [SMALL_STATE(87)] = 1764,
  [SMALL_STATE(88)] = 1775,
  [SMALL_STATE(89)] = 1788,
  [SMALL_STATE(90)] = 1797,
  [SMALL_STATE(91)] = 1810,
  [SMALL_STATE(92)] = 1821,
  [SMALL_STATE(93)] = 1832,
  [SMALL_STATE(94)] = 1843,
  [SMALL_STATE(95)] = 1852,
  [SMALL_STATE(96)] = 1865,
  [SMALL_STATE(97)] = 1878,
  [SMALL_STATE(98)] = 1891,
  [SMALL_STATE(99)] = 1897,
  [SMALL_STATE(100)] = 1905,
  [SMALL_STATE(101)] = 1911,
  [SMALL_STATE(102)] = 1919,
  [SMALL_STATE(103)] = 1925,
  [SMALL_STATE(104)] = 1933,
  [SMALL_STATE(105)] = 1941,
  [SMALL_STATE(106)] = 1949,
  [SMALL_STATE(107)] = 1954,
  [SMALL_STATE(108)] = 1959,
  [SMALL_STATE(109)] = 1964,
  [SMALL_STATE(110)] = 1969,
  [SMALL_STATE(111)] = 1974,
  [SMALL_STATE(112)] = 1979,
  [SMALL_STATE(113)] = 1984,
  [SMALL_STATE(114)] = 1991,
  [SMALL_STATE(115)] = 1996,
  [SMALL_STATE(116)] = 2001,
  [SMALL_STATE(117)] = 2006,
  [SMALL_STATE(118)] = 2011,
  [SMALL_STATE(119)] = 2016,
  [SMALL_STATE(120)] = 2021,
  [SMALL_STATE(121)] = 2026,
  [SMALL_STATE(122)] = 2031,
  [SMALL_STATE(123)] = 2038,
  [SMALL_STATE(124)] = 2043,
  [SMALL_STATE(125)] = 2048,
  [SMALL_STATE(126)] = 2055,
  [SMALL_STATE(127)] = 2062,
  [SMALL_STATE(128)] = 2067,
  [SMALL_STATE(129)] = 2072,
  [SMALL_STATE(130)] = 2077,
  [SMALL_STATE(131)] = 2082,
  [SMALL_STATE(132)] = 2087,
  [SMALL_STATE(133)] = 2092,
  [SMALL_STATE(134)] = 2097,
  [SMALL_STATE(135)] = 2102,
  [SMALL_STATE(136)] = 2107,
  [SMALL_STATE(137)] = 2114,
  [SMALL_STATE(138)] = 2119,
  [SMALL_STATE(139)] = 2126,
  [SMALL_STATE(140)] = 2131,
  [SMALL_STATE(141)] = 2138,
  [SMALL_STATE(142)] = 2143,
  [SMALL_STATE(143)] = 2148,
  [SMALL_STATE(144)] = 2153,
  [SMALL_STATE(145)] = 2158,
  [SMALL_STATE(146)] = 2163,
  [SMALL_STATE(147)] = 2168,
  [SMALL_STATE(148)] = 2173,
  [SMALL_STATE(149)] = 2178,
  [SMALL_STATE(150)] = 2182,
  [SMALL_STATE(151)] = 2186,
  [SMALL_STATE(152)] = 2190,
  [SMALL_STATE(153)] = 2194,
  [SMALL_STATE(154)] = 2198,
  [SMALL_STATE(155)] = 2202,
  [SMALL_STATE(156)] = 2206,
  [SMALL_STATE(157)] = 2210,
  [SMALL_STATE(158)] = 2214,
  [SMALL_STATE(159)] = 2218,
  [SMALL_STATE(160)] = 2222,
  [SMALL_STATE(161)] = 2226,
  [SMALL_STATE(162)] = 2230,
  [SMALL_STATE(163)] = 2234,
  [SMALL_STATE(164)] = 2238,
  [SMALL_STATE(165)] = 2242,
  [SMALL_STATE(166)] = 2246,
  [SMALL_STATE(167)] = 2250,
  [SMALL_STATE(168)] = 2254,
  [SMALL_STATE(169)] = 2258,
  [SMALL_STATE(170)] = 2262,
  [SMALL_STATE(171)] = 2266,
  [SMALL_STATE(172)] = 2270,
  [SMALL_STATE(173)] = 2274,
  [SMALL_STATE(174)] = 2278,
  [SMALL_STATE(175)] = 2282,
  [SMALL_STATE(176)] = 2286,
  [SMALL_STATE(177)] = 2290,
  [SMALL_STATE(178)] = 2294,
  [SMALL_STATE(179)] = 2298,
  [SMALL_STATE(180)] = 2302,
  [SMALL_STATE(181)] = 2306,
  [SMALL_STATE(182)] = 2310,
  [SMALL_STATE(183)] = 2314,
  [SMALL_STATE(184)] = 2318,
  [SMALL_STATE(185)] = 2322,
  [SMALL_STATE(186)] = 2326,
  [SMALL_STATE(187)] = 2330,
  [SMALL_STATE(188)] = 2334,
  [SMALL_STATE(189)] = 2338,
  [SMALL_STATE(190)] = 2342,
  [SMALL_STATE(191)] = 2346,
  [SMALL_STATE(192)] = 2350,
  [SMALL_STATE(193)] = 2354,
  [SMALL_STATE(194)] = 2358,
  [SMALL_STATE(195)] = 2362,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sep, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_sep, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 5, 0, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_set, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_assignment_value, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 6, 0, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [585] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
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

TS_PUBLIC const TSLanguage *tree_sitter_batch(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_command_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
