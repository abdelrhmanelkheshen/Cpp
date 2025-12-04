/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Base Calculator
*/
#ifndef BASE_CALCULATOR_H
#define BASE_CALCULATOR_H

#include "calculator.hpp"

class CalculatorBase : public Calculator
{
    public:
    CalculatorBase();
    void add(void) override;
    void sub(void) override;
    void display(void) override;
     ~CalculatorBase();

};




#endif // BASE_CALCULATOR_H