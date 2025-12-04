#include <iostream>

namespace integers
{
    int Val = 100;
}

namespace decimals
{
    float Val = 10.5;
}

int main(void)
{
    std::cout << integers::Val << "\n" << decimals::Val << "\n";
    return 0;
}
