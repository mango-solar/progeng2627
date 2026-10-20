#include <iostream>

int main(){
    int lower = 0, upper = 0, num = 0;
    int location = -1;

    std::cout << "Enter the lower bound of your number range:  ";
    std::cin >> lower;
    std::cout << "Enter the upper bound of your number range:  ";
    std::cin >> upper;

    while (location != 0){
        num = (upper + lower) /2;
        std::cout << "Is " << num << " the number you are thinking of?" << std::endl;
        std::cout << "Enter 0 for yes, enter -1 if it is lower than your number and 1 if it is higher" << std::endl;
        std::cin >> location;

        if (location == -1){
            lower = num + 1;
        }
        else if (location == 1){
            upper = num - 1;
        }

        std::cout << std::endl;

    }
    
}