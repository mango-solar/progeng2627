#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    merged.clear();
    int v1Index = 0, v2Index = 0;

    while((v1Index < v1.size()) && (v2Index < v2.size())){
        if(v1[v1Index] < v2[v2Index]){
            merged.push_back(v1[v1Index]);
            v1Index++;
        }
        else{
            merged.push_back(v2[v2Index]);
            v2Index++;
        }
    }

    if(v1Index == v1.size()){
        for(int index = v2Index; index < v2.size(); index++){
            merged.push_back(v2[index]);
        }
    }
    else{
        for(int index = v1Index; index < v1.size(); index++){
            merged.push_back(v1[index]);
        }
    }
}

int main(){
    std::vector<int> v1{1,3,5,6};
    std::vector<int> v2{4,6,10};
    std::vector<int> out;
    std::vector<int> expected{1,3,4,5,6,6,10};
    merge_vectors_int(v1,v2,out);

    if(out == expected){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "failed" << std::endl;
    }

    v1 = {1,4,7,9};
    v2 = {1,2,6,12,15,16};
    expected = {1,1,2,4,6,7,9,12,15,16};
    merge_vectors_int(v1,v2,out);

    if(out == expected){
        std::cout << "Passed" << std::endl;
    }
    else{
        std::cout << "failed" << std::endl;
    }

    v1 = {2,4,5};
    v2 = {1,3,6};
    expected = {1,2,3,4,5,6};
    merge_vectors_int(v1,v2,out);

    if(out == expected){
        std::cout << "Passed" << std::endl;
    }
    else{
        std::cout << "failed" << std::endl;
    }
}