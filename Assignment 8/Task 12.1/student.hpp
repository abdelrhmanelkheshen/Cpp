/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Student
*/
#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "person.hpp"
#include <array>
class Student : public Person
{
    public:
    Student();
    Student(std::string name,int age,std::array<int,6> marks);
    void getData(std::string name,int age) override;
    void setMarks(std::array<int,6>& marks);
    void displayMarks();
    void putData()override;
    ~Student();
    private:
    std::array<int,6> marks_;
    static int currentID_;
};


#endif // _STUDENT_H_