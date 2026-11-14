#include <iostream>
#include <vector>

unsigned long catalanNum(const std::vector<unsigned long>& catalanNums){
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


int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector <unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++){
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }
    return 0;
}