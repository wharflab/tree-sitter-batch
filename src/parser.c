#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 215
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
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 10,
  [29] = 22,
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
  [40] = 31,
  [41] = 36,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 14,
  [49] = 49,
  [50] = 44,
  [51] = 45,
  [52] = 52,
  [53] = 42,
  [54] = 54,
  [55] = 55,
  [56] = 47,
  [57] = 57,
  [58] = 58,
  [59] = 43,
  [60] = 60,
  [61] = 13,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 49,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 63,
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
  [92] = 87,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 96,
  [101] = 101,
  [102] = 102,
  [103] = 103,
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
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 116,
  [160] = 160,
  [161] = 134,
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
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 193,
  [200] = 166,
  [201] = 201,
  [202] = 202,
  [203] = 176,
  [204] = 175,
  [205] = 163,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 165,
  [210] = 173,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
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
        ':', 25,
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
        '%', 18,
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
        '%', 18,
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
        '%', 22,
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
      if (lookahead == '%') ADVANCE(18);
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
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 30:
      if (lookahead == '~') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 31:
      if (lookahead == '~') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
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
          lookahead != '%') ADVANCE(20);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '!', 53,
        '"', 14,
        '%', 18,
        '(', 95,
        ')', 96,
        '/', 37,
        ':', 26,
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
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
          lookahead == ' ') ADVANCE(21);
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
      if (lookahead == '&') ADVANCE(24);
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
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 57},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 57},
  [104] = {.lex_state = 57},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 57},
  [109] = {.lex_state = 57},
  [110] = {.lex_state = 57},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 57},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 33},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 57},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 28},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 34},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 57},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 34},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 28},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 57},
  [213] = {.lex_state = 28},
  [214] = {.lex_state = 6},
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
    [sym_program] = STATE(174),
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
    [sym_redirect_stmt] = STATE(72),
    [sym_pipe_stmt] = STATE(72),
    [sym_cond_exec] = STATE(90),
    [sym_command_sep] = STATE(107),
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
    STATE(90), 1,
      sym_cond_exec,
    STATE(107), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(72), 2,
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
    STATE(90), 1,
      sym_cond_exec,
    STATE(107), 1,
      sym_command_sep,
    STATE(72), 2,
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
    STATE(90), 1,
      sym_cond_exec,
    STATE(107), 1,
      sym_command_sep,
    STATE(72), 2,
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
    STATE(90), 1,
      sym_cond_exec,
    STATE(107), 1,
      sym_command_sep,
    STATE(72), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(15), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
    STATE(148), 10,
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
    STATE(32), 1,
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
    STATE(76), 1,
      sym_redirection,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [586] = 9,
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
    STATE(76), 1,
      sym_redirection,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(162), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [616] = 8,
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
    STATE(76), 1,
      sym_redirection,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [644] = 7,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(152), 1,
      sym_fd_redirect,
    ACTIONS(154), 1,
      sym_redirect_op,
    STATE(24), 1,
      aux_sym_redirection_repeat1,
    STATE(76), 1,
      sym_redirection,
    ACTIONS(172), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(170), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [670] = 6,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
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
    STATE(33), 1,
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
    STATE(28), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [718] = 5,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(183), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(186), 2,
      sym_command_option,
      sym_argument_value,
    STATE(21), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [739] = 10,
    ACTIONS(189), 1,
      sym_command_name,
    ACTIONS(191), 1,
      aux_sym_echo_off_token1,
    ACTIONS(193), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(195), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(197), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(199), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(201), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(203), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(205), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(207), 1,
      aux_sym_for_stmt_token1,
  [770] = 2,
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
  [785] = 6,
    ACTIONS(150), 1,
      aux_sym_redirection_token1,
    ACTIONS(154), 1,
      sym_redirect_op,
    ACTIONS(215), 1,
      sym_fd_redirect,
    STATE(27), 1,
      aux_sym_redirection_repeat1,
    ACTIONS(217), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(213), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [808] = 7,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(85), 1,
      sym_cond_exec,
    STATE(74), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(16), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [833] = 2,
    ACTIONS(223), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(221), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [848] = 6,
    ACTIONS(227), 1,
      aux_sym_redirection_token1,
    ACTIONS(230), 1,
      sym_fd_redirect,
    ACTIONS(233), 1,
      sym_redirect_op,
    STATE(27), 1,
      aux_sym_redirection_repeat1,
    ACTIONS(236), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(225), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [871] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(238), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(240), 2,
      sym_command_option,
      sym_argument_value,
    STATE(21), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [892] = 10,
    ACTIONS(189), 1,
      sym_command_name,
    ACTIONS(191), 1,
      aux_sym_echo_off_token1,
    ACTIONS(195), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(197), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(199), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(201), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(203), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(205), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(207), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(242), 1,
      aux_sym_variable_assignment_token1,
  [923] = 2,
    ACTIONS(246), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(244), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [938] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(250), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(252), 2,
      sym_command_option,
      sym_argument_value,
    STATE(36), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [958] = 2,
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
  [972] = 2,
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
  [986] = 2,
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
  [1000] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(77), 2,
      sym_redirect_stmt,
      sym_pipe_stmt,
    STATE(17), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1022] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(238), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(240), 2,
      sym_command_option,
      sym_argument_value,
    STATE(21), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1042] = 2,
    ACTIONS(236), 4,
      aux_sym_redirection_token1,
      sym_redirect_op,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(225), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_fd_redirect,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1056] = 2,
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
  [1070] = 2,
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
  [1084] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(272), 2,
      sym_command_option,
      sym_argument_value,
    STATE(41), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1104] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    ACTIONS(238), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(240), 2,
      sym_command_option,
      sym_argument_value,
    STATE(21), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [1124] = 4,
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    STATE(131), 1,
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
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    STATE(142), 1,
      sym_assignment_value,
    ACTIONS(280), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1158] = 4,
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    STATE(126), 1,
      sym_assignment_value,
    ACTIONS(282), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1175] = 4,
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    STATE(129), 1,
      sym_assignment_value,
    ACTIONS(284), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1192] = 6,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(75), 1,
      sym_redirect_stmt,
    STATE(18), 3,
      sym_call_stmt,
      sym_parenthesized,
      sym_cmd,
  [1213] = 4,
    STATE(63), 1,
      aux_sym_assignment_value_repeat1,
    STATE(136), 1,
      sym_assignment_value,
    ACTIONS(286), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(278), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1230] = 2,
    ACTIONS(146), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(144), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1242] = 3,
    STATE(49), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(288), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(290), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1256] = 5,
    ACTIONS(282), 1,
      aux_sym_program_token1,
    ACTIONS(293), 1,
      aux_sym_assignment_value_token1,
    STATE(71), 1,
      aux_sym_assignment_value_repeat1,
    STATE(126), 1,
      sym_assignment_value,
    ACTIONS(295), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1274] = 5,
    ACTIONS(284), 1,
      aux_sym_program_token1,
    ACTIONS(293), 1,
      aux_sym_assignment_value_token1,
    STATE(71), 1,
      aux_sym_assignment_value_repeat1,
    STATE(129), 1,
      sym_assignment_value,
    ACTIONS(295), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1292] = 6,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      aux_sym_for_set_token1,
    ACTIONS(303), 1,
      sym_variable_reference,
    STATE(78), 1,
      aux_sym_for_set_repeat1,
    STATE(183), 1,
      sym_for_set,
    ACTIONS(297), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1312] = 5,
    ACTIONS(276), 1,
      aux_sym_program_token1,
    ACTIONS(293), 1,
      aux_sym_assignment_value_token1,
    STATE(71), 1,
      aux_sym_assignment_value_repeat1,
    STATE(131), 1,
      sym_assignment_value,
    ACTIONS(295), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1330] = 6,
    ACTIONS(301), 1,
      aux_sym_for_set_token1,
    ACTIONS(303), 1,
      sym_variable_reference,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_for_set_repeat1,
    STATE(196), 1,
      sym_for_set,
    ACTIONS(297), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1350] = 5,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(69), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(202), 1,
      sym_quoted_assignment_value,
    ACTIONS(309), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1368] = 5,
    ACTIONS(286), 1,
      aux_sym_program_token1,
    ACTIONS(293), 1,
      aux_sym_assignment_value_token1,
    STATE(71), 1,
      aux_sym_assignment_value_repeat1,
    STATE(136), 1,
      sym_assignment_value,
    ACTIONS(295), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1386] = 5,
    ACTIONS(311), 1,
      aux_sym_quoted_assignment_value_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_quoted_assignment_value_repeat1,
    STATE(168), 1,
      sym_quoted_assignment_value,
    ACTIONS(309), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1404] = 6,
    ACTIONS(301), 1,
      aux_sym_for_set_token1,
    ACTIONS(303), 1,
      sym_variable_reference,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_for_set_repeat1,
    STATE(172), 1,
      sym_for_set,
    ACTIONS(297), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1424] = 5,
    ACTIONS(280), 1,
      aux_sym_program_token1,
    ACTIONS(293), 1,
      aux_sym_assignment_value_token1,
    STATE(71), 1,
      aux_sym_assignment_value_repeat1,
    STATE(142), 1,
      sym_assignment_value,
    ACTIONS(295), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1442] = 5,
    ACTIONS(317), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(319), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(321), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(323), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(325), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1460] = 2,
    ACTIONS(142), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(140), 5,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_variable_reference,
      sym_string,
  [1472] = 5,
    ACTIONS(327), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(329), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(331), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(333), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(335), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1490] = 3,
    STATE(49), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(337), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(339), 4,
      aux_sym_assignment_value_token1,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1504] = 2,
    ACTIONS(341), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(343), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1515] = 4,
    ACTIONS(329), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(331), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(333), 1,
      aux_sym_if_stmt_token6,
    ACTIONS(335), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1530] = 4,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(66), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(347), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1545] = 4,
    ACTIONS(288), 1,
      aux_sym_program_token1,
    ACTIONS(353), 1,
      aux_sym_assignment_value_token1,
    STATE(67), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(356), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1560] = 2,
    ACTIONS(359), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(361), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1571] = 4,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_quoted_assignment_value_token1,
    STATE(66), 1,
      aux_sym_quoted_assignment_value_repeat1,
    ACTIONS(365), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1586] = 5,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      aux_sym_for_set_token1,
    ACTIONS(377), 1,
      sym_variable_reference,
    STATE(70), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(369), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1603] = 4,
    ACTIONS(337), 1,
      aux_sym_program_token1,
    ACTIONS(380), 1,
      aux_sym_assignment_value_token1,
    STATE(67), 1,
      aux_sym_assignment_value_repeat1,
    ACTIONS(382), 3,
      anon_sym_PERCENT,
      anon_sym_BANG,
      sym_variable_reference,
  [1618] = 4,
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
  [1633] = 4,
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
  [1648] = 4,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(162), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1663] = 2,
    ACTIONS(172), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(170), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1674] = 2,
    ACTIONS(394), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(392), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1685] = 3,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(168), 1,
      anon_sym_AMP,
    ACTIONS(166), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1698] = 5,
    ACTIONS(301), 1,
      aux_sym_for_set_token1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      sym_variable_reference,
    STATE(70), 1,
      aux_sym_for_set_repeat1,
    ACTIONS(297), 2,
      anon_sym_PERCENT,
      anon_sym_BANG,
  [1715] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym_parenthesized,
    STATE(124), 1,
      sym_cmd,
  [1731] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_parenthesized,
    STATE(139), 1,
      sym_cmd,
  [1747] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(143), 2,
      sym_parenthesized,
      sym_cmd,
  [1761] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(111), 2,
      sym_parenthesized,
      sym_cmd,
  [1775] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(101), 1,
      sym_parenthesized,
    STATE(132), 1,
      sym_cmd,
  [1791] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(147), 2,
      sym_parenthesized,
      sym_cmd,
  [1805] = 3,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(162), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1817] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(149), 2,
      sym_parenthesized,
      sym_cmd,
  [1831] = 4,
    ACTIONS(404), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(408), 1,
      aux_sym_prompt_assignment_token1,
    STATE(117), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1845] = 2,
    ACTIONS(412), 1,
      aux_sym_for_set_token1,
    ACTIONS(410), 4,
      anon_sym_PERCENT,
      anon_sym_BANG,
      anon_sym_RPAREN,
      sym_variable_reference,
  [1855] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(99), 1,
      sym_parenthesized,
    STATE(118), 1,
      sym_cmd,
  [1871] = 3,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1883] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      sym_command_name,
    ACTIONS(402), 1,
      anon_sym_AT,
    STATE(137), 2,
      sym_parenthesized,
      sym_cmd,
  [1897] = 4,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(414), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(416), 1,
      aux_sym_prompt_assignment_token1,
    STATE(117), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1911] = 4,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(416), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(418), 1,
      aux_sym_variable_assignment_token2,
    STATE(121), 2,
      sym_arithmetic_assignment,
      sym_prompt_assignment,
  [1925] = 4,
    ACTIONS(406), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(408), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(420), 1,
      aux_sym_variable_assignment_token2,
    STATE(121), 2,
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
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(434), 1,
      aux_sym_prompt_assignment_token1,
  [1965] = 3,
    ACTIONS(438), 1,
      aux_sym_else_clause_token1,
    STATE(145), 1,
      sym_else_clause,
    ACTIONS(436), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1976] = 2,
    ACTIONS(440), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(442), 2,
      sym_variable_reference,
      sym_integer,
  [1985] = 3,
    ACTIONS(438), 1,
      aux_sym_else_clause_token1,
    STATE(124), 1,
      sym_else_clause,
    ACTIONS(444), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1996] = 4,
    ACTIONS(426), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(428), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      aux_sym_variable_assignment_token3,
  [2009] = 3,
    ACTIONS(438), 1,
      aux_sym_else_clause_token1,
    STATE(139), 1,
      sym_else_clause,
    ACTIONS(448), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2020] = 3,
    ACTIONS(438), 1,
      aux_sym_else_clause_token1,
    STATE(132), 1,
      sym_else_clause,
    ACTIONS(450), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2031] = 3,
    ACTIONS(454), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(456), 1,
      sym_integer,
    ACTIONS(452), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2042] = 3,
    ACTIONS(442), 1,
      sym_integer,
    ACTIONS(458), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(440), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2053] = 4,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_arithmetic_assignment_token1,
    ACTIONS(434), 1,
      aux_sym_prompt_assignment_token1,
    ACTIONS(460), 1,
      aux_sym_variable_assignment_token3,
  [2066] = 2,
    ACTIONS(462), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(464), 2,
      sym_variable_reference,
      sym_integer,
  [2075] = 2,
    ACTIONS(466), 1,
      anon_sym_AMP,
    ACTIONS(148), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2083] = 1,
    ACTIONS(468), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
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
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2106] = 1,
    ACTIONS(476), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2111] = 1,
    ACTIONS(478), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2116] = 2,
    ACTIONS(480), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(482), 1,
      sym_arithmetic_expression,
  [2123] = 1,
    ACTIONS(484), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2128] = 2,
    ACTIONS(486), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(488), 1,
      aux_sym_variable_assignment_token3,
  [2135] = 1,
    ACTIONS(490), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2140] = 1,
    ACTIONS(444), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2145] = 1,
    ACTIONS(492), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2150] = 1,
    ACTIONS(494), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2155] = 1,
    ACTIONS(496), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2160] = 1,
    ACTIONS(498), 2,
      sym_variable_reference,
      sym_string,
  [2165] = 1,
    ACTIONS(470), 2,
      sym_variable_reference,
      sym_string,
  [2170] = 1,
    ACTIONS(450), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2175] = 1,
    ACTIONS(500), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2180] = 1,
    ACTIONS(502), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2185] = 1,
    ACTIONS(504), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2190] = 1,
    ACTIONS(462), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2195] = 1,
    ACTIONS(506), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2200] = 1,
    ACTIONS(508), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2205] = 1,
    ACTIONS(510), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2210] = 1,
    ACTIONS(448), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2215] = 2,
    ACTIONS(512), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(514), 1,
      sym_arithmetic_expression,
  [2222] = 2,
    ACTIONS(516), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(518), 1,
      aux_sym_variable_assignment_token3,
  [2229] = 2,
    ACTIONS(520), 1,
      sym_for_options,
    ACTIONS(522), 1,
      sym_for_variable,
  [2236] = 1,
    ACTIONS(524), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2241] = 1,
    ACTIONS(526), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2246] = 1,
    ACTIONS(528), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2251] = 1,
    ACTIONS(436), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2256] = 1,
    ACTIONS(530), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2261] = 1,
    ACTIONS(532), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [2266] = 1,
    ACTIONS(534), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2271] = 1,
    ACTIONS(536), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2276] = 1,
    ACTIONS(538), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2281] = 1,
    ACTIONS(540), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2286] = 1,
    ACTIONS(440), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2291] = 1,
    ACTIONS(542), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2296] = 2,
    ACTIONS(544), 1,
      aux_sym_program_token1,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [2303] = 1,
    ACTIONS(548), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2308] = 1,
    ACTIONS(341), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2313] = 2,
    ACTIONS(189), 1,
      sym_command_name,
    ACTIONS(199), 1,
      aux_sym_call_stmt_token1,
  [2320] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      aux_sym_program_token1,
  [2327] = 2,
    ACTIONS(550), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(552), 1,
      aux_sym_goto_stmt_token3,
  [2334] = 1,
    ACTIONS(554), 2,
      aux_sym_label_token1,
      sym_command_name,
  [2339] = 2,
    ACTIONS(556), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(558), 1,
      aux_sym_goto_stmt_token3,
  [2346] = 1,
    ACTIONS(560), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2351] = 1,
    ACTIONS(562), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2356] = 2,
    ACTIONS(564), 1,
      sym_for_options,
    ACTIONS(566), 1,
      sym_for_variable,
  [2363] = 2,
    ACTIONS(568), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(570), 1,
      aux_sym_variable_assignment_token3,
  [2370] = 1,
    ACTIONS(468), 2,
      sym_variable_reference,
      sym_string,
  [2375] = 2,
    ACTIONS(572), 1,
      aux_sym_variable_assignment_token2,
    ACTIONS(574), 1,
      aux_sym_variable_assignment_token3,
  [2382] = 1,
    ACTIONS(576), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [2387] = 1,
    ACTIONS(578), 1,
      anon_sym_EQ,
  [2391] = 1,
    ACTIONS(580), 1,
      sym_arithmetic_expression,
  [2395] = 1,
    ACTIONS(582), 1,
      aux_sym_variable_assignment_token3,
  [2399] = 1,
    ACTIONS(584), 1,
      anon_sym_EQ,
  [2403] = 1,
    ACTIONS(498), 1,
      aux_sym_if_stmt_token5,
  [2407] = 1,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
  [2411] = 1,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
  [2415] = 1,
    ACTIONS(498), 1,
      sym_integer,
  [2419] = 1,
    ACTIONS(590), 1,
      aux_sym_for_stmt_token3,
  [2423] = 1,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [2427] = 1,
    ACTIONS(594), 1,
      aux_sym_variable_assignment_token3,
  [2431] = 1,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
  [2435] = 1,
    ACTIONS(598), 1,
      anon_sym_EQ,
  [2439] = 1,
    ACTIONS(600), 1,
      anon_sym_EQ,
  [2443] = 1,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [2447] = 1,
    ACTIONS(604), 1,
      anon_sym_EQ,
  [2451] = 1,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [2455] = 1,
    ACTIONS(608), 1,
      aux_sym_for_stmt_token3,
  [2459] = 1,
    ACTIONS(610), 1,
      sym_for_variable,
  [2463] = 1,
    ACTIONS(612), 1,
      aux_sym_for_stmt_token3,
  [2467] = 1,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
  [2471] = 1,
    ACTIONS(616), 1,
      aux_sym_for_stmt_token2,
  [2475] = 1,
    ACTIONS(618), 1,
      sym_comparison_op,
  [2479] = 1,
    ACTIONS(566), 1,
      sym_for_variable,
  [2483] = 1,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
  [2487] = 1,
    ACTIONS(622), 1,
      sym_redirect_target,
  [2491] = 1,
    ACTIONS(544), 1,
      aux_sym_program_token1,
  [2495] = 1,
    ACTIONS(624), 1,
      sym_command_name,
  [2499] = 1,
    ACTIONS(626), 1,
      aux_sym_variable_assignment_token3,
  [2503] = 1,
    ACTIONS(470), 1,
      aux_sym_if_stmt_token5,
  [2507] = 1,
    ACTIONS(628), 1,
      anon_sym_EQ,
  [2511] = 1,
    ACTIONS(470), 1,
      sym_integer,
  [2515] = 1,
    ACTIONS(630), 1,
      aux_sym_for_stmt_token3,
  [2519] = 1,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [2523] = 1,
    ACTIONS(634), 1,
      sym_redirect_op,
  [2527] = 1,
    ACTIONS(636), 1,
      sym_redirect_target,
  [2531] = 1,
    ACTIONS(638), 1,
      anon_sym_EQ,
  [2535] = 1,
    ACTIONS(640), 1,
      anon_sym_EQ,
  [2539] = 1,
    ACTIONS(642), 1,
      aux_sym_variable_assignment_token3,
  [2543] = 1,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
  [2547] = 1,
    ACTIONS(646), 1,
      anon_sym_EQ,
  [2551] = 1,
    ACTIONS(648), 1,
      anon_sym_EQ,
  [2555] = 1,
    ACTIONS(650), 1,
      anon_sym_EQ,
  [2559] = 1,
    ACTIONS(652), 1,
      sym_comparison_op,
  [2563] = 1,
    ACTIONS(654), 1,
      sym_arithmetic_expression,
  [2567] = 1,
    ACTIONS(656), 1,
      aux_sym_for_stmt_token2,
  [2571] = 1,
    ACTIONS(658), 1,
      aux_sym_variable_assignment_token3,
  [2575] = 1,
    ACTIONS(660), 1,
      aux_sym_variable_assignment_token3,
  [2579] = 1,
    ACTIONS(468), 1,
      aux_sym_if_stmt_token5,
  [2583] = 1,
    ACTIONS(468), 1,
      sym_integer,
  [2587] = 1,
    ACTIONS(662), 1,
      sym_comparison_op,
  [2591] = 1,
    ACTIONS(664), 1,
      aux_sym_for_stmt_token2,
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
  [SMALL_STATE(17)] = 616,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 739,
  [SMALL_STATE(23)] = 770,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 808,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 871,
  [SMALL_STATE(29)] = 892,
  [SMALL_STATE(30)] = 923,
  [SMALL_STATE(31)] = 938,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 972,
  [SMALL_STATE(34)] = 986,
  [SMALL_STATE(35)] = 1000,
  [SMALL_STATE(36)] = 1022,
  [SMALL_STATE(37)] = 1042,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1070,
  [SMALL_STATE(40)] = 1084,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1124,
  [SMALL_STATE(43)] = 1141,
  [SMALL_STATE(44)] = 1158,
  [SMALL_STATE(45)] = 1175,
  [SMALL_STATE(46)] = 1192,
  [SMALL_STATE(47)] = 1213,
  [SMALL_STATE(48)] = 1230,
  [SMALL_STATE(49)] = 1242,
  [SMALL_STATE(50)] = 1256,
  [SMALL_STATE(51)] = 1274,
  [SMALL_STATE(52)] = 1292,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1330,
  [SMALL_STATE(55)] = 1350,
  [SMALL_STATE(56)] = 1368,
  [SMALL_STATE(57)] = 1386,
  [SMALL_STATE(58)] = 1404,
  [SMALL_STATE(59)] = 1424,
  [SMALL_STATE(60)] = 1442,
  [SMALL_STATE(61)] = 1460,
  [SMALL_STATE(62)] = 1472,
  [SMALL_STATE(63)] = 1490,
  [SMALL_STATE(64)] = 1504,
  [SMALL_STATE(65)] = 1515,
  [SMALL_STATE(66)] = 1530,
  [SMALL_STATE(67)] = 1545,
  [SMALL_STATE(68)] = 1560,
  [SMALL_STATE(69)] = 1571,
  [SMALL_STATE(70)] = 1586,
  [SMALL_STATE(71)] = 1603,
  [SMALL_STATE(72)] = 1618,
  [SMALL_STATE(73)] = 1633,
  [SMALL_STATE(74)] = 1648,
  [SMALL_STATE(75)] = 1663,
  [SMALL_STATE(76)] = 1674,
  [SMALL_STATE(77)] = 1685,
  [SMALL_STATE(78)] = 1698,
  [SMALL_STATE(79)] = 1715,
  [SMALL_STATE(80)] = 1731,
  [SMALL_STATE(81)] = 1747,
  [SMALL_STATE(82)] = 1761,
  [SMALL_STATE(83)] = 1775,
  [SMALL_STATE(84)] = 1791,
  [SMALL_STATE(85)] = 1805,
  [SMALL_STATE(86)] = 1817,
  [SMALL_STATE(87)] = 1831,
  [SMALL_STATE(88)] = 1845,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1871,
  [SMALL_STATE(91)] = 1883,
  [SMALL_STATE(92)] = 1897,
  [SMALL_STATE(93)] = 1911,
  [SMALL_STATE(94)] = 1925,
  [SMALL_STATE(95)] = 1939,
  [SMALL_STATE(96)] = 1952,
  [SMALL_STATE(97)] = 1965,
  [SMALL_STATE(98)] = 1976,
  [SMALL_STATE(99)] = 1985,
  [SMALL_STATE(100)] = 1996,
  [SMALL_STATE(101)] = 2009,
  [SMALL_STATE(102)] = 2020,
  [SMALL_STATE(103)] = 2031,
  [SMALL_STATE(104)] = 2042,
  [SMALL_STATE(105)] = 2053,
  [SMALL_STATE(106)] = 2066,
  [SMALL_STATE(107)] = 2075,
  [SMALL_STATE(108)] = 2083,
  [SMALL_STATE(109)] = 2089,
  [SMALL_STATE(110)] = 2095,
  [SMALL_STATE(111)] = 2101,
  [SMALL_STATE(112)] = 2106,
  [SMALL_STATE(113)] = 2111,
  [SMALL_STATE(114)] = 2116,
  [SMALL_STATE(115)] = 2123,
  [SMALL_STATE(116)] = 2128,
  [SMALL_STATE(117)] = 2135,
  [SMALL_STATE(118)] = 2140,
  [SMALL_STATE(119)] = 2145,
  [SMALL_STATE(120)] = 2150,
  [SMALL_STATE(121)] = 2155,
  [SMALL_STATE(122)] = 2160,
  [SMALL_STATE(123)] = 2165,
  [SMALL_STATE(124)] = 2170,
  [SMALL_STATE(125)] = 2175,
  [SMALL_STATE(126)] = 2180,
  [SMALL_STATE(127)] = 2185,
  [SMALL_STATE(128)] = 2190,
  [SMALL_STATE(129)] = 2195,
  [SMALL_STATE(130)] = 2200,
  [SMALL_STATE(131)] = 2205,
  [SMALL_STATE(132)] = 2210,
  [SMALL_STATE(133)] = 2215,
  [SMALL_STATE(134)] = 2222,
  [SMALL_STATE(135)] = 2229,
  [SMALL_STATE(136)] = 2236,
  [SMALL_STATE(137)] = 2241,
  [SMALL_STATE(138)] = 2246,
  [SMALL_STATE(139)] = 2251,
  [SMALL_STATE(140)] = 2256,
  [SMALL_STATE(141)] = 2261,
  [SMALL_STATE(142)] = 2266,
  [SMALL_STATE(143)] = 2271,
  [SMALL_STATE(144)] = 2276,
  [SMALL_STATE(145)] = 2281,
  [SMALL_STATE(146)] = 2286,
  [SMALL_STATE(147)] = 2291,
  [SMALL_STATE(148)] = 2296,
  [SMALL_STATE(149)] = 2303,
  [SMALL_STATE(150)] = 2308,
  [SMALL_STATE(151)] = 2313,
  [SMALL_STATE(152)] = 2320,
  [SMALL_STATE(153)] = 2327,
  [SMALL_STATE(154)] = 2334,
  [SMALL_STATE(155)] = 2339,
  [SMALL_STATE(156)] = 2346,
  [SMALL_STATE(157)] = 2351,
  [SMALL_STATE(158)] = 2356,
  [SMALL_STATE(159)] = 2363,
  [SMALL_STATE(160)] = 2370,
  [SMALL_STATE(161)] = 2375,
  [SMALL_STATE(162)] = 2382,
  [SMALL_STATE(163)] = 2387,
  [SMALL_STATE(164)] = 2391,
  [SMALL_STATE(165)] = 2395,
  [SMALL_STATE(166)] = 2399,
  [SMALL_STATE(167)] = 2403,
  [SMALL_STATE(168)] = 2407,
  [SMALL_STATE(169)] = 2411,
  [SMALL_STATE(170)] = 2415,
  [SMALL_STATE(171)] = 2419,
  [SMALL_STATE(172)] = 2423,
  [SMALL_STATE(173)] = 2427,
  [SMALL_STATE(174)] = 2431,
  [SMALL_STATE(175)] = 2435,
  [SMALL_STATE(176)] = 2439,
  [SMALL_STATE(177)] = 2443,
  [SMALL_STATE(178)] = 2447,
  [SMALL_STATE(179)] = 2451,
  [SMALL_STATE(180)] = 2455,
  [SMALL_STATE(181)] = 2459,
  [SMALL_STATE(182)] = 2463,
  [SMALL_STATE(183)] = 2467,
  [SMALL_STATE(184)] = 2471,
  [SMALL_STATE(185)] = 2475,
  [SMALL_STATE(186)] = 2479,
  [SMALL_STATE(187)] = 2483,
  [SMALL_STATE(188)] = 2487,
  [SMALL_STATE(189)] = 2491,
  [SMALL_STATE(190)] = 2495,
  [SMALL_STATE(191)] = 2499,
  [SMALL_STATE(192)] = 2503,
  [SMALL_STATE(193)] = 2507,
  [SMALL_STATE(194)] = 2511,
  [SMALL_STATE(195)] = 2515,
  [SMALL_STATE(196)] = 2519,
  [SMALL_STATE(197)] = 2523,
  [SMALL_STATE(198)] = 2527,
  [SMALL_STATE(199)] = 2531,
  [SMALL_STATE(200)] = 2535,
  [SMALL_STATE(201)] = 2539,
  [SMALL_STATE(202)] = 2543,
  [SMALL_STATE(203)] = 2547,
  [SMALL_STATE(204)] = 2551,
  [SMALL_STATE(205)] = 2555,
  [SMALL_STATE(206)] = 2559,
  [SMALL_STATE(207)] = 2563,
  [SMALL_STATE(208)] = 2567,
  [SMALL_STATE(209)] = 2571,
  [SMALL_STATE(210)] = 2575,
  [SMALL_STATE(211)] = 2579,
  [SMALL_STATE(212)] = 2583,
  [SMALL_STATE(213)] = 2587,
  [SMALL_STATE(214)] = 2591,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sep, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_sep, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_redirection_repeat1, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_assignment, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignment_value_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_assignment_value, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_set, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_set_repeat1, 1, 0, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 4, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 4, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 5, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_assignment, 6, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_assignment, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [596] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
