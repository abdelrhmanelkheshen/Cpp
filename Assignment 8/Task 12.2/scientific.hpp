/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Scientific Calculator
*/

#ifndef SCIENTIFIC_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_H

#include "calculator.hpp"

class CalculatorScientific : public Calculator
{
    public:     
    CalculatorScientific();
    void add(void) override;
    void sub(void) override;
    void display(void) override;
    void sin_ang();
    void cos_ang();
    ~CalculatorScientific();
};




#endif // SCIENTIFIC_CALCULATOR_H