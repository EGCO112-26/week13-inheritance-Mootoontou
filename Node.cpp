#include "Node.h"
#include <iostream>

Node::Node(long d)
    : data(d), next(nullptr)
{
}

Node::~Node(){
    if (data < 100) {
        std::cout << ' ';
    }
    std::cout << "Node " << data << " is being deleted" << std::endl;
}

void Node::display() const{
    std::cout << " Node data:" << data << std::endl;
}

long Node::getData() const{
    return data;
}
