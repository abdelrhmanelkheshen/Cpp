/*
Author: Abdelrhman El Kheshen
Date: 9/10/2025
Details: Assignment 1
*/

/*Task 5.1*/
/*
Details : Showing Name and Age
*/

#include <iostream>
/*#include <string>

int main(void)
{
    std::string Name;
    short age{0};
    std::cout << "Please enter your name: ";
    getline(std::cin,Name);
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "Hello " << Name << ", you're " << age << " years old?\n";
    return 0;
}*/

/*Task 5.2*/
/*
Details : Showing the size of data types
*/

/*int main(void)
{
    std::cout << "Size of int = " << sizeof(int) << "\nSize of float = " << sizeof(float);
    std::cout << "\nSize of double = " << sizeof(double) << "\nSize of char = " << sizeof(char);
    std::cout << "\nSize of long = " << sizeof(long) << "\nSize of short = " << sizeof(short);
    std::cout << "\nSize of long long = " << sizeof(long long) << "\n";
    return 0;
}*/

/*Task 5.3*/
/*
Details : Implementation of a Calculator
*/

int add(int num1,int num2)
{
    return num1 + num2;
}

int sub(int num1,int num2)
{
    return num1 - num2;
}

int divide(int num1,int num2)
{
    return num1 / num2;
}

int mul(int num1,int num2)
{
    return num1 * num2;
}

int main(void)
{
    std::cout << "Pick an operator [+,-,*,/]\n";
    char op;
    std::cin >> op;
    std::cout << "Enter two numbers";
    int n1,n2;
    std::cin >> n1 >> n2;
    int result{0};
    switch(op)
    {
        case '+':
        result = add(n1,n2);
        std::cout << result;
        break;
        case '-':
        result = sub(n1,n2);
        std::cout << result;
        break;
        case '/':
        result = divide(n1,n2);
        std::cout << result;
        break;
        case '*':
        result = mul(n1,n2);
        std::cout << result;
        break;
    };
    return 0;
}

