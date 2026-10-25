#include <iostream>

int smallestFactor(int num){
    bool foundFactor = false;
    for(int factor = 2; factor < num; factor++ ){
        if((num % factor) == 0){
            return factor;
        }
    }
    return 0;
}

int main(){
    int num1, num2;
    std::cin >> num1 >> num2;

    for(num1; num1 <= num2; num1++){
        if(smallestFactor(num1) == 0){
            std::cout << num1 << std::endl;
        }
    }
}