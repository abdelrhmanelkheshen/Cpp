/*
    Author : Abdelrhman El Kheshen
    Date : 29 / 10 / 2025
    Details : Source File for Linked List
*/
#include <string>
#include <iostream>
struct Record
{
    std::string Name;
    int age;
};

struct Node
{
    Record record;
    Node* next;
};

auto main() -> int
{
    Node* Head = new Node;
    Head->record.Name = "Ahmed";
    Head->record.age = 20;
    Node* Second = new Node;
    Head->next = Second;
    Second->record.Name = "Ali";
    Second->record.age = 21;
    Second->next = nullptr;

    while(Head != nullptr)
    {
        std::cout << Head->record.Name << " " << Head->record.age << std::endl;
        Head = Head->next;
    }
    return 0;
}