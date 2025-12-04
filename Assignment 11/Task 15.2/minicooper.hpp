/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Header file for class MiniCooper Strategy
*/
#ifndef MINI_COOPER_STRATEGY_H
#define MINI_COOPER_STRATEGY_H
#include "istrategy.hpp"

class MiniCooperStrategy : public IStrategy
{
    public:
    MiniCooperStrategy();
    ~MiniCooperStrategy();
    void CalculateSpeed() override;
};

#endif // MINI_COOPER_STRATEGY_H