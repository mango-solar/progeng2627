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

double sumOfPow(double x , int n){
    double sum = 0;
    double temp;

    for(int i = 1; i <= n; i++){
        temp = myPow(x,i);
        sum = sum + temp;
    }

    return sum;
}

int main(){
    std::cout << (sumOfPow(2,4) == 30) << std::endl;
    std::cout << (sumOfPow(0.5,3) == 0.875) << std::endl;
    std::cout << (sumOfPow(3,4) == 120) << std::endl;




}