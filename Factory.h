#include "Move.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Robot.h"
#include "Ninja.h"
#include "Paper.h"
#include <unordered_map>
#include <string>

class Factory {
private:
    Rock rock;
    Paper paper;
    Scissors scissors;
    Zombie zombie;
    Pirate pirate;
    Ninja ninja;
    Robot robot;
    Monkey monkey;
public:
    std::unordered_map<std::string,Move*> list;
    Factory();
    Move* selectMove(std::string selection);
};