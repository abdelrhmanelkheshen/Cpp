/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for class Library Item
*/
#ifndef _LIBRARY_ITEM_H_
#define _LIBRARY_ITEM_H_

#include <string>
class libraryItem
{
    public:
    libraryItem();
    virtual void displayInfo() = 0;
    virtual bool isAvailable(std::string title) = 0;
    virtual void borrowItem(std::string title) = 0;
    virtual void returnItem(std::string title) = 0;
    virtual ~libraryItem();
};


#endif // _LIBRARY_ITEM_H_
