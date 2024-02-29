#include "Computer.h"

Computer::Computer(std::string name) : name(name) {}

char Computer::makeMove() {
    return 'R'; 
}

std::string Computer::getName() {
    return name;
}
