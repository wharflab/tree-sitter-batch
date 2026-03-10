import XCTest
import SwiftTreeSitter
import TreeSitterBatch

final class TreeSitterBatchTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_batch())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Batch grammar")
    }
}
