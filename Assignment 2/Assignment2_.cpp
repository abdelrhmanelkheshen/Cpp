/*
    Author : Abdelrhman El Kheshen
    Date : 12/10/2025
    Details : Assignment 2
*/

#include <iostream>
/*Task 6.1*/
/*finding max value using conditional flow*/

/*long max(long num1 , long num2)
{
    long result = num1 > num2?num1 : num2; // if (num1 > num2) { result = num1;}else{ result = num2;}
    return result;
}

int main(void)
{
    std::cout << "Enter two Numbers: ";
    long n1,n2;
    std::cin >> n1 >> n2;
    long maxVal = max(n1,n2);
    std::cout << "The max value is: " << maxVal << "\n";
    long n3;
    std::cout << "Enter third Number: ";
    std::cin >> n3;
    long maxThree = max(maxVal,n3);
    std::cout << "The max value is: " << maxThree << "\n";
    return 0;
}*/

/*Task 6.2*/
/*factorial of number using recursion*/
/*long long factorial(long num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}

int main(void)
{
    std::cout << "Enter number to calculate its factorial\n";
    long number;
    std::cin >> number;
    long long result = factorial(number);
    std::cout << "Thefactorial of " << number << " is " << result << ".\n";
    return 0;     
}*/

/*Task 6.3*/
/*Creating Two namespaces*/

/*namespace SavingsAccount
{
    double savingsBalance{0};
    void createAccount(double initialBalance) // Creates a savings account with thespecified initial balance.
    {
        savingsBalance = initialBalance;
        std::cout << "Savings Account is created with this amount of money: " << savingsBalance << "\n";
    } 
    void addInterest(double rate) // Adds interest to the savings account balancebased on the given annual interest rate
    {
        savingsBalance = savingsBalance + (savingsBalance * (rate/100));
        std::cout << "Savings Account is now after annual rate: " << savingsBalance << "\n";
    }
    double getBalance(void) // Returns the current balance of the savings account.
    {
        return savingsBalance;
    }
}

namespace CheckingAccount
{
    double checkingBalance{0};
    void createAccount(double initialBalance) // Creates a checking account with thespecified initial balance.
    {
        checkingBalance = initialBalance;
        std::cout << "Checking Account is created with this amount of money: " << checkingBalance << "\n";
    } 
    void applyFee(double fee) // Applies a transaction fee to the checking accountbalance
    {
        checkingBalance -= fee; 
        std::cout << "Checkings Account is now after transaction fee: " << checkingBalance << "\n";
    }
    double getBalance(void) // Returns the current balance of the checking account.
    {
        return checkingBalance;
    }
}

int main(void)
{
    SavingsAccount::createAccount(10000);
    SavingsAccount::addInterest(10);
    double savingResult = SavingsAccount::getBalance();
    std::cout << "Saving Account is now: " << SavingsAccount::savingsBalance << "\n";
    std::cout << "Saving Account is now: " << savingResult << "\n";
    std::cout << "--------------------------------------\n";
    CheckingAccount::createAccount(10000);
    CheckingAccount::applyFee(1000);
    double checkingResult = CheckingAccount::getBalance();
    std::cout << "Checking Account is now: " << CheckingAccount::checkingBalance << "\n";
    std::cout << "Checking Account is now: " << checkingResult << "\n";
    return 0;
}*/

/*Task 6.4*/
/*Namespaces for shapes*/

/*namespace Circle
{
    double area;
    double circumference;
    constexpr float PI = 3.14;
    float radius;
    void getRadius(void)
    {
        std::cout << "Enter the circle's radius: ";
        std::cin >> radius;
    }
    void calculateArea(void)
    {
        area = PI * radius * radius;
        std::cout << "The Circle's area: " << area << "\n"; 
    }
    void calculateCircumference(void)
    {
        circumference = 2 * PI * radius;
        std::cout << "The Circle's Circumference: " << circumference << "\n";
    }
    double getArea(void)
    {
        return area;
    }
    double getCircumference(void)
    {
        return circumference;
    }
    
}
namespace Triangle
{
    double area;
    float base;
    float height;
    void getParameters(void)
    {
        std::cout << "Enter the triangle's base: ";
        std::cin >> base;
        std::cout << "Enter the triangle's height: ";
        std::cin >> height;
    }
    void calculateArea(void)
    {
        area = 0.5 * base * height;
        std::cout << "The Triangle's area: " << area << "\n"; 
    }
    double getArea(void)
    {
        return area;
    }
}

namespace Rectangle
{
    double area;
    float width;
    float length;
    float perimeter;
    void getParameters(void)
    {
        std::cout << "Enter the rectangle's length: ";
        std::cin >> length;
        std::cout << "Enter the rectangle's width: ";
        std::cin >> width;
    }
    void calculateArea(void)
    {
        area = length * width;
        std::cout << "The Rectangle's area: " << area << "\n"; 
    }
    void calculatePerimeter(void)
    {
        perimeter = (2*length) + (2*width);
        std::cout << "The Rectangle's perimeter: " << perimeter << "\n"; 
    }
    
    double getArea(void)
    {
        return area;
    }
    double getPerimeter(void)
    {
        return perimeter;
    }
}

int main(void)
{
    std::cout << "Please choose the shape you want:\n1- Circle\n2- Triangle\n3- Rectangle\n";
    char option;
    std::cin >> option;
    double area;
    double circumference;
    switch(option)
    {
        case '1':
        Circle::getRadius();
        std::cout << "------------------\n";
        Circle::calculateArea();
        std::cout << "------------------\n";
        Circle::calculateCircumference();
        std::cout << "------------------\n";
        area = Circle::getArea();
        std::cout << "The Circle's area: " << area << "\n";
        std::cout << "------------------\n";
        circumference = Circle::getCircumference();
        std::cout << "The Circle's circumference: " << circumference << "\n";
        std::cout << "------------------\n";
        break;
        case '2':
        Triangle::getParameters();
        std::cout << "------------------\n";
        Triangle::calculateArea();
        std::cout << "------------------\n";
        area = Triangle::getArea();
        std::cout << "The Triangle's area: " << area << "\n";
        std::cout << "------------------\n";
        break;
        case '3':
        Rectangle::getParameters();
        std::cout << "------------------\n";
        Rectangle::calculateArea();
        std::cout << "------------------\n";
        Rectangle::calculatePerimeter();
        std::cout << "------------------\n";
        area = Rectangle::getArea();
        std::cout << "The Rectangle's area: " << area << "\n";
        std::cout << "------------------\n";
        double perimeter = Rectangle::getPerimeter();
        std::cout << "The Rectangle's perimeter: " << perimeter << "\n";
        std::cout << "------------------\n";
    };
    return 0;
}*/
