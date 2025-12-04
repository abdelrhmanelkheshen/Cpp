/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Header File for Class Queue
*/
#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>

template<class T>
class Queue
{
    public:
    Queue(std::size_t size);
    ~Queue();
    void Push(T element);
    void Pop(T& element);
    private:
    T* buffer_;
    std::size_t size_;
    int top_;
    int numbersInserted_;
};

template<class T>
Queue<T>::Queue(std::size_t size)
                            : size_{size} , top_{-1} , numbersInserted_{-1}
{
    buffer_ = new T[size_];
}

template<class T>
Queue<T>::~Queue()
{
    delete[] buffer_;
}

template<class T>
void Queue<T>::Push(T element)
{
    buffer_[++top_] = element;
    numbersInserted_++;
}

template<class T>
void Queue<T>::Pop(T& element)
{
    element = buffer_[numbersInserted_ - top_];
    top_--;
}

#endif // QUEUE_H_