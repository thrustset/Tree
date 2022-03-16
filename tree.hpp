#pragma once
#include <iostream>
#include "node.hpp"

class Tree {
private:
    char name;
    Node *root;
public:
    Tree();
    explicit Tree(char name);
    Tree(char name, Node *newRoot);
    ~Tree();

    auto add(unsigned int newValue) -> void;

    auto friend operator<<(std::ostream &os, const Tree &tree) -> std::ostream &;
};