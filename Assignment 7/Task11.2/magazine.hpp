/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for class Magazine
*/
#ifndef _MAGAZINE_H_
#define _MAGAZINE_H_


#include "libraryItem.hpp"

class Magazine : public libraryItem
{
    public:
    Magazine();
    Magazine(std::string title, int issueNumber, bool availability);
    void displayInfo() override;
    bool isAvailable(std::string title) override;
    void borrowItem(std::string title) override;
    void returnItem(std::string title) override;
    ~Magazine();
    private:
    std::string title_;
    int issueNumber_;
    bool availablility_;
};




#endif // _MAGAZINE_H_