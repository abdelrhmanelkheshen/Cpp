/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Calculator
*/
#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
    Calculator();
    virtual void add(void) = 0;
    virtual void sub(void) = 0;
    virtual void display(void) = 0;
    virtual ~Calculator(); 
};



#endif // CALCULATOR_H