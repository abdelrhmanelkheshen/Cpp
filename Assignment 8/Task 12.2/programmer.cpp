/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source file for class Programmer Calculator
*/

#include "programmer.hpp"
#include <iostream>
#include <cmath>

CalculatorProgrammer::CalculatorProgrammer()
{
    std::cout << "Created in default CalculatorProgrammer constructor" << std::endl;
}

CalculatorProgrammer::~CalculatorProgrammer()
{
    std::cout << "Destroyed in default CalculatorProgrammer destructor" << std::endl;
}

void CalculatorProgrammer::add(void)
{
    std::cout << "Enter two values to add" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The sum = " << a + b << std::endl;
}

void CalculatorProgrammer::sub(void)
{
    std::cout << "Enter two values to subtract" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The difference = " << a - b << std::endl;
}

void CalculatorProgrammer::display(void)
{
    std::cout << "Programming  Calculator operation\n";
}

void CalculatorProgrammer::hexaToDecimal(std::string hex)
{
    int decimal = 0;
    int power = 0;
    int len = hex.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * pow(16, power);
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * pow(16, power);
        }
        power++;
    }
    std::cout << "The decimal value of " << hex << " is " << decimal << std::endl;
        
}


void CalculatorProgrammer::decimalToHexa(int decimal)
{
    std::string hex = "";
    while (decimal != 0)
    {
        int rem = decimal % 16;
        if (rem < 10)
        {
            hex = std::to_string(rem) + hex;
        }
        else
        {
            hex = (char)(rem - 10 + 'A') + hex;
        }
        decimal /= 16;
    }
    std::cout << "The hexadecimal value of " << decimal << " is " << hex << std::endl;
}