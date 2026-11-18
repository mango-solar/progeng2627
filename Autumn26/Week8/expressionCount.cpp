#include <iostream>
#include <vector>
#include <fstream>

unsigned long catalanNum(const std::vector<unsigned long> catalanNums){
    unsigned long num = 0;
    for(int i = 0; i < catalanNums.size(); i++){
       num = num + catalanNums[i] * catalanNums[catalanNums.size()-1-i];
    }
    return num;
}

std::vector<unsigned long> catalan_numbers(int n){
    std::vector<unsigned long> catalans {1};

    for(int i = 0; i < n; i++){
        catalans.push_back(catalanNum(catalans));
    }
    return catalans;
}

int numOperators(std::string text){
    int num = 0;
    for(int i = 0; i < text.size(); i++){
        if ((text[i] == '+') || (text[i] == '-')){
            num++;
        }
        else if((text[i] == '*') || (text[i] == '/')){
            num++;
        }
    }
    return num;
}

int longest( const std::vector<std::string>& text){
    int maxSpace = 0;
    for(int line = 0; line < text.size(); line++){
        if(text[line].size() > maxSpace){
            maxSpace = text[line].size();
        }
    }
    return maxSpace;
}

std::string repeatSpace(std::string space, int maxSpace,int size){
    int num = maxSpace - size + 4;
    for(int i = 0; i < num; i++){
        space = space + " ";
    }
    return space;
}

int main(){
    std::ifstream infile;
    infile.open("expressions.txt");
    std::ofstream outfile;
    outfile.open("expression_counts.txt");


    if(!infile.is_open() || !outfile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string line,space;
    std::vector<std::string> lines;
    std::vector<int> operators;
    std::vector<unsigned long> expressions;
    while(infile >> line){
        lines.push_back(line);
        operators.push_back(numOperators(line));
    }
    infile.close();

    int maxSpace = longest(lines);
    for(int i = 0; i < lines.size(); i++){
        space = "";
        expressions = catalan_numbers(operators[i]);
        space = repeatSpace(space,maxSpace,lines[i].size());
        outfile << lines[i] << space << expressions[expressions.size()-1] << std::endl;
    }

    outfile.close();
}