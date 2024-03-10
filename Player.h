#ifndef PLAYER_H
#define PLAYER_H
#include "MoveFactory.h"

#include <string>

class Player {
public:
    MoveFactory moveLists;
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif