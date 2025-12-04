/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source file for class Page
*/
#include "page.hpp"
#include <iostream>
#include <algorithm>
Page::Page()
{
    std::cout << "Object was created in Page default constructor.\n";
}

Page::~Page()
{
    std::cout << "Object was deleted in Page destructor.\n";
}

void Page::addItem(PageObject* object)
{
    this->pageItems_.push_back(object);
    std::cout << "Page Added\n";
};

void Page::removeItem(PageObject* object)
{
    this->pageItems_.erase(std::remove(this->pageItems_.begin(),this->pageItems_.end(),object));
    std::cout << "Page Removed\n";
};

void Page::deleteItem(PageObject* object)
{
    this->pageItems_.erase(std::remove(this->pageItems_.begin(),this->pageItems_.end(),object));
    std::cout << "Page Deleted\n";
};