/*
    Author : Abdelrhman El Kheshen
    Date : 12/10/2025
    Details : Creating a Namespace containing functions and creating same functions with the same name to
    prove that namespace isolates its content
*/


#include "calculator.hpp"
#include <iostream>


double add(float num1 , float num2)
{
    std::cout << "Welcome to Add function\n";
    return num1 + num2;
}

float sub(float num1 , float num2)
{
    std::cout << "Welcome to Sub function\n";
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

double multiply(float num1 , float num2)
{
    std::cout << "Welcome to Multiply function\n";
    return num1 * num2;
}

float divide(float num1 , float num2)
{
    std::cout << "Welcome to Divide function\n";
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

long remainder(long num1 , long num2)
{
    std::cout << "Welcome to Remainder function\n";
    std::cout << "Which operation you want?\n1- Num1 % Num2\n2- Num2 % Num1\n";
    char op;
    std::cin >> op;
    long result{0};
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

long long power(long num1 , long iterations)
{
    std::cout << "Welcome to Power function\n";
    long long result {1};
    for(long i = 1 ; i <= iterations ; i++)
    {
        result *= num1;
    }
    return result;
}

int main (void)
{
    
    std::cout << "1- Namespace\n2- Without Namespace\n";
    char op ;
    std::cin >> op;
    float n1,n2;
    double result;
    float res;
    long long rs;
    char option{0};
    switch(op)
    {
        case '1':
        Calculator::Welcome();
        while (option != '7')
        {
           std::cout << "1- Add\n2- Sub\n3- Mul\n4- Divide\n5- Rem\n6- Power\n7- Quit";
           std::cin >> option;
           switch (option)
           {
                case '1':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                result = Calculator::add(n1,n2);
                std::cout << "Result = " << result << "\n";
                break;
                case '2':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                res = Calculator::sub(n1,n2);
                std::cout << "Result = " << res << "\n";
                break;
                case '3':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                result = Calculator::multiply(n1,n2);
                std::cout << "Result = " << result<< "\n";
                break;
                case '4':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                res = Calculator::divide(n1,n2);
                std::cout << "Result = " << res<< "\n";
                break;
                case '5':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                rs = Calculator::remainder((long)n1,(long)n2);
                std::cout << "Result = " << rs<< "\n";
                break;
                case '6':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                rs = Calculator::power((long)n1,(long)n2);
                std::cout << "Result = " << rs << "\n";
                break;
                case '7':
                break;
           }; 
        }
        break;
        case '2':
        while (option != '7')
        {
           std::cout << "1- Add\n2- Sub\n3- Mul\n4- Divide\n5- Rem\n6- Power\n7- Quit";
           std::cin >> option;
           switch (option)
           {
                case '1':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                result = add(n1,n2);
                std::cout << "Result = " << result<< "\n";
                break;
                case '2':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                res = sub(n1,n2);
                std::cout << "Result = " << res<< "\n";
                break;
                case '3':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                result = multiply(n1,n2);
                std::cout << "Result = " << result<< "\n";
                break;
                case '4':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                res = divide(n1,n2);
                std::cout << "Result = " << res<< "\n";
                break;
                case '5':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                rs = remainder((long)n1,(long)n2);
                std::cout << "Result = " << rs<< "\n";
                break;
                case '6':
                std::cout << "Enter two numbers\n";
                std::cin >> n1 >> n2;
                rs = power((long)n1,(long)n2);
                std::cout << "Result = " << rs<< "\n";
                break;
                case '7':
                break;
           }; 
        }
        break;
    }
    return 0;
}
