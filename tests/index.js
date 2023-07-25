const Parser = require('tree-sitter')
const MessageTemplates = require('@agilewallaby/tree-sitter-message-templates')

const parser = new Parser()
parser.setLanguage(MessageTemplates)

const sourceCode = 'User {username} logged in from {ip_address} {@somedata}'
const tree = parser.parse(sourceCode)

console.log(tree.rootNode.toString())
// console.log(tree.rootNode.child(0).text)
for (const child of tree.rootNode.children) {
    console.log(child.type)
    console.log(child.text)
    console.log(child.childCount)
    console.log()
}
