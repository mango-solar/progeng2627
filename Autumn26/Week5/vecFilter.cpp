#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    int noEntered, num, t;

    std::cout << "How many numbers to enter? ";
    std::cin >> noEntered;

    for (int i = 0; i < noEntered; i++){
        std::cout << std::endl << "Enter a number: ";
        std::cin >> num;
        numbers.push_back(num);

    }

    std::cout << "Display all numbers less than: ";
    std::cin >> t;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] < t){
            std::cout << numbers[i] << std::endl;
        }
    }


}