/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Header file for class Copy
*/
#ifndef COPY_H_
#define COPY_H_

#include "pageobject.hpp"
#include <vector>

class Copy : public PageObject
{
    public:
    Copy();
    ~Copy();
    void addItem(PageObject* object) override;
    void removeItem(PageObject* object) override;
    void deleteItem(PageObject* object) override;
    private:
    std::vector<PageObject*> items_;
};

#endif // COPY_H_