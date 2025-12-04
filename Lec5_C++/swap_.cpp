/*
    Author : Abdelrhman El Kheshen
    Date : 14 / 10 / 2025
    Details : Difference between pass by value and pass by address
*/


#include <iostream>
#include <algorithm>

void swapByAddress(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}



int main(void)
{
    int x = 10;
    int y = 20;
    int*ptr;
    swapByValue(x,y);
    std::cout << "x " << x << " y " << y << std::endl;
    swapByAddress(&x,&y);
    std::cout << "x " << x << " y " << y << std::endl;
    std::swap(x,y);
    std::cout << "x " << x << " y " << y << std::endl;
    std::cout << "size " << sizeof(ptr) << std::endl;
    return 0;
}