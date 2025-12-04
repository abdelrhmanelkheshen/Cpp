/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class employee
*/
#include "employee.hpp"
#include <iostream>


Employee::Employee(void)
{
    std::cout << " is created in default constructor.\n";
}

Employee::Employee(std::string name, int age, int id, float salary) 
                  : Name{name},age{age},id{id},salary{salary}
{
    // this->Name = name; // This or initialization using two dots are same
    // this->age = age;
    // this->id = id;
    // this->salary = salary;
    std::cout << this->Name << " is created in parameterized constructor.\n";
}

Employee::~Employee(void)
{
    std::cout << this->Name << " is destroyed.\n";
}

void Employee::setName(std::string name)
{
    this->Name = name;
}

std::string Employee::getName(void)
{
    return this->Name;
}
void Employee::setAge(int age)
{
    this->age = age;
}

int Employee::getAge(void)
{
    return this->age;
}

void Employee::setId(int id)
{
    this->id = id;
}
int Employee::getId(void)
{
    return this->id;
}
void Employee::setSalary(float salary)
{
    this->salary = salary;
}
float Employee::getSalary(void)
{
    return this->salary;
}
void Employee::Hire(void)
{
    std::cout << this->Name << " is hired.\n";
    this->hireStatus = true;
    this->fireStatus = false;
}

bool Employee::getHireStatus(void)
{
    return this->hireStatus;
}

void Employee::Fire(void)
{
    std::cout << this->Name << " is fired.\n";
    this->hireStatus = false;
    this->fireStatus = true;
}
bool Employee::getFireStatus(void)
{
    return this->fireStatus;
}

void Employee::printHiringStatus(void)
{
    if(this->hireStatus == true)
    {
        std::cout << this-> Name << " is hired.\n";
    }
    else
    {
        std::cout << this-> Name << " is fired.\n";
    }
}
