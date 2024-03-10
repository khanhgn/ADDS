#include <iostream>

class Truckloads {
private:
    int trucks = 0;
    int count = 0;
public:
    void numTrucks(int numCrates, int loadSize){
        if(numCrates <= loadSize){
            trucks++;
            return;
        }
        int curr = numCrates/2;
        numTrucks(curr,loadSize);
        numTrucks(numCrates-(int)curr,loadSize);
    }
    int getTrucks(){
        return trucks;
    }
};

int main(){
    Truckloads truck;
    truck.numTrucks(1024,5);
    std::cout<<truck.getTrucks()<<std::endl;
    return 0;
}