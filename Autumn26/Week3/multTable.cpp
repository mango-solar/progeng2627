#include <iostream>

int main(){
    int num = 0;
    int row = 0, column = 0;

    std::cin >> num;

    while (row < num){
        row++;
        while(column < (row * num)){
            column = column + row;
            std::cout << column << "\t";
        }
        column = 0;
        std::cout << std::endl;
    }
}