#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::string inFileName, outFileName;
    std::ifstream infile;

    std::cout << "Enter name of input file: ";
    std::cin >> inFileName;
    inFileName = inFileName + ".txt";
    infile.open(inFileName);

    std::vector<int> v;

    if(!infile.is_open()){
        std::cout << "Error opening input file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    std::ofstream outfile;
    std::cout << "Enter the name of the output file: ";
    std::cin >> outFileName;
    outFileName = outFileName + ".txt";


    outfile.open(outFileName);

    if(!outfile.is_open()){
        std::cout << "Error opening output file";
        return EXIT_FAILURE;
    }

    for(int index = v.size()-1; index >= 0; index--){
        outfile << v[index] << std::endl;
    }

    outfile.close();
}