// height.cpp - tests height() on binary trees
// Copyright 2026 Humberto Ortiz Zuazaga
// Based on BinaryTree class by Pat Morin
// in https://opendatastructures.org/
// Released under
// https://creativecommons.org/licenses/by/2.5/ca/

#include <iostream>
#include "bintree.h"

template<class Node>
int BinaryTree<Node>::height() {
  return height(root);
}

template<class Node>
int BinaryTree<Node>::height(Node *u) {
  // TODO - fix this function
  // You can follow the pattern we used in clear()
  // and size().
  return 0;
}

int main() {
  BinaryTree<BTNode> arbol;

  arbol.root = new BTNode();
  arbol.root->right = new BTNode();
  arbol.root->right->right = new BTNode();
  arbol.root->right->right->right = new BTNode();

  // should print 4
  std::cout << arbol.height() << std::endl;

  BinaryTree<BTNode> bt;
  bt.root = new BTNode();

  // should print 1
  std::cout << bt.height() << std::endl;

  bt.root->left = new BTNode();
  bt.root->right = new BTNode();
  
  // now should print 2
  std::cout << bt.height() << std::endl;
  
  return 0;
}

