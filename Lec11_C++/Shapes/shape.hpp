/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Header File for class Shape
*/

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape
{
    public:
    Shape();
    virtual ~Shape(); // Virtual destructor
    virtual double getArea(); // might be overriden
    virtual void displayArea();
    protected:
    double area_;
};


#endif // SHAPE_H_