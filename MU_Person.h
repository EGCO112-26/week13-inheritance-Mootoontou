#pragma once

#include "Thai_person.h"
#include <iostream>
#include <string>

class MU_person : public Thai_person {
private:
    std::string name;

public:
    MU_person(long id = 112, std::string name = "Prapaporn", long nat_id = 0);
    virtual ~MU_person();
    void display_person() const;
    virtual void display() const override;
};

inline MU_person::MU_person(long id, std::string name, long nat_id)
    : Thai_person(id, nat_id), name(std::move(name))
{
    std::cout << "MU person constructor " << data << std::endl;
}

inline MU_person::~MU_person(){
    std::cout << "MU_person destructor " << data << std::endl;
}

inline void MU_person::display_person() const{
    std::cout << "MU person info" << std::endl;
    display_thai();
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << data << std::endl;
}

inline void MU_person::display() const{
    display_person();
}
