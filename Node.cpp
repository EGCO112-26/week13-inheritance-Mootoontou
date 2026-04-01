#include "Node.h"
#include <iostream>

Node::Node(long d)
    : data(d), next(nullptr)
{
    std::cout << "Node constructor " << data << std::endl;
}

Node::~Node(){
    std::cout << "Node destructor " << data << std::endl;
}

void Node::display() const{
    std::cout << "Node data: " << data << std::endl;
}
