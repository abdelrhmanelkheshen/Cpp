/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Header file for class BMW Strategy
*/
#ifndef BMWSTRATEGY_H
#define BMWSTRATEGY_H
#include "istrategy.hpp"

class BMWStrategy : public IStrategy
{
    public:
    BMWStrategy();
    ~BMWStrategy();
    void CalculateSpeed() override;
};

#endif // BMWSTRATEGY_H