#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    std::string fileName;

    std::cout << "Enter filename: ";
    std::cin >> fileName;
    fileName = fileName + ".txt";

    infile.open(fileName);

    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();

}