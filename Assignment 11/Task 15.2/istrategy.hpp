/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Header file for class IStrategy
*/
#ifndef ISTRATEGY_H
#define ISTRATEGY_H

class IStrategy
{
    public:
    IStrategy();
    virtual void CalculateSpeed() = 0;
    virtual ~IStrategy();
};


#endif // ISTRATEGY_H