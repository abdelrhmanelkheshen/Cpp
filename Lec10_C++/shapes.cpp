/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class shape
*/

#include "shapes.hpp"
#include <iostream>


Shape::Shape(void) : length_{-1} , width_{-1}
{
    std::cout << "This object was created successfully in default constructor" << std::endl;
}

Shape::Shape(float length,float width) : length_{length} , width_{width}
{
    std::cout << "This object was created successfully in parameterized constructor" << std::endl;
    std::cout << "Length in constructor = " << length_ << std::endl;
    std::cout << "Width in constructor = " << width_ << std::endl;
}

Shape::~Shape()
{
    std::cout << "This object was deleted successfully in destructor" << std::endl;
}

void Shape::setLength(float length)
{
    this->length_ = length;
}

float Shape::getLength(void)
{
    return this->length_;
}

void Shape::setWidth(float width)
{
    this->width_ = width;
}

float Shape::getWidth(void)
{
    return this->width_;
}

Shape& Shape::operator=(Shape& shape)
{
    this->length_ = shape.length_;
    this->width_ = shape.width_;
    return *this;
}

Shape Shape::operator+(Shape shape)
{
    Shape temp;
    temp.length_ = this->length_ + shape.length_;
    temp.width_ = this->width_ + shape.width_;
    return temp;
}

Shape Shape::operator-(Shape shape)
{
    Shape temp;
    temp.length_ = this->length_ - shape.length_;
    temp.width_ = this->width_ - shape.width_;
    return temp;
}

Shape Shape::operator*(Shape shape)
{
    Shape temp;
    temp.length_ = this->length_ * shape.length_;
    temp.width_ = this->width_ * shape.width_;
    return temp;
}

Shape Shape::operator/(Shape shape)
{
    Shape temp;
    temp.length_ = this->length_ / shape.length_;
    temp.width_ = this->width_ / shape.width_;
    return temp;
}