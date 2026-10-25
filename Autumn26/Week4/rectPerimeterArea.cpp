#include <iostream>

void perimArea(double height,double width,double& perimeter,double& area){
    perimeter = 2 * (height + width);
    area = height * width;
}

int main(){
    double height,width,perimeter,area;

    std::cout << "Enter the width and height of the rectangle: " << std::endl;
    std::cin >> width >> height;

    perimArea(height,width,perimeter,area);
    std::cout << "perimeter of rectangle: " << perimeter << std::endl;
    std::cout << "Area of rectangle: " << area << std::endl;


}

