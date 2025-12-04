/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Header file for class Page
*/
#ifndef PAGE_H_
#define PAGE_H_

#include "pageobject.hpp"

class Page : public PageObject
{
    public:
    Page();
    ~Page();
    void addItem(PageObject* object) override;
    void removeItem(PageObject* object) override;
    void deleteItem(PageObject* object) override;
    private:
    std::vector<PageObject*> pageItems_;
};

#endif // PAGE_H_