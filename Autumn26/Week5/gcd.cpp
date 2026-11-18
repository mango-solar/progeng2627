#include <iostream>
 
int gcd(int num1,int num2){
    int remainder = 0,product = 0;
    bool found = false;

    while(!found){
        remainder = num1 - (num2 * (num1/num2));
        if (remainder == 0){
            return num2;
        }
        else{
            num1 = num2;
            num2 = remainder;
        }
    }
    return -1;
}

int main(){
    std::cout << (gcd(48,18) == 6) << std::endl;
    std::cout << (gcd(1071,462) == 21) << std::endl;
    std::cout << (gcd(132,8) == 4) << std::endl;
}
