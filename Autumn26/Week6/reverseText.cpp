#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    infile.open("reverse.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();
    
    for(int index = v.size()-1; index >= 0; index--){
        std::cout << v[index] << std::endl;
    }
}