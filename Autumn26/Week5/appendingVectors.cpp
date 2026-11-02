#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout.clear();
    for(int index = 0; index < vin1.size(); index++){
        vout.push_back(vin1[index]);
    }
    for(int index = 0; index < vin2.size(); index++){
        vout.push_back(vin2[index]);
    }

}

int main(){
    std::vector<int> v1{1,7,3,4};
    std::vector<int> v2{2,-2,19};
    std::vector<int> v;

    append_vectors(v1,v2,v);
    for(int count = 0; count < v.size(); count++){
        std::cout << v[count] << std::endl;
    }

    v1 = {1,3,5,7,9};
    v2 = {2,4,6,8};
    append_vectors(v1,v2,v);
    for(int count = 0; count < v.size(); count++){
        std::cout << v[count] << std::endl;
    }
}