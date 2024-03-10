#include <iostream>
#include <cmath>
#include <string>

#include "Truckloads.h"

void Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        trucks++;
        return;
    }
    int curr = numCrates/2;
    numTrucks(curr,loadSize);
    numTrucks(numCrates-(int)curr,loadSize);
}

int Truckloads::getTrucks(){
    return trucks;
}

// int main(){
//     Truckloads truck;
//     truck.numTrucks(1024,5);
//     std::cout<<truck.getTrucks()<<std::endl;
//     return 0;
// }