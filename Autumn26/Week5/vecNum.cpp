#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums;
    
    nums.push_back(9);
    nums.push_back(8);
    nums.push_back(6);
    nums.push_back(7);

    std::cout << nums[0] * (nums[1] + nums[2]) << std::endl;



}