/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Source file for class BMW Strategy
*/
#include "bmw.hpp"
#include <iostream>

BMWStrategy::BMWStrategy()
{
    std::cout << "Object was created in BMWStrategy constructor.\n";
}

BMWStrategy::~BMWStrategy()
{
    std::cout << "Object was destroyed in BMWStrategy destructor.\n";
}

void BMWStrategy::CalculateSpeed()
{   
    std::cout << "BMW Strategy.\n";
}

