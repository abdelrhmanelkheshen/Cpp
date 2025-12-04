/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Assignment 6
*/
#include <iostream>

/*Task 10.1*/
/*#include "student.hpp"

auto main() -> int
{
    Student s1("Abdelrhman",25,1);
    Student s2("Ahmed",25,2);
    s1.setAge(30);
    s2.setId(10);

    s1.printInfo();
    s2.printInfo();

    std::cout << s1;
    std::cout << s2;

    return 0;
}*/

/*Task 10.2*/
#include <string>
#include <vector>

struct item 
{
    std::string name_;
    float price_;
    int quantity_;
};

auto main() -> int
{
    std::vector<item> inventory(4);
    inventory[0] = {"Laptop" , 1000 , 10};
    inventory[1] = {"Smartphone" , 500 , 20};
    inventory[2] = {"Tablet" , 300 , 15};
    inventory[3] = {"Headphones" , 100 , 0};



    auto updateItemPrice = [&inventory](std::string name , float price) -> void
                                                                         {
                                                                            for (auto& element : inventory)
                                                                            {
                                                                                if(element.name_ == name)
                                                                                {
                                                                                    element.price_ = price;
                                                                                    break;
                                                                                }
                                                                            }
                                                                         };
    auto isOutOfStock = [inventory](std::string name) -> bool
                                                        {
                                                            bool result;
                                                            for(auto element : inventory)
                                                            {
                                                                if(element.name_ == name)
                                                                {
                                                                    if(element.quantity_ == 0)
                                                                    {
                                                                        result = true;
                                                                    }
                                                                    else
                                                                    {
                                                                        result = false;
                                                                    }
                                                                }
                                                            }
                                                            return result;
                                                        };
    auto totalInventoryValue = [&inventory]() -> double
                                                        {
                                                            double result = 0;
                                                            for (auto element : inventory)
                                                            {
                                                                result += (element.price_ * element.quantity_);
                                                            }
                                                            return result;
                                                        };
    
    updateItemPrice("Laptop" , 1500);
    std::cout << inventory[0].price_ << "\n";
    std::cout << isOutOfStock("Headphones") << "\n"; 
    std::cout << totalInventoryValue() << "\n";                                                              
    return 0;
}
