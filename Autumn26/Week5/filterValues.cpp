#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();
    for(int index = 0; index < vin.size(); index++){
        if(vin[index] < t){
            vout.push_back(vin[index]);
        }
    }
}

int main(){
    std::vector<double> v1{0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5};
    std::vector<double> v2;
    filter_v(v1, 3.3, v2);
    for(int count = 0; count < v2.size(); count++){
        std::cout << v2[count] << std::endl;
    }

    std::cout << std::endl;
    
    filter_v(v1, 1.04, v2);
    for(int count = 0; count < v2.size(); count++){
        std::cout << v2[count] << std::endl;
    }
    


}