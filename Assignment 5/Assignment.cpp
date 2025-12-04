/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Assignment 5
*/

#include <iostream>
#include <vector>
#include <algorithm>
/*Task 9.1*/

/*bool test(std::vector<int> nums)
{
    bool result{false};
    std::sort(nums.begin(),nums.end(),[](int a ,  int b) -> bool
                                                        {
                                                            return a < b;
                                                        });
    for(auto element : nums)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    for(int i =0;i < nums.size();i++)
    {
        if(i == nums.size() - 1)
        {
            std::cout << "ahmed\n";
            break;
        }
        else if((nums.at(i+1) - nums.at(i)) == 1)
        {

            result = true;
        }
        else
        {
            result = false;
            break;
        }
    }
    std::cout << result << std::endl;
    return result;
}

int main(void)
{
    std::cout << "Enter the size of vector : ";
    int size;
    std::cin >> size;
    std::vector<int> nums(size);
    std::cout << "Enter the elements of vector nums : ";
    for(auto &element : nums)
    {
        std::cin >> element;
    }

    bool sortedVec = test(nums);
    if(sortedVec == true)
    {
        std::cout << "Nums vector is consecutive" << std::endl;
    }
    else
    {
        std::cout << "Nums vector is not consecutive" << std::endl;
    }

    return 0;
}*/

/*Task 9.2*/

/*#include <functional>

void Calculate(std::function<bool (void)> swapFun , std::function<void (void)> printFun)
{
    bool swapResult = swapFun();
    if(swapResult == true)
    {
        printFun();
    }
    else
    {
        std::cout << "ERROR\n";
    }
}

int main(void)
{
    std::cout << "Enter the size of vector : ";
    int size;
    std::cin >> size;
    std::vector<int> v1(size);
    std::vector<int> v2(size);
    std::cout << "Enter the elements of vector V1 : ";
    for(auto &element : v1)
    {
        std::cin >> element;
    }
    std::cout << "\n";
    std::cout << "Enter the elements of vector V2 : ";
    for(auto it = v2.begin(); it != v2.end();it++)
    {
        std::cin >> *it;
    }
    std::cout << "\n";
    auto ascending = [](int a , int b)->bool
                        {
                            return a < b;
                        };


    auto swap = [&]() -> bool
                        {
                            std::cout << "In swap function\n";
                            bool result;
                            std::vector<int> temp(size);
                            temp = v1;
                            std::sort(v2.begin(),v2.end(),ascending);
                            std::cout << "\n before swap\n";
                            for(auto element : v2)
                            {
                                std::cout << element << " ";
                            }
                            
                            std::swap(v1,v2);
                            std::cout << "\n after swap\n";
                            for(auto element : v2)
                            {
                                std::cout << element << " ";
                            }
                            
                            if(temp[0] == v1[0])
                            {
                                result = false;
                            }
                            else
                            {
                                result = true;
                            }
                            return result;
                        };
    
    auto print = [&]() -> void
                        {
                            std::cout << "In print function\n";
                            
                            std::cout << "The Elements have been swapped successfully" << std::endl;
                            
                            std::cout << "V1 : ";
                            for(auto element : v1)
                            {
                                std::cout << element << " ";
                            }
                            std::cout << "\n";
                            std::cout << "V2 : ";
                            for(auto element : v2)
                            {
                                std::cout << element << " ";
                            }
                            std::cout << "\n";
                        };

    Calculate(swap,print);
    // bool result = swap();
    // std::cout << "\nresult : "<< result << std::endl;
    // print();
    return 0;
}*/