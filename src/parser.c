#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 6

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
  aux_sym_variable_assignment_token3 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_variable_assignment_token4 = 13,
  anon_sym_EQ = 14,
  aux_sym_variable_assignment_token5 = 15,
  aux_sym_variable_assignment_token6 = 16,
  aux_sym_if_stmt_token1 = 17,
  aux_sym_if_stmt_token2 = 18,
  aux_sym_if_stmt_token3 = 19,
  aux_sym_if_stmt_token4 = 20,
  aux_sym_if_stmt_token5 = 21,
  aux_sym_else_clause_token1 = 22,
  sym_comparison_op = 23,
  aux_sym_goto_stmt_token1 = 24,
  aux_sym_goto_stmt_token2 = 25,
  aux_sym_goto_stmt_token3 = 26,
  aux_sym_call_stmt_token1 = 27,
  aux_sym_exit_stmt_token1 = 28,
  aux_sym_exit_stmt_token2 = 29,
  aux_sym_setlocal_stmt_token1 = 30,
  aux_sym_setlocal_stmt_token2 = 31,
  aux_sym_setlocal_stmt_token3 = 32,
  aux_sym_setlocal_stmt_token4 = 33,
  aux_sym_setlocal_stmt_token5 = 34,
  aux_sym_endlocal_stmt_token1 = 35,
  aux_sym_for_stmt_token1 = 36,
  aux_sym_for_stmt_token2 = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  aux_sym_for_stmt_token3 = 40,
  sym_for_options = 41,
  sym_for_variable = 42,
  sym_for_set = 43,
  aux_sym_redirection_token1 = 44,
  sym_redirect_op = 45,
  sym_redirect_target = 46,
  anon_sym_PIPE = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_AMP = 50,
  sym_variable_reference = 51,
  sym_string = 52,
  sym_command_option = 53,
  sym_argument_value = 54,
  sym_integer = 55,
  sym_program = 56,
  sym__stmt = 57,
  sym_echo_off = 58,
  sym_label = 59,
  sym_variable_assignment = 60,
  sym_if_stmt = 61,
  sym_else_clause = 62,
  sym_goto_stmt = 63,
  sym_call_stmt = 64,
  sym_exit_stmt = 65,
  sym_setlocal_stmt = 66,
  sym_endlocal_stmt = 67,
  sym_for_stmt = 68,
  sym_parenthesized = 69,
  sym_redirect_stmt = 70,
  sym_redirection = 71,
  sym_pipe_stmt = 72,
  sym_cond_exec = 73,
  sym_command_sep = 74,
  sym_cmd = 75,
  sym_argument_list = 76,
  sym__arg = 77,
  sym_paren_expression = 78,
  aux_sym_program_repeat1 = 79,
  aux_sym_argument_list_repeat1 = 80,
  alias_sym_variable_name = 81,
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
  [aux_sym_variable_assignment_token3] = "set_option",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_variable_assignment_token4] = "variable_assignment_token4",
  [anon_sym_EQ] = "=",
  [aux_sym_variable_assignment_token5] = "assignment_value",
  [aux_sym_variable_assignment_token6] = "assignment_value",
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
  [sym_for_set] = "for_set",
  [aux_sym_redirection_token1] = "redirection_token1",
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
  [sym_if_stmt] = "if_stmt",
  [sym_else_clause] = "else_clause",
  [sym_goto_stmt] = "goto_stmt",
  [sym_call_stmt] = "call_stmt",
  [sym_exit_stmt] = "exit_stmt",
  [sym_setlocal_stmt] = "setlocal_stmt",
  [sym_endlocal_stmt] = "endlocal_stmt",
  [sym_for_stmt] = "for_stmt",
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
  [aux_sym_variable_assignment_token3] = aux_sym_variable_assignment_token3,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_variable_assignment_token4] = aux_sym_variable_assignment_token4,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_variable_assignment_token5] = aux_sym_variable_assignment_token5,
  [aux_sym_variable_assignment_token6] = aux_sym_variable_assignment_token5,
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
  [sym_for_set] = sym_for_set,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
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
  [sym_if_stmt] = sym_if_stmt,
  [sym_else_clause] = sym_else_clause,
  [sym_goto_stmt] = sym_goto_stmt,
  [sym_call_stmt] = sym_call_stmt,
  [sym_exit_stmt] = sym_exit_stmt,
  [sym_setlocal_stmt] = sym_setlocal_stmt,
  [sym_endlocal_stmt] = sym_endlocal_stmt,
  [sym_for_stmt] = sym_for_stmt,
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
  [aux_sym_variable_assignment_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_assignment_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_assignment_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_assignment_token6] = {
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
  [sym_for_set] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_redirection_token1] = {
    .visible = false,
    .named = false,
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
  [4] = {
    [5] = alias_sym_variable_name,
  },
  [5] = {
    [6] = alias_sym_variable_name,
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
  [11] = 7,
  [12] = 6,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 15,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 27,
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
  [82] = 72,
  [83] = 73,
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
  [99] = 80,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 81,
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
  [120] = 78,
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
  [136] = 79,
  [137] = 137,
  [138] = 116,
  [139] = 135,
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
  [161] = 143,
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
  [186] = 177,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 152,
  [194] = 194,
  [195] = 195,
  [196] = 183,
  [197] = 197,
  [198] = 197,
  [199] = 199,
  [200] = 195,
  [201] = 201,
  [202] = 202,
  [203] = 157,
  [204] = 149,
  [205] = 192,
  [206] = 206,
  [207] = 207,
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
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '\n', 55,
        '\r', 1,
        '!', 50,
        '"', 66,
        '%', 15,
        '&', 108,
        '(', 84,
        ')', 85,
        '/', 33,
        '2', 95,
        ':', 21,
        '<', 98,
        '=', 71,
        '>', 99,
        '@', 57,
        '|', 105,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 55,
        '\r', 1,
        '!', 50,
        '"', 13,
        '%', 18,
        '&', 108,
        '(', 84,
        ')', 85,
        '/', 117,
        '2', 96,
        '<', 98,
        '>', 99,
        '^', 116,
        '|', 105,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(118);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 55,
        '\r', 1,
        '!', 50,
        '"', 13,
        '%', 18,
        '&', 108,
        '(', 84,
        ')', 85,
        '/', 117,
        '^', 116,
        '|', 26,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(118);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 55,
        '\r', 1,
        '%', 14,
        '&', 108,
        '(', 84,
        ')', 85,
        '/', 39,
        '2', 95,
        ':', 51,
        '<', 98,
        '>', 99,
        '@', 56,
        '|', 105,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '~') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == ':') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '~') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == '|') ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == '~') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == '~') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        'B', 83,
        'b', 83,
        'F', 88,
        'f', 88,
        'R', 89,
        'r', 89,
        'A', 65,
        'P', 65,
        'a', 65,
        'p', 65,
        'D', 87,
        'L', 87,
        'd', 87,
        'l', 87,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        'F', 88,
        'f', 88,
        'R', 89,
        'r', 89,
        'D', 87,
        'L', 87,
        'd', 87,
        'l', 87,
      );
      END_STATE();
    case 40:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          lookahead == 'a' ||
          lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 49:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(17);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '\n', 55,
        '\r', 1,
        '!', 50,
        '"', 13,
        '%', 18,
        '(', 84,
        ')', 85,
        '/', 32,
        ':', 22,
        '@', 57,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '^') ADVANCE(119);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '^') ADVANCE(119);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_command_option);
      if (lookahead == '^') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(119);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
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
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 53},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 53},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 53},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 30},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 30},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 53},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 31},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 53},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 31},
  [192] = {.lex_state = 30},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 30},
  [204] = {.lex_state = 30},
  [205] = {.lex_state = 30},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 4},
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
    [aux_sym_variable_assignment_token3] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_variable_assignment_token4] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_redirect_op] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_variable_reference] = ACTIONS(1),
    [sym_command_option] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(162),
    [sym__stmt] = STATE(164),
    [sym_echo_off] = STATE(164),
    [sym_label] = STATE(164),
    [sym_variable_assignment] = STATE(164),
    [sym_if_stmt] = STATE(164),
    [sym_goto_stmt] = STATE(164),
    [sym_call_stmt] = STATE(164),
    [sym_exit_stmt] = STATE(164),
    [sym_setlocal_stmt] = STATE(164),
    [sym_endlocal_stmt] = STATE(164),
    [sym_for_stmt] = STATE(164),
    [sym_parenthesized] = STATE(26),
    [sym_redirect_stmt] = STATE(75),
    [sym_pipe_stmt] = STATE(49),
    [sym_cond_exec] = STATE(49),
    [sym_command_sep] = STATE(76),
    [sym_cmd] = STATE(26),
    [aux_sym_program_repeat1] = STATE(3),
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
    STATE(75), 1,
      sym_redirect_stmt,
    STATE(76), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(49), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(164), 11,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [77] = 21,
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
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_program_token1,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_redirect_stmt,
    STATE(76), 1,
      sym_command_sep,
    STATE(26), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(49), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(164), 11,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [153] = 21,
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
    ACTIONS(81), 1,
      aux_sym_program_token1,
    ACTIONS(83), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_redirect_stmt,
    STATE(76), 1,
      sym_command_sep,
    STATE(26), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(49), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(132), 11,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
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
      aux_sym_program_token1,
    ACTIONS(83), 1,
      anon_sym_AT,
    ACTIONS(87), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_redirect_stmt,
    STATE(76), 1,
      sym_command_sep,
    STATE(26), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(49), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(85), 11,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
  [305] = 7,
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
    ACTIONS(99), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(8), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [337] = 7,
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
    ACTIONS(107), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(8), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [369] = 6,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(115), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(111), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(109), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [398] = 2,
    ACTIONS(117), 3,
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
  [419] = 6,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(129), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(124), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [448] = 7,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(105), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [477] = 7,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [506] = 2,
    ACTIONS(140), 5,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(138), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [524] = 6,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(144), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(109), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [550] = 2,
    ACTIONS(148), 5,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(146), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [568] = 6,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(156), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [594] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(159), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [618] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(161), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [642] = 2,
    ACTIONS(140), 3,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(138), 7,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [657] = 2,
    ACTIONS(148), 3,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(146), 7,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [672] = 10,
    ACTIONS(163), 1,
      sym_command_name,
    ACTIONS(165), 1,
      aux_sym_echo_off_token1,
    ACTIONS(167), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(169), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(171), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(173), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(175), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(177), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(179), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(181), 1,
      aux_sym_for_stmt_token1,
  [703] = 10,
    ACTIONS(163), 1,
      sym_command_name,
    ACTIONS(165), 1,
      aux_sym_echo_off_token1,
    ACTIONS(169), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(171), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(173), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(175), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(177), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(179), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(181), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(183), 1,
      aux_sym_variable_assignment_token1,
  [734] = 7,
    ACTIONS(187), 1,
      aux_sym_redirection_token1,
    ACTIONS(189), 1,
      sym_redirect_op,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_AMP,
    STATE(42), 1,
      sym_redirection,
    ACTIONS(185), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [758] = 2,
    ACTIONS(199), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(197), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [772] = 2,
    ACTIONS(203), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(201), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [786] = 7,
    ACTIONS(187), 1,
      aux_sym_redirection_token1,
    ACTIONS(189), 1,
      sym_redirect_op,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_AMP,
    STATE(42), 1,
      sym_redirection,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(205), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [810] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(144), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [830] = 2,
    ACTIONS(213), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(211), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [844] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(219), 2,
      sym_command_option,
      sym_argument_value,
    STATE(31), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [864] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(225), 2,
      sym_command_option,
      sym_argument_value,
    STATE(27), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [884] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(144), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [904] = 4,
    ACTIONS(231), 1,
      aux_sym_redirection_token1,
    ACTIONS(233), 1,
      sym_redirect_op,
    ACTIONS(235), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(229), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [921] = 5,
    ACTIONS(187), 1,
      aux_sym_redirection_token1,
    ACTIONS(189), 1,
      sym_redirect_op,
    ACTIONS(239), 1,
      anon_sym_AMP,
    STATE(42), 1,
      sym_redirection,
    ACTIONS(237), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [940] = 2,
    ACTIONS(243), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(241), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [953] = 2,
    ACTIONS(107), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [966] = 4,
    ACTIONS(247), 1,
      aux_sym_redirection_token1,
    ACTIONS(249), 1,
      sym_redirect_op,
    ACTIONS(251), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(245), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [983] = 6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_command_name,
    ACTIONS(255), 1,
      anon_sym_AT,
    STATE(185), 1,
      sym_redirect_stmt,
    STATE(23), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(53), 2,
      sym_pipe_stmt,
      sym_cond_exec,
  [1004] = 5,
    ACTIONS(257), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(259), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(261), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(263), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(265), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1022] = 5,
    ACTIONS(267), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(269), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(271), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(273), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(275), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1040] = 4,
    ACTIONS(259), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(261), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(263), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(265), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1055] = 4,
    ACTIONS(277), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(279), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(281), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(283), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1070] = 2,
    ACTIONS(287), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(285), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1081] = 2,
    ACTIONS(291), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(289), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1092] = 2,
    ACTIONS(295), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(293), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1103] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_command_name,
    ACTIONS(255), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_redirect_stmt,
    STATE(33), 2,
      sym_parenthesized,
      sym_cmd,
  [1120] = 2,
    ACTIONS(297), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(299), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1131] = 2,
    ACTIONS(301), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1142] = 2,
    ACTIONS(307), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(305), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1153] = 3,
    ACTIONS(207), 1,
      anon_sym_AMP,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(205), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1165] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(69), 1,
      sym_parenthesized,
    STATE(87), 1,
      sym_cmd,
  [1181] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(66), 1,
      sym_parenthesized,
    STATE(127), 1,
      sym_cmd,
  [1197] = 2,
    ACTIONS(315), 1,
      anon_sym_AMP,
    ACTIONS(313), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1207] = 3,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(185), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1219] = 2,
    ACTIONS(239), 1,
      anon_sym_AMP,
    ACTIONS(237), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1229] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(68), 1,
      sym_parenthesized,
    STATE(96), 1,
      sym_cmd,
  [1245] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(67), 1,
      sym_parenthesized,
    STATE(105), 1,
      sym_cmd,
  [1261] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(84), 2,
      sym_parenthesized,
      sym_cmd,
  [1275] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(110), 2,
      sym_parenthesized,
      sym_cmd,
  [1289] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(123), 2,
      sym_parenthesized,
      sym_cmd,
  [1303] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(117), 2,
      sym_parenthesized,
      sym_cmd,
  [1317] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(119), 2,
      sym_parenthesized,
      sym_cmd,
  [1331] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_command_name,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(52), 2,
      sym_parenthesized,
      sym_cmd,
  [1345] = 2,
    ACTIONS(317), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(319), 2,
      sym_variable_reference,
      sym_integer,
  [1354] = 3,
    ACTIONS(323), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(325), 1,
      sym_integer,
    ACTIONS(321), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1365] = 2,
    ACTIONS(327), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(329), 2,
      sym_variable_reference,
      sym_integer,
  [1374] = 3,
    ACTIONS(333), 1,
      aux_sym_else_clause_token1,
    STATE(87), 1,
      sym_else_clause,
    ACTIONS(331), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1385] = 3,
    ACTIONS(333), 1,
      aux_sym_else_clause_token1,
    STATE(115), 1,
      sym_else_clause,
    ACTIONS(335), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1396] = 3,
    ACTIONS(333), 1,
      aux_sym_else_clause_token1,
    STATE(105), 1,
      sym_else_clause,
    ACTIONS(337), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1407] = 3,
    ACTIONS(333), 1,
      aux_sym_else_clause_token1,
    STATE(96), 1,
      sym_else_clause,
    ACTIONS(339), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1418] = 3,
    ACTIONS(319), 1,
      sym_integer,
    ACTIONS(341), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(317), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1429] = 1,
    ACTIONS(343), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1435] = 3,
    ACTIONS(345), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      aux_sym_variable_assignment_token4,
  [1445] = 3,
    ACTIONS(351), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_variable_assignment_token4,
  [1455] = 1,
    ACTIONS(357), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1461] = 2,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    ACTIONS(205), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1469] = 2,
    ACTIONS(361), 1,
      anon_sym_AMP,
    ACTIONS(205), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1477] = 1,
    ACTIONS(363), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1483] = 2,
    ACTIONS(367), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(365), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1491] = 2,
    ACTIONS(371), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(369), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1499] = 2,
    ACTIONS(375), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(373), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1507] = 2,
    ACTIONS(379), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(377), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1515] = 3,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(383), 1,
      aux_sym_variable_assignment_token4,
  [1525] = 3,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(387), 1,
      aux_sym_variable_assignment_token4,
  [1535] = 1,
    ACTIONS(389), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1540] = 2,
    ACTIONS(391), 1,
      aux_sym_program_token1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [1547] = 1,
    ACTIONS(297), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1552] = 1,
    ACTIONS(339), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1557] = 2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym_for_set,
  [1564] = 2,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_variable_assignment_token5,
  [1571] = 1,
    ACTIONS(401), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1576] = 1,
    ACTIONS(403), 2,
      sym_variable_reference,
      sym_string,
  [1581] = 1,
    ACTIONS(405), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1586] = 2,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym_variable_assignment_token5,
  [1593] = 1,
    ACTIONS(409), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1598] = 1,
    ACTIONS(357), 2,
      sym_variable_reference,
      sym_string,
  [1603] = 1,
    ACTIONS(337), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1608] = 1,
    ACTIONS(411), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1613] = 2,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(415), 1,
      sym_for_set,
  [1620] = 2,
    ACTIONS(373), 1,
      aux_sym_program_token1,
    ACTIONS(417), 1,
      aux_sym_variable_assignment_token6,
  [1627] = 1,
    ACTIONS(419), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1632] = 1,
    ACTIONS(327), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1637] = 1,
    ACTIONS(421), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1642] = 2,
    ACTIONS(377), 1,
      aux_sym_program_token1,
    ACTIONS(423), 1,
      aux_sym_variable_assignment_token6,
  [1649] = 1,
    ACTIONS(425), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1654] = 1,
    ACTIONS(335), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1659] = 1,
    ACTIONS(427), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1664] = 1,
    ACTIONS(429), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1669] = 2,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(431), 1,
      aux_sym_variable_assignment_token5,
  [1676] = 1,
    ACTIONS(433), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1681] = 1,
    ACTIONS(435), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1686] = 2,
    ACTIONS(437), 1,
      sym_for_options,
    ACTIONS(439), 1,
      sym_for_variable,
  [1693] = 1,
    ACTIONS(441), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1698] = 1,
    ACTIONS(443), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1703] = 1,
    ACTIONS(445), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1708] = 1,
    ACTIONS(447), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1713] = 2,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      aux_sym_variable_assignment_token4,
  [1720] = 1,
    ACTIONS(453), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1725] = 1,
    ACTIONS(455), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1730] = 1,
    ACTIONS(457), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1735] = 2,
    ACTIONS(365), 1,
      aux_sym_program_token1,
    ACTIONS(459), 1,
      aux_sym_variable_assignment_token6,
  [1742] = 1,
    ACTIONS(461), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1747] = 1,
    ACTIONS(463), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1752] = 1,
    ACTIONS(465), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1757] = 2,
    ACTIONS(467), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(469), 1,
      aux_sym_goto_stmt_token3,
  [1764] = 1,
    ACTIONS(471), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1769] = 1,
    ACTIONS(161), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1774] = 1,
    ACTIONS(331), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1779] = 2,
    ACTIONS(473), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(475), 1,
      aux_sym_goto_stmt_token3,
  [1786] = 2,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      sym_for_set,
  [1793] = 1,
    ACTIONS(481), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1798] = 1,
    ACTIONS(483), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1803] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      aux_sym_program_token1,
  [1810] = 1,
    ACTIONS(317), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1815] = 1,
    ACTIONS(485), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1820] = 2,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      aux_sym_variable_assignment_token4,
  [1827] = 2,
    ACTIONS(369), 1,
      aux_sym_program_token1,
    ACTIONS(491), 1,
      aux_sym_variable_assignment_token6,
  [1834] = 1,
    ACTIONS(493), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1839] = 2,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(495), 1,
      aux_sym_variable_assignment_token4,
  [1846] = 2,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      aux_sym_variable_assignment_token4,
  [1853] = 2,
    ACTIONS(499), 1,
      sym_for_options,
    ACTIONS(501), 1,
      sym_for_variable,
  [1860] = 1,
    ACTIONS(363), 2,
      sym_variable_reference,
      sym_string,
  [1865] = 2,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      aux_sym_variable_assignment_token5,
  [1872] = 1,
    ACTIONS(507), 1,
      aux_sym_variable_assignment_token2,
  [1876] = 1,
    ACTIONS(509), 1,
      aux_sym_for_stmt_token3,
  [1880] = 1,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [1884] = 1,
    ACTIONS(513), 1,
      anon_sym_EQ,
  [1888] = 1,
    ACTIONS(515), 1,
      sym_comparison_op,
  [1892] = 1,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
  [1896] = 1,
    ACTIONS(519), 1,
      aux_sym_variable_assignment_token2,
  [1900] = 1,
    ACTIONS(521), 1,
      aux_sym_variable_assignment_token4,
  [1904] = 1,
    ACTIONS(523), 1,
      sym_redirect_target,
  [1908] = 1,
    ACTIONS(525), 1,
      anon_sym_EQ,
  [1912] = 1,
    ACTIONS(527), 1,
      anon_sym_EQ,
  [1916] = 1,
    ACTIONS(529), 1,
      aux_sym_for_stmt_token2,
  [1920] = 1,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [1924] = 1,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
  [1928] = 1,
    ACTIONS(535), 1,
      aux_sym_variable_assignment_token2,
  [1932] = 1,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [1936] = 1,
    ACTIONS(539), 1,
      aux_sym_for_stmt_token3,
  [1940] = 1,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [1944] = 1,
    ACTIONS(543), 1,
      aux_sym_variable_assignment_token2,
  [1948] = 1,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
  [1952] = 1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
  [1956] = 1,
    ACTIONS(391), 1,
      aux_sym_program_token1,
  [1960] = 1,
    ACTIONS(403), 1,
      aux_sym_variable_assignment_token4,
  [1964] = 1,
    ACTIONS(363), 1,
      aux_sym_variable_assignment_token4,
  [1968] = 1,
    ACTIONS(363), 1,
      sym_integer,
  [1972] = 1,
    ACTIONS(249), 1,
      sym_redirect_op,
  [1976] = 1,
    ACTIONS(549), 1,
      sym_redirect_target,
  [1980] = 1,
    ACTIONS(551), 1,
      sym_comparison_op,
  [1984] = 1,
    ACTIONS(553), 1,
      aux_sym_for_stmt_token3,
  [1988] = 1,
    ACTIONS(555), 1,
      anon_sym_EQ,
  [1992] = 1,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
  [1996] = 1,
    ACTIONS(559), 1,
      sym_redirect_target,
  [2000] = 1,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
  [2004] = 1,
    ACTIONS(563), 1,
      sym_redirect_op,
  [2008] = 1,
    ACTIONS(565), 1,
      sym_command_name,
  [2012] = 1,
    ACTIONS(567), 1,
      sym_redirect_target,
  [2016] = 1,
    ACTIONS(569), 1,
      sym_comparison_op,
  [2020] = 1,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
  [2024] = 1,
    ACTIONS(573), 1,
      aux_sym_for_stmt_token2,
  [2028] = 1,
    ACTIONS(575), 1,
      aux_sym_variable_assignment_token4,
  [2032] = 1,
    ACTIONS(577), 1,
      anon_sym_EQ,
  [2036] = 1,
    ACTIONS(403), 1,
      sym_integer,
  [2040] = 1,
    ACTIONS(359), 1,
      anon_sym_PIPE,
  [2044] = 1,
    ACTIONS(579), 1,
      sym_command_name,
  [2048] = 1,
    ACTIONS(581), 1,
      sym_for_variable,
  [2052] = 1,
    ACTIONS(583), 1,
      aux_sym_for_stmt_token3,
  [2056] = 1,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [2060] = 1,
    ACTIONS(587), 1,
      sym_redirect_op,
  [2064] = 1,
    ACTIONS(589), 1,
      sym_redirect_target,
  [2068] = 1,
    ACTIONS(591), 1,
      aux_sym_variable_assignment_token2,
  [2072] = 1,
    ACTIONS(593), 1,
      anon_sym_EQ,
  [2076] = 1,
    ACTIONS(595), 1,
      aux_sym_variable_assignment_token4,
  [2080] = 1,
    ACTIONS(597), 1,
      anon_sym_EQ,
  [2084] = 1,
    ACTIONS(599), 1,
      anon_sym_EQ,
  [2088] = 1,
    ACTIONS(601), 1,
      anon_sym_EQ,
  [2092] = 1,
    ACTIONS(603), 1,
      anon_sym_EQ,
  [2096] = 1,
    ACTIONS(605), 1,
      aux_sym_variable_assignment_token4,
  [2100] = 1,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [2104] = 1,
    ACTIONS(609), 1,
      aux_sym_for_stmt_token2,
  [2108] = 1,
    ACTIONS(357), 1,
      aux_sym_variable_assignment_token4,
  [2112] = 1,
    ACTIONS(611), 1,
      aux_sym_variable_assignment_token2,
  [2116] = 1,
    ACTIONS(613), 1,
      aux_sym_variable_assignment_token2,
  [2120] = 1,
    ACTIONS(615), 1,
      aux_sym_variable_assignment_token2,
  [2124] = 1,
    ACTIONS(357), 1,
      sym_integer,
  [2128] = 1,
    ACTIONS(501), 1,
      sym_for_variable,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 153,
  [SMALL_STATE(5)] = 229,
  [SMALL_STATE(6)] = 305,
  [SMALL_STATE(7)] = 337,
  [SMALL_STATE(8)] = 369,
  [SMALL_STATE(9)] = 398,
  [SMALL_STATE(10)] = 419,
  [SMALL_STATE(11)] = 448,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 524,
  [SMALL_STATE(15)] = 550,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 594,
  [SMALL_STATE(18)] = 618,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 703,
  [SMALL_STATE(23)] = 734,
  [SMALL_STATE(24)] = 758,
  [SMALL_STATE(25)] = 772,
  [SMALL_STATE(26)] = 786,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 844,
  [SMALL_STATE(30)] = 864,
  [SMALL_STATE(31)] = 884,
  [SMALL_STATE(32)] = 904,
  [SMALL_STATE(33)] = 921,
  [SMALL_STATE(34)] = 940,
  [SMALL_STATE(35)] = 953,
  [SMALL_STATE(36)] = 966,
  [SMALL_STATE(37)] = 983,
  [SMALL_STATE(38)] = 1004,
  [SMALL_STATE(39)] = 1022,
  [SMALL_STATE(40)] = 1040,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1070,
  [SMALL_STATE(43)] = 1081,
  [SMALL_STATE(44)] = 1092,
  [SMALL_STATE(45)] = 1103,
  [SMALL_STATE(46)] = 1120,
  [SMALL_STATE(47)] = 1131,
  [SMALL_STATE(48)] = 1142,
  [SMALL_STATE(49)] = 1153,
  [SMALL_STATE(50)] = 1165,
  [SMALL_STATE(51)] = 1181,
  [SMALL_STATE(52)] = 1197,
  [SMALL_STATE(53)] = 1207,
  [SMALL_STATE(54)] = 1219,
  [SMALL_STATE(55)] = 1229,
  [SMALL_STATE(56)] = 1245,
  [SMALL_STATE(57)] = 1261,
  [SMALL_STATE(58)] = 1275,
  [SMALL_STATE(59)] = 1289,
  [SMALL_STATE(60)] = 1303,
  [SMALL_STATE(61)] = 1317,
  [SMALL_STATE(62)] = 1331,
  [SMALL_STATE(63)] = 1345,
  [SMALL_STATE(64)] = 1354,
  [SMALL_STATE(65)] = 1365,
  [SMALL_STATE(66)] = 1374,
  [SMALL_STATE(67)] = 1385,
  [SMALL_STATE(68)] = 1396,
  [SMALL_STATE(69)] = 1407,
  [SMALL_STATE(70)] = 1418,
  [SMALL_STATE(71)] = 1429,
  [SMALL_STATE(72)] = 1435,
  [SMALL_STATE(73)] = 1445,
  [SMALL_STATE(74)] = 1455,
  [SMALL_STATE(75)] = 1461,
  [SMALL_STATE(76)] = 1469,
  [SMALL_STATE(77)] = 1477,
  [SMALL_STATE(78)] = 1483,
  [SMALL_STATE(79)] = 1491,
  [SMALL_STATE(80)] = 1499,
  [SMALL_STATE(81)] = 1507,
  [SMALL_STATE(82)] = 1515,
  [SMALL_STATE(83)] = 1525,
  [SMALL_STATE(84)] = 1535,
  [SMALL_STATE(85)] = 1540,
  [SMALL_STATE(86)] = 1547,
  [SMALL_STATE(87)] = 1552,
  [SMALL_STATE(88)] = 1557,
  [SMALL_STATE(89)] = 1564,
  [SMALL_STATE(90)] = 1571,
  [SMALL_STATE(91)] = 1576,
  [SMALL_STATE(92)] = 1581,
  [SMALL_STATE(93)] = 1586,
  [SMALL_STATE(94)] = 1593,
  [SMALL_STATE(95)] = 1598,
  [SMALL_STATE(96)] = 1603,
  [SMALL_STATE(97)] = 1608,
  [SMALL_STATE(98)] = 1613,
  [SMALL_STATE(99)] = 1620,
  [SMALL_STATE(100)] = 1627,
  [SMALL_STATE(101)] = 1632,
  [SMALL_STATE(102)] = 1637,
  [SMALL_STATE(103)] = 1642,
  [SMALL_STATE(104)] = 1649,
  [SMALL_STATE(105)] = 1654,
  [SMALL_STATE(106)] = 1659,
  [SMALL_STATE(107)] = 1664,
  [SMALL_STATE(108)] = 1669,
  [SMALL_STATE(109)] = 1676,
  [SMALL_STATE(110)] = 1681,
  [SMALL_STATE(111)] = 1686,
  [SMALL_STATE(112)] = 1693,
  [SMALL_STATE(113)] = 1698,
  [SMALL_STATE(114)] = 1703,
  [SMALL_STATE(115)] = 1708,
  [SMALL_STATE(116)] = 1713,
  [SMALL_STATE(117)] = 1720,
  [SMALL_STATE(118)] = 1725,
  [SMALL_STATE(119)] = 1730,
  [SMALL_STATE(120)] = 1735,
  [SMALL_STATE(121)] = 1742,
  [SMALL_STATE(122)] = 1747,
  [SMALL_STATE(123)] = 1752,
  [SMALL_STATE(124)] = 1757,
  [SMALL_STATE(125)] = 1764,
  [SMALL_STATE(126)] = 1769,
  [SMALL_STATE(127)] = 1774,
  [SMALL_STATE(128)] = 1779,
  [SMALL_STATE(129)] = 1786,
  [SMALL_STATE(130)] = 1793,
  [SMALL_STATE(131)] = 1798,
  [SMALL_STATE(132)] = 1803,
  [SMALL_STATE(133)] = 1810,
  [SMALL_STATE(134)] = 1815,
  [SMALL_STATE(135)] = 1820,
  [SMALL_STATE(136)] = 1827,
  [SMALL_STATE(137)] = 1834,
  [SMALL_STATE(138)] = 1839,
  [SMALL_STATE(139)] = 1846,
  [SMALL_STATE(140)] = 1853,
  [SMALL_STATE(141)] = 1860,
  [SMALL_STATE(142)] = 1865,
  [SMALL_STATE(143)] = 1872,
  [SMALL_STATE(144)] = 1876,
  [SMALL_STATE(145)] = 1880,
  [SMALL_STATE(146)] = 1884,
  [SMALL_STATE(147)] = 1888,
  [SMALL_STATE(148)] = 1892,
  [SMALL_STATE(149)] = 1896,
  [SMALL_STATE(150)] = 1900,
  [SMALL_STATE(151)] = 1904,
  [SMALL_STATE(152)] = 1908,
  [SMALL_STATE(153)] = 1912,
  [SMALL_STATE(154)] = 1916,
  [SMALL_STATE(155)] = 1920,
  [SMALL_STATE(156)] = 1924,
  [SMALL_STATE(157)] = 1928,
  [SMALL_STATE(158)] = 1932,
  [SMALL_STATE(159)] = 1936,
  [SMALL_STATE(160)] = 1940,
  [SMALL_STATE(161)] = 1944,
  [SMALL_STATE(162)] = 1948,
  [SMALL_STATE(163)] = 1952,
  [SMALL_STATE(164)] = 1956,
  [SMALL_STATE(165)] = 1960,
  [SMALL_STATE(166)] = 1964,
  [SMALL_STATE(167)] = 1968,
  [SMALL_STATE(168)] = 1972,
  [SMALL_STATE(169)] = 1976,
  [SMALL_STATE(170)] = 1980,
  [SMALL_STATE(171)] = 1984,
  [SMALL_STATE(172)] = 1988,
  [SMALL_STATE(173)] = 1992,
  [SMALL_STATE(174)] = 1996,
  [SMALL_STATE(175)] = 2000,
  [SMALL_STATE(176)] = 2004,
  [SMALL_STATE(177)] = 2008,
  [SMALL_STATE(178)] = 2012,
  [SMALL_STATE(179)] = 2016,
  [SMALL_STATE(180)] = 2020,
  [SMALL_STATE(181)] = 2024,
  [SMALL_STATE(182)] = 2028,
  [SMALL_STATE(183)] = 2032,
  [SMALL_STATE(184)] = 2036,
  [SMALL_STATE(185)] = 2040,
  [SMALL_STATE(186)] = 2044,
  [SMALL_STATE(187)] = 2048,
  [SMALL_STATE(188)] = 2052,
  [SMALL_STATE(189)] = 2056,
  [SMALL_STATE(190)] = 2060,
  [SMALL_STATE(191)] = 2064,
  [SMALL_STATE(192)] = 2068,
  [SMALL_STATE(193)] = 2072,
  [SMALL_STATE(194)] = 2076,
  [SMALL_STATE(195)] = 2080,
  [SMALL_STATE(196)] = 2084,
  [SMALL_STATE(197)] = 2088,
  [SMALL_STATE(198)] = 2092,
  [SMALL_STATE(199)] = 2096,
  [SMALL_STATE(200)] = 2100,
  [SMALL_STATE(201)] = 2104,
  [SMALL_STATE(202)] = 2108,
  [SMALL_STATE(203)] = 2112,
  [SMALL_STATE(204)] = 2116,
  [SMALL_STATE(205)] = 2120,
  [SMALL_STATE(206)] = 2124,
  [SMALL_STATE(207)] = 2128,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sep, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_sep, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 5, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 6, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [545] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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
