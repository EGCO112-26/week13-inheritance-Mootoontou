#pragma once

class Node {
protected:
    long data;

public:
    Node* next;

    Node(long = 0);
    virtual ~Node();
    virtual void display() const;
    long getData() const;
};

