#pragma once
#include <iostream>

class Node {
private:
    unsigned int value;
    Node *left;
    Node *right;
public:
    Node();
    explicit Node(unsigned int newValue);
    explicit Node(Node *newNode);
    ~Node();

    __attribute__((unused)) auto add(unsigned int newValue) -> void;

    auto friend operator<<(std::ostream &os, Node *node) -> std::ostream &;
};