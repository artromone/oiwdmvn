#include "VNScriptLexer.h"
#include "VNScriptParser.h"
#include <antlr4-runtime.h>
#include <fstream>
#include <iostream>
#include <tree/Trees.h>
#include <typeinfo>

using namespace antlr4;

namespace {
int nodeId = 0;
}

std::string getNodeLabel(antlr4::tree::ParseTree *node,
                         VNScriptParser *parser) {
  auto *ctx = dynamic_cast<antlr4::ParserRuleContext *>(node);
  if (ctx && parser) {
    int ruleIndex = ctx->getRuleIndex();
    return parser->getRuleNames()[ruleIndex];
  }
  return node->getText();
}

void printDotTree(tree::ParseTree *node, std::ostream &out,
                  std::map<tree::ParseTree *, int> &ids,
                  VNScriptParser *parser) {
  int myId = nodeId++;
  ids[node] = myId;
  std::string label = getNodeLabel(node, parser);

  // Escape quotes for DOT
  for (auto &c : label)
    if (c == '"')
      c = '\'';

  out << "  node" << myId << " [label=\"" << label << "\"];\n";

  for (size_t i = 0; i < node->children.size(); ++i) {
    tree::ParseTree *child = node->children[i];
    int childId = nodeId;
    printDotTree(child, out, ids, parser);
    out << "  node" << myId << " -> node" << ids[child] << ";\n";
  }
}

int main() {
  std::ifstream stream("novel.txt");
  antlr4::ANTLRInputStream input(stream);
  VNScriptLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  VNScriptParser parser(&tokens);
  auto *tree = parser.script();
  std::cout << tree->toStringTree(&parser) << std::endl;

  // std::ofstream dotFile("tree.dot");
  // dotFile << "digraph ParseTree {\n";
  // std::map<tree::ParseTree *, int> ids;
  // printDotTree(tree, dotFile, ids, &parser);
  // dotFile << "}\n";
  // dotFile.close();

  return 0;
}
