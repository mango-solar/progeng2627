#include <iostream>

int main(){
    int row = 0,column = 0;
    int size;

    std::cin >> size;

    while ( row < size){
        while (column < size){
            std::cout << "*";
            column ++;
        }
        std::cout << std::endl;
        column = 0;
        row++;
    }
}