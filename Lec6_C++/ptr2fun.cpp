/*
    Author : Abdelrhman El Kheshen
    Date: 15 / 10 / 2025
    Details : Pointer to Function
*/

#include <iostream>

void func2(int a)
{
    std::cout << "a " << a << std::endl;
}

void func1(void (*ptr2fun)(int))
{
    int data = 7;
    (*ptr2fun)(data);
}


struct ahmed
{
    void operator()(int a)
    {
        std::cout << "a " << a << std::endl;
    }

    void operator()(short a)
    {
        std::cout << "ab " << a << std::endl;
    }
};

int main(void)
{
    func1(func2);
    ahmed ha;
    int x = 9;
    int y = 10;
    return 0;
}
