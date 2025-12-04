/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class Rectangle

*/

#include "rectangle.hpp"
#include <iostream>


Rectangle::Rectangle(void) : length_{-1} , width_{-1}
{
    std::cout << "This object was created successfully in default constructor" << std::endl;
}

Rectangle::Rectangle(float length,float width) : length_{length} , width_{width}
{
    std::cout << "This object was created successfully in parameterized constructor" << std::endl;
    std::cout << "Length in constructor = " << length_ << std::endl;
    std::cout << "Width in constructor = " << width_ << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "This object was deleted successfully in destructor" << std::endl;
}

void Rectangle::setLength(float length)
{
    this->length_ = length;
}

float Rectangle::getLength(void)
{
    return this->length_;
}

void Rectangle::setWidth(float width)
{
    this->width_ = width;
}

float Rectangle::getWidth(void)
{
    return this->width_;
}

Rectangle& Rectangle::operator=(Rectangle& shape)
{
    this->length_ = shape.length_;
    this->width_ = shape.width_;
    return *this;
}

Rectangle Rectangle::operator+(Rectangle shape)
{
    Rectangle temp;
    temp.length_ = this->length_ + shape.length_;
    temp.width_ = this->width_ + shape.width_;
    return temp;
}

Rectangle Rectangle::operator-(Rectangle shape)
{
    Rectangle temp;
    temp.length_ = this->length_ - shape.length_;
    temp.width_ = this->width_ - shape.width_;
    return temp;
}

Rectangle Rectangle::operator*(Rectangle shape)
{
    Rectangle temp;
    temp.length_ = this->length_ * shape.length_;
    temp.width_ = this->width_ * shape.width_;
    return temp;
}

Rectangle Rectangle::operator/(Rectangle shape)
{
    Rectangle temp;
    temp.length_ = this->length_ / shape.length_;
    temp.width_ = this->width_ / shape.width_;
    return temp;
}

double Rectangle::getArea()
{
    this->area_ = this->length_ * this->width_;
    return this->area_;
} 
void Rectangle::displayArea()
{
    std::cout << "The Area of this Rectangle = " << this->area_ << "\n";
}