/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for class Circle

*/
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "shape.hpp"


class Circle : public Shape
{
    public:
    Circle(void);
    Circle(float radius);
    ~Circle(void);
    void setRadius(float radius);
    float getRadius(void);
    double getArea() override;
    void displayArea() override;

    private:
    float radius_;
};


#endif // CIRCLE_H_