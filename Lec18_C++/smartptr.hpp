/*
    Author : Abdelrhman El Kheshen
    Date : 31 / 10 / 2025
    Details : Header file for class SmartPtr
*/
#ifndef SMARTPTR_H
#define SMARTPTR_H
#include <iostream>

template <class T>
class SmartPtr
{
    public:
    // Smartptr(T*ptr)
    //             : ptr_{ptr}
    // {

    // }
    SmartPtr()
    {
        ptr_ = new T;
    }
    ~SmartPtr()
    {
        delete ptr_;
        std::cout << "Destructor called" << std::endl;
    }
    SmartPtr(const SmartPtr& copy) = delete;
    SmartPtr& operator=(const SmartPtr& copy) = delete;
    SmartPtr(SmartPtr&& other) 
                                : ptr_{std::move(other.ptr_)}
    {
        // ptr_ = other.ptr_;
        // other.ptr_ = nullptr;
    }
    T& operator*()
    {
        return *ptr_;
    }

    private:
    T* ptr_;
};

#endif // SMARTPTR_H

