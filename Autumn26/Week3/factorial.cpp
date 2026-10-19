#include <iostream>

int main(){
    int num = 0;
    int total = 1;

    std::cout << "Enter the number you want the factorial of: ";
    std::cin >> num;

    for (int count = 1; count <= num; count++){
        total = total * count;
    }
    std::cout << num << "! = " << total;

}