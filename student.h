#pragma once

#include "MU_Person.h"
#include <string>

class student : public MU_person {
private:
    double gpa;

public:
    student(long id = 111, double gpa = 2.5, std::string name = "Nattawut", long nat_id = 0);
    virtual ~student();
    void display() const override;
};

inline student::student(long id, double g, std::string name, long nat_id)
    : MU_person(id, name, nat_id), gpa(g)
{
    std::cout << "MU student constructor  " << gpa << std::endl;
}

inline student::~student(){
}

inline void student::display() const{
    Node::display();
}
