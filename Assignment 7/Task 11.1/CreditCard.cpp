/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Source file for class Credit Card
*/

#include "CreditCard.hpp"
#include <iostream>

CreditCard::CreditCard() : name_{" "}, cardNumber_{0}, credit_{0.0f}
{
    std::cout << "The object was created in creditCard default constructor" << std::endl;
}

CreditCard::CreditCard(std::string name , int cardNumber , float credit) 
    : name_{name} , cardNumber_{cardNumber} , credit_{credit}
{
    std::cout << "The object was created in creditCard parametized constructor" << std::endl;
    std::cout << "Name in parametized constructor = " << this->name_ << std::endl;
    std::cout << "Card number in parametized constructor = " << this->cardNumber_ << std::endl;
    std::cout << "Credit in parametized constructor = " << this->credit_ << std::endl;
}

CreditCard::~CreditCard()
{
    std::cout << "The object was destroyed in creditCard destructor" << std::endl;
}

void CreditCard::paymentProcess(float amount)
{
    PaymentMethod::setAmountToBePaid(amount);
    std::cout << "Name = " << this->name_ << std::endl
              << "Card number = " << this->cardNumber_ << std::endl
              << "Remaining Credit  = " << this->credit_ - this->amountToBePaid_ << std::endl;
}