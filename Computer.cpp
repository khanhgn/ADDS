#include "Computer.h"
#include <string>
#include <iostream>


Computer::Computer(): name("John"){}

Computer::Computer(std::string name): name(name){}

Move* Computer:: makeMove(){
    std::string newMove;
    std::cout<<"Enter move: ";
    std::cin>> newMove;
    Move* playerMove = moveLists.selectMove(newMove);
    return playerMove;
}

std::string Computer::getName(){
    return name;
}