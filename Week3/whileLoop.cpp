#include <iostream>

int main(){

    // uses a while loop to create multiplication through repeated addition
    // as well as division through repeated subtraction
    int num1 = 0, num2 = 0;
    int counter = 0, product = 0;
    int remainder = 0, quotient = 0;

    std::cout << "Enter a number" << std::endl;

    std::cin >> num1;

    std::cout << "Enter a number" << std::endl;
    std::cin >> num2;

    while(counter < num2){
        product = product + num1;
 
        counter = counter + 1;
    }

    std::cout << num1 << "*" << num2 << " = " << product << std::endl;

    // integer division through repeated subtraction

    remainder = num1;


    if ( num2 > remainder){
        std::cout << num1 << "/" << num2 << " = 0 remainder " << num1 << std::endl;
    }
    else{
        while(remainder > num2){
            remainder = remainder - num2;
            quotient = quotient + 1;
        }
        std::cout << num1 << "/" << num2 << " = " << quotient << " remainder " << remainder << std::endl;
    }

}