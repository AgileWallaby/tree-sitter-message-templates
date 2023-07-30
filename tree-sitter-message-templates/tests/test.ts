const Parser = require("tree-sitter")
const MessageTemplates = require("@agilewallaby/tree-sitter-message-templates")

describe("it does something", () => {

  const iterateChildren = (node) => {
    node.children.forEach((child, i) => {
        console.log(`${i}: ${child.type} - '${child.text}' (${child.childCount})`)
        iterateChildren(child)
    })
  }

  test("the thing", () => {
    const parser = new Parser();
    parser.setLanguage(MessageTemplates);

    const sourceCode =
      "User1 {user1:F2} {user2,-4:F1} {user3,4}";
    const tree = parser.parse(sourceCode);
    iterateChildren(tree.rootNode)
  });
});
