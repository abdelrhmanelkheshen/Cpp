/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Header file for class Vehicle
*/
#ifndef VEHICLE_H
#define VEHICLE_H

#include "istrategy.hpp"

template<class T>

class Vehicle
{
    public:
    Vehicle()
    {
        strategy_ = new T;
    }
    ~Vehicle()
    {
        delete strategy_;
    }
    void vehicleSpeed()
    {
        this->strategy_->CalculateSpeed();
    }
    private:
    T* strategy_;
};


#endif // VEHICLE_H