#pragma once

#include "Node.h"

class LL {
private:
    Node* head;

public:
    LL();
    ~LL();
    void add(Node* node);
    void show_all() const;
};
