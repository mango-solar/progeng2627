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

int local_peak(int a, int b, int& peak, int& leftPeak, int& rightPeak){
    int x = a + 1;
    float peakStrength;
    float max = 0;

    for (int i = a+1; i < b; i++){
        totient_sum(i,peak);
        totient_sum(i-1,leftPeak);
        totient_sum(i+1,rightPeak);
        if((peak > leftPeak) && (peak > rightPeak)){
            peakStrength = (peak + peak - leftPeak - rightPeak) / 2.0;
            i++;
        }
        if(peakStrength > max){
            max = peakStrength;
            x = i - 1;
        }
    }

    if (max == 0){
        peak = 0;
        leftPeak = 0;
        rightPeak = 0;
        return -1;
    }
    
    totient_sum(x,peak);
    totient_sum(x-1,leftPeak);
    totient_sum(x+1,rightPeak);
    return x;
}

int main(){
    int peak, leftPeak, rightPeak,num;
    
    num = local_peak(14,19,peak,leftPeak,rightPeak);
    std::cout << (num == 17) << (leftPeak == 4) << (peak == 5) << (rightPeak == 3) << std::endl;
    num = local_peak(15,16,peak,leftPeak,rightPeak);
    std::cout << (num == -1) << (leftPeak == 0) << (peak == 0) << (rightPeak == 0) << std::endl;
    num = local_peak(13,20,peak,leftPeak,rightPeak);
    std::cout << (num == 17) << (leftPeak == 4) << (peak == 5) << (rightPeak == 3) << std::endl;

}