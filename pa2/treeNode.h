#ifndef TNODE_H
#define TNODE_H

#include <string>

// abstract superclass of the syntax tree node
class TreeNode {
    std::string content;
    TreeNode *leftChild = nullptr;
    TreeNode *rightChild = nullptr;

  public:
    TreeNode(std::string cntt);
    // your code starts here

};

// concrete tree node of opertaor type
class OperatorNode : public TreeNode {
  public:
    OperatorNode(std::string cntt);
    // your code starts here
};

// concrete tree node of varibale type
class VariableNode : public TreeNode {
  public:
    VariableNode(std::string cntt);
    // your code starts here
};

#endif
