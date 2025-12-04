/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Source file for Assignment 11
*/
#include "minicooper.hpp"
#include "bmw.hpp"
#include "vehicle.hpp"


int main()
{
    Vehicle<MiniCooperStrategy> vehicle;
    vehicle.vehicleSpeed();
    
    Vehicle<BMWStrategy> vehicle2;
    vehicle2.vehicleSpeed();
    return 0;
    
}