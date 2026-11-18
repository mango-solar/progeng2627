#include <iostream>
#include <vector>
#include <string>

bool digits_in_base(int num, int base, std::vector<int>& digits){
    int remainder = 0;
    digits.clear();
    if((base > 1) && (base < 17)){
        while((num != 0)){
            digits.push_back(num % base);
            num = num / base;
        }
        return true;
    }
    return false;
}

void print_digits_as_numbers(const std::vector<int> digits){
    std::vector<std::string> letters{"F","E","D","C","B","A"};
    std::cout << std::endl;

    for(int index = digits.size()-1; index >= 0; index--){
        if(digits[index] > 9){
            std::cout << letters[15 - digits[index]];
        }
        else{
            std::cout << digits[index];
        }
    }

    std::cout << std::endl;
}

int main(){
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    if(digits_in_base(num,base,digits)){
        print_digits_as_numbers(digits);
    }
    else{
        std::cout << std::endl <<  "Invalid base" << std::endl;
    }

    if(digits_in_base(123,8,digits)){
        print_digits_as_numbers(digits);
    }
    else{
        std::cout << std::endl << "Invalid base" << std::endl;
    }

    if(digits_in_base(198,19,digits)){
        print_digits_as_numbers(digits);
    }
    else{
        std::cout << std::endl << "Invalid base" << std::endl;
    }

    if(digits_in_base(193,15,digits)){
        print_digits_as_numbers(digits);
    }
    else{
        std::cout << std::endl << "Invalid base" << std::endl;
    }

    return 0;
}