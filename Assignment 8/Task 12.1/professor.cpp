/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source file for class Professor
*/
#include "professor.hpp"
#include <iostream>

// Definition and initialization of the static member.
// This is done once, outside of any class methods.
int Professor::currentID_ = 0;

Professor::Professor()
                     : Person() , publications_{-1}
{
    std::cout << "Created in Professor default Constructor\n";
}

Professor::Professor(std::string name,int age,int publications)
                     : Person(name,age) , publications_{publications}
{
    std::cout << "Created in Professor Parameterized Constructor\n";
    currentID_++;
}

Professor::~Professor()
{
    std::cout << "Destroyed in Professor Destructor\n";
}

void Professor::setPublications(int publications)
{
    this->publications_ = publications;
}

int Professor::getPublications(void)
{
    return this->publications_;
}

void Professor::getData(std::string name , int age)
{
    this->name_ = name;
    this->age_ = age;
    std::cout << "Enter the number of publications: ";
    int publications;
    std::cin >> publications;
    setPublications(publications);
}


void Professor::putData()
{
    std::cout << "Name of Professor is : " << this->name_ << "\n";
    std::cout << "Age of Professor is : " << this->age_ << "\n";
    std::cout << "Number of publications is : " << this->publications_ << "\n";
    std::cout << "ID of Professor is : " << currentID_ << "\n";
    std::cout << "\n";
}
