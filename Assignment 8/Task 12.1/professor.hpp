/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header file for class Professor
*/
#ifndef _PROFESSOR_H_
#define _PROFESSOR_H_

#include "person.hpp"

class Professor : public Person
{
    public:
    Professor();
    Professor(std::string name,int age,int publications);
    void getData(std::string name,int age) override;
    void setPublications(int publications);
    int getPublications(void);
    void putData()override;
    ~Professor();
    private:
    int publications_;
    static int currentID_;
};

#endif // _PROFESSOR_H_