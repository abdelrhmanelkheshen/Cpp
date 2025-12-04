/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source File for class Magazine
*/
#include "magazine.hpp"
#include <iostream>

Magazine::Magazine() 
           : title_{"Unknown"} , issueNumber_{-1} , availablility_{false}
{
    std::cout << "Default Constructor of Class Magazine.\n";
}
Magazine::Magazine(std::string title, int issueNumber, bool availability)
                                            : title_{title} , issueNumber_{issueNumber} , availablility_{availability}
{
    std::cout << "Parameterized Constructor of Class Magazine.\n";
    std::cout << this->title_ << " issue number :  " << this->issueNumber_ << " is ";
    if(this->availablility_)
    {
        std::cout << "Available.\n";
    }
    else
    {
        std::cout << "Not Available.\n";
    }
}
Magazine::~Magazine()
{
    std::cout << "Destructor of Class Magazine.\n";
}

void Magazine::displayInfo()
{
    std::cout << this->title_ << " issue number :  " << this->issueNumber_ << " is ";
    if(this->availablility_)
    {
        std::cout << "Available.\n";
    }
    else
    {
        std::cout << "Not Available.\n";
    }
}
bool Magazine::isAvailable(std::string title)
{
    return this->availablility_;
}
void Magazine::borrowItem(std::string title)
{
    if(this->availablility_ == false)
    {
        std::cout << "Not available now.\n";
    }
    else
    {
        std::cout << "Available now.\n";
        this->availablility_ = false;
    }
               
}
void Magazine::returnItem(std::string title)
{
    if(this->availablility_ == false)
    {
        std::cout << "Thanks for returning it.\n";
        this->availablility_ = false;
    }
    else
    {
        std::cout << "ERROR.\n";
    }
}

                                 