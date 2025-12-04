/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class Circle

*/

#include "circle.hpp"
#include <iostream>

constexpr float PI = 3.14159f;
Circle::Circle(void) : radius_{-1}
{
    std::cout << "This object was created successfully in default constructor" << std::endl;
}

Circle::Circle(float radius) : radius_{radius}
{
    std::cout << "This object was created successfully in parameterized constructor" << std::endl;
    std::cout << "Radius in constructor = " << radius_ << std::endl;
}

Circle::~Circle()
{
    std::cout << "This object was deleted successfully in destructor" << std::endl;
}

void Circle::setRadius(float radius)
{
    this->radius_ = radius;
    this->area_ = PI * this->radius_ * this->radius_; // Also update area when radius changes
}

float Circle::getRadius(void)
{
    return this->radius_;
}

double Circle::getArea()
{
    this->area_ = PI * this->radius_ * this->radius_;
    return this->area_;
}
void Circle::displayArea()
{
    std::cout << "The Area of this Circle = " << this->area_ << "\n";
}