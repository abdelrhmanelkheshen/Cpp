/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source file for Assignment 11
*/
#include <iostream>

template<class InputIterator , class T>

InputIterator find(InputIterator first, InputIterator last, const T& val)
{
    while(first != last)
    {
        if (*first == val)
        {
            return first;
        }
        else
        {
            first++;
        }
    }
    return last;
}

int main(void)
{
    int arr[] = {1,2,3,4,5,6};
    int* ptr = nullptr;
    int x = 6;
    ptr = find<int* , int>(arr , arr + 6 , x);
    std::cout << *ptr << std::endl;
    std::cout << ptr << std::endl;
    return 0;
}
