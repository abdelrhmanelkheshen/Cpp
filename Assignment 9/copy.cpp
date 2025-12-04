/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source file for class Copy
*/
#include "copy.hpp"
#include <iostream>
#include <algorithm>
Copy::Copy()
{
    std::cout << "Object was created in Copy default constructor.\n";
}

Copy::~Copy()
{
    std::cout << "Object was deleted in Copy destructor.\n";
}

void Copy::addItem(PageObject* object)
{
    this->items_.push_back(object);
    std::cout << "Copy Page Added\n";
};

void Copy::removeItem(PageObject* object)
{
    this->items_.erase(std::remove(this->items_.begin(),this->items_.end(),object));
    std::cout << "Copy Page Removed\n";
};

void Copy::deleteItem(PageObject* object)
{
    this->items_.erase(std::remove(this->items_.begin(),this->items_.end(),object));
    std::cout << "Copy Page Deleted\n";
};