#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_PERCENT = 18,
  anon_sym_BANG = 19,
  aux_sym_quoted_assignment_value_token1 = 20,
  aux_sym_if_stmt_token1 = 21,
  aux_sym_if_stmt_token2 = 22,
  aux_sym_if_stmt_token3 = 23,
  aux_sym_if_stmt_token4 = 24,
  aux_sym_if_stmt_token5 = 25,
  aux_sym_if_stmt_token6 = 26,
  aux_sym_else_clause_token1 = 27,
  sym_comparison_op = 28,
  aux_sym_goto_stmt_token1 = 29,
  aux_sym_goto_stmt_token2 = 30,
  aux_sym_goto_stmt_token3 = 31,
  aux_sym_call_stmt_token1 = 32,
  aux_sym_exit_stmt_token1 = 33,
  aux_sym_exit_stmt_token2 = 34,
  aux_sym_setlocal_stmt_token1 = 35,
  aux_sym_setlocal_stmt_token2 = 36,
  aux_sym_setlocal_stmt_token3 = 37,
  aux_sym_setlocal_stmt_token4 = 38,
  aux_sym_setlocal_stmt_token5 = 39,
  aux_sym_endlocal_stmt_token1 = 40,
  aux_sym_for_stmt_token1 = 41,
  aux_sym_for_stmt_token2 = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  aux_sym_for_stmt_token3 = 45,
  sym_for_options = 46,
  sym_for_variable = 47,
  aux_sym_for_set_token1 = 48,
  aux_sym_redirection_token1 = 49,
  sym_fd_redirect = 50,
  sym_redirect_op = 51,
  sym_redirect_target = 52,
  anon_sym_PIPE = 53,
  anon_sym_AMP_AMP = 54,
  anon_sym_PIPE_PIPE = 55,
  anon_sym_AMP = 56,
  sym_variable_reference = 57,
  sym_string = 58,
  sym_command_option = 59,
  sym_argument_value = 60,
  sym_integer = 61,
  sym_program = 62,
  sym__stmt = 63,
  sym_echo_off = 64,
  sym_label = 65,
  sym_variable_assignment = 66,
  sym_arithmetic_assignment = 67,
  sym_prompt_assignment = 68,
  sym_assignment_value = 69,
  sym_quoted_assignment_value = 70,
  sym_if_stmt = 71,
  sym_else_clause = 72,
  sym_goto_stmt = 73,
  sym_call_stmt = 74,
  sym_exit_stmt = 75,
  sym_setlocal_stmt = 76,
  sym_endlocal_stmt = 77,
  sym_for_stmt = 78,
  sym_for_set = 79,
  sym_parenthesized = 80,
  sym_redirect_stmt = 81,
  sym_redirection = 82,
  sym_pipe_stmt = 83,
  sym_cond_exec = 84,
  sym_command_sep = 85,
  sym_cmd = 86,
  sym_argument_list = 87,
  sym__arg = 88,
  sym_paren_expression = 89,
  aux_sym_program_repeat1 = 90,
  aux_sym_assignment_value_repeat1 = 91,
  aux_sym_quoted_assignment_value_repeat1 = 92,
  aux_sym_for_set_repeat1 = 93,
  aux_sym_redirection_repeat1 = 94,
  aux_sym_argument_list_repeat1 = 95,
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
  [aux_sym_variable_assignment_token3] = "variable_name",
  [anon_sym_EQ] = "=",
  [aux_sym_arithmetic_assignment_token1] = "set_option",
  [aux_sym_prompt_assignment_token1] = "set_option",
  [sym_arithmetic_expression] = "arithmetic_expression",
  [aux_sym_assignment_value_token1] = "assignment_literal",
  [anon_sym_PERCENT] = "assignment_literal",
  [anon_sym_BANG] = "assignment_literal",
  [aux_sym_quoted_assignment_value_token1] = "assignment_literal",
  [aux_sym_if_stmt_token1] = "if_stmt_token1",
  [aux_sym_if_stmt_token2] = "if_stmt_token2",
  [aux_sym_if_stmt_token3] = "if_stmt_token3",
  [aux_sym_if_stmt_token4] = "if_stmt_token4",
  [aux_sym_if_stmt_token5] = "if_stmt_token5",
  [aux_sym_if_stmt_token6] = "if_stmt_token6",
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
  [anon_sym_PERCENT] = aux_sym_assignment_value_token1,
  [anon_sym_BANG] = aux_sym_assignment_value_token1,
  [aux_sym_quoted_assignment_value_token1] = aux_sym_assignment_value_token1,
  [aux_sym_if_stmt_token1] = aux_sym_if_stmt_token1,
  [aux_sym_if_stmt_token2] = aux_sym_if_stmt_token2,
  [aux_sym_if_stmt_token3] = aux_sym_if_stmt_token3,
  [aux_sym_if_stmt_token4] = aux_sym_if_stmt_token4,
  [aux_sym_if_stmt_token5] = aux_sym_if_stmt_token5,
  [aux_sym_if_stmt_token6] = aux_sym_if_stmt_token6,
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
    .visible = true,
    .named = true,
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
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
  [aux_sym_if_stmt_token6] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = aux_sym_for_set_token1,
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
  [38] = 32,
  [39] = 39,
  [40] = 40,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 44,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 13,
  [56] = 56,
  [57] = 14,
  [58] = 43,
  [59] = 59,
  [60] = 46,
  [61] = 61,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 61,
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
  [91] = 79,
  [92] = 89,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 101,
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
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 153,
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
  [192] = 179,
  [193] = 193,
  [194] = 193,
  [195] = 163,
  [196] = 175,
  [197] = 197,
  [198] = 198,
  [199] = 187,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 200,
  [204] = 183,
  [205] = 205,
  [206] = 206,
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
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '!', 84,
        '"', 69,
        '%', 83,
        '&', 121,
        '(', 95,
        ')', 96,
        '/', 35,
        '2', 107,
        ':', 24,
        '<', 111,
        '=', 74,
        '>', 112,
        '@', 61,
        '|', 118,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '!', 53,
        '"', 14,
        '%', 17,
        '&', 121,
        '(', 95,
        ')', 96,
        '/', 130,
        '2', 108,
        '<', 111,
        '>', 112,
        '^', 129,
        '|', 118,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(131);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '!', 53,
        '"', 14,
        '%', 17,
        '(', 95,
        ')', 96,
        '/', 130,
        '^', 129,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(131);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '%', 21,
        '&', 121,
        '(', 95,
        ')', 96,
        '/', 43,
        '2', 107,
        ':', 54,
        '<', 111,
        '>', 112,
        '@', 60,
        '|', 118,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == '~') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == '~') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(117);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        'A', 75,
        'a', 75,
        'B', 94,
        'b', 94,
        'F', 100,
        'f', 100,
        'P', 76,
        'p', 76,
        'R', 101,
        'r', 101,
        'D', 98,
        'L', 98,
        'd', 98,
        'l', 98,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        'F', 100,
        'f', 100,
        'R', 101,
        'r', 101,
        'D', 98,
        'L', 98,
        'd', 98,
        'l', 98,
      );
      END_STATE();
    case 44:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 52:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 53:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(19);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '!', 53,
        '"', 14,
        '%', 17,
        '(', 95,
        ')', 96,
        '/', 37,
        ':', 25,
        '@', 61,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_arithmetic_assignment_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_prompt_assignment_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_arithmetic_expression);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_arithmetic_expression);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_arithmetic_expression);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_assignment_value_token1);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_assignment_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_assignment_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_quoted_assignment_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quoted_assignment_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_if_stmt_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(82);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_for_set_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%' &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_for_set_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%' &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '^') ADVANCE(132);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '^') ADVANCE(132);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_fd_redirect);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '>') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_command_option);
      if (lookahead == '^') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(132);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
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
      ACCEPT_TOKEN(aux_sym_if_stmt_token6);
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
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 57},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 57},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 57},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 57},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 57},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
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
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 57},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 57},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 57},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 31},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 32},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 57},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 31},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 34},
  [201] = {.lex_state = 57},
  [202] = {.lex_state = 27},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 34},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 11},
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
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_if_stmt_token1] = ACTIONS(1),
    [aux_sym_if_stmt_token2] = ACTIONS(1),
    [aux_sym_if_stmt_token3] = ACTIONS(1),
    [aux_sym_if_stmt_token4] = ACTIONS(1),
    [aux_sym_if_stmt_token5] = ACTIONS(1),
    [aux_sym_if_stmt_token6] = ACTIONS(1),
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
    [sym_program] = STATE(188),
    [sym__stmt] = STATE(189),
    [sym_echo_off] = STATE(189),
    [sym_label] = STATE(189),
    [sym_variable_assignment] = STATE(189),
    [sym_if_stmt] = STATE(189),
    [sym_goto_stmt] = STATE(189),
    [sym_call_stmt] = STATE(15),
    [sym_exit_stmt] = STATE(189),
    [sym_setlocal_stmt] = STATE(189),
    [sym_endlocal_stmt] = STATE(189),
    [sym_for_stmt] = STATE(189),
    [sym_parenthesized] = STATE(15),
    [sym_redirect_stmt] = STATE(66),
    [sym_pipe_stmt] = STATE(66),
    [sym_cond_exec] = STATE(80),
    [sym_command_sep] = STATE(106),
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
    STATE(80), 1,
      sym_cond_exec,
    STATE(106), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(66), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(189), 10,
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
    STATE(80), 1,
      sym_cond_exec,
    STATE(106), 1,
      sym_command_sep,
    STATE(66), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(121), 10,
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
    STATE(80), 1,
      sym_cond_exec,
    STATE(106), 1,
      sym_command_sep,
    STATE(66), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(189), 10,
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
    STATE(80), 1,
      sym_cond_exec,
    STATE(106), 1,
      sym_command_sep,
    STATE(66), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(152), 10,
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
    STATE(37), 1,
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
    STATE(72), 1,
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
    STATE(72), 1,
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
    STATE(72), 1,
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
    STATE(72), 1,
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
    STATE(37), 1,
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
    STATE(90), 1,
      sym_cond_exec,
    STATE(75), 2,
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
    STATE(38), 3,
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
    STATE(74), 2,
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
  [1056] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
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
  [1076] = 2,
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
  [1090] = 2,
    ACTIONS(268), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(266), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
    STATE(73), 1,
      sym_redirect_stmt,
    STATE(17), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1145] = 4,
    STATE(59), 1,
      aux_sym_assignment_value_repeat1,
    STATE(126), 1,
      sym_assignment_value,
    ACTIONS(276), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1162] = 4,
    STATE(59), 1,
      aux_sym_assignment_value_repeat1,
    STATE(122), 1,
      sym_assignment_value,
    ACTIONS(280), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1179] = 4,
    STATE(59), 1,
      aux_sym_assignment_value_repeat1,
    STATE(120), 1,
      sym_assignment_value,
    ACTIONS(282), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1196] = 4,
    STATE(59), 1,
      aux_sym_assignment_value_repeat1,
    STATE(133), 1,
      sym_assignment_value,
    ACTIONS(284), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1213] = 5,
    ACTIONS(286), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(288), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(290), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(292), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(294), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1231] = 5,
    ACTIONS(296), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(298), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(300), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(302), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(304), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1249] = 5,
    ACTIONS(282), 1,
      aux_sym_program_token1,
    ACTIONS(306), 1,
      aux_sym_assignment_value_token1,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(120), 1,
      sym_assignment_value,
    ACTIONS(308), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1267] = 6,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      aux_sym_for_set_token1,
    ACTIONS(316), 1,
      sym_variable_reference,
    STATE(65), 1,
      aux_sym_for_set_repeat1,
    STATE(181), 1,
      sym_for_set,
    ACTIONS(310), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1287] = 5,
    ACTIONS(280), 1,
      aux_sym_program_token1,
    ACTIONS(306), 1,
      aux_sym_assignment_value_token1,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(122), 1,
      sym_assignment_value,
    ACTIONS(308), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1305] = 5,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(67), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(177), 1,
      sym_quoted_assignment_value,
    ACTIONS(320), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1323] = 6,
    ACTIONS(314), 1,
      aux_sym_for_set_token1,
    ACTIONS(316), 1,
      sym_variable_reference,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_for_set_repeat1,
    STATE(166), 1,
      sym_for_set,
    ACTIONS(310), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1343] = 6,
    ACTIONS(314), 1,
      aux_sym_for_set_token1,
    ACTIONS(316), 1,
      sym_variable_reference,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_for_set_repeat1,
    STATE(205), 1,
      sym_for_set,
    ACTIONS(310), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1363] = 2,
    ACTIONS(142), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(140), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1375] = 5,
    ACTIONS(322), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(162), 1,
      sym_quoted_assignment_value,
    ACTIONS(320), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1393] = 2,
    ACTIONS(146), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(144), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1405] = 5,
    ACTIONS(276), 1,
      aux_sym_program_token1,
    ACTIONS(306), 1,
      aux_sym_assignment_value_token1,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(126), 1,
      sym_assignment_value,
    ACTIONS(308), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1423] = 3,
    STATE(61), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(330), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(332), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1437] = 5,
    ACTIONS(284), 1,
      aux_sym_program_token1,
    ACTIONS(306), 1,
      aux_sym_assignment_value_token1,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(133), 1,
      sym_assignment_value,
    ACTIONS(308), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1455] = 3,
    STATE(61), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(334), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(336), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1469] = 4,
    ACTIONS(330), 1,
      aux_sym_program_token1,
    ACTIONS(339), 1,
      aux_sym_assignment_value_token1,
    STATE(68), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(341), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1484] = 4,
    ACTIONS(343), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(345), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(347), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(349), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1499] = 2,
    ACTIONS(351), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(353), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1510] = 5,
    ACTIONS(314), 1,
      aux_sym_for_set_token1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      sym_variable_reference,
    STATE(69), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(310), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1527] = 4,
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
  [1542] = 4,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(70), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(361), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1557] = 4,
    ACTIONS(334), 1,
      aux_sym_program_token1,
    ACTIONS(365), 1,
      aux_sym_assignment_value_token1,
    STATE(68), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(368), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1572] = 5,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      aux_sym_for_set_token1,
    ACTIONS(379), 1,
      sym_variable_reference,
    STATE(69), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(371), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1589] = 4,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(70), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(384), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1604] = 2,
    ACTIONS(390), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(392), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1615] = 2,
    ACTIONS(396), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(394), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1626] = 2,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1637] = 3,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(162), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1650] = 4,
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
  [1665] = 4,
    ACTIONS(298), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(300), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(302), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(304), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1680] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(127), 2,
      sym_parenthesized,
      sym_cmd,
  [1694] = 2,
    ACTIONS(404), 1,
      aux_sym_for_set_token1,
    ACTIONS(402), 4,
      anon_sym_PERCENT,
      anon_sym_BANG,
      anon_sym_RPAREN,
      sym_variable_reference,
  [1704] = 4,
    ACTIONS(406), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(408), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(410), 1,
      aux_sym_prompt_assignment_token1,
    STATE(145), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1718] = 3,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1730] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_parenthesized,
    STATE(124), 1,
      sym_cmd,
  [1746] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(98), 1,
      sym_parenthesized,
    STATE(131), 1,
      sym_cmd,
  [1762] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(134), 2,
      sym_parenthesized,
      sym_cmd,
  [1776] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(137), 2,
      sym_parenthesized,
      sym_cmd,
  [1790] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(138), 2,
      sym_parenthesized,
      sym_cmd,
  [1804] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(109), 2,
      sym_parenthesized,
      sym_cmd,
  [1818] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_parenthesized,
    STATE(118), 1,
      sym_cmd,
  [1834] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(96), 1,
      sym_parenthesized,
    STATE(114), 1,
      sym_cmd,
  [1850] = 4,
    ACTIONS(408), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(410), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(412), 1,
      aux_sym_variable_assignment_token2,
    STATE(129), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1864] = 3,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1876] = 4,
    ACTIONS(408), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(414), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(416), 1,
      aux_sym_prompt_assignment_token1,
    STATE(145), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1890] = 4,
    ACTIONS(408), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(416), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(418), 1,
      aux_sym_variable_assignment_token2,
    STATE(129), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1904] = 3,
    ACTIONS(422), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(424), 1,
      sym_integer,
    ACTIONS(420), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1915] = 2,
    ACTIONS(426), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(428), 2,
      sym_variable_reference,
      sym_integer,
  [1924] = 2,
    ACTIONS(420), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      sym_variable_reference,
      sym_integer,
  [1933] = 3,
    ACTIONS(432), 1,
      aux_sym_else_clause_token1,
    STATE(118), 1,
      sym_else_clause,
    ACTIONS(430), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1944] = 3,
    ACTIONS(432), 1,
      aux_sym_else_clause_token1,
    STATE(131), 1,
      sym_else_clause,
    ACTIONS(434), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1955] = 3,
    ACTIONS(432), 1,
      aux_sym_else_clause_token1,
    STATE(136), 1,
      sym_else_clause,
    ACTIONS(436), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1966] = 4,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(442), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(444), 1,
      aux_sym_prompt_assignment_token1,
  [1979] = 4,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(446), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(448), 1,
      aux_sym_prompt_assignment_token1,
  [1992] = 4,
    ACTIONS(442), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(444), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      aux_sym_variable_assignment_token3,
  [2005] = 3,
    ACTIONS(456), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(458), 1,
      sym_integer,
    ACTIONS(454), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2016] = 3,
    ACTIONS(432), 1,
      aux_sym_else_clause_token1,
    STATE(124), 1,
      sym_else_clause,
    ACTIONS(460), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2027] = 4,
    ACTIONS(442), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(448), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 1,
      aux_sym_variable_assignment_token3,
  [2040] = 1,
    ACTIONS(464), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [2046] = 2,
    ACTIONS(466), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2054] = 1,
    ACTIONS(468), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [2060] = 1,
    ACTIONS(470), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [2066] = 1,
    ACTIONS(472), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2071] = 2,
    ACTIONS(474), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(476), 1,
      aux_sym_goto_stmt_token3,
  [2078] = 1,
    ACTIONS(478), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2083] = 1,
    ACTIONS(480), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2088] = 1,
    ACTIONS(468), 2,
      sym_variable_reference,
      sym_string,
  [2093] = 1,
    ACTIONS(430), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2098] = 1,
    ACTIONS(482), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2103] = 1,
    ACTIONS(484), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2108] = 1,
    ACTIONS(426), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2113] = 1,
    ACTIONS(460), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2118] = 1,
    ACTIONS(486), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2123] = 1,
    ACTIONS(488), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2128] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(490), 1,
      aux_sym_program_token1,
  [2135] = 1,
    ACTIONS(492), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2140] = 1,
    ACTIONS(494), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2145] = 1,
    ACTIONS(434), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2150] = 1,
    ACTIONS(496), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2155] = 1,
    ACTIONS(498), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2160] = 1,
    ACTIONS(500), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2165] = 2,
    ACTIONS(502), 1,
      sym_for_options,
    ACTIONS(504), 1,
      sym_for_variable,
  [2172] = 1,
    ACTIONS(506), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2177] = 1,
    ACTIONS(508), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2182] = 1,
    ACTIONS(436), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2187] = 1,
    ACTIONS(510), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2192] = 1,
    ACTIONS(512), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2197] = 1,
    ACTIONS(514), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2202] = 1,
    ACTIONS(516), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2207] = 1,
    ACTIONS(518), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2212] = 1,
    ACTIONS(520), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2217] = 1,
    ACTIONS(522), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2222] = 1,
    ACTIONS(524), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2227] = 2,
    ACTIONS(180), 1,
      sym_command_name,
    ACTIONS(190), 1,
      aux_sym_call_stmt_token1,
  [2234] = 1,
    ACTIONS(526), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2239] = 2,
    ACTIONS(528), 1,
      sym_for_options,
    ACTIONS(530), 1,
      sym_for_variable,
  [2246] = 2,
    ACTIONS(532), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(534), 1,
      aux_sym_goto_stmt_token3,
  [2253] = 1,
    ACTIONS(536), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2258] = 1,
    ACTIONS(538), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2263] = 1,
    ACTIONS(540), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [2268] = 1,
    ACTIONS(542), 2,
      sym_variable_reference,
      sym_string,
  [2273] = 1,
    ACTIONS(420), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2278] = 1,
    ACTIONS(544), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2283] = 1,
    ACTIONS(470), 2,
      sym_variable_reference,
      sym_string,
  [2288] = 1,
    ACTIONS(390), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2293] = 2,
    ACTIONS(490), 1,
      aux_sym_program_token1,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [2300] = 1,
    ACTIONS(548), 1,
      aux_sym_variable_assignment_token3,
  [2304] = 1,
    ACTIONS(542), 1,
      sym_integer,
  [2308] = 1,
    ACTIONS(550), 1,
      sym_comparison_op,
  [2312] = 1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
  [2316] = 1,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [2320] = 1,
    ACTIONS(556), 1,
      aux_sym_for_stmt_token2,
  [2324] = 1,
    ACTIONS(558), 1,
      aux_sym_for_stmt_token2,
  [2328] = 1,
    ACTIONS(542), 1,
      aux_sym_if_stmt_token5,
  [2332] = 1,
    ACTIONS(560), 1,
      aux_sym_variable_assignment_token3,
  [2336] = 1,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
  [2340] = 1,
    ACTIONS(564), 1,
      anon_sym_EQ,
  [2344] = 1,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [2348] = 1,
    ACTIONS(568), 1,
      aux_sym_for_stmt_token3,
  [2352] = 1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [2356] = 1,
    ACTIONS(572), 1,
      sym_redirect_op,
  [2360] = 1,
    ACTIONS(574), 1,
      sym_redirect_target,
  [2364] = 1,
    ACTIONS(576), 1,
      sym_command_name,
  [2368] = 1,
    ACTIONS(578), 1,
      sym_for_variable,
  [2372] = 1,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
  [2376] = 1,
    ACTIONS(582), 1,
      aux_sym_for_stmt_token2,
  [2380] = 1,
    ACTIONS(584), 1,
      sym_redirect_target,
  [2384] = 1,
    ACTIONS(586), 1,
      aux_sym_for_stmt_token3,
  [2388] = 1,
    ACTIONS(588), 1,
      anon_sym_EQ,
  [2392] = 1,
    ACTIONS(590), 1,
      anon_sym_EQ,
  [2396] = 1,
    ACTIONS(592), 1,
      anon_sym_DQUOTE,
  [2400] = 1,
    ACTIONS(594), 1,
      sym_arithmetic_expression,
  [2404] = 1,
    ACTIONS(596), 1,
      anon_sym_EQ,
  [2408] = 1,
    ACTIONS(598), 1,
      aux_sym_for_stmt_token3,
  [2412] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [2416] = 1,
    ACTIONS(602), 1,
      sym_arithmetic_expression,
  [2420] = 1,
    ACTIONS(604), 1,
      aux_sym_variable_assignment_token2,
  [2424] = 1,
    ACTIONS(468), 1,
      aux_sym_if_stmt_token5,
  [2428] = 1,
    ACTIONS(530), 1,
      sym_for_variable,
  [2432] = 1,
    ACTIONS(468), 1,
      sym_integer,
  [2436] = 1,
    ACTIONS(606), 1,
      aux_sym_variable_assignment_token3,
  [2440] = 1,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
  [2444] = 1,
    ACTIONS(490), 1,
      aux_sym_program_token1,
  [2448] = 1,
    ACTIONS(610), 1,
      sym_comparison_op,
  [2452] = 1,
    ACTIONS(612), 1,
      aux_sym_variable_assignment_token3,
  [2456] = 1,
    ACTIONS(614), 1,
      anon_sym_EQ,
  [2460] = 1,
    ACTIONS(616), 1,
      anon_sym_EQ,
  [2464] = 1,
    ACTIONS(618), 1,
      anon_sym_EQ,
  [2468] = 1,
    ACTIONS(620), 1,
      anon_sym_EQ,
  [2472] = 1,
    ACTIONS(622), 1,
      anon_sym_EQ,
  [2476] = 1,
    ACTIONS(624), 1,
      aux_sym_for_stmt_token3,
  [2480] = 1,
    ACTIONS(470), 1,
      aux_sym_if_stmt_token5,
  [2484] = 1,
    ACTIONS(626), 1,
      aux_sym_variable_assignment_token3,
  [2488] = 1,
    ACTIONS(628), 1,
      aux_sym_variable_assignment_token2,
  [2492] = 1,
    ACTIONS(470), 1,
      sym_integer,
  [2496] = 1,
    ACTIONS(630), 1,
      sym_comparison_op,
  [2500] = 1,
    ACTIONS(632), 1,
      aux_sym_variable_assignment_token2,
  [2504] = 1,
    ACTIONS(634), 1,
      aux_sym_variable_assignment_token2,
  [2508] = 1,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [2512] = 1,
    ACTIONS(638), 1,
      aux_sym_variable_assignment_token3,
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
  [SMALL_STATE(39)] = 1076,
  [SMALL_STATE(40)] = 1090,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1124,
  [SMALL_STATE(43)] = 1145,
  [SMALL_STATE(44)] = 1162,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1213,
  [SMALL_STATE(48)] = 1231,
  [SMALL_STATE(49)] = 1249,
  [SMALL_STATE(50)] = 1267,
  [SMALL_STATE(51)] = 1287,
  [SMALL_STATE(52)] = 1305,
  [SMALL_STATE(53)] = 1323,
  [SMALL_STATE(54)] = 1343,
  [SMALL_STATE(55)] = 1363,
  [SMALL_STATE(56)] = 1375,
  [SMALL_STATE(57)] = 1393,
  [SMALL_STATE(58)] = 1405,
  [SMALL_STATE(59)] = 1423,
  [SMALL_STATE(60)] = 1437,
  [SMALL_STATE(61)] = 1455,
  [SMALL_STATE(62)] = 1469,
  [SMALL_STATE(63)] = 1484,
  [SMALL_STATE(64)] = 1499,
  [SMALL_STATE(65)] = 1510,
  [SMALL_STATE(66)] = 1527,
  [SMALL_STATE(67)] = 1542,
  [SMALL_STATE(68)] = 1557,
  [SMALL_STATE(69)] = 1572,
  [SMALL_STATE(70)] = 1589,
  [SMALL_STATE(71)] = 1604,
  [SMALL_STATE(72)] = 1615,
  [SMALL_STATE(73)] = 1626,
  [SMALL_STATE(74)] = 1637,
  [SMALL_STATE(75)] = 1650,
  [SMALL_STATE(76)] = 1665,
  [SMALL_STATE(77)] = 1680,
  [SMALL_STATE(78)] = 1694,
  [SMALL_STATE(79)] = 1704,
  [SMALL_STATE(80)] = 1718,
  [SMALL_STATE(81)] = 1730,
  [SMALL_STATE(82)] = 1746,
  [SMALL_STATE(83)] = 1762,
  [SMALL_STATE(84)] = 1776,
  [SMALL_STATE(85)] = 1790,
  [SMALL_STATE(86)] = 1804,
  [SMALL_STATE(87)] = 1818,
  [SMALL_STATE(88)] = 1834,
  [SMALL_STATE(89)] = 1850,
  [SMALL_STATE(90)] = 1864,
  [SMALL_STATE(91)] = 1876,
  [SMALL_STATE(92)] = 1890,
  [SMALL_STATE(93)] = 1904,
  [SMALL_STATE(94)] = 1915,
  [SMALL_STATE(95)] = 1924,
  [SMALL_STATE(96)] = 1933,
  [SMALL_STATE(97)] = 1944,
  [SMALL_STATE(98)] = 1955,
  [SMALL_STATE(99)] = 1966,
  [SMALL_STATE(100)] = 1979,
  [SMALL_STATE(101)] = 1992,
  [SMALL_STATE(102)] = 2005,
  [SMALL_STATE(103)] = 2016,
  [SMALL_STATE(104)] = 2027,
  [SMALL_STATE(105)] = 2040,
  [SMALL_STATE(106)] = 2046,
  [SMALL_STATE(107)] = 2054,
  [SMALL_STATE(108)] = 2060,
  [SMALL_STATE(109)] = 2066,
  [SMALL_STATE(110)] = 2071,
  [SMALL_STATE(111)] = 2078,
  [SMALL_STATE(112)] = 2083,
  [SMALL_STATE(113)] = 2088,
  [SMALL_STATE(114)] = 2093,
  [SMALL_STATE(115)] = 2098,
  [SMALL_STATE(116)] = 2103,
  [SMALL_STATE(117)] = 2108,
  [SMALL_STATE(118)] = 2113,
  [SMALL_STATE(119)] = 2118,
  [SMALL_STATE(120)] = 2123,
  [SMALL_STATE(121)] = 2128,
  [SMALL_STATE(122)] = 2135,
  [SMALL_STATE(123)] = 2140,
  [SMALL_STATE(124)] = 2145,
  [SMALL_STATE(125)] = 2150,
  [SMALL_STATE(126)] = 2155,
  [SMALL_STATE(127)] = 2160,
  [SMALL_STATE(128)] = 2165,
  [SMALL_STATE(129)] = 2172,
  [SMALL_STATE(130)] = 2177,
  [SMALL_STATE(131)] = 2182,
  [SMALL_STATE(132)] = 2187,
  [SMALL_STATE(133)] = 2192,
  [SMALL_STATE(134)] = 2197,
  [SMALL_STATE(135)] = 2202,
  [SMALL_STATE(136)] = 2207,
  [SMALL_STATE(137)] = 2212,
  [SMALL_STATE(138)] = 2217,
  [SMALL_STATE(139)] = 2222,
  [SMALL_STATE(140)] = 2227,
  [SMALL_STATE(141)] = 2234,
  [SMALL_STATE(142)] = 2239,
  [SMALL_STATE(143)] = 2246,
  [SMALL_STATE(144)] = 2253,
  [SMALL_STATE(145)] = 2258,
  [SMALL_STATE(146)] = 2263,
  [SMALL_STATE(147)] = 2268,
  [SMALL_STATE(148)] = 2273,
  [SMALL_STATE(149)] = 2278,
  [SMALL_STATE(150)] = 2283,
  [SMALL_STATE(151)] = 2288,
  [SMALL_STATE(152)] = 2293,
  [SMALL_STATE(153)] = 2300,
  [SMALL_STATE(154)] = 2304,
  [SMALL_STATE(155)] = 2308,
  [SMALL_STATE(156)] = 2312,
  [SMALL_STATE(157)] = 2316,
  [SMALL_STATE(158)] = 2320,
  [SMALL_STATE(159)] = 2324,
  [SMALL_STATE(160)] = 2328,
  [SMALL_STATE(161)] = 2332,
  [SMALL_STATE(162)] = 2336,
  [SMALL_STATE(163)] = 2340,
  [SMALL_STATE(164)] = 2344,
  [SMALL_STATE(165)] = 2348,
  [SMALL_STATE(166)] = 2352,
  [SMALL_STATE(167)] = 2356,
  [SMALL_STATE(168)] = 2360,
  [SMALL_STATE(169)] = 2364,
  [SMALL_STATE(170)] = 2368,
  [SMALL_STATE(171)] = 2372,
  [SMALL_STATE(172)] = 2376,
  [SMALL_STATE(173)] = 2380,
  [SMALL_STATE(174)] = 2384,
  [SMALL_STATE(175)] = 2388,
  [SMALL_STATE(176)] = 2392,
  [SMALL_STATE(177)] = 2396,
  [SMALL_STATE(178)] = 2400,
  [SMALL_STATE(179)] = 2404,
  [SMALL_STATE(180)] = 2408,
  [SMALL_STATE(181)] = 2412,
  [SMALL_STATE(182)] = 2416,
  [SMALL_STATE(183)] = 2420,
  [SMALL_STATE(184)] = 2424,
  [SMALL_STATE(185)] = 2428,
  [SMALL_STATE(186)] = 2432,
  [SMALL_STATE(187)] = 2436,
  [SMALL_STATE(188)] = 2440,
  [SMALL_STATE(189)] = 2444,
  [SMALL_STATE(190)] = 2448,
  [SMALL_STATE(191)] = 2452,
  [SMALL_STATE(192)] = 2456,
  [SMALL_STATE(193)] = 2460,
  [SMALL_STATE(194)] = 2464,
  [SMALL_STATE(195)] = 2468,
  [SMALL_STATE(196)] = 2472,
  [SMALL_STATE(197)] = 2476,
  [SMALL_STATE(198)] = 2480,
  [SMALL_STATE(199)] = 2484,
  [SMALL_STATE(200)] = 2488,
  [SMALL_STATE(201)] = 2492,
  [SMALL_STATE(202)] = 2496,
  [SMALL_STATE(203)] = 2500,
  [SMALL_STATE(204)] = 2504,
  [SMALL_STATE(205)] = 2508,
  [SMALL_STATE(206)] = 2512,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
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
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
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
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_set, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_assignment_value, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 3, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 6, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [608] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
