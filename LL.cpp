#include "LL.h"
#include <iostream>

LL::LL()
    : head(nullptr)
{
}

LL::~LL(){
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LL::add(Node* node){
    if (!node) return;
    node->next = nullptr;
    if (!head) {
        head = node;
        return;
    }
    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
    }
    tail->next = node;
}

void LL::show_all() const{
    Node* current = head;
    while (current) {
        current->display();
        std::cout << std::endl;
        current = current->next;
    }
}
