const ci = (word) => new RegExp(word.split('').map((c) => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c).join(''));
const kw = (word) => token(prec(10, ci(word)));
const operand = ($) => [$.cond_exec, $.pipe_stmt, $.cmd, $.parenthesized];

export default grammar({
  name: 'batch',
  extras: () => [/[ \t]/],
  word: ($) => $.command_name,
  rules: {
    program: ($) => repeat(choice(seq($._stmt, /\r?\n/), /\r?\n/)),
    _stmt: ($) => choice(
      $.echo_off, $.comment, $.label, $.variable_assignment,
      $.if_stmt, $.goto_stmt, $.call_stmt, $.exit_stmt,
      $.setlocal_stmt, $.endlocal_stmt, $.for_stmt,
      $.redirect_stmt, $.pipe_stmt, $.cond_exec, $.command_sep,
      $.parenthesized, $.cmd,
    ),
    echo_off: () => prec(10, seq('@', kw('echo'), choice(kw('off'), kw('on')))),
    comment: () => token(prec(10, choice(
      seq(optional('@'), /[rR][eE][mM]/, optional(seq(/[ \t]/, /[^\r\n]*/))),
      seq('::', /[^\r\n]*/),
    ))),
    label: () => token(seq(':', /[a-zA-Z_][a-zA-Z0-9_-]*/)),
    variable_assignment: ($) => prec(8, seq(
      optional('@'), alias(kw('set'), $.set_keyword),
      optional(seq(/[ \t]+/, alias(/\/[aApP]/, $.set_option))),
      /[ \t]+/,
      choice(
        seq('"', alias(/[a-zA-Z_][a-zA-Z0-9_]*/, $.variable_name), '=', optional(alias(/[^"\r\n]+/, $.assignment_value)), '"'),
        seq(alias(/[a-zA-Z_][a-zA-Z0-9_]*/, $.variable_name), '=', optional(alias(/[^\r\n]+/, $.assignment_value))),
      ),
    )),
    if_stmt: ($) => prec.right(8, seq(
      optional('@'), kw('if'),
      optional(kw('not')),
      choice(
        seq(kw('exist'), choice($.string, $.variable_reference)),
        seq(kw('defined'), /[a-zA-Z_][a-zA-Z0-9_]*/),
        seq(kw('errorlevel'), $.integer),
        seq(
          choice($.string, $.variable_reference, $.integer),
          $.comparison_op,
          choice($.string, $.variable_reference, $.integer),
        ),
      ),
      choice(
        // Parenthesized form: supports else clause
        seq($.parenthesized, optional($.else_clause)),
        // Inline command form: no else (ambiguous)
        $.cmd,
      ),
    )),
    else_clause: ($) => prec.right(8, seq(
      kw('else'),
      choice($.parenthesized, $.cmd),
    )),
    comparison_op: () => token(prec(10, choice('==', ci('equ'), ci('neq'), ci('lss'), ci('leq'), ci('gtr'), ci('geq')))),
    goto_stmt: () => prec(8, seq(
      optional('@'), kw('goto'),
      choice(token(prec(10, ci(':eof'))), token(seq(optional(':'), /[a-zA-Z_][a-zA-Z0-9_-]*/))),
    )),
    call_stmt: ($) => prec(8, seq(
      optional('@'), kw('call'),
      choice(token(seq(':', /[a-zA-Z_][a-zA-Z0-9_-]*/)), $.command_name),
      optional($.argument_list),
    )),
    exit_stmt: ($) => prec(8, seq(
      optional('@'), kw('exit'),
      optional(choice(
        seq(kw('/b'), choice($.integer, $.variable_reference)),
        kw('/b'),
        $.integer,
      )),
    )),
    setlocal_stmt: () => prec(8, seq(
      optional('@'), kw('setlocal'),
      optional(choice(kw('enabledelayedexpansion'), kw('disabledelayedexpansion'), kw('enableextensions'), kw('disableextensions'))),
    )),
    endlocal_stmt: () => prec(8, seq(optional('@'), kw('endlocal'))),
    for_stmt: ($) => prec(8, seq(
      optional('@'), kw('for'),
      optional($.for_options), $.for_variable,
      kw('in'), '(', optional($.for_set), ')', kw('do'),
      choice($.parenthesized, $.cmd),
    )),
    for_options: () => token(prec(10, choice(ci('/d'), seq(ci('/r'), optional(seq(/[ \t]+/, /[^\s]+/))), ci('/l'), seq(ci('/f'), optional(seq(/[ \t]+/, '"', /[^"]*/, '"')))))),
    for_variable: () => token(seq('%%', optional('~'), /[a-zA-Z]/)),
    for_set: () => /[^)\r\n]+/,
    parenthesized: ($) => seq('(', repeat(choice(seq($._stmt, /\r?\n/), /\r?\n/)), optional($._stmt), ')'),
    redirect_stmt: ($) => prec.right(4, seq(choice($.cmd, $.parenthesized), $.redirection)),
    redirection: ($) => prec.right(seq(
      optional(/[0-2]/), $.redirect_op, $.redirect_target,
      optional(seq(optional(/[0-2]/), $.redirect_op, $.redirect_target)),
    )),
    redirect_op: () => token(choice('2>&1', '>&1', '2>>', '2>', '>>', '>', '<')),
    redirect_target: () => token(choice(ci('nul'), ci('con'), /[^\s|&><\r\n]+/)),
    pipe_stmt: ($) => prec.left(3, seq(choice($.cmd, $.parenthesized), '|', choice($.cmd, $.parenthesized))),
    cond_exec: ($) => choice(
      prec.left(1, seq(choice(...operand($)), '&&', choice($.cmd, $.parenthesized))),
      prec.left(1, seq(choice(...operand($)), '||', choice($.cmd, $.parenthesized))),
    ),
    command_sep: ($) => prec.left(0, seq(
      choice($.command_sep, ...operand($)),
      '&',
      choice(...operand($)),
    )),
    variable_reference: () => token(choice(
      seq('%', /[a-zA-Z_][a-zA-Z0-9_]*/, '%'),
      seq('%~', /[a-zA-Z]*/, /[0-9]/),
      seq('%', /[0-9]/),
      seq('%%', optional('~'), /[a-zA-Z]/),
      seq('!', /[a-zA-Z_][a-zA-Z0-9_]*/, '!'),
      seq('%', /[a-zA-Z_][a-zA-Z0-9_]*/, ':', /[^%]+/, '%'),
    )),
    string: () => token(seq('"', /[^"\r\n]*/, '"')),
    cmd: ($) => prec.right(5, seq(optional('@'), $.command_name, optional($.argument_list))),
    command_name: () => /[a-zA-Z_][a-zA-Z0-9_.-]*/,
    argument_list: ($) => prec.right(repeat1($._arg)),
    _arg: ($) => choice($.string, $.variable_reference, $.command_option, $.paren_expression, $.argument_value),
    command_option: () => token(seq('/', /[a-zA-Z_?][a-zA-Z0-9_:]*/)),
    paren_expression: ($) => seq('(', repeat($._arg), ')'),
    argument_value: () => /(?:\^[&|<>^()]|[^\s|&><"\r\n%!()])(?:\^[&|<>^()]|[^\s|&><"\r\n()])*/,
    integer: () => /[0-9]+/,
  },
});
