/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for Application
*/
#include <iostream>
#include "employee.hpp"

int main()
{
    Employee emp1;
    emp1.setName("Ahmed");
    emp1.setAge(25);
    emp1.Hire();
    emp1.setId(1);
    emp1.setSalary(2000);
    
    std::cout << std::endl;
    std::cout << "Name : " << emp1.getName() << std::endl;
    std::cout << "Age : " << emp1.getAge() << std::endl;
    std::cout << "Hire Status : " << emp1.getHireStatus() << std::endl;
    std::cout << "Id : " << emp1.getId() << std::endl;
    std::cout << "Salary : " << emp1.getSalary() << std::endl;
    emp1.printHiringStatus();

    std::cout << std::endl;

    Employee emp2("Abdelrhman",25,2,3000);
    std::cout << "Name : " << emp2.getName() << std::endl;
    std::cout << "Age : " << emp2.getAge() << std::endl;
    emp2.Hire();
    std::cout << "Hire Status : " << emp2.getHireStatus() << std::endl;
    std::cout << "Id : " << emp2.getId() << std::endl;
    std::cout << "Salary : " << emp2.getSalary() << std::endl;
    emp2.printHiringStatus();
    std::cout << std::endl;


    return 0;
}