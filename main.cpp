#include "VNScriptLexer.h"
#include "VNScriptParser.h"
#include <antlr4-runtime.h>
#include <fstream>
#include <iostream>
#include <tree/Trees.h>
#include <typeinfo>

int main() {
  std::ifstream stream("../novel_example.txt");
  antlr4::ANTLRInputStream input(stream);
  VNScriptLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  VNScriptParser parser(&tokens);
  auto *tree = parser.script();
  std::cout << tree->toStringTree(&parser) << std::endl;
  return 0;
}
