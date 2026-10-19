#include <iostream>
#include <string>

int main(){
    //converts from celsius to fahrenheit or vice versa
    //assigns variables and takes input
    double tempIn,tempOut;
    std::string unitIn,unitOut;
    bool validUnit = true;

    std::cin >> tempIn >> unitIn;

    //checks if valid unit entered and sets what unit and temp to output
    if (unitIn == "F" || unitIn == "f"){
        unitOut = "C";
        tempOut = (tempIn - 32) * (5.0/9);
    }

    else if(unitIn == "C" || unitIn == "c"){
        unitOut = "F";
        tempOut = (tempIn * (9.0/5)) + 32;
    }

    else{
        validUnit = false;
    }

    //if suitable unit used output converted temp,otherwise display error message
    if(validUnit){
        std::cout << tempOut << " " << unitOut << std::endl;
    }
    else{
        std::cout << "Error, unit not recognised, enter F or C" << std::endl;
    }
}