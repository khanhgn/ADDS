#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;
#include<iostream>
int main(){
    Human human("Khanh");
    Computer comp;
    Referee ref;
    Player* winner = ref.refGame(&human,&comp);
    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }
    return 0;
}