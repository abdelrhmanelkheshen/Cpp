/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Header file for class Student
*/
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
class Student
{
    public:
    Student();
    Student(std::string Name, int Age, int Id);
    ~Student();
    void setName(std::string Name);
    std::string getName(void);
    void setAge(int age);
    int getAge(void);
    void setId(int id);
    int getId(void);
    void printInfo(void);

    friend std::ostream& operator<<(std::ostream& ostream, const Student& student);
    private:
    std::string name_;
    int age_;
    int id_;
};













#endif /* STUDENT_H_ */
