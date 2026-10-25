#include <iostream>

void intDivision(int num1,int num2,int& result,int& remainder){
    int count = 0;
    if (num2 > num1){
        remainder = num2;
    }
    else{
        while(num1 >= num2){
            num1 = num1 - num2;
            count++;
        }
        remainder = num1;
    }
    result = count;
}

int main(){
    int quotient,remainder;

    intDivision(6,3,quotient,remainder);
    std::cout << (quotient == 2) << (remainder == 0) << std::endl;

    intDivision(81,4,quotient,remainder);
    std::cout << (quotient == 20) << (remainder == 1) << std::endl;

    intDivision(110,17,quotient,remainder);
    std::cout << (quotient == 6) << (remainder == 8) << std::endl;

}