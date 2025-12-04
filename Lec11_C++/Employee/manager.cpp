/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class Manager
*/

#include "manager.hpp"
#include <iostream>

Manager::Manager()
{
    std::cout << "This object was created in manager default constructor" << std::endl;
}

Manager::Manager(std::string name, int age, int id, float salary,std::string department)
    : Employee(name,age,id,salary) , department_{department}
{
    std::cout << "This object was created in manager parametized constructor" << std::endl;
}

Manager::~Manager()
{
    std::cout << "This object was destroyed in manager destructor" << std::endl;
}

void Manager::setDepartment(std::string department)
{
    this->department_ = department;
}

std::string Manager::getDepartment()
{
    return this->department_;
}
