#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <unordered_set>

class Move{
public:
    std::string name;
    std::unordered_set<std::string> winConditions;
    std::string getName();
    std::unordered_set<std::string> findWin();
};

#endif