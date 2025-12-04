/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Source file for class Student
*/
#include "student.hpp"
#include <iostream>

Student::Student() : name_{" "},age_{-1},id_{-1}
{
    std::cout << "The object was created successfully in student default constructor.\n";
}

Student::Student(std::string Name, int Age, int Id) : name_{Name},age_{Age},id_{Id}
{
    std::cout << "The object was created successfully in student parameterized constructor.\n";
}

Student::~Student()
{
    std::cout << "The object was destroyed successfully in student destructor.\n";
}

void Student::setName(std::string Name)
{
    this->name_ = Name;
}

std::string Student::getName(void)
{
    return this->name_;
}

void Student::setAge(int age)
{
    this->age_ = age;
}

int Student::getAge(void)
{
    return this->age_;
}

void Student::setId(int id)
{
    this->id_ = id;
}

int Student::getId(void)
{
    return this->id_;
}

void Student::printInfo(void)
{
    std::cout << "Name : " << this->name_ << "\n";
    std::cout << "Age : " << this->age_ << "\n";
    std::cout << "Id : " << this->id_ << "\n";
}

std::ostream& operator<<(std::ostream& ostream, const Student& student)
{
    ostream << "Name : " << student.name_ << "\n" << "Age : " << student.age_ << "\n" << "Id : " << student.id_ << "\n";
    return ostream;
}
