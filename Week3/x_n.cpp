#include <iostream>

int main(){
    int base = 0, power = 0;
    int num = 1;

    std::cout << "Enter a base: ";
    std::cin >> base;
    std::cout << "Enter a power: ";
    std::cin >> power;

    for( int count = 0; count < power; count++){
        num = num * base;
    }
    std::cout << base << "^" << power << " = " << num;
}