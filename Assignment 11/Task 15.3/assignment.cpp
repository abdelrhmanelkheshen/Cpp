/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Source file for assignment 11
*/
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
struct Record
{
    public:
    std::string name_;
    int power_level;
    void printData(void)
    {
        std::cout << "Name : " << name_ << " , Power Level : " << power_level << std::endl;
    }
};


int main(void)
{
    std::vector<Record> objects 
                                {
                                    {"Abdelrhman", 60},
                                    {"Ahmed" , 70},
                                    {"Mohamed" , 80},
                                    {"Ali" , 90},
                                    {"Omar" , 100}
                                };
    auto cmpByName = [](const Record& a , const Record& b) -> bool
    {
        return a.name_ > b.name_;
    };
    auto cmpByPower = [](const Record& a , const Record& b) -> bool
    {
        return a.power_level > b.power_level;
    };
    std::sort(objects.begin(),objects.end(),cmpByName);
    for(auto element : objects)
    {
        element.printData();
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::sort(objects.begin(),objects.end(),cmpByPower);
     for(auto element : objects)
    {
        element.printData();
        std::cout << std::endl;
    }
    return 0;
}