/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Source file for class Paypal
*/

#include "PayPal.hpp"
#include <iostream>

PayPal::PayPal() : email_{" "}, credit_{0.0f}
{
    std::cout << "The object was created in PayPal default constructor" << std::endl;
}

PayPal::PayPal(std::string email , float credit) 
    : email_{email} , credit_{credit}
{
    std::cout << "The object was created in PayPal parametized constructor" << std::endl;
    std::cout << "E-Mail in parametized constructor = " << this->email_ << std::endl;
    std::cout << "Credit in parametized constructor = " << this->credit_ << std::endl;
}

PayPal::~PayPal()
{
    std::cout << "The object was destroyed in PayPal destructor" << std::endl;
}

void PayPal::paymentProcess(float amount)
{
    PaymentMethod::setAmountToBePaid(amount);
    std::cout << "E-Mail = " << this->email_ << std::endl
              << "Remaining Credit  = "      << this->credit_ - this->amountToBePaid_ << std::endl;
}