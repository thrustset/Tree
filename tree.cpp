#include "tree.hpp"

Tree::Tree() :
    name{0}
{
    root = new Node();
}

Tree::Tree(char name) :
    name{name}
{
    root = new Node();
}

Tree::Tree(char name, Node *newRoot) :
    name{name}
{
    root = new Node(newRoot);
}

Tree::~Tree() {
    delete root;
}

auto Tree::add(unsigned int newValue) -> void {

}

auto operator<<(std::ostream &os, const Tree &tree) -> std::ostream & {
    os << "Tree " << tree.name << ":\n";
    os << tree.root << "\n";
    return os;
}
