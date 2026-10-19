#include <iostream>

int main(){
    int num = 1, max = 1;
    int steps = 0;

    std::cout << "Enter a natural number:  ";
    std::cin >> num;

    while (num != 1){
        std::cout << num << "\t";
        if ((num % 2) == 0){
            num = num / 2;
        }
        else{
            num = (3 * num) + 1;
        }

        if (num > max){
            max = num;
        }

        steps = steps + 1;
    }

    std::cout << "1" << std::endl << "1 was reached in " << steps << " steps with a peak of " << max;
}