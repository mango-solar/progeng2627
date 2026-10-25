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
    std::cout << smallestFactor(97) << std::endl;
    std::cout << smallestFactor(105) << std::endl;
    std::cout << smallestFactor(81) << std::endl;
    std::cout << smallestFactor(10) << std::endl;
    std::cout << smallestFactor(17) << std::endl;


}