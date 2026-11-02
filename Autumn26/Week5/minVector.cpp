#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double min,minIndex;

    if (vin.size() == 0){
        return -1;
    }
    else{
        min = vin[0];
        minIndex = 0;

        for(int index = 0; index < vin.size(); index++){
            if(vin[index] < min){
                min = vin[index];
                minIndex = index;
            }
        }
    }

    return minIndex;

}
int main(){
    std::vector<double> v;

    std::cout << (min_vector_element(v) == -1) << std::endl;

    v = {1,2,3};
    std::cout << (min_vector_element(v) == 0) << std::endl;

    v = {1.5,-1,2};
    std::cout << (min_vector_element(v) == 1) << std::endl;

    v = {0.5,1.5,-0.25};
    std::cout << (min_vector_element(v) == 2) << std::endl;

}