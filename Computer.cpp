#include "Computer.h"

Computer::Computer(const std::string& name) : name(name) {}

char Computer::makeMove() {
    return 'R'; 
}

std::string Computer::getName() const {
    return name;
}
