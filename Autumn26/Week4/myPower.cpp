#include <iostream>
#include <cmath>

double myPow(double base,int power){
    double total = 1;
    
    if(power > 0){
        for (int i = 0; i < power;i++){
            total = total * base;
        }   
    }
    else{
        for(int i = 0; i < -power;i++){
            total = total / base;
        }
    }

    return total;
}

int main(){
    std::cout << "2^3 = "    << myPow(2,3) << std::endl;
    std::cout << "0.5^2 = "  << myPow(0.5,2) << std::endl;
    std::cout << "1^0 = "    << myPow(1,0) << std::endl;
    std::cout << "2^-2 = "   << myPow(2,-2) << std::endl;
    std::cout << "0.5^-4 = " << myPow(0.5,-4) << std::endl;
}