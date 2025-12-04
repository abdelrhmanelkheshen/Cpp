/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source file for class PageObject
*/
#include "pageobject.hpp"
#include <iostream>

PageObject::PageObject()
{
    std::cout << "Object was created in PageObject default constructor.\n";
}

PageObject::~PageObject()
{
    std::cout << "Object was deleted in PageObject destructor.\n";
}

void PageObject::addItem(PageObject* /*object*/)
{
}

void PageObject::removeItem(PageObject* /*object*/)
{
}

void PageObject::deleteItem(PageObject* /*object*/)
{
}
