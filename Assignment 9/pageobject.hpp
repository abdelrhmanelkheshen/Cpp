/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Header file for class PageObject
*/
#ifndef PAGE_OBJECT_H_
#define PAGE_OBJECT_H_
#include <vector>
class PageObject
{
    public:
    PageObject();
    virtual ~PageObject();
    virtual void addItem(PageObject* object);
    virtual void removeItem(PageObject* object);
    virtual void deleteItem(PageObject* object);
    protected:
};

#endif // PAGE_OBJECT_H