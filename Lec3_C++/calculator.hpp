#ifndef CALCULATOR_H_
#define CALCULATOR_H_

namespace Calculator
{
    void Welcome(void);
    double add(float num1 , float num2);
    float sub(float num1 , float num2);
    double multiply(float num1 , float num2);
    float divide(float num1 , float num2);
    long long remainder(long num1 , long num2);
    long long power(long num1 , long iterations);
}

#endif