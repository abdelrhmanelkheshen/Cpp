/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Header file for class Payment Method
*/
#ifndef PAYMENT_METHOD_H_
#define PAYMENT_METHOD_H_

class PaymentMethod
{
    public:
    PaymentMethod();
    PaymentMethod(float amount);
    virtual ~PaymentMethod();
    void setAmountToBePaid(float amount);
    float getAmountpaid(void);

    protected:
    float amountToBePaid_;
};


#endif // PAYMENT_METHOD_H_