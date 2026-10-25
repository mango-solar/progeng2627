#include <iostream>

double maxTwo(double num1,double num2){
    double max;

    if(num1 > num2){
        max = num1;
    }
    else{
        max = num2;
    }

    return max;
}

double maxThree(double num1, double num2, double num3){
    double max;

    if ( num1 > num2 && num1 > num3){
        max = num1;
    }
    else if(num2 > num1 && num2 > num3){
        max = num2;
    }
    else{
        max = num3;
    }

    return max;
}



int main(){

    std::cout << (maxTwo(3.5 , 3) == 3.5) << std::endl;
    std::cout << (maxTwo(5 , 3.4) == 5) << std::endl;
    std::cout << (maxTwo(2 , 6.7) == 6.7) << std::endl;
    std::cout << (maxTwo(3.5 , 9) == 9) << std::endl;
    std::cout << (maxTwo(4 , 4) == 4) << std::endl << std::endl;


    std::cout << (maxThree(3,2,1) == 3) << std::endl;
    std::cout << (maxThree(2,3,1) == 3) << std::endl;
    std::cout << (maxThree(1,2,3) == 3) << std::endl;
    std::cout << (maxThree(3,3,3) == 3) << std::endl;
    std::cout << (maxThree(3,2.5,2) == 3) << std::endl;



}