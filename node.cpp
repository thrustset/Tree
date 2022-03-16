#include "node.hpp"

Node::Node() :
    value{0}
{
    left = nullptr;
    right = nullptr;
}

Node::Node(unsigned int newValue) :
    value{newValue}
{
    left = nullptr;
    right = nullptr;
}

Node::Node(Node *newNode) {
    if(newNode) {
        value = newNode->value;
        left = new Node(newNode->left);
        right = new Node(newNode->right);
    } else {
        value = 0;
        left = nullptr;
        right = nullptr;
    }
}

Node::~Node() {
    delete left;
    delete right;
}

__attribute__((unused)) auto Node::add(unsigned int newValue) -> void {

}

auto operator<<(std::ostream &os, Node *node) -> std::ostream & {
    os << node->value << "\n";

    if(node->left)   os << node->left;
    if(node->right)  os << &node->right;

    return os;
}


