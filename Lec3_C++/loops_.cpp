#include <iostream>

int main(void)
{
    int arr[] = {10,2,3,40,5};
    for(int i : arr)
    {
        std::cout << "I = " << i << "\n";
    }
    return 0;
}