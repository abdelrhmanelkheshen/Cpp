/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Programmer Calculator
*/
#ifndef PROGRAMMER_CALCULATOR_H
#define PROGRAMMER_CALCULATOR_H

#include "calculator.hpp"
#include <string>

class CalculatorProgrammer : public Calculator
{
    public:
    CalculatorProgrammer();
    void add(void) override;
    void sub(void) override;
    void display(void) override;
    void hexaToDecimal(std::string hex);
    void decimalToHexa(int decimal);
    ~CalculatorProgrammer();

};






#endif // PROGRAMMER_CALCULATOR_H