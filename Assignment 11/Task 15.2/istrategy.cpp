/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Source file for class IStrategy
*/
#include "istrategy.hpp"
#include <iostream>

IStrategy::IStrategy()
{
    std::cout << "Object was created in default IStrategy constructor.\n";
}

IStrategy::~IStrategy()
{
    std::cout << "Object was destroyed in default IStrategy destructor.\n";
}