#pragma once

#include "Node.h"
#include <iostream>

class Thai_person : public Node {
private:
    long nat_id;

public:
    Thai_person(long id = 0, long nat_id = 0);
    virtual ~Thai_person();
    void display_thai() const;
    virtual void display() const override;
};

inline Thai_person::Thai_person(long id, long nat_id)
    : Node(id), nat_id(nat_id)
{
}

inline Thai_person::~Thai_person(){
}

inline void Thai_person::display_thai() const{
}

inline void Thai_person::display() const{
    Node::display();
}

