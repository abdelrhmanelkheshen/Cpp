/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source File for class Cow
*/
#include "cow.hpp"
#include <iostream>

Cow::Cow()
{
    std::cout << "Constructor in Cow Class\n";
}

void Cow::makeSound()
{
    std::cout << "Cow Sound\n";
}

Cow::~Cow()
{
    std::cout << "Destructor in Cow Class\n";
}
