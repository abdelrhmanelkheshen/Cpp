/*
Author: Abdelrhman EL Kheshen
Date: 9/10/2025
Details: Program to calculate area of circle
*/
#include <iostream>

int main(void)
{
    constexpr float PI = 3.14;
    float radius{0};
    std::cout << "Please enter the radius of the circle: ";
    std::cin >> radius;
    double area{0};
    area = PI * radius * radius;
    std::cout << "The Area of Circle = " << area << std::endl;
    return 0;
}
