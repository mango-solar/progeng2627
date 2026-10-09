#include <iostream>

int main(){
    // gets the perimeter and area of a rectangle from two inputted side lengths
    double width,heights;

    std::cout << "Enter the width of the rectangle" << std::endl;
    std::cin >> width;
    std::cout << "Enter the height of the rectangle"<< std::endl;
    std::cin >> heights;

    std::cout << "The perimeter of the rectangle is " << (2*width) + (2*heights) << std::endl;
    std::cout << "The area of the rectangle is " << width * heights << std::endl << std::endl;

    // converts inputted pounds to euros using the exchange rate as of 09/10/2026
    double pounds;
    std::cout << "Enter the amount of British pounds you have" << std::endl;
    std::cin >> pounds;
    std::cout << "The current exhange rate of Pounds to Euros is 1.18" << std::endl;
    std::cout << "That many Pounds is " << pounds * 1.18 << " Euros" << std::endl << std::endl;

    //converts celsius to fahrenheit
    double celsius,fahrenheit;
    std::cout << "Enter a temperature in celsius" << std::endl;
    std::cin >> celsius;
    fahrenheit = (celsius * (9.0/5)) + 32;
    std::cout << "That temperature is " << fahrenheit << " Fahrenheit" << std::endl << std::endl;

    //uses height and weight to calculate a BMI and display it
    double weight,height,BMI;
    std::cout << "Enter your height in metres" << std::endl;
    std::cin >> height;
    std::cout << "Enter your weight in kilos" << std::endl;
    std::cin >> weight;

    BMI = weight / (height*height);
    std::cout << "Your BMI is " << BMI << std::endl;
    
}