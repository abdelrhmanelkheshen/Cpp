/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Header File for class Rectangle
*/

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.hpp"

class Rectangle : public Shape
{
    public:
    Rectangle(void);
    Rectangle(float length,float width);
    ~Rectangle();
    void setLength(float length);
    float getLength(void);
    void setWidth(float width);
    float getWidth(void);
    double getArea() override;
    void displayArea() override;
    Rectangle& operator=(Rectangle& shape);
    Rectangle operator+(Rectangle shape);
    Rectangle operator-(Rectangle shape);
    Rectangle operator*(Rectangle shape);
    Rectangle operator/(Rectangle shape);

    private:
    float length_;
    float width_;
};

#endif // RECTANGLE_H_
