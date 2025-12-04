/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Header File for class shape
*/

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape
{
    public:
    Shape(void);
    Shape(float length,float width);
    ~Shape();
    void setLength(float length);
    float getLength(void);
    void setWidth(float width);
    float getWidth(void);
    Shape& operator=(Shape& shape);
    Shape operator+(Shape shape);
    Shape operator-(Shape shape);
    Shape operator*(Shape shape);
    Shape operator/(Shape shape);

    private:
    float length_;
    float width_;
};

#endif // SHAPE_H_
