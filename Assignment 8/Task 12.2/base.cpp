/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source file for class Base Calculator
*/

#include "base.hpp"
#include <iostream>

CalculatorBase::CalculatorBase()
{
    std::cout << "Created in default CalculatorBase constructor" << std::endl;
}

CalculatorBase::~CalculatorBase()
{
    std::cout << "Destroyed in default CalculatorBase destructor" << std::endl;
}

void CalculatorBase::add(void)
{
    std::cout << "Enter two values to add" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The sum = " << a + b << std::endl;
}

void CalculatorBase::sub(void)
{
    std::cout << "Enter two values to subtract" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The difference = " << a - b << std::endl;
}

void CalculatorBase::display(void)
{
    std::cout << "Basic Calculator operation\n";
}