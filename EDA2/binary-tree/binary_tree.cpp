#include <iostream>

template <typename T>
class BST {
private:
  struct Node {
    Node *left, *right;
    T info;
  }
  Node * root;

public:
  BST() : root(nullptr) {}
}
