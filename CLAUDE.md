# tree-sitter-batch

## Build & Test
- `npm run generate` — regenerate parser pinned to **ABI 14** (required for `go-tree-sitter v0.24.0`); runs `tree-sitter generate --abi 14 && tree-sitter-go-types`
- `npx tree-sitter test` — run corpus tests in test/corpus/
- `npx tree-sitter parse FILE` — parse a file and print tree; exits 1 on error
- `npm run lint` — ESLint on grammar.js (max-len 160)
- Never run bare `npx tree-sitter generate` — the CLI (≥0.26) defaults to ABI 15, which breaks Go consumers on `go-tree-sitter v0.24.0`. Only the committed `src/parser.c` needs ABI 14; the go-compat CI job enforces this. npm/crates/pypi publish workflows use the CLI default — their runtimes accept newer ABIs.

## Workflow
- TDD: always add a failing corpus test BEFORE fixing grammar, then verify it passes
- After grammar.js changes: generate → test → parse examples → lint
- Corpus test format: test/corpus/*.txt with `====` / `---` delimited sections
- Example fixtures in examples/*.bat — CI asserts all parse with 0 errors; `search.bat` and `dope.bat` are explicitly checked for zero ERROR/MISSING nodes

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
- `cmd` has two branches: echo-specific (`_echo_text` with free-form `_echo_literal`) and generic (structured `argument_list`); echo text allows literal `(` `)` `!` `%`
- `_if_operand` is a concatenated sequence — first token + zero-or-more immediate continuations (via `token.immediate`) to handle `x'%2'`, `%2\Content` without absorbing across whitespace
- `varRefChoice()` helper extracts variable_reference patterns for reuse in both `variable_reference` (normal) and `_variable_reference_immediate` (no-whitespace continuation)

## Common Pitfalls
- Adding `optional()` inside `prec.right()` can cause parser state explosion
- Global `token(prec(N, ...))` affects ALL contexts — a high-prec token in assignment_value will also match inside if-conditions and strings
- `extras` consumes whitespace between all tokens; explicit `/[ \t]+/` in rules competes with extras
- When extending identifier char classes (e.g. adding `$`), update ALL places: label, goto target, call target, command_name, comment exclusion, variable_reference, _var_name_pattern
- Anonymous regex tokens (e.g. `/[0-2]/` in redirect prefix) compete with named tokens at same precedence — single-char echo literals like `1` or `2` lose the tie; avoid prec(-1) on `_echo_literal` to stay competitive
- `token.immediate()` is essential for `_if_operand` continuations — without it, `if exist file %VAR% arg` absorbs `%VAR%` into the operand instead of treating it as the body command
