/*
    Author : Abdelrhman El Kheshen
    Date : 20 / 10 / 2025
    Details : Assignment 7
*/
#include <iostream>
#include "book.hpp"
#include "magazine.hpp"
#include <vector>

void displayLibrary(std::vector<libraryItem*> &library)
{
    for(auto item : library)
    {
        item->displayInfo();
        std::cout << "\n";
    }
}

int main()
{
    Book* book1 = new Book("Wizards","Abdelrhman",true);
    Book* book2 = new Book("Waverly","Hesham",true);
    Book* book3 = new Book("Place","Mohamed",true);

    Magazine* magazine1 = new Magazine("Justice",1,true);
    Magazine* magazine2 = new Magazine("And",2,true);
    Magazine* magazine3 = new Magazine("Pride",3,true);
    
    std::vector<libraryItem*> library {book1,book2,book3,magazine1,magazine2,magazine3};

    book2->borrowItem("Waverly");
    magazine1->returnItem("Justice");

    displayLibrary(library);
    delete book1;
    delete book2;
    delete book3;
    delete magazine1;
    delete magazine2;
    delete magazine3;

    
    return 0;
}