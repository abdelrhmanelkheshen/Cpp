/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for Application
*/

#include "circle.hpp"
#include "rectangle.hpp"
#include <iostream>

int main(void)
{
    Circle c1(10);
    Rectangle r1(10,20);

    c1.setRadius(20);
    c1.getArea();
    c1.displayArea();

    std::cout << "\n";

    r1.getArea();
    r1.displayArea();

    std::cout << "\n";
    
    return 0;
}