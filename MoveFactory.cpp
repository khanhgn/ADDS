#include "MoveFactory.h"
#include <iostream>

MoveFactory::MoveFactory(){
    moveList = {
        {"Rock",&rock},
        {"Paper",&paper},
        {"Scissors",&scissors},
        {"Monkey",&monkey},
        {"Robot",&robot},
        {"Pirate",&pirate},
        {"Zombie",&zombie},
        {"Ninja",&ninja}
    };
}

Move* MoveFactory::selectMove(std::string selection){
    while(moveList.find(selection)==moveList.end()){
        std::cout<<"Bad Choice"<<std::endl;
        std::cout<<"Enter Valide Move: "<<std::endl;
        std::cin>>selection;
    }
    return moveList[selection];
}