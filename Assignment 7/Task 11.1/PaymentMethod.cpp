/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Source file for class Payment Method
*/

#include "PaymentMethod.hpp"
#include <iostream>
PaymentMethod::PaymentMethod() : amountToBePaid_{0.0f}
{
    std::cout << "The object was created in paymentMethod default constructor" << std::endl;
}

PaymentMethod::PaymentMethod(float amount) : amountToBePaid_{amount}
{
    std::cout << "The object was created in paymentMethod parametized constructor" << std::endl;
    std::cout << "Amount in parametized constructor = " << this->amountToBePaid_ << std::endl;
}

PaymentMethod::~PaymentMethod()

{
    std::cout << "The object was destroyed in paymentMethod destructor" << std::endl;
}

void PaymentMethod::setAmountToBePaid(float amount)
{
    this->amountToBePaid_ = amount;
}

float PaymentMethod::getAmountpaid(void)
{
    return this->amountToBePaid_;
}