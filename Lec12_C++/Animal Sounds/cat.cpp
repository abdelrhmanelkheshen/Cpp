/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source File for class Cat
*/
#include "cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "Constructor in Cat Class\n";
}

void Cat::makeSound()
{
    std::cout << "Cat Sound\n";
}

Cat::~Cat()
{
    std::cout << "Destructor in Cat Class\n";
}
