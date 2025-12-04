/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Person
*/
#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
class Person
{
    public:
    Person();
    Person(std::string name , int age);
    virtual void getData(std::string name , int age) = 0;
    virtual void putData() = 0;
    virtual ~Person();
    protected:
    std::string name_;
    int age_;
};


#endif // _PERSON_H_