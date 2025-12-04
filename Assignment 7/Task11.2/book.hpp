/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for class Book
*/
#ifndef _BOOK_H_
#define _BOOK_H_


#include "libraryItem.hpp"

class Book : public libraryItem
{
    public:
    Book();
    Book(std::string title, std::string author, bool availability);
    void displayInfo() override;
    bool isAvailable(std::string title) override;
    void borrowItem(std::string title) override;
    void returnItem(std::string title) override;
    ~Book();
    private:
    std::string title_;
    std::string author_;
    bool availablility_;
};




#endif // _BOOK_H_