#include <iostream>

int gcd(int num1,int num2){
    int remainder = 0,product = 0;
    bool found = false;

    while(!found){
        remainder = num1 - (num2 * (num1/num2));
        if (remainder == 0){
            return num2;
        }
        else{
            num1 = num2;
            num2 = remainder;
        }
    }
    return -1;
}

int euler_totient(int n){
    int coprime = 0;
    for(int i = 1; i < n; i++){
        if(gcd(n,i) == 1){
            coprime++;
        }
    }
    return coprime;
}

int totient_sum(int n, int& depth){
    int sum = 0;
    depth = 0;


    while (n != 1){
        n = euler_totient(n);
        sum = sum + n;
        depth++;
    }
    return sum;
}

int main(){
    int num = 1;
    int depth;
    num = totient_sum(num,depth);
    std::cout << (num == 0) << (depth == 0) << std::endl;
    num = totient_sum(30,depth);
    std::cout << (num == 15) << (depth == 4) << std::endl;
    num = totient_sum(8,depth);
    std::cout << (num == 7) << (depth == 3) << std::endl;

}