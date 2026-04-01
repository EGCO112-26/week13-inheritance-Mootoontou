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
    std::cout << "Thai person constructor " << nat_id << std::endl;
}

inline Thai_person::~Thai_person(){
    std::cout << "Thai person destructor " << nat_id << std::endl;
}

inline void Thai_person::display_thai() const{
    std::cout << "Thai person info" << std::endl;
    std::cout << "Thai nat id: " << nat_id << std::endl;
    std::cout << "Node data (mu_id): " << data << std::endl;
}

inline void Thai_person::display() const{
    display_thai();
}

