#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()){
        int tmp;
        int total = 0;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            total = total + tmp;
        }
        std::cout << total << std::endl;
        infile.close();
        
    }
    else{
        std::cout << "Error opening file" << std::endl;
    }


}