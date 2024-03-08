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
    while(list.find(selection)==list.end()){
        std::cout<<"Bad Choice"<<std::endl;
        std::cout<<"Enter Valide Move: "<<std::endl;
        std::cin>>selection;
    }
    return list[selection];
}