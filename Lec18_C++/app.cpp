/*
    Author : Abdelrhman El Kheshen
    Date : 31 / 10 / 2025
    Details : Source file for Application
*/
#include "smartptr.hpp"
#include <iostream>
#include <memory>

class Rectangle
{
    public:
    Rectangle(int length, int width)
    {
        this->length_ = length;
        this->width_ = width;
        std::cout << "Rectangle constructor called" << std::endl;
    }
    Rectangle(Rectangle&& other)
    {
        std::cout << "Rectangle move constructor called" << std::endl;
        this->length_ = other.length_;
        this->width_ = other.width_;
        other.length_ = 0;
        other.width_ = 0;
    }
    ~Rectangle()
    {
        std::cout << "Rectangle destructor called" << std::endl;
    }
    void area()
    {
        std::cout << "Rectangle area" << std::endl;
        this->area_ = this->length_ * this->width_;
        std::cout << "Area = " << this->area_ << std::endl;
    }

    private:
    
    int length_;
    int width_;
    long long area_;
};

int main()
{
    // SmartPtr<int> smart;
    // SmartPtr<char> smart2;

    // *smart = 10;
    // *smart2 = 'a';

    // std::cout << *smart << std::endl;
    // std::cout << *smart2 << std::endl;
    std::unique_ptr<Rectangle> uptr1 = std::make_unique<Rectangle>(10,5);
    uptr1->area();
    std::unique_ptr<Rectangle> uptr2 (new Rectangle(5,100));
    uptr2->area();
    return 0;
}