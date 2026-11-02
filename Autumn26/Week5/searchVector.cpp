#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<double>& vin){
    if (vin.size() == 0){
        return -1;
    }
    else{
        for(int index = 0; index < vin.size(); index++){
            if(vin[index] == n){
                return index;
            }
        }
    }
    return -1;
}

int main(){
    std::vector<double> v;

    std::cout << (search_vector(2,v) == -1) << std::endl;

    v = {1,2,3,4,5};
    std::cout << (search_vector(2,v) == 1) << std::endl;

    std::cout << (search_vector(1,v) == 0) << std::endl;

    std::cout << (search_vector(5,v) == 4) << std::endl;

    std::cout << (search_vector(6,v) == -1) << std::endl;




}