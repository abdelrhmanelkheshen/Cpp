/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source file for class Student
*/
#include "student.hpp"
#include <iostream>

// Definition and initialization of the static member.
// This is done once, outside of any class methods.
int Student::currentID_ = 0;

Student::Student()
                     : Person() , marks_{0}
{
    std::cout << "Created in Student default Constructor\n";
}

Student::Student(std::string name,int age,std::array<int,6> marks)
                     : Person(name,age) , marks_{marks}
{
    std::cout << "Created in Student Parameterized Constructor\n";
    currentID_++;
}

Student::~Student()
{
    std::cout << "Destroyed in Student Destructor\n";
}

void Student::setMarks(std::array<int,6> &marks)
{
    
    for(int i = 0 ; i < 6 ; i++)
    {
        this->marks_[i] = marks[i];
    }
}

void Student::getData(std::string name , int age)
{
    this->name_ = name;
    this->age_ = age;
    std::cout << "Enter your 6 grades out of 100 : ";
    std::array<int,6> grades;
    for(auto& element : grades)
    {
        std::cin >> element;
    }
    setMarks(grades);
}

void Student::displayMarks()
{
    for(auto element : this->marks_)
    {
        std::cout << element << " ";
    }
}

void Student::putData()
{
    std::cout << "Name of Student is : " << this->name_ << "\n";
    std::cout << "Age of Student is : " << this->age_ << "\n";
    std::cout << "ID of Student is : " << currentID_ << "\n";
    std::cout << "Marks of Student are : ";
    displayMarks();
    std::cout << "\n";
}
