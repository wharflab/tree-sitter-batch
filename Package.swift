// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "TreeSitterBatch",
    products: [
        .library(name: "TreeSitterBatch", targets: ["TreeSitterBatch"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBatch",
            dependencies: [],
            path: ".",
            exclude: [
                ".editorconfig",
                ".gitattributes",
                ".github",
                "binding.gyp",
                "bindings/c",
                "bindings/go",
                "bindings/node",
                "bindings/python",
                "bindings/rust",
                "Cargo.lock",
                "Cargo.toml",
                "CMakeLists.txt",
                "eslint.config.mjs",
                "examples",
                "go-compat",
                "go.mod",
                "go.sum",
                "grammar.js",
                "LICENSE",
                "Makefile",
                "node_types.go",
                "package-lock.json",
                "package.json",
                "pyproject.toml",
                "queries.go",
                "queries_test.go",
                "README.md",
                "setup.py",
                "src/grammar.json",
                "src/node-types.json",
                "test",
                "tree-sitter.json",
            ],
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries"),
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")],
        ),
        .testTarget(
            name: "TreeSitterBatchTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBatch",
            ],
            path: "bindings/swift/TreeSitterBatchTests",
        ),
    ],
    cLanguageStandard: .c11
)
