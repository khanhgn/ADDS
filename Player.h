#ifndef PLAYER_H
#define PLAYER_H
#include "Factory.h"

#include <string>

class Player {
public:
    Factory moveLists;
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif