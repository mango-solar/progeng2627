#include <iostream>
#include <vector>
#include <string>
#include <cmath>

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


int digits_to_decimal(int base, const std::vector<int> digits){
    int num = 0;
    int power = 0;
    for(int index = 0; index < digits.size(); index++){
        num = num + (digits[index] * pow(base,power));
        power++;
    }

    return num;
}

bool convert_base(const std::vector<int> digits1, int base1, int base2, std::vector<int>& digits2){
    int num = digits_to_decimal(base1, digits1);
    return digits_in_base(num,base2,digits2);
}


int main(){
    int num = 250;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;

    digits_in_base(num,8,octal_digits);

    std::cout << "Octal: ";
    print_digits_as_numbers(octal_digits);
    
    if(convert_base(octal_digits,8,16,hex_digits)){
        std::cout << "Hex";
        print_digits_as_numbers(hex_digits);
    }
    else{
        std::cout << "Invalid base";
    }


    std::cout << std::endl;
    digits_in_base(320,6,octal_digits);
    print_digits_as_numbers(octal_digits);
    if(convert_base(octal_digits,6,13,hex_digits)){
        print_digits_as_numbers(hex_digits);
    }
    else{
        std::cout << "Invalid base";
    }

    std::cout << std::endl;
    digits_in_base(230,9,octal_digits);
    print_digits_as_numbers(octal_digits);
    if(convert_base(octal_digits,9,9,hex_digits)){
        print_digits_as_numbers(hex_digits);
    }
    else{
        std::cout << "Invalid base";
    }

    return 0;

}