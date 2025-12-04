/*
    Author : Abdelrhman El Kheshen
    Date : 18 / 10 / 2025
    Details : Source File for Application
*/

#include "shapes.hpp"
#include <iostream>

int main(void)
{
    Shape square(10,10);
    Shape rectangle(5,5);
    
    square.setLength(20);
    square.setWidth(20);

    rectangle.operator=(square); // zyha zy dy rectangle = square

    std::cout << "Square Length = " << square.getLength() << std::endl;
    std::cout << "Square Width = " << square.getWidth() << std::endl;
    std::cout << "Rectangle Length = " << rectangle.getLength() << std::endl;
    std::cout << "Rectangle Width = " << rectangle.getWidth() << std::endl;

    Shape result = square + rectangle;
    // result = square - rectangle; // Errors , Add or any arithmetic operation should be at construction
    // result = square * rectangle;
    // result = square / rectangle;
   
    
    std::cout << "Result Length = " << result.getLength() << std::endl;
    std::cout << "Result Width = " << result.getWidth() << std::endl;
    
    return 0;
}