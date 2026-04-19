# tree-sitter-batch

## Build & Test
- `npx tree-sitter generate` — regenerate parser from grammar.js (must run after any grammar change)
- `npx tree-sitter test` — run corpus tests in test/corpus/
- `npx tree-sitter parse FILE` — parse a file and print tree; exits 1 on error
- `npm run lint` — ESLint on grammar.js (max-len 160)

## Workflow
- TDD: always add a failing corpus test BEFORE fixing grammar, then verify it passes
- After grammar.js changes: generate → test → parse examples → lint
- Corpus test format: test/corpus/*.txt with `====` / `---` delimited sections
- Example fixtures in examples/*.bat — CI asserts all parse with 0 errors

## Grammar Architecture
- `kw()` helper uses `token(prec(10, ...))` for keywords to win over `command_name` in lexer
- `ci()` builds case-insensitive regex from a word
- `operand()` lists all statement types valid as LHS/RHS of operators (`&`, `&&`, `||`, `|`)
- `_body_stmt` lists statement types valid as inline body of `if`/`for`/`else`
- `_stmt` is the top-level statement choice; `cmd` is the generic fallback command
- Newlines are inline `\r?\n` regex in rules, NOT extras — extras are `[/[ \t]/]` only
- `comment` rule has `prec(10)` — new label/identifier chars must also be excluded from comment's `:` fallthrough pattern
- Token precedence determines lexer winner; `prec.right`/`prec.left` is parser-level only
- `conflicts` array needed when `parenthesized` and `paren_expression` are both reachable from same prefix

## Common Pitfalls
- Adding `optional()` inside `prec.right()` can cause parser state explosion
- Global `token(prec(N, ...))` affects ALL contexts — a high-prec token in assignment_value will also match inside if-conditions and strings
- `extras` consumes whitespace between all tokens; explicit `/[ \t]+/` in rules competes with extras
- When extending identifier char classes (e.g. adding `$`), update ALL places: label, goto target, call target, command_name, comment exclusion, variable_reference, _var_name_pattern
