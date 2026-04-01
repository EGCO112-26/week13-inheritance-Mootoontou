#include <iostream>
#include "LL.h"
#include "student.h"

int main(){
    std::cout << "LL_test running" << std::endl;
    LL list;
    list.add(new student(6613121, 2.0, "Vivi", 3101101111111));
    list.add(new student(6613122, 3.9, "Atom", 3101102222222));
    list.add(new student(6613123, 2.5, "Nattawut", 3101103333333));

    std::cout << std::endl << "======= show all nodes =======" << std::endl;
    list.show_all();

    return 0;
}
