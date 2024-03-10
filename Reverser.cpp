#include <iostream>

class Reverser {
public:
    int reverseDigit(int value){
        if(value/10==0){
            return value;
        }
        // std::cout<<floor(log10(value))<<std::endl;
        int res = value%10*pow(10,floor(int(log10(value))))+reverseDigit(value/10);
        // std::cout<<res<<std::endl;
        return res;
    }
};

int main(){
    Reverser obj;
    std::cout<<obj.reverseDigit(12345)<<std::endl;
    return 0;
}