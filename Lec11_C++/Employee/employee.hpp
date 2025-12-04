/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Header File for class employee
*/
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<string>

class Employee
{
    public:
    Employee(void);
    Employee(std::string name, int age, int id, float salary);
    virtual ~Employee(void);
    void setName(std::string name);
    std::string getName(void);
    void setAge(int age);
    int getAge(void);
    void setId(int id);
    int getId(void);
    void setSalary(float salary);
    float getSalary(void);
    void Hire(void);
    bool getHireStatus(void);
    void Fire(void);
    bool getFireStatus(void);
    void printHiringStatus(void);

    protected:
    std::string Name;
    int age;
    int id;
    float salary;
    bool hireStatus;
    bool fireStatus;
};

#endif // EMPLOYEE_H_