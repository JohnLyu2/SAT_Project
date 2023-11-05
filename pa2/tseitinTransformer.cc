#include "tseitinTransformer.h"

TseitinTransformer::TseitinTransformer(TreeNode *root): formulaRoot{root} {}

int TseitinTransformer::transSubformula(TreeNode* subRoot) {
  // your code starts here
  return 0;
}

void TseitinTransformer::addNegEq(int curID, int childID) {
  // your code starts here
}

void TseitinTransformer::addOrEq(int curID, int leftID, int rightID) {
  // your code starts here
}

void TseitinTransformer::addAndEq(int curID, int leftID, int rightID) {
  // your code starts here
}

std::vector<std::vector<int>> TseitinTransformer::transform() {
  // your code starts here
  return cnf;
}

std::string TseitinTransformer::cnfString() const {
  std::string result = "";
  // your code starts here
  return result;
}

unsigned int TseitinTransformer::getVarNum() const {
  // your code starts here
  return 0;
}
