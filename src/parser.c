#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
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
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 14,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 13,
  [58] = 45,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 67,
  [68] = 68,
  [69] = 47,
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
  [97] = 89,
  [98] = 94,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 101,
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
  [184] = 166,
  [185] = 185,
  [186] = 183,
  [187] = 164,
  [188] = 188,
  [189] = 189,
  [190] = 169,
  [191] = 191,
  [192] = 192,
  [193] = 171,
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
        '!', 82,
        '"', 67,
        '%', 81,
        '&', 119,
        '(', 93,
        ')', 94,
        '/', 34,
        '2', 105,
        ':', 23,
        '<', 109,
        '=', 72,
        '>', 110,
        '@', 60,
        '|', 116,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 14,
        '%', 17,
        '&', 119,
        '(', 93,
        ')', 94,
        '/', 128,
        '2', 106,
        '<', 109,
        '>', 110,
        '^', 127,
        '|', 116,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(129);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 14,
        '%', 17,
        '(', 93,
        ')', 94,
        '/', 128,
        '^', 127,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(129);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '%', 21,
        '&', 119,
        '(', 93,
        ')', 94,
        '/', 42,
        '2', 105,
        ':', 53,
        '<', 109,
        '>', 110,
        '@', 59,
        '|', 116,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(121);
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
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(120);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(41);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == '~') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == '~') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'A', 73,
        'a', 73,
        'B', 92,
        'b', 92,
        'F', 98,
        'f', 98,
        'P', 74,
        'p', 74,
        'R', 99,
        'r', 99,
        'D', 96,
        'L', 96,
        'd', 96,
        'l', 96,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
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
        'F', 98,
        'f', 98,
        'R', 99,
        'r', 99,
        'D', 96,
        'L', 96,
        'd', 96,
        'l', 96,
      );
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 52:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
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
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(19);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        '!', 52,
        '"', 14,
        '%', 17,
        '(', 93,
        ')', 94,
        '/', 36,
        ':', 24,
        '@', 60,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
          lookahead == 'f') ADVANCE(87);
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
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
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
      if (lookahead == ')') ADVANCE(95);
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
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_assignment_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quoted_assignment_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_if_stmt_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%') ADVANCE(80);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_for_set_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '%' &&
          lookahead != ')') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_for_set_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '%' &&
          lookahead != ')') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '^') ADVANCE(130);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '^') ADVANCE(130);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_fd_redirect);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_command_option);
      if (lookahead == '^') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(130);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
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
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 56},
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
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 56},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 56},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 56},
  [96] = {.lex_state = 56},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 56},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 56},
  [103] = {.lex_state = 56},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 6},
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
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 56},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 56},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 56},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 33},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 26},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 56},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 31},
  [189] = {.lex_state = 56},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 26},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 30},
  [194] = {.lex_state = 6},
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
    [sym_program] = STATE(178),
    [sym__stmt] = STATE(179),
    [sym_echo_off] = STATE(179),
    [sym_label] = STATE(179),
    [sym_variable_assignment] = STATE(179),
    [sym_if_stmt] = STATE(179),
    [sym_goto_stmt] = STATE(179),
    [sym_call_stmt] = STATE(15),
    [sym_exit_stmt] = STATE(179),
    [sym_setlocal_stmt] = STATE(179),
    [sym_endlocal_stmt] = STATE(179),
    [sym_for_stmt] = STATE(179),
    [sym_parenthesized] = STATE(15),
    [sym_redirect_stmt] = STATE(62),
    [sym_pipe_stmt] = STATE(62),
    [sym_cond_exec] = STATE(77),
    [sym_command_sep] = STATE(99),
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
    STATE(77), 1,
      sym_cond_exec,
    STATE(99), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(179), 10,
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
    STATE(77), 1,
      sym_cond_exec,
    STATE(99), 1,
      sym_command_sep,
    STATE(62), 2,
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
    STATE(77), 1,
      sym_cond_exec,
    STATE(99), 1,
      sym_command_sep,
    STATE(62), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(179), 10,
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
    STATE(77), 1,
      sym_cond_exec,
    STATE(99), 1,
      sym_command_sep,
    STATE(62), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(124), 10,
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
    STATE(61), 1,
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
    STATE(61), 1,
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
    STATE(61), 1,
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
    STATE(61), 1,
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
    STATE(84), 1,
      sym_cond_exec,
    STATE(64), 2,
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
    STATE(35), 3,
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
  [1006] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
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
  [1026] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_AT,
    STATE(65), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(16), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1048] = 2,
    ACTIONS(264), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(262), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1062] = 2,
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
  [1076] = 2,
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
  [1090] = 2,
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
    STATE(60), 1,
      sym_redirect_stmt,
    STATE(17), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1145] = 4,
    STATE(59), 1,
      aux_sym_assignment_value_repeat1,
    STATE(117), 1,
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
    STATE(119), 1,
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
    STATE(130), 1,
      sym_assignment_value,
    ACTIONS(282), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1196] = 2,
    ACTIONS(146), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(144), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1208] = 3,
    STATE(47), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(284), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(286), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1222] = 5,
    ACTIONS(280), 1,
      aux_sym_program_token1,
    ACTIONS(289), 1,
      aux_sym_assignment_value_token1,
    STATE(66), 1,
      aux_sym_assignment_value_repeat1,
    STATE(119), 1,
      sym_assignment_value,
    ACTIONS(291), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1240] = 6,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      aux_sym_for_set_token1,
    ACTIONS(299), 1,
      sym_variable_reference,
    STATE(74), 1,
      aux_sym_for_set_repeat1,
    STATE(195), 1,
      sym_for_set,
    ACTIONS(293), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1260] = 5,
    ACTIONS(301), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(303), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(305), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(307), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(309), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1278] = 5,
    ACTIONS(276), 1,
      aux_sym_program_token1,
    ACTIONS(289), 1,
      aux_sym_assignment_value_token1,
    STATE(66), 1,
      aux_sym_assignment_value_repeat1,
    STATE(117), 1,
      sym_assignment_value,
    ACTIONS(291), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1296] = 6,
    ACTIONS(297), 1,
      aux_sym_for_set_token1,
    ACTIONS(299), 1,
      sym_variable_reference,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_for_set_repeat1,
    STATE(180), 1,
      sym_for_set,
    ACTIONS(293), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1316] = 5,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(67), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(185), 1,
      sym_quoted_assignment_value,
    ACTIONS(315), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1334] = 5,
    ACTIONS(319), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(321), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(323), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(325), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(327), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1352] = 5,
    ACTIONS(317), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(155), 1,
      sym_quoted_assignment_value,
    ACTIONS(315), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1370] = 6,
    ACTIONS(297), 1,
      aux_sym_for_set_token1,
    ACTIONS(299), 1,
      sym_variable_reference,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_for_set_repeat1,
    STATE(159), 1,
      sym_for_set,
    ACTIONS(293), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1390] = 2,
    ACTIONS(142), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(140), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1402] = 5,
    ACTIONS(282), 1,
      aux_sym_program_token1,
    ACTIONS(289), 1,
      aux_sym_assignment_value_token1,
    STATE(66), 1,
      aux_sym_assignment_value_repeat1,
    STATE(130), 1,
      sym_assignment_value,
    ACTIONS(291), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1420] = 3,
    STATE(47), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(333), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(335), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1434] = 2,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1445] = 2,
    ACTIONS(339), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(337), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1456] = 4,
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
  [1471] = 2,
    ACTIONS(341), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(343), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1482] = 4,
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
  [1497] = 3,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(162), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1510] = 4,
    ACTIONS(333), 1,
      aux_sym_program_token1,
    ACTIONS(345), 1,
      aux_sym_assignment_value_token1,
    STATE(69), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(347), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1525] = 4,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(71), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(351), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1540] = 5,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      aux_sym_for_set_token1,
    ACTIONS(363), 1,
      sym_variable_reference,
    STATE(68), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(355), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1557] = 4,
    ACTIONS(284), 1,
      aux_sym_program_token1,
    ACTIONS(366), 1,
      aux_sym_assignment_value_token1,
    STATE(69), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(369), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1572] = 2,
    ACTIONS(372), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(374), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1583] = 4,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(71), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(378), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1598] = 4,
    ACTIONS(384), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(386), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(388), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(390), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1613] = 4,
    ACTIONS(303), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(305), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(307), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(309), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1628] = 5,
    ACTIONS(297), 1,
      aux_sym_for_set_token1,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      sym_variable_reference,
    STATE(68), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(293), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1645] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(125), 2,
      sym_parenthesized,
      sym_cmd,
  [1659] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(135), 2,
      sym_parenthesized,
      sym_cmd,
  [1673] = 3,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1685] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(131), 2,
      sym_parenthesized,
      sym_cmd,
  [1699] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(91), 1,
      sym_parenthesized,
    STATE(148), 1,
      sym_cmd,
  [1715] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(87), 1,
      sym_parenthesized,
    STATE(120), 1,
      sym_cmd,
  [1731] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(136), 2,
      sym_parenthesized,
      sym_cmd,
  [1745] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(138), 2,
      sym_parenthesized,
      sym_cmd,
  [1759] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym_parenthesized,
    STATE(110), 1,
      sym_cmd,
  [1775] = 3,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1787] = 2,
    ACTIONS(402), 1,
      aux_sym_for_set_token1,
    ACTIONS(400), 4,
      anon_sym_PERCENT,
      anon_sym_BANG,
      anon_sym_RPAREN,
      sym_variable_reference,
  [1797] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym_command_name,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(92), 1,
      sym_parenthesized,
    STATE(116), 1,
      sym_cmd,
  [1813] = 3,
    ACTIONS(406), 1,
      aux_sym_else_clause_token1,
    STATE(148), 1,
      sym_else_clause,
    ACTIONS(404), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1824] = 3,
    ACTIONS(406), 1,
      aux_sym_else_clause_token1,
    STATE(116), 1,
      sym_else_clause,
    ACTIONS(408), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1835] = 4,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(414), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(416), 1,
      aux_sym_prompt_assignment_token1,
  [1848] = 3,
    ACTIONS(420), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(422), 1,
      sym_integer,
    ACTIONS(418), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1859] = 3,
    ACTIONS(406), 1,
      aux_sym_else_clause_token1,
    STATE(133), 1,
      sym_else_clause,
    ACTIONS(424), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1870] = 3,
    ACTIONS(406), 1,
      aux_sym_else_clause_token1,
    STATE(120), 1,
      sym_else_clause,
    ACTIONS(426), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1881] = 3,
    ACTIONS(430), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(432), 1,
      sym_integer,
    ACTIONS(428), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1892] = 4,
    ACTIONS(414), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(438), 1,
      aux_sym_prompt_assignment_token1,
  [1905] = 2,
    ACTIONS(440), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(442), 2,
      sym_variable_reference,
      sym_integer,
  [1914] = 2,
    ACTIONS(418), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(422), 2,
      sym_variable_reference,
      sym_integer,
  [1923] = 4,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(438), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(444), 1,
      aux_sym_variable_assignment_token3,
  [1936] = 4,
    ACTIONS(414), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(416), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      aux_sym_variable_assignment_token3,
  [1949] = 2,
    ACTIONS(448), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1957] = 1,
    ACTIONS(450), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1963] = 2,
    ACTIONS(452), 1,
      aux_sym_variable_assignment_token2,
    STATE(147), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1971] = 1,
    ACTIONS(454), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1977] = 1,
    ACTIONS(456), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1983] = 2,
    ACTIONS(458), 1,
      aux_sym_variable_assignment_token2,
    STATE(111), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1991] = 2,
    ACTIONS(460), 1,
      aux_sym_variable_assignment_token2,
    STATE(111), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1999] = 2,
    ACTIONS(462), 1,
      aux_sym_variable_assignment_token2,
    STATE(147), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [2007] = 1,
    ACTIONS(464), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2012] = 1,
    ACTIONS(454), 2,
      sym_variable_reference,
      sym_string,
  [2017] = 1,
    ACTIONS(466), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2022] = 1,
    ACTIONS(408), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2027] = 1,
    ACTIONS(468), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2032] = 1,
    ACTIONS(470), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2037] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      aux_sym_program_token1,
  [2044] = 1,
    ACTIONS(440), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2049] = 1,
    ACTIONS(474), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2054] = 1,
    ACTIONS(426), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2059] = 1,
    ACTIONS(476), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2064] = 1,
    ACTIONS(478), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2069] = 1,
    ACTIONS(480), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2074] = 1,
    ACTIONS(404), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2079] = 1,
    ACTIONS(482), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2084] = 2,
    ACTIONS(484), 1,
      sym_for_options,
    ACTIONS(486), 1,
      sym_for_variable,
  [2091] = 1,
    ACTIONS(488), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2096] = 2,
    ACTIONS(472), 1,
      aux_sym_program_token1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [2103] = 1,
    ACTIONS(492), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2108] = 1,
    ACTIONS(494), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2113] = 1,
    ACTIONS(496), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2118] = 1,
    ACTIONS(498), 2,
      sym_variable_reference,
      sym_string,
  [2123] = 2,
    ACTIONS(500), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(502), 1,
      aux_sym_goto_stmt_token3,
  [2130] = 1,
    ACTIONS(504), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2135] = 1,
    ACTIONS(506), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2140] = 1,
    ACTIONS(508), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2145] = 1,
    ACTIONS(510), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2150] = 2,
    ACTIONS(180), 1,
      sym_command_name,
    ACTIONS(190), 1,
      aux_sym_call_stmt_token1,
  [2157] = 1,
    ACTIONS(512), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2162] = 1,
    ACTIONS(514), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2167] = 2,
    ACTIONS(516), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(518), 1,
      aux_sym_goto_stmt_token3,
  [2174] = 1,
    ACTIONS(520), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2179] = 1,
    ACTIONS(418), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2184] = 1,
    ACTIONS(522), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2189] = 2,
    ACTIONS(524), 1,
      sym_for_options,
    ACTIONS(526), 1,
      sym_for_variable,
  [2196] = 1,
    ACTIONS(528), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [2201] = 1,
    ACTIONS(530), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2206] = 1,
    ACTIONS(372), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2211] = 1,
    ACTIONS(532), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2216] = 1,
    ACTIONS(450), 2,
      sym_variable_reference,
      sym_string,
  [2221] = 1,
    ACTIONS(534), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2226] = 1,
    ACTIONS(424), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2231] = 1,
    ACTIONS(536), 1,
      aux_sym_for_stmt_token3,
  [2235] = 1,
    ACTIONS(538), 1,
      sym_command_name,
  [2239] = 1,
    ACTIONS(454), 1,
      aux_sym_if_stmt_token5,
  [2243] = 1,
    ACTIONS(540), 1,
      sym_redirect_op,
  [2247] = 1,
    ACTIONS(542), 1,
      sym_redirect_target,
  [2251] = 1,
    ACTIONS(544), 1,
      anon_sym_EQ,
  [2255] = 1,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
  [2259] = 1,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [2263] = 1,
    ACTIONS(550), 1,
      sym_for_variable,
  [2267] = 1,
    ACTIONS(552), 1,
      aux_sym_for_stmt_token2,
  [2271] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [2275] = 1,
    ACTIONS(556), 1,
      sym_redirect_target,
  [2279] = 1,
    ACTIONS(498), 1,
      aux_sym_if_stmt_token5,
  [2283] = 1,
    ACTIONS(454), 1,
      sym_integer,
  [2287] = 1,
    ACTIONS(558), 1,
      aux_sym_for_stmt_token2,
  [2291] = 1,
    ACTIONS(560), 1,
      anon_sym_EQ,
  [2295] = 1,
    ACTIONS(562), 1,
      aux_sym_variable_assignment_token3,
  [2299] = 1,
    ACTIONS(564), 1,
      anon_sym_EQ,
  [2303] = 1,
    ACTIONS(566), 1,
      aux_sym_for_stmt_token3,
  [2307] = 1,
    ACTIONS(568), 1,
      aux_sym_for_stmt_token3,
  [2311] = 1,
    ACTIONS(570), 1,
      aux_sym_variable_assignment_token3,
  [2315] = 1,
    ACTIONS(572), 1,
      sym_arithmetic_expression,
  [2319] = 1,
    ACTIONS(574), 1,
      aux_sym_variable_assignment_token2,
  [2323] = 1,
    ACTIONS(576), 1,
      sym_comparison_op,
  [2327] = 1,
    ACTIONS(578), 1,
      sym_comparison_op,
  [2331] = 1,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
  [2335] = 1,
    ACTIONS(582), 1,
      anon_sym_EQ,
  [2339] = 1,
    ACTIONS(498), 1,
      sym_integer,
  [2343] = 1,
    ACTIONS(584), 1,
      aux_sym_for_stmt_token3,
  [2347] = 1,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
  [2351] = 1,
    ACTIONS(472), 1,
      aux_sym_program_token1,
  [2355] = 1,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [2359] = 1,
    ACTIONS(526), 1,
      sym_for_variable,
  [2363] = 1,
    ACTIONS(590), 1,
      aux_sym_variable_assignment_token3,
  [2367] = 1,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [2371] = 1,
    ACTIONS(594), 1,
      anon_sym_EQ,
  [2375] = 1,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
  [2379] = 1,
    ACTIONS(598), 1,
      anon_sym_EQ,
  [2383] = 1,
    ACTIONS(600), 1,
      anon_sym_EQ,
  [2387] = 1,
    ACTIONS(450), 1,
      aux_sym_if_stmt_token5,
  [2391] = 1,
    ACTIONS(450), 1,
      sym_integer,
  [2395] = 1,
    ACTIONS(602), 1,
      aux_sym_variable_assignment_token3,
  [2399] = 1,
    ACTIONS(604), 1,
      sym_comparison_op,
  [2403] = 1,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [2407] = 1,
    ACTIONS(608), 1,
      aux_sym_variable_assignment_token2,
  [2411] = 1,
    ACTIONS(610), 1,
      aux_sym_for_stmt_token2,
  [2415] = 1,
    ACTIONS(612), 1,
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
  [SMALL_STATE(36)] = 1026,
  [SMALL_STATE(37)] = 1048,
  [SMALL_STATE(38)] = 1062,
  [SMALL_STATE(39)] = 1076,
  [SMALL_STATE(40)] = 1090,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1124,
  [SMALL_STATE(43)] = 1145,
  [SMALL_STATE(44)] = 1162,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1208,
  [SMALL_STATE(48)] = 1222,
  [SMALL_STATE(49)] = 1240,
  [SMALL_STATE(50)] = 1260,
  [SMALL_STATE(51)] = 1278,
  [SMALL_STATE(52)] = 1296,
  [SMALL_STATE(53)] = 1316,
  [SMALL_STATE(54)] = 1334,
  [SMALL_STATE(55)] = 1352,
  [SMALL_STATE(56)] = 1370,
  [SMALL_STATE(57)] = 1390,
  [SMALL_STATE(58)] = 1402,
  [SMALL_STATE(59)] = 1420,
  [SMALL_STATE(60)] = 1434,
  [SMALL_STATE(61)] = 1445,
  [SMALL_STATE(62)] = 1456,
  [SMALL_STATE(63)] = 1471,
  [SMALL_STATE(64)] = 1482,
  [SMALL_STATE(65)] = 1497,
  [SMALL_STATE(66)] = 1510,
  [SMALL_STATE(67)] = 1525,
  [SMALL_STATE(68)] = 1540,
  [SMALL_STATE(69)] = 1557,
  [SMALL_STATE(70)] = 1572,
  [SMALL_STATE(71)] = 1583,
  [SMALL_STATE(72)] = 1598,
  [SMALL_STATE(73)] = 1613,
  [SMALL_STATE(74)] = 1628,
  [SMALL_STATE(75)] = 1645,
  [SMALL_STATE(76)] = 1659,
  [SMALL_STATE(77)] = 1673,
  [SMALL_STATE(78)] = 1685,
  [SMALL_STATE(79)] = 1699,
  [SMALL_STATE(80)] = 1715,
  [SMALL_STATE(81)] = 1731,
  [SMALL_STATE(82)] = 1745,
  [SMALL_STATE(83)] = 1759,
  [SMALL_STATE(84)] = 1775,
  [SMALL_STATE(85)] = 1787,
  [SMALL_STATE(86)] = 1797,
  [SMALL_STATE(87)] = 1813,
  [SMALL_STATE(88)] = 1824,
  [SMALL_STATE(89)] = 1835,
  [SMALL_STATE(90)] = 1848,
  [SMALL_STATE(91)] = 1859,
  [SMALL_STATE(92)] = 1870,
  [SMALL_STATE(93)] = 1881,
  [SMALL_STATE(94)] = 1892,
  [SMALL_STATE(95)] = 1905,
  [SMALL_STATE(96)] = 1914,
  [SMALL_STATE(97)] = 1923,
  [SMALL_STATE(98)] = 1936,
  [SMALL_STATE(99)] = 1949,
  [SMALL_STATE(100)] = 1957,
  [SMALL_STATE(101)] = 1963,
  [SMALL_STATE(102)] = 1971,
  [SMALL_STATE(103)] = 1977,
  [SMALL_STATE(104)] = 1983,
  [SMALL_STATE(105)] = 1991,
  [SMALL_STATE(106)] = 1999,
  [SMALL_STATE(107)] = 2007,
  [SMALL_STATE(108)] = 2012,
  [SMALL_STATE(109)] = 2017,
  [SMALL_STATE(110)] = 2022,
  [SMALL_STATE(111)] = 2027,
  [SMALL_STATE(112)] = 2032,
  [SMALL_STATE(113)] = 2037,
  [SMALL_STATE(114)] = 2044,
  [SMALL_STATE(115)] = 2049,
  [SMALL_STATE(116)] = 2054,
  [SMALL_STATE(117)] = 2059,
  [SMALL_STATE(118)] = 2064,
  [SMALL_STATE(119)] = 2069,
  [SMALL_STATE(120)] = 2074,
  [SMALL_STATE(121)] = 2079,
  [SMALL_STATE(122)] = 2084,
  [SMALL_STATE(123)] = 2091,
  [SMALL_STATE(124)] = 2096,
  [SMALL_STATE(125)] = 2103,
  [SMALL_STATE(126)] = 2108,
  [SMALL_STATE(127)] = 2113,
  [SMALL_STATE(128)] = 2118,
  [SMALL_STATE(129)] = 2123,
  [SMALL_STATE(130)] = 2130,
  [SMALL_STATE(131)] = 2135,
  [SMALL_STATE(132)] = 2140,
  [SMALL_STATE(133)] = 2145,
  [SMALL_STATE(134)] = 2150,
  [SMALL_STATE(135)] = 2157,
  [SMALL_STATE(136)] = 2162,
  [SMALL_STATE(137)] = 2167,
  [SMALL_STATE(138)] = 2174,
  [SMALL_STATE(139)] = 2179,
  [SMALL_STATE(140)] = 2184,
  [SMALL_STATE(141)] = 2189,
  [SMALL_STATE(142)] = 2196,
  [SMALL_STATE(143)] = 2201,
  [SMALL_STATE(144)] = 2206,
  [SMALL_STATE(145)] = 2211,
  [SMALL_STATE(146)] = 2216,
  [SMALL_STATE(147)] = 2221,
  [SMALL_STATE(148)] = 2226,
  [SMALL_STATE(149)] = 2231,
  [SMALL_STATE(150)] = 2235,
  [SMALL_STATE(151)] = 2239,
  [SMALL_STATE(152)] = 2243,
  [SMALL_STATE(153)] = 2247,
  [SMALL_STATE(154)] = 2251,
  [SMALL_STATE(155)] = 2255,
  [SMALL_STATE(156)] = 2259,
  [SMALL_STATE(157)] = 2263,
  [SMALL_STATE(158)] = 2267,
  [SMALL_STATE(159)] = 2271,
  [SMALL_STATE(160)] = 2275,
  [SMALL_STATE(161)] = 2279,
  [SMALL_STATE(162)] = 2283,
  [SMALL_STATE(163)] = 2287,
  [SMALL_STATE(164)] = 2291,
  [SMALL_STATE(165)] = 2295,
  [SMALL_STATE(166)] = 2299,
  [SMALL_STATE(167)] = 2303,
  [SMALL_STATE(168)] = 2307,
  [SMALL_STATE(169)] = 2311,
  [SMALL_STATE(170)] = 2315,
  [SMALL_STATE(171)] = 2319,
  [SMALL_STATE(172)] = 2323,
  [SMALL_STATE(173)] = 2327,
  [SMALL_STATE(174)] = 2331,
  [SMALL_STATE(175)] = 2335,
  [SMALL_STATE(176)] = 2339,
  [SMALL_STATE(177)] = 2343,
  [SMALL_STATE(178)] = 2347,
  [SMALL_STATE(179)] = 2351,
  [SMALL_STATE(180)] = 2355,
  [SMALL_STATE(181)] = 2359,
  [SMALL_STATE(182)] = 2363,
  [SMALL_STATE(183)] = 2367,
  [SMALL_STATE(184)] = 2371,
  [SMALL_STATE(185)] = 2375,
  [SMALL_STATE(186)] = 2379,
  [SMALL_STATE(187)] = 2383,
  [SMALL_STATE(188)] = 2387,
  [SMALL_STATE(189)] = 2391,
  [SMALL_STATE(190)] = 2395,
  [SMALL_STATE(191)] = 2399,
  [SMALL_STATE(192)] = 2403,
  [SMALL_STATE(193)] = 2407,
  [SMALL_STATE(194)] = 2411,
  [SMALL_STATE(195)] = 2415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
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
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_assignment_value, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_set, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 6, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [586] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
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
