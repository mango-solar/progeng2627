#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n,num;

    std::cout << "How many number do you want to enter: " << std::endl;
    std::cin >> n;
    for(int i = 0; i < n;i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> num;
        v.push_back(num);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}