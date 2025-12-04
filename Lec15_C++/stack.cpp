/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source File for Class Stack
*/
#include "stack.hpp"

template<class T>
Stack<T>::Stack(std::size_t size)
                            : size_{size} , top_{-1}
{
    buffer_ = new T[size_];
}

template<class T>
Stack<T>::~Stack()
{
    delete[] buffer_;
}

template<class T>
void Stack<T>::Push(T element)
{
    buffer_[++top_] = element;
}

template<class T>
void Stack<T>::Pop(T& element)
{
    element = buffer_[top_--];
}