#include <iostream>
#include <string>

int main(){


    int num = 1;
    int sum = -1;
    int average = 0;
    int counter = 0;


    while(num != 0){
        counter = counter + 1;
        sum = sum + num;
        average = sum/counter;

        std::cout << "sum so far: " << sum << std::endl;
        std::cout << "average so far: " << average << std::endl;
        std::cout << "Enter a number" << std::endl;
        std::cin >> num;


    }

}