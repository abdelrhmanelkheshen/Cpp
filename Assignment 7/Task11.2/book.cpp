/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source File for class Book
*/
#include "book.hpp"
#include <iostream>

Book::Book() 
           : title_{"Unknown"} , author_{"Unknown"} , availablility_{false}
{
    std::cout << "Default Constructor of Class Book.\n";
}
Book::Book(std::string title, std::string author, bool availability)
                                            : title_{title} , author_{author} , availablility_{availability}
{
    std::cout << "Parameterized Constructor of Class Book.\n";
    std::cout << this->title_ << " by " << this->author_ << " is ";
    if(this->availablility_)
    {
        std::cout << "Available.\n";
    }
    else
    {
        std::cout << "Not Available.\n";
    }
}
Book::~Book()
{
    std::cout << "Destructor of Class Book.\n";
}

void Book::displayInfo()
{
    std::cout << this->title_ << " by " << this->author_ << " is ";
    if(this->availablility_)
    {
        std::cout << "Available.\n";
    }
    else
    {
        std::cout << "Not Available.\n";
    }
}
bool Book::isAvailable(std::string title)
{
    return this->availablility_;
}
void Book::borrowItem(std::string title)
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
void Book::returnItem(std::string title)
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

                                 