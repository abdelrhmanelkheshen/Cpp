/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for Application
*/
#include <iostream>
#include "manager.hpp"

int main()
{
    Manager m1("Abdelrhman Hesham",25,1,10000,"ADAS");

    m1.getSalary();
    std::string department =  m1.getDepartment();
    std::cout << department << std::endl;
    
    return 0;
}