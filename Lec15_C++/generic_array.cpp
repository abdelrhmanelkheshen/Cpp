/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Templates with classes , stack
*/
#include <iostream>
#include "stack.hpp"
// template <class T>
// class Stack
// {
//     public:
//     Stack(std::size_t size)
//                           : size_{size} , top_{-1}
//     {
//         buffer_ = new T[size_];
//     }
//     ~Stack()
//     {
//         delete[] buffer_;
//     }
//     void Push(T element)
//     {
//         buffer_[++top_] = element;
//     }
//     void Pop(T& element)
//     {
//         element = buffer_[top_--];
//     }
//     private:
//     T* buffer_;
//     std::size_t size_;
//     int top_;
// };
template <class T>
class Queue
{
    public:
    Queue(std::size_t size)
                          : size_{size} , top_{-1} , numbersInserted_{-1}
    {
        buffer_ = new T[size_];
    }
    ~Queue()
    {
        delete[] buffer_;
    }
    void Push(T element)
    {
        buffer_[++top_] = element;
        numbersInserted_++;
    }
    void Pop(T& element)
    {
        element = buffer_[numbersInserted_ - top_];
        top_--;
        //numbersInserted_--;
    }
    private:
    T* buffer_;
    std::size_t size_;
    int top_;
    int numbersInserted_;    
};

int main(void)
{
    Stack<double> stack(10);
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);

    double element{0};
    stack.Pop(element);
    std::cout << element << std::endl;
    stack.Pop(element);
    std::cout << element << std::endl;
    stack.Pop(element);
    std::cout << element << std::endl;

    std::cout << "\n\n Queue\n";
    Queue<int> queue(10);
    queue.Push(10);
    queue.Push(20);
    queue.Push(30);

    int element2{0};
    queue.Pop(element2);
    std::cout << element2 << std::endl;
    queue.Pop(element2);
    std::cout << element2 << std::endl;
    queue.Pop(element2);
    std::cout << element2 << std::endl;


    
    return 0;
}
