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



int digits_to_decimal(int base, const std::vector<int> digits){
    int num = 0;
    int power = 0;
    for(int index = 0; index < digits.size(); index++){
        num = num + (digits[index] * pow(base,power));
        power++;
    }

    return num;
}



int main(){
    int num = 250;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;

    digits_in_base(num,8,octal_digits);
    digits_in_base(263,16,hex_digits);
    std::cout << digits_to_decimal(8,octal_digits) << std::endl;
    std::cout << digits_to_decimal(16,hex_digits) << std::endl;

    digits_in_base(187,15,hex_digits);
    std::cout << digits_to_decimal(15,hex_digits);


}