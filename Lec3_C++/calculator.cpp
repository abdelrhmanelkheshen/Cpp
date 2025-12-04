#include "calculator.hpp"
#include <iostream>

void Calculator::Welcome(void)
{
    std::cout << "Welcome to Calculator\n";
}

double Calculator::add(float num1 , float num2)
{
    std::cout << "Welcome to Calculator Add function\n";
    return num1 + num2;
}

float Calculator::sub(float num1 , float num2)
{
    std::cout << "Welcome to Calculator Sub function\n";
    std::cout << "Which operation you want?\n1- Num1 - Num2\n2- Num2 - Num1\n";
    char op;
    std::cin >> op;
    float result{0.0};
    switch(op)
    {
        case '1':
        result = num1 - num2;
        break; 
        case '2':
        result = num2 - num1;
        break;
    };
    return result;
}

double Calculator::multiply(float num1 , float num2)
{
    std::cout << "Welcome to Calculator Multiply function\n";
    return num1 * num2;
}

float Calculator::divide(float num1 , float num2)
{
    std::cout << "Welcome to Calculator Divide function\n";
    std::cout << "Which operation you want?\n1- Num1 / Num2\n2- Num2 / Num1\n";
    char op;
    std::cin >> op;
    float result{0.0};
    switch(op)
    {
        case '1':
        result = num1 / num2;
        break; 
        case '2':
        result = num2 / num1;
        break;
    };
    return result;    
}

long long Calculator::remainder(long num1 , long num2)
{
    std::cout << "Welcome to Calculator Remainder function\n";
    std::cout << "Which operation you want?\n1- Num1 % Num2\n2- Num2 % Num1\n";
    char op;
    std::cin >> op;
    long long result{0};
    switch(op)
    {
        case '1':
        result = num1 % num2;
        break; 
        case '2':
        result = num2 % num1;
        break;
    };
    return result;    
}

long long Calculator::power(long num1 , long iterations)
{
    std::cout << "Welcome to Calculator Power function\n";
    long long result {1};
    for(long i = 1 ; i <= iterations ; i++)
    {
        result *= num1;
    }
    return result;
}
