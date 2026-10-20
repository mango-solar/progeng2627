#include <iostream>

int main(){
    int num = 0, max =0, min = 0;

    std::cout << "Enter a number:  ";
    std::cin >> num;

    max = num;
    min = num;
    std::cout << "Current maximum is: " << max << std::endl;
    std::cout << "Current minimum is: " << min << std::endl;

    while (num != 0){
        std::cout << "Enter a number: ";
        std::cin >> num;

        if (num > max){
            max = num;
        }
        else if (num < min){
            min = num;
        }

        std::cout << "Current maximum is: " << max << std::endl;
        std::cout << "Current minimum is: " << min << std::endl << std::endl;

    }

}