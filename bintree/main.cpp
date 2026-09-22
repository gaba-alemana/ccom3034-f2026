// main.cpp - tests empty binary trees (no data)
// Copyright 2026 Humberto Ortiz Zuazaga
// Based on BinaryTree class by Pat Morin
// in https://opendatastructures.org/
// Released under
// https://creativecommons.org/licenses/by/2.5/ca/

#include <iostream>
#include "bintree.h"

int main() {
  BinaryTree<BTNode> arbol;

  arbol.root = new BTNode();
  arbol.root->right = new BTNode();
  arbol.root->right->right = new BTNode();
  arbol.root->right->right->right = new BTNode();

  std::cout << arbol.size() << std::endl;
  return 0;
}
