#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& v1){
    int count = 0;
    for(int index = 0; index < v1.size(); index++){
        if(v1[index] == s){
            count++;
        }
    }
    return count;
}

int main(){
    std::ifstream infile1,infile2;
    std::vector<std::string> text,words;
    std::vector<int> wordsCount;
    infile1.open("text.txt");
    infile2.open("words.txt");

    if((!infile1.is_open()) || (!infile2.is_open())){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while(infile1 >> tmp){
        text.push_back(tmp);
    }
    infile1.close();

    while(infile2 >> tmp){
        wordsCount.push_back(search_vector(tmp,text));
        words.push_back(tmp);
    }
    infile2.close();

    for(int index = 0; index < words.size(); index++){
        std::cout << words[index] << ": " << wordsCount[index] << std::endl;
    }


}