/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Header file for class Credit Card
*/

#ifndef CREDIT_CARD_H_
#define CREDIT_CARD_H_

#include "PaymentMethod.hpp"
#include <string>

class CreditCard : public PaymentMethod
{
    public:
    CreditCard();
    CreditCard(std::string name , int cardNumber , float credit);
    ~CreditCard();
    void paymentProcess(float amount);
    private:
    std::string name_;
    int cardNumber_;
    float credit_;
};









#endif // CREDIT_CARD_H_