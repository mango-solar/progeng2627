#include <iostream>

int main(){
    //Lets user input a number
    //Outputs if its a mutiple of 3 or not
    int num;
    std::cout << "Please enter a whole number" << std::endl;
    std::cin >> num;
    if ((num % 3) == 0){
        std::cout << "The number is a multiple of 3" << std::endl;
    }
    else{
        std::cout << "The number is not a multiple of 3" << std::endl;
    }

    //Lets user enter a number and returns the absolute value of that number
    double n,absv;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    if (n<0){
        absv = -n;
    }
    else{
        absv = n;
    }
    std::cout << "|n| = " << absv << std::endl;
}