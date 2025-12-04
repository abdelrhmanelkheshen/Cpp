/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Header File for Class Stack
*/
#ifndef STACK_H_
#define STACK_H_
#include <iostream>
template<class T>
class Stack
{
    public:
    Stack(std::size_t size);
    ~Stack();
    void Push(T element);
    void Pop(T& element);
    private:
    T* buffer_;
    std::size_t size_;
    int top_;
};

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



#endif // STACK_H_