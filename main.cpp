#include "VNScriptLexer.h"
#include "VNScriptParser.h"
#include <antlr4-runtime.h>
#include <fstream>
#include <iostream>

using namespace antlr4;

// Рекурсивная функция для печати дерева с отступами
void printTree(tree::ParseTree *tree, Parser *parser, int indent = 0) {
  std::string ind(indent * 2, ' ');
  std::string nodeText = tree->getText();

  // Получаем имя правила, если это RuleContext
  auto ruleCtx = dynamic_cast<RuleContext *>(tree);
  if (ruleCtx) {
    std::string ruleName = parser->getRuleNames()[ruleCtx->getRuleIndex()];
    std::cout << ind << ruleName;
    if (!nodeText.empty()) {
      std::cout << ": " << nodeText;
    }
    std::cout << std::endl;
  } else {
    // Это терминальный узел (токен)
    std::cout << ind << nodeText << std::endl;
  }

  // Рекурсивно обходим дочерние узлы
  for (size_t i = 0; i < tree->children.size(); ++i) {
    printTree(tree->children[i], parser, indent + 1);
  }
}

int main() {
  std::ifstream stream("../novel_example.txt");
  ANTLRInputStream input(stream);
  VNScriptLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  VNScriptParser parser(&tokens);
  auto *tree = parser.script();

  printTree(tree, &parser);

  return 0;
}
