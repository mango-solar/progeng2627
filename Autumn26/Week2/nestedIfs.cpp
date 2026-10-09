#include <iostream>

int main(){
    //lets user input a year and checks if its a leap year
    int year,rem4,rem100,rem400;

    std::cout << "Please enter a year" << std::endl;
    std::cin >> year;

    rem4 = year % 4;
    rem100 = year % 100;
    rem400 = year % 400;

    if (rem4 == 0){
        if (rem100 == 0){
            if (rem400 == 0) {
                std::cout << "The year " << year << " is a leap year" << std::endl;
            }
            else{
                std::cout << "The year " << year << " is not a leap year" << std::endl;
            }
        }
        else{
            std::cout << "The year " << year << " is a leap year" << std::endl;
        }
    }
    else{
        std::cout << "The year " << year << " is not a leap year";
    }
}