#include "treeNode.h"

TreeNode::TreeNode(std::string cntt): content {cntt} {}

std::string TreeNode::getContent() const {
  // your code starts here
  return "";
}

TreeNode *TreeNode::getLeftChild() const {
  // your code starts here
  return nullptr;
}
TreeNode *TreeNode::getRightChild() const {
  // your code starts here
  return nullptr;
}

void TreeNode::updateLeftChild(TreeNode *lChild) {
  // your code starts here
}

void TreeNode::updateChildren(TreeNode *lChild, TreeNode *rChild) {
  // your code starts here
}

OperatorNode::OperatorNode(std::string cntt): TreeNode{cntt} {}

bool OperatorNode::evaluate(const std::map<std::string, bool> &assignment) const {
  // your code starts here
  return false;
}

ConstantNode::ConstantNode(std::string cntt): TreeNode{cntt} {}

bool ConstantNode::evaluate(const std::map<std::string, bool> &assignment) const {
  // your code starts here
  return false;
}

VariableNode::VariableNode(std::string cntt): TreeNode{cntt} {}

bool VariableNode::evaluate(const std::map<std::string, bool> &assignment) const {
  // your code starts here
  return false;
}

TreeNode::~TreeNode() {
  // your code starts here
}
