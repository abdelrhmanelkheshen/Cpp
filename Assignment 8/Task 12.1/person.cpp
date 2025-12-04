/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source file for class Person
*/

#include "person.hpp"
#include <iostream>

Person::Person()
               : name_{"Unknown"} , age_{-1}
{
    std::cout << "Created in Base Person default Constructor\n";
}

Person::Person(std::string name , int age)
               : name_{name} , age_{age}
{
    std::cout << "Created in Base Person Parameterized Constructor\n";
}

Person::~Person()
{
    std::cout << "Destroyed in Base Person Destructor\n";
}