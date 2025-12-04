/*
    Author : Abdelrhman El Kheshen
    Date : 28 / 10 / 2025
    Details : Source file for class MiniCooper Strategy
*/
#include "minicooper.hpp"
#include <iostream>

MiniCooperStrategy::MiniCooperStrategy()
{
    std::cout << "Object was created in MiniCooperStrategy constructor.\n";
}

MiniCooperStrategy::~MiniCooperStrategy()
{
    std::cout << "Object was destroyed in MiniCooperStrategy destructor.\n";
}

void MiniCooperStrategy::CalculateSpeed()
{   
    std::cout << "MiniCooper Strategy.\n";
}

