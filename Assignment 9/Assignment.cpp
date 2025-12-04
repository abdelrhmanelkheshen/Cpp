/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source file for Assignment 9
*/
#include "page.hpp"
#include "copy.hpp"

int main()
{
    PageObject* object = new PageObject();
    Page* page = new Page();
    page->addItem(object);
    PageObject object2;
    page->addItem(&object2);

    page->removeItem(object);
    page->deleteItem(&object2);
    delete page;
    delete object;
    return 0;
}