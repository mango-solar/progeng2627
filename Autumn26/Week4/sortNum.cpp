#include <iostream>

void mySwap(double& num1, double& num2){

    double temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

}

void sortTwoNum(double& num1, double& num2){
    double temp;
    if (num1 > num2){
        mySwap(num1,num2);
    }
}


void sortThreeNum(double& num1,double& num2,double& num3){
    if(num1 > num2){
        mySwap(num1,num2);
    }
    if(num1 > num3){
        mySwap(num1,num3);
    }
    if(num2 > num3){
        mySwap(num2,num3);
    }

}

int main(){
    double n1,n2,n3;

    std::cout << "Please enter two numbers" <<std::endl;
    std::cin >> n1 >> n2;
    sortTwoNum(n1,n2);
    std::cout << n1 << " " << n2 <<std::endl << std::endl;

    n1 = 1,n2 = 2,n3 = 3;
    sortThreeNum(n1,n2,n3);
    std::cout << (n1 == 1) << (n2 == 2) << (n3 == 3) << std::endl;

    n1 = 3,n2 = 1,n3 = 1;
    sortThreeNum(n1,n2,n3);
    std::cout << (n1 == 1) << (n2 == 2) << (n3 == 3) << std::endl;

    n1 = 2,n2 = 3,n3 = 1;
    sortThreeNum(n1,n2,n3);
    std::cout << (n1 == 1) << (n2 == 2) << (n3 == 3) << std::endl;





}