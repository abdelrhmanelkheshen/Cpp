/*
    Author : Abdelrhman El Kheshen
    Date : 31 / 10 / 2025
    Details : Source File for algorithms
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

struct Record
{
    public:
    std::string Name;
    std::string Add;
};

struct CompByName
{
    bool operator()(const Record& record1, const Record& record2)
    {
        return record1.Name > record2.Name;
    }
};

struct CompByAdd
{
    bool operator()(const Record& record1, const Record& record2)
    {
        return record1.Add > record2.Add;
    }
};

int main(void)
{
    std::vector<Record> records(2);
    records.at(0) = {"Abdelrhman" , "Cairo"};
    records.at(1) = {"Ahmed" , "Alex"};
    std::cout <<"Greater by Name is : ";
    std::sort(records.begin() , records.end() , CompByName());
    for (auto element : records)
    {
        std::cout << element.Name << " ";
    }
    std::cout << std::endl;
    std::sort(records.begin() , records.end() , CompByAdd());
    std::cout <<"Greater by Address is : ";
    for (auto element : records)
    {
        std::cout << element.Add << " ";
    }
    std::cout << std::endl;
    return 0;

}