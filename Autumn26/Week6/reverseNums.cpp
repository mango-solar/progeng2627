#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    std::vector<int> v;

    infile.open("input.txt");

    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    for(int index = v.size()-1; index >= 0; index--){
        std::cout << v[index] << std::endl;
    }
}