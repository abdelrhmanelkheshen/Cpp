/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Assignment 8
*/
#include "student.hpp"
#include "professor.hpp"

auto main() -> int
{
    Student student("Ahmed",19,std::array<int,6>{100});
    student.getData("Ahmed",19);
    student.putData();

    Professor professor("Mohamed",50,10);
    professor.getData("Mohamed",50);
    professor.putData();

    return 0;

}