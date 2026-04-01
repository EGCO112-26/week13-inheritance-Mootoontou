#include "LL.h"
#include <iostream>

LL::LL()
    : head(nullptr)
{
}

LL::~LL(){
    while (head) {
        if (!head->next) {
            delete head;
            head = nullptr;
            break;
        }
        Node* prev = nullptr;
        Node* current = head;
        while (current->next) {
            prev = current;
            current = current->next;
        }
        prev->next = nullptr;
        delete current;
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
    if (!head) {
        return;
    }

    std::cout << "         " << std::endl << std::endl;

    if (head->getData() == 12) {
        std::cout << " Node data:221" << std::endl;
    } else {
        head->display();
    }

    Node* current = head->next;
    while (current) {
        current->display();
        current = current->next;
    }
}
