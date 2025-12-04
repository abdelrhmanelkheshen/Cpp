/*
    Author : Abdelrhman El Kheshen
    Date : 15 / 10 / 2025
    Details : Assignment 4
*/

#include <iostream>
/*Task 8.1*/

/*int add(int num1,int num2)
{
    return num1 + num2;
}

int sub(int num1,int num2)
{
    return num1 - num2;
}

int main(void)
{
    std::cout << "Choose an operation:\n1- Add\n2- Sub\n";
    char op;
    std::cin >> op;
    int (*ptr2fun)(int,int) = nullptr;
    int a,b;
    int result;
    if(op == '1')
    {
        std::cout << "Enter two numbers: \n";
        std::cin >> a >> b;
        ptr2fun = add;
        result = (*ptr2fun)(a,b);
        std::cout << "Result: " << result << std::endl;    
    }
    else if(op == '2')
    {
        std::cout << "Enter two numbers: \n";
        std::cin >> a >> b;
        ptr2fun = sub;
        result = (*ptr2fun)(a,b);
        std::cout << "Result: " << result << std::endl;   
    }
    return 0;
}*/

/*Task 8.3*/

/*#include <functional>
#include <algorithm>

void sort(int*ptr , int size , std::function<bool (int a, int b)> compare)
{
    std::sort(ptr,ptr + (size -1),compare);
}

int main(void)
{
    std::cout << "Enter the size of the array: \n";
    int size;
    std::cin >> size;
    int arr[size];
    std::cout << "Enter the elements of the array: \n";
    for(int &i : arr)
    {
        std::cin >> i;
    }
    sort(arr,size,[](int a, int b) -> bool
                                    {
                                        return a > b;
                                    });

    for(int i : arr)
    {
        std::cout << i << " ";
    }   
    return 0;
}*/

/*Task 8.4*/

/*int main(void)
{
    int num{10};

    auto lambda = [&num]()->void
                            {
                                std::cout << "num in lambda before update = " << num << std::endl;
                                num++;
                                std::cout << "num in lambda after update = " << num << std::endl;
                            };
    lambda();
    std::cout << "num after lambda in main function = " << num << std::endl;
    return 0;
}*/

/*Task 8.5*/

/*#include <functional>

int main()
{
    int num{10};
    auto print = [](int x) -> void
                            {
                                std::cout << "x = " << x << std::endl;
                            };
    auto capture = [&num](int x) -> void
                            {
                                std::cout << "num = " << num << std::endl;
                                std::cout << "x = " << x << std::endl;
                            };

        
    return 0;
}*/