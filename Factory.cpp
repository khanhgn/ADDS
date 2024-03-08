#include "Factory.h"
#include <iostream>

Factory::Factory(){
    list = {
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

Move* Factory::selectMove(std::string selection){
    if(list.find(selection)!=list.end()){
        return list[selection];
    } else {
        std::cout<<"Bad Choice"<<std::endl;
    }
}