#include "parser.h"
#include "treeNode.h"
#include "tokenizer.h"

FormulaParser::FormulaParser(std::string ln): tknzr {new Tokenizer{ln}} {}

TreeNode *FormulaParser::parseConjTerm() {
  // your code starts here
  return nullptr;
}

TreeNode *FormulaParser::parseTerm() {
  // your code starts here
  return nullptr;
}

TreeNode *FormulaParser::parseFormula() {
  // your code starts here
  return nullptr;
}

TreeNode * FormulaParser::getTreeRoot() {
  // your code starts here
  return nullptr;
}

FormulaParser::~FormulaParser() {
  // your code starts here
}

AssignmentParser::AssignmentParser(std::string ln): tknzr {new Tokenizer{ln}} {}

std::map<std::string, bool> AssignmentParser::parseAssignment() {
  std::map<std::string, bool> results;
  // your code starts here
  return results;
}

AssignmentParser::~AssignmentParser() {
  // your code starts here
}
