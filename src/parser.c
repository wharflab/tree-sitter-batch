#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 212
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
  [20] = 8,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 10,
  [28] = 11,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
  [49] = 46,
  [50] = 50,
  [51] = 42,
  [52] = 52,
  [53] = 53,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 43,
  [58] = 58,
  [59] = 59,
  [60] = 13,
  [61] = 14,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 62,
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
  [93] = 89,
  [94] = 81,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 96,
  [104] = 104,
  [105] = 95,
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
  [156] = 149,
  [157] = 157,
  [158] = 147,
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
  [189] = 160,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 175,
  [200] = 167,
  [201] = 171,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 188,
  [207] = 164,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 196,
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
          lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34);
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 57},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 57},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 57},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 57},
  [110] = {.lex_state = 57},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 57},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 57},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 31},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 31},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 57},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 27},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 32},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 32},
  [203] = {.lex_state = 57},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 57},
  [209] = {.lex_state = 34},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 0},
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
    [sym_program] = STATE(166),
    [sym__stmt] = STATE(186),
    [sym_echo_off] = STATE(186),
    [sym_label] = STATE(186),
    [sym_variable_assignment] = STATE(186),
    [sym_if_stmt] = STATE(186),
    [sym_goto_stmt] = STATE(186),
    [sym_call_stmt] = STATE(15),
    [sym_exit_stmt] = STATE(186),
    [sym_setlocal_stmt] = STATE(186),
    [sym_endlocal_stmt] = STATE(186),
    [sym_for_stmt] = STATE(186),
    [sym_parenthesized] = STATE(15),
    [sym_redirect_stmt] = STATE(67),
    [sym_pipe_stmt] = STATE(67),
    [sym_cond_exec] = STATE(85),
    [sym_command_sep] = STATE(108),
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
    STATE(85), 1,
      sym_cond_exec,
    STATE(108), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(67), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(186), 10,
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
    STATE(85), 1,
      sym_cond_exec,
    STATE(108), 1,
      sym_command_sep,
    STATE(67), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(116), 10,
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
    STATE(85), 1,
      sym_cond_exec,
    STATE(108), 1,
      sym_command_sep,
    STATE(67), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(186), 10,
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
    STATE(85), 1,
      sym_cond_exec,
    STATE(108), 1,
      sym_command_sep,
    STATE(67), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(153), 10,
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
    STATE(33), 1,
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
    STATE(73), 1,
      sym_redirection,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [586] = 7,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(73), 1,
      sym_redirection,
    ACTIONS(164), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(162), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [612] = 8,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(168), 1,
      anon_sym_AMP,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(73), 1,
      sym_redirection,
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
    STATE(73), 1,
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
    STATE(33), 1,
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
    STATE(27), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [694] = 6,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(109), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(176), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(178), 2,
      sym_command_option,
      sym_argument_value,
    STATE(27), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [718] = 2,
    ACTIONS(182), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(180), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [733] = 7,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_AT,
    STATE(87), 1,
      sym_cond_exec,
    STATE(65), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(18), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [758] = 2,
    ACTIONS(188), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(186), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [773] = 6,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(192), 1,
      sym_fd_redirect,
    STATE(25), 1,
      aux_sym_redirection_repeat1,
    ACTIONS(194), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(190), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [796] = 6,
    ACTIONS(198), 1,
      aux_sym_redirection_token1,
    ACTIONS(201), 1,
      sym_fd_redirect,
    ACTIONS(204), 1,
      sym_redirect_op,
    STATE(25), 1,
      aux_sym_redirection_repeat1,
    ACTIONS(207), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(196), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [819] = 2,
    ACTIONS(211), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(209), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [834] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(215), 2,
      sym_command_option,
      sym_argument_value,
    STATE(28), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [855] = 5,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(220), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(223), 2,
      sym_command_option,
      sym_argument_value,
    STATE(28), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [876] = 10,
    ACTIONS(226), 1,
      sym_command_name,
    ACTIONS(228), 1,
      aux_sym_echo_off_token1,
    ACTIONS(230), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(232), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(234), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(236), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(238), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(240), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(242), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(244), 1,
      aux_sym_for_stmt_token1,
  [907] = 10,
    ACTIONS(226), 1,
      sym_command_name,
    ACTIONS(228), 1,
      aux_sym_echo_off_token1,
    ACTIONS(232), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(234), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(236), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(238), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(240), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(242), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(244), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(246), 1,
      aux_sym_variable_assignment_token1,
  [938] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_AT,
    STATE(78), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(17), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [960] = 2,
    ACTIONS(207), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(196), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [974] = 2,
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
  [988] = 2,
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
  [1002] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(215), 2,
      sym_command_option,
      sym_argument_value,
    STATE(28), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1022] = 2,
    ACTIONS(256), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(254), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1036] = 2,
    ACTIONS(260), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(258), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1050] = 2,
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
  [1064] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(266), 2,
      sym_command_option,
      sym_argument_value,
    STATE(40), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1084] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(215), 2,
      sym_command_option,
      sym_argument_value,
    STATE(28), 3,
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
    STATE(35), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1124] = 4,
    STATE(62), 1,
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
  [1141] = 4,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(140), 1,
      sym_assignment_value,
    ACTIONS(280), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1158] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_AT,
    STATE(77), 1,
      sym_redirect_stmt,
    STATE(16), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1179] = 4,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(119), 1,
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
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(122), 1,
      sym_assignment_value,
    ACTIONS(284), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1213] = 4,
    STATE(62), 1,
      aux_sym_assignment_value_repeat1,
    STATE(131), 1,
      sym_assignment_value,
    ACTIONS(286), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1230] = 5,
    ACTIONS(282), 1,
      aux_sym_program_token1,
    ACTIONS(288), 1,
      aux_sym_assignment_value_token1,
    STATE(72), 1,
      aux_sym_assignment_value_repeat1,
    STATE(119), 1,
      sym_assignment_value,
    ACTIONS(290), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1248] = 5,
    ACTIONS(284), 1,
      aux_sym_program_token1,
    ACTIONS(288), 1,
      aux_sym_assignment_value_token1,
    STATE(72), 1,
      aux_sym_assignment_value_repeat1,
    STATE(122), 1,
      sym_assignment_value,
    ACTIONS(290), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1266] = 6,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      aux_sym_for_set_token1,
    ACTIONS(298), 1,
      sym_variable_reference,
    STATE(74), 1,
      aux_sym_for_set_repeat1,
    STATE(179), 1,
      sym_for_set,
    ACTIONS(292), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1286] = 5,
    ACTIONS(276), 1,
      aux_sym_program_token1,
    ACTIONS(288), 1,
      aux_sym_assignment_value_token1,
    STATE(72), 1,
      aux_sym_assignment_value_repeat1,
    STATE(126), 1,
      sym_assignment_value,
    ACTIONS(290), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1304] = 6,
    ACTIONS(296), 1,
      aux_sym_for_set_token1,
    ACTIONS(298), 1,
      sym_variable_reference,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_for_set_repeat1,
    STATE(197), 1,
      sym_for_set,
    ACTIONS(292), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1324] = 5,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(64), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(198), 1,
      sym_quoted_assignment_value,
    ACTIONS(304), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1342] = 5,
    ACTIONS(286), 1,
      aux_sym_program_token1,
    ACTIONS(288), 1,
      aux_sym_assignment_value_token1,
    STATE(72), 1,
      aux_sym_assignment_value_repeat1,
    STATE(131), 1,
      sym_assignment_value,
    ACTIONS(290), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1360] = 5,
    ACTIONS(306), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(165), 1,
      sym_quoted_assignment_value,
    ACTIONS(304), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1378] = 6,
    ACTIONS(296), 1,
      aux_sym_for_set_token1,
    ACTIONS(298), 1,
      sym_variable_reference,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_for_set_repeat1,
    STATE(169), 1,
      sym_for_set,
    ACTIONS(292), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1398] = 5,
    ACTIONS(280), 1,
      aux_sym_program_token1,
    ACTIONS(288), 1,
      aux_sym_assignment_value_token1,
    STATE(72), 1,
      aux_sym_assignment_value_repeat1,
    STATE(140), 1,
      sym_assignment_value,
    ACTIONS(290), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1416] = 5,
    ACTIONS(312), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(314), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(316), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(318), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(320), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1434] = 5,
    ACTIONS(322), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(324), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(326), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(328), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(330), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1452] = 2,
    ACTIONS(142), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(140), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1464] = 2,
    ACTIONS(146), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(144), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1476] = 3,
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(332), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(334), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1490] = 3,
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(336), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(338), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1504] = 4,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(69), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(343), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1519] = 4,
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
  [1534] = 5,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      aux_sym_for_set_token1,
    ACTIONS(355), 1,
      sym_variable_reference,
    STATE(66), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(347), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1551] = 4,
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
  [1566] = 4,
    ACTIONS(336), 1,
      aux_sym_program_token1,
    ACTIONS(358), 1,
      aux_sym_assignment_value_token1,
    STATE(68), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(361), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1581] = 4,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(69), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(366), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1596] = 2,
    ACTIONS(372), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(374), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1607] = 4,
    ACTIONS(376), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(378), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(380), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(382), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1622] = 4,
    ACTIONS(332), 1,
      aux_sym_program_token1,
    ACTIONS(384), 1,
      aux_sym_assignment_value_token1,
    STATE(68), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(386), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1637] = 2,
    ACTIONS(390), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(388), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1648] = 5,
    ACTIONS(296), 1,
      aux_sym_for_set_token1,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      sym_variable_reference,
    STATE(66), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(292), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1665] = 4,
    ACTIONS(314), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(316), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(318), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(320), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1680] = 2,
    ACTIONS(396), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(398), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1691] = 2,
    ACTIONS(164), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(162), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1702] = 3,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(168), 1,
      anon_sym_AMP,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1715] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(100), 1,
      sym_parenthesized,
    STATE(152), 1,
      sym_cmd,
  [1731] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(141), 2,
      sym_parenthesized,
      sym_cmd,
  [1745] = 4,
    ACTIONS(404), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(408), 1,
      aux_sym_prompt_assignment_token1,
    STATE(125), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1759] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(145), 2,
      sym_parenthesized,
      sym_cmd,
  [1773] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(146), 2,
      sym_parenthesized,
      sym_cmd,
  [1787] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(144), 2,
      sym_parenthesized,
      sym_cmd,
  [1801] = 3,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1813] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(98), 1,
      sym_parenthesized,
    STATE(128), 1,
      sym_cmd,
  [1829] = 3,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1841] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(132), 2,
      sym_parenthesized,
      sym_cmd,
  [1855] = 4,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(408), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(410), 1,
      aux_sym_variable_assignment_token2,
    STATE(151), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1869] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym_parenthesized,
    STATE(117), 1,
      sym_cmd,
  [1885] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_parenthesized,
    STATE(136), 1,
      sym_cmd,
  [1901] = 2,
    ACTIONS(414), 1,
      aux_sym_for_set_token1,
    ACTIONS(412), 4,
      anon_sym_PERCENT,
      anon_sym_BANG,
      anon_sym_RPAREN,
      sym_variable_reference,
  [1911] = 4,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(416), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(418), 1,
      aux_sym_prompt_assignment_token1,
    STATE(151), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1925] = 4,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(418), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(420), 1,
      aux_sym_variable_assignment_token2,
    STATE(125), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1939] = 4,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(424), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(426), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(428), 1,
      aux_sym_prompt_assignment_token1,
  [1952] = 4,
    ACTIONS(426), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(428), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      aux_sym_variable_assignment_token3,
  [1965] = 2,
    ACTIONS(434), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(436), 2,
      sym_variable_reference,
      sym_integer,
  [1974] = 3,
    ACTIONS(440), 1,
      aux_sym_else_clause_token1,
    STATE(136), 1,
      sym_else_clause,
    ACTIONS(438), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1985] = 3,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(442), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(434), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1996] = 3,
    ACTIONS(440), 1,
      aux_sym_else_clause_token1,
    STATE(117), 1,
      sym_else_clause,
    ACTIONS(444), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2007] = 2,
    ACTIONS(446), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(448), 2,
      sym_variable_reference,
      sym_integer,
  [2016] = 3,
    ACTIONS(440), 1,
      aux_sym_else_clause_token1,
    STATE(128), 1,
      sym_else_clause,
    ACTIONS(450), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2027] = 4,
    ACTIONS(426), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(454), 1,
      aux_sym_prompt_assignment_token1,
  [2040] = 3,
    ACTIONS(440), 1,
      aux_sym_else_clause_token1,
    STATE(143), 1,
      sym_else_clause,
    ACTIONS(456), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2051] = 4,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(454), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(458), 1,
      aux_sym_variable_assignment_token3,
  [2064] = 3,
    ACTIONS(462), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(464), 1,
      sym_integer,
    ACTIONS(460), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2075] = 1,
    ACTIONS(466), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [2081] = 2,
    ACTIONS(468), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2089] = 1,
    ACTIONS(470), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [2095] = 1,
    ACTIONS(472), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [2101] = 1,
    ACTIONS(474), 2,
      sym_variable_reference,
      sym_string,
  [2106] = 1,
    ACTIONS(476), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2111] = 2,
    ACTIONS(478), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(480), 1,
      aux_sym_goto_stmt_token3,
  [2118] = 1,
    ACTIONS(482), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2123] = 1,
    ACTIONS(466), 2,
      sym_variable_reference,
      sym_string,
  [2128] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      aux_sym_program_token1,
  [2135] = 1,
    ACTIONS(450), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2140] = 1,
    ACTIONS(434), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2145] = 1,
    ACTIONS(486), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2150] = 1,
    ACTIONS(488), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2155] = 2,
    ACTIONS(490), 1,
      sym_for_options,
    ACTIONS(492), 1,
      sym_for_variable,
  [2162] = 1,
    ACTIONS(494), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2167] = 1,
    ACTIONS(496), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2172] = 1,
    ACTIONS(372), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2177] = 1,
    ACTIONS(498), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2182] = 1,
    ACTIONS(500), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2187] = 1,
    ACTIONS(502), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2192] = 1,
    ACTIONS(438), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2197] = 1,
    ACTIONS(472), 2,
      sym_variable_reference,
      sym_string,
  [2202] = 1,
    ACTIONS(504), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2207] = 1,
    ACTIONS(506), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2212] = 1,
    ACTIONS(508), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2217] = 2,
    ACTIONS(510), 1,
      sym_for_options,
    ACTIONS(512), 1,
      sym_for_variable,
  [2224] = 1,
    ACTIONS(514), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2229] = 1,
    ACTIONS(516), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2234] = 1,
    ACTIONS(456), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2239] = 1,
    ACTIONS(518), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [2244] = 1,
    ACTIONS(446), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2249] = 1,
    ACTIONS(520), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2254] = 1,
    ACTIONS(522), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2259] = 1,
    ACTIONS(524), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2264] = 1,
    ACTIONS(526), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2269] = 1,
    ACTIONS(528), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2274] = 1,
    ACTIONS(530), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2279] = 1,
    ACTIONS(532), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2284] = 1,
    ACTIONS(534), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2289] = 2,
    ACTIONS(536), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(538), 1,
      aux_sym_variable_assignment_token3,
  [2296] = 1,
    ACTIONS(540), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2301] = 2,
    ACTIONS(542), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(544), 1,
      aux_sym_variable_assignment_token3,
  [2308] = 1,
    ACTIONS(546), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2313] = 1,
    ACTIONS(548), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2318] = 1,
    ACTIONS(444), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2323] = 2,
    ACTIONS(484), 1,
      aux_sym_program_token1,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [2330] = 2,
    ACTIONS(226), 1,
      sym_command_name,
    ACTIONS(236), 1,
      aux_sym_call_stmt_token1,
  [2337] = 1,
    ACTIONS(552), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2342] = 2,
    ACTIONS(554), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(556), 1,
      aux_sym_variable_assignment_token3,
  [2349] = 2,
    ACTIONS(558), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(560), 1,
      aux_sym_goto_stmt_token3,
  [2356] = 2,
    ACTIONS(562), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(564), 1,
      aux_sym_variable_assignment_token3,
  [2363] = 1,
    ACTIONS(566), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2368] = 1,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [2372] = 1,
    ACTIONS(466), 1,
      aux_sym_if_stmt_token5,
  [2376] = 1,
    ACTIONS(466), 1,
      sym_integer,
  [2380] = 1,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
  [2384] = 1,
    ACTIONS(572), 1,
      aux_sym_variable_assignment_token3,
  [2388] = 1,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
  [2392] = 1,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
  [2396] = 1,
    ACTIONS(578), 1,
      anon_sym_EQ,
  [2400] = 1,
    ACTIONS(580), 1,
      aux_sym_for_stmt_token3,
  [2404] = 1,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [2408] = 1,
    ACTIONS(584), 1,
      sym_comparison_op,
  [2412] = 1,
    ACTIONS(586), 1,
      anon_sym_EQ,
  [2416] = 1,
    ACTIONS(588), 1,
      sym_command_name,
  [2420] = 1,
    ACTIONS(492), 1,
      sym_for_variable,
  [2424] = 1,
    ACTIONS(590), 1,
      aux_sym_variable_assignment_token3,
  [2428] = 1,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [2432] = 1,
    ACTIONS(594), 1,
      sym_for_variable,
  [2436] = 1,
    ACTIONS(596), 1,
      aux_sym_for_stmt_token3,
  [2440] = 1,
    ACTIONS(598), 1,
      aux_sym_for_stmt_token3,
  [2444] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [2448] = 1,
    ACTIONS(602), 1,
      aux_sym_for_stmt_token2,
  [2452] = 1,
    ACTIONS(604), 1,
      aux_sym_for_stmt_token2,
  [2456] = 1,
    ACTIONS(606), 1,
      sym_arithmetic_expression,
  [2460] = 1,
    ACTIONS(608), 1,
      aux_sym_variable_assignment_token3,
  [2464] = 1,
    ACTIONS(610), 1,
      anon_sym_EQ,
  [2468] = 1,
    ACTIONS(612), 1,
      sym_arithmetic_expression,
  [2472] = 1,
    ACTIONS(484), 1,
      aux_sym_program_token1,
  [2476] = 1,
    ACTIONS(614), 1,
      sym_redirect_op,
  [2480] = 1,
    ACTIONS(616), 1,
      aux_sym_variable_assignment_token3,
  [2484] = 1,
    ACTIONS(618), 1,
      anon_sym_EQ,
  [2488] = 1,
    ACTIONS(620), 1,
      sym_redirect_target,
  [2492] = 1,
    ACTIONS(622), 1,
      anon_sym_EQ,
  [2496] = 1,
    ACTIONS(624), 1,
      aux_sym_for_stmt_token2,
  [2500] = 1,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
  [2504] = 1,
    ACTIONS(472), 1,
      aux_sym_if_stmt_token5,
  [2508] = 1,
    ACTIONS(628), 1,
      aux_sym_for_stmt_token3,
  [2512] = 1,
    ACTIONS(630), 1,
      anon_sym_EQ,
  [2516] = 1,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [2520] = 1,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
  [2524] = 1,
    ACTIONS(636), 1,
      anon_sym_EQ,
  [2528] = 1,
    ACTIONS(638), 1,
      anon_sym_EQ,
  [2532] = 1,
    ACTIONS(640), 1,
      anon_sym_EQ,
  [2536] = 1,
    ACTIONS(474), 1,
      aux_sym_if_stmt_token5,
  [2540] = 1,
    ACTIONS(472), 1,
      sym_integer,
  [2544] = 1,
    ACTIONS(642), 1,
      sym_comparison_op,
  [2548] = 1,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
  [2552] = 1,
    ACTIONS(646), 1,
      aux_sym_variable_assignment_token3,
  [2556] = 1,
    ACTIONS(648), 1,
      aux_sym_variable_assignment_token3,
  [2560] = 1,
    ACTIONS(474), 1,
      sym_integer,
  [2564] = 1,
    ACTIONS(650), 1,
      sym_redirect_target,
  [2568] = 1,
    ACTIONS(652), 1,
      sym_comparison_op,
  [2572] = 1,
    ACTIONS(654), 1,
      anon_sym_EQ,
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
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 733,
  [SMALL_STATE(23)] = 758,
  [SMALL_STATE(24)] = 773,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 819,
  [SMALL_STATE(27)] = 834,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 876,
  [SMALL_STATE(30)] = 907,
  [SMALL_STATE(31)] = 938,
  [SMALL_STATE(32)] = 960,
  [SMALL_STATE(33)] = 974,
  [SMALL_STATE(34)] = 988,
  [SMALL_STATE(35)] = 1002,
  [SMALL_STATE(36)] = 1022,
  [SMALL_STATE(37)] = 1036,
  [SMALL_STATE(38)] = 1050,
  [SMALL_STATE(39)] = 1064,
  [SMALL_STATE(40)] = 1084,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1124,
  [SMALL_STATE(43)] = 1141,
  [SMALL_STATE(44)] = 1158,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1213,
  [SMALL_STATE(48)] = 1230,
  [SMALL_STATE(49)] = 1248,
  [SMALL_STATE(50)] = 1266,
  [SMALL_STATE(51)] = 1286,
  [SMALL_STATE(52)] = 1304,
  [SMALL_STATE(53)] = 1324,
  [SMALL_STATE(54)] = 1342,
  [SMALL_STATE(55)] = 1360,
  [SMALL_STATE(56)] = 1378,
  [SMALL_STATE(57)] = 1398,
  [SMALL_STATE(58)] = 1416,
  [SMALL_STATE(59)] = 1434,
  [SMALL_STATE(60)] = 1452,
  [SMALL_STATE(61)] = 1464,
  [SMALL_STATE(62)] = 1476,
  [SMALL_STATE(63)] = 1490,
  [SMALL_STATE(64)] = 1504,
  [SMALL_STATE(65)] = 1519,
  [SMALL_STATE(66)] = 1534,
  [SMALL_STATE(67)] = 1551,
  [SMALL_STATE(68)] = 1566,
  [SMALL_STATE(69)] = 1581,
  [SMALL_STATE(70)] = 1596,
  [SMALL_STATE(71)] = 1607,
  [SMALL_STATE(72)] = 1622,
  [SMALL_STATE(73)] = 1637,
  [SMALL_STATE(74)] = 1648,
  [SMALL_STATE(75)] = 1665,
  [SMALL_STATE(76)] = 1680,
  [SMALL_STATE(77)] = 1691,
  [SMALL_STATE(78)] = 1702,
  [SMALL_STATE(79)] = 1715,
  [SMALL_STATE(80)] = 1731,
  [SMALL_STATE(81)] = 1745,
  [SMALL_STATE(82)] = 1759,
  [SMALL_STATE(83)] = 1773,
  [SMALL_STATE(84)] = 1787,
  [SMALL_STATE(85)] = 1801,
  [SMALL_STATE(86)] = 1813,
  [SMALL_STATE(87)] = 1829,
  [SMALL_STATE(88)] = 1841,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1869,
  [SMALL_STATE(91)] = 1885,
  [SMALL_STATE(92)] = 1901,
  [SMALL_STATE(93)] = 1911,
  [SMALL_STATE(94)] = 1925,
  [SMALL_STATE(95)] = 1939,
  [SMALL_STATE(96)] = 1952,
  [SMALL_STATE(97)] = 1965,
  [SMALL_STATE(98)] = 1974,
  [SMALL_STATE(99)] = 1985,
  [SMALL_STATE(100)] = 1996,
  [SMALL_STATE(101)] = 2007,
  [SMALL_STATE(102)] = 2016,
  [SMALL_STATE(103)] = 2027,
  [SMALL_STATE(104)] = 2040,
  [SMALL_STATE(105)] = 2051,
  [SMALL_STATE(106)] = 2064,
  [SMALL_STATE(107)] = 2075,
  [SMALL_STATE(108)] = 2081,
  [SMALL_STATE(109)] = 2089,
  [SMALL_STATE(110)] = 2095,
  [SMALL_STATE(111)] = 2101,
  [SMALL_STATE(112)] = 2106,
  [SMALL_STATE(113)] = 2111,
  [SMALL_STATE(114)] = 2118,
  [SMALL_STATE(115)] = 2123,
  [SMALL_STATE(116)] = 2128,
  [SMALL_STATE(117)] = 2135,
  [SMALL_STATE(118)] = 2140,
  [SMALL_STATE(119)] = 2145,
  [SMALL_STATE(120)] = 2150,
  [SMALL_STATE(121)] = 2155,
  [SMALL_STATE(122)] = 2162,
  [SMALL_STATE(123)] = 2167,
  [SMALL_STATE(124)] = 2172,
  [SMALL_STATE(125)] = 2177,
  [SMALL_STATE(126)] = 2182,
  [SMALL_STATE(127)] = 2187,
  [SMALL_STATE(128)] = 2192,
  [SMALL_STATE(129)] = 2197,
  [SMALL_STATE(130)] = 2202,
  [SMALL_STATE(131)] = 2207,
  [SMALL_STATE(132)] = 2212,
  [SMALL_STATE(133)] = 2217,
  [SMALL_STATE(134)] = 2224,
  [SMALL_STATE(135)] = 2229,
  [SMALL_STATE(136)] = 2234,
  [SMALL_STATE(137)] = 2239,
  [SMALL_STATE(138)] = 2244,
  [SMALL_STATE(139)] = 2249,
  [SMALL_STATE(140)] = 2254,
  [SMALL_STATE(141)] = 2259,
  [SMALL_STATE(142)] = 2264,
  [SMALL_STATE(143)] = 2269,
  [SMALL_STATE(144)] = 2274,
  [SMALL_STATE(145)] = 2279,
  [SMALL_STATE(146)] = 2284,
  [SMALL_STATE(147)] = 2289,
  [SMALL_STATE(148)] = 2296,
  [SMALL_STATE(149)] = 2301,
  [SMALL_STATE(150)] = 2308,
  [SMALL_STATE(151)] = 2313,
  [SMALL_STATE(152)] = 2318,
  [SMALL_STATE(153)] = 2323,
  [SMALL_STATE(154)] = 2330,
  [SMALL_STATE(155)] = 2337,
  [SMALL_STATE(156)] = 2342,
  [SMALL_STATE(157)] = 2349,
  [SMALL_STATE(158)] = 2356,
  [SMALL_STATE(159)] = 2363,
  [SMALL_STATE(160)] = 2368,
  [SMALL_STATE(161)] = 2372,
  [SMALL_STATE(162)] = 2376,
  [SMALL_STATE(163)] = 2380,
  [SMALL_STATE(164)] = 2384,
  [SMALL_STATE(165)] = 2388,
  [SMALL_STATE(166)] = 2392,
  [SMALL_STATE(167)] = 2396,
  [SMALL_STATE(168)] = 2400,
  [SMALL_STATE(169)] = 2404,
  [SMALL_STATE(170)] = 2408,
  [SMALL_STATE(171)] = 2412,
  [SMALL_STATE(172)] = 2416,
  [SMALL_STATE(173)] = 2420,
  [SMALL_STATE(174)] = 2424,
  [SMALL_STATE(175)] = 2428,
  [SMALL_STATE(176)] = 2432,
  [SMALL_STATE(177)] = 2436,
  [SMALL_STATE(178)] = 2440,
  [SMALL_STATE(179)] = 2444,
  [SMALL_STATE(180)] = 2448,
  [SMALL_STATE(181)] = 2452,
  [SMALL_STATE(182)] = 2456,
  [SMALL_STATE(183)] = 2460,
  [SMALL_STATE(184)] = 2464,
  [SMALL_STATE(185)] = 2468,
  [SMALL_STATE(186)] = 2472,
  [SMALL_STATE(187)] = 2476,
  [SMALL_STATE(188)] = 2480,
  [SMALL_STATE(189)] = 2484,
  [SMALL_STATE(190)] = 2488,
  [SMALL_STATE(191)] = 2492,
  [SMALL_STATE(192)] = 2496,
  [SMALL_STATE(193)] = 2500,
  [SMALL_STATE(194)] = 2504,
  [SMALL_STATE(195)] = 2508,
  [SMALL_STATE(196)] = 2512,
  [SMALL_STATE(197)] = 2516,
  [SMALL_STATE(198)] = 2520,
  [SMALL_STATE(199)] = 2524,
  [SMALL_STATE(200)] = 2528,
  [SMALL_STATE(201)] = 2532,
  [SMALL_STATE(202)] = 2536,
  [SMALL_STATE(203)] = 2540,
  [SMALL_STATE(204)] = 2544,
  [SMALL_STATE(205)] = 2548,
  [SMALL_STATE(206)] = 2552,
  [SMALL_STATE(207)] = 2556,
  [SMALL_STATE(208)] = 2560,
  [SMALL_STATE(209)] = 2564,
  [SMALL_STATE(210)] = 2568,
  [SMALL_STATE(211)] = 2572,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sep, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_sep, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_assignment_value, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_set, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 4, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 6, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [576] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
