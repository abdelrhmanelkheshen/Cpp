/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Header file for class Paypal
*/

#ifndef PAYPAL_H_
#define PAYPAL_H_


#include "PaymentMethod.hpp"
#include <string>

class PayPal : public PaymentMethod
{
    public:
    PayPal();
    PayPal(std::string email , float credit);
    ~PayPal();
    void paymentProcess(float amount);
    private:
    std::string email_;
    float credit_;
};









#endif // PAYPAL_H_