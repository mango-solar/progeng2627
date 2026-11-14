#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int index = 0; index < vin.size(); index++){
        if(vin[index] == s){
            return index;
        }
    }
    return -1;
}

int main(){
    std::ifstream infile1,infile2;
    std::vector<std::string> advert,words,meaning,translated;
    infile1.open("advertisement.txt");
    infile2.open("meanings.txt");

    if((!infile1.is_open()) || (!infile2.is_open())){
        std::cout << "Error opening files" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp1,temp2;
    while(infile1 >> temp1){
        advert.push_back(temp1);
    }
    infile1.close();

    while(infile2 >> temp1 >> temp2){
        words.push_back(temp1);
        meaning.push_back(temp2);
    }
    infile2.close();

    int position;
    for(int index = 0; index < advert.size(); index++){
        position = search_vector(advert[index],words);
        if(position != -1){
            translated.push_back(meaning[position]);
        }
        else{
            translated.push_back(advert[index]);
        }
    }

    std::ofstream outfile;
    std::string filename;
    std::cout << "Please enter a file to place output: ";
    std::cin >> filename;
    filename = filename + ".txt";
    outfile.open(filename);

    if(!outfile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int index = 0; index < translated.size(); index++){
        outfile << translated[index] << " ";
    }
    outfile.close();


}