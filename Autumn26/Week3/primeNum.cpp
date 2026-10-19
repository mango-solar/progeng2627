#include <iostream>

int main(){
    int num = 0;
    int cf = 2;
    bool found_factor = false;

    std::cout << "Enter an integer greater than 1: ";
    std::cin >> num;

    // (cf*cf) <= num is because if a factor isnt found between 0 and the square root there is no factor
    // because two factors above the square root are going to have a product > num
    while (found_factor == false && (cf * cf) <= num){
        if (( num % cf) == 0){
            std::cout << cf << std::endl;
            found_factor = true;
        }
        cf = cf + 1;
    }

    if (found_factor){
        std::cout << "The number is not prime";
    }
    else{
        std::cout << "The number is prime";
    }
    cf = 2;
    std::cout << std::endl;
    found_factor = false;
    

}