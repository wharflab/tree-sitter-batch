#!/usr/bin/env bash
# Position-sensitive regression checks that the corpus (.txt) format cannot
# express. Each case parses a minimal script and asserts that a specific node
# appears with the expected start/end [row, col] span in `tree-sitter parse`
# output. Runs after corpus tests in CI.

set -euo pipefail

fail=0
tmp=$(mktemp -t ts_batch_pos.XXXXXX)
trap 'rm -f "$tmp"' EXIT

assert_span() {
  local name=$1 input=$2 expected=$3
  printf '%s\n' "$input" >"$tmp"
  local out
  out=$(npx --no-install tree-sitter parse "$tmp" 2>/dev/null || true)
  if printf '%s' "$out" | grep -qF "$expected"; then
    echo "  PASS  $name"
  else
    echo "  FAIL  $name"
    echo "        expected to find: $expected"
    echo "        actual parse:"
    printf '%s\n' "$out" | sed 's/^/          /'
    fail=1
  fi
}

echo "Position-sensitive regression tests:"

# Regression: the VBS polyglot comment branch must not cause command_name to
# absorb leading whitespace (extras). Before the fix, indented `net` yielded
# `(command_name [0, 0] - [0, 7])` instead of `(command_name [0, 4] - [0, 7])`,
# which corrupted downstream highlighting in consumers like tally.
assert_span \
  "command_name starts after leading spaces" \
  "    net stop svc" \
  "(command_name [0, 4] - [0, 7])"

assert_span \
  "command_name starts after leading tab" \
  $'\techo hello' \
  "(command_name [0, 1] - [0, 5])"

assert_span \
  "command_name on unindented line starts at column 0" \
  "net stop svc" \
  "(command_name [0, 0] - [0, 3])"

if [ "$fail" -ne 0 ]; then
  exit 1
fi
