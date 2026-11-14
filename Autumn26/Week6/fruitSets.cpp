#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s,const std::vector<std::string>& vin){
    for(int index = 0; index < vin.size(); index++){
        if(vin[index] == s){
            return index;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    
    for(int index = 0; index < vin1.size(); index++){
        vout.push_back(vin1[index]);
    }
    for(int count = 0; count < vin2.size(); count++){
        if((search_vector(vin2[count],vout)) == -1){
            vout.push_back(vin2[count]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();

    for(int index = 0; index < vin1.size(); index++){
        if((search_vector(vin1[index],vin2)) != -1){
            vout.push_back(vin1[index]);
        }
    } 
}

int main(){
    std::string inFileName1,inFileName2;
    std::cout << "Enter the name of the first input file: ";
    std::cin >> inFileName1;
    inFileName1 = inFileName1 + ".txt";
    std::cout << "Enter the name of the second input file: ";
    std::cin >> inFileName2;
    inFileName2 = inFileName2 + ".txt";

    std::ifstream inFile1,inFile2;
    inFile1.open(inFileName1);
    inFile2.open(inFileName2);

    if((!inFile1.is_open()) || (!inFile2.is_open())){
        std::cout << "There was an error opening input files" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v1,v2,union_v,intersection_v;

    std::string tmp;

    while(inFile1 >> tmp){
        v1.push_back(tmp);
    }
    inFile1.close();

    while(inFile2 >> tmp){
        v2.push_back(tmp);
    }

    std::ofstream outFile1,outFile2;
    union_vector(v1,v2,union_v);
    intersection_vector(v1,v2,intersection_v);
    outFile1.open("union.txt");
    outFile2.open("intersection.txt");

    if((!outFile1.is_open()) || (!outFile2.is_open())){
        std::cout << "Error outputting to files" << std::endl;
        return EXIT_FAILURE;
    }

    for(int index = 0; index < union_v.size(); index++){
        outFile1 << union_v[index] << std::endl;
    }
    outFile1.close();

    for(int index = 0; index < intersection_v.size(); index++){
        outFile2 << intersection_v[index] << std::endl;
    }
    outFile2.close();

}