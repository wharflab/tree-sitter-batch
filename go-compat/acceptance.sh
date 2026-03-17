#!/usr/bin/env bash
set -euo pipefail

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
tmpdir="$(mktemp -d)"
trap 'rm -rf "$tmpdir"' EXIT

cat >"$tmpdir/go.mod" <<EOF
module tree_sitter_batch_go_compat_smoke

go 1.26.0

require github.com/wharflab/tree-sitter-batch v0.0.0

replace github.com/wharflab/tree-sitter-batch => $repo_root
EOF

mkdir -p "$tmpdir/smoke"
cp "$repo_root/go-compat/smoke/main.go" "$tmpdir/smoke/main.go"

(
  cd "$tmpdir"
  GO111MODULE=on go get github.com/tree-sitter/go-tree-sitter@latest
  go mod tidy
  cd smoke
  CGO_ENABLED=1 go run .
)
