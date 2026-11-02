#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    std::vector<int> indices;
    int n,num,s;
    int count = 0;

    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> num;
        numbers.push_back(num);
    }

    std::cout << "Please enter s:" << std::endl;
    std::cin >> s;

    for (int index = 0; index < numbers.size(); index++){
        if(numbers[index] == s){
            count++;
            indices.push_back(index);

        }
    }

    if(count == 0){
        std::cout << "There are no occurences of " << s << std::endl;
    }
    else if(count == 1){
        std::cout << "There is 1 occurence of " << s << " at indice:" << std::endl;
        std::cout << indices[0] << std::endl;
    }
    else{
        std::cout << "There are " << count << " occurences of " << s << " at indices:" << std::endl;
        for(int i=0; i < count; i++){
            std::cout << indices[i] << std::endl;
        }
    }

    
}