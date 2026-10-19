#include <iostream>

int main(){
    int num = 0, sum = 0;
    double average = 0, count = 0;

    std::cout << "Enter a number:  ";
    std::cin >> num;

    

    while (num != 0){

        count = count + 1;
        sum = sum + num;
        average = sum / count;

        std::cout << "Sum so far:  " << sum << std::endl;
        std::cout << "Average so far: " << average << std::endl;

        std::cout << "Enter a number:  ";
        std::cin >> num;

    }


}