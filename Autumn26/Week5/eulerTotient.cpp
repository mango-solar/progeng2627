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

int euler_totient(int n){
    int coprime = 0;
    for(int i = 1; i < n; i++){
        if(gcd(n,i) == 1){
            coprime++;
        }
    }
    return coprime;
}

int main(){
    std::cout << (euler_totient(9) == 6) << std::endl;
    std::cout << (euler_totient(12) == 4) << std::endl;
    std::cout << (euler_totient(17) == 16) << std::endl;
    std::cout << (euler_totient(8) == 4) << std::endl;
    std::cout << (euler_totient(67) == 66) << std::endl;
}