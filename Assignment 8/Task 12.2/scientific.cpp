/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source file for class Scientific Calculator
*/

#include "scientific.hpp"
#include <iostream>
#include <cmath>

CalculatorScientific::CalculatorScientific()
{
    std::cout << "Created in default CalculatorScientific constructor" << std::endl;
}

CalculatorScientific::~CalculatorScientific()
{
    std::cout << "Destroyed in default CalculatorScientific destructor" << std::endl;
}

void CalculatorScientific::add(void)
{
    std::cout << "Enter two values to add" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The sum = " << a + b << std::endl;
}

void CalculatorScientific::sub(void)
{
    std::cout << "Enter two values to subtract" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The difference = " << a - b << std::endl;
}

void CalculatorScientific::display(void)
{
    std::cout << "Scientific Calculator operation\n";
}

void CalculatorScientific::sin_ang()
{
    std::cout << "Enter an angle in degrees to calculate its sin" << std::endl;
    double angle;
    std::cin >> angle;  
    double angle_in_radians = angle * (M_PI / 180.0);
    std::cout << "The sin of " << angle << " is " << std::sin(angle_in_radians) << std::endl;

}

void CalculatorScientific::cos_ang()
{
    std::cout << "Enter an angle in degrees to calculate its cos" << std::endl;
    double angle;
    std::cin >> angle;  
    double angle_in_radians = angle * (M_PI / 180.0);
    std::cout << "The cos of " << angle << " is " << std::cos(angle_in_radians) << std::endl;
}
