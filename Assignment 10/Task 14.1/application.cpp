/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source File for Application
*/
#include "stack.hpp"
#include "queue.hpp"



int main(void)
{
    Stack<int> stack(5);
    Queue<int> queue(5);

    stack.Push(1);
    stack.Push(2);


    queue.Push(10);
    queue.Push(20);

    std::cout << "Stack: " << std::endl;

    int element{0};
    stack.Pop(element);
    std::cout << element << std::endl;
    stack.Pop(element);
    std::cout << element << std::endl;
    std::cout << "Queue: " << std::endl;

    queue.Pop(element);
    std::cout << element << std::endl;
    queue.Pop(element);
    std::cout << element << std::endl;

    return 0;

    
}