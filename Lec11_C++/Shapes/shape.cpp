/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class Shape
*/

#include "shape.hpp"
#include <iostream>

Shape::Shape() : area_{-1}
{
    std::cout << "This object was created successfully in shape default constructor" << std::endl;
}

Shape::~Shape()
{
    std::cout << "This object was deleted successfully in shape destructor" << std::endl;
}

double Shape::getArea()
{
    // Base implementation, might be overridden
    return this->area_;
}
void Shape::displayArea()
{
    std::cout << "The Area of this shape = " << getArea() << "\n";
}
