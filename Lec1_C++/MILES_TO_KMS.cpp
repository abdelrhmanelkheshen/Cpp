/*
Author: Abdelrhman EL Kheshen
Date: 9/10/2025
Details: Program to convert miles into kilometers
*/

#include <iostream>

#define MILE_TO_KM     (1.609) // C text replacement

int main(void)
{
    constexpr float MILE_TO_KM_C_PLUS_PLUS {1.609}; // C++ Text replacement with compile time type check
    std::cout << "Please Enter the distance in miles: ";
    float miles;
    std::cin >> miles;
    double kms;
    kms = miles * MILE_TO_KM;
    double kmsPlusPlus;
    kmsPlusPlus = miles * MILE_TO_KM_C_PLUS_PLUS; 
    std::cout << "\n The Distance in Kilometers = " << kms << "\n";
    std::cout << "\n The Distance in Kilometers in C++= " << kmsPlusPlus << "\n";
    return 0;
}
/***************************************************************************************/