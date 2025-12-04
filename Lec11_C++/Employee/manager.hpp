/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Header File for class Manager
*/

#ifndef MANAGER_H_
#define MANAGER_H_

#include "employee.hpp"

class Manager : public Employee
{
    public:
    Manager();
    Manager(std::string name, int age, int id, float salary,std::string department);
    ~Manager();
    void setDepartment(std::string department);
    std::string getDepartment();
    private:
    std::string department_;
};







#endif // MANAGER_H_

