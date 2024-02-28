#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
public:
    Computer(const std::string& name = "Computer");
    char makeMove() override;
    std::string getName() const override;

private:
    std::string name;
};

#endif 
