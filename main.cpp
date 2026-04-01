#include <iostream>
#include <string>
#include "LL.h"
#include "student.h"

int main(int argc, char* argv[]){
    LL list;

    if (argc > 1) {
        int argIndex = 1;
        while (argIndex + 2 < argc) {
            long id = std::stol(argv[argIndex]);
            double gpa = std::stod(argv[argIndex + 1]);
            std::string name = argv[argIndex + 2];
            list.add(new student(id, gpa, name, id));
            argIndex += 3;
        }
    } else {
        list.add(new student(6613121, 2.0, "Vivi", 3101101111111));
        list.add(new student(6613122, 3.9, "Atom", 3101102222222));
        list.add(new student(6613123, 2.5, "Nattawut", 3101103333333));
    }

    list.show_all();
    std::cout << std::endl;

    return 0;
}
