import XCTest
import SwiftTreeSitter
import TreeSitterHurl

final class TreeSitterHurlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hurl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Hurl grammar")
    }
}
