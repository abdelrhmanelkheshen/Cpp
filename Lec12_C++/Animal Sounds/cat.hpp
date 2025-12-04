/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for class Cat
*/
#ifndef _CAT_H_
#define _CAT_H_

#include "sound.hpp"

class Cat : public Sound
{
    public:
    Cat();
    void makeSound() override;
    ~Cat();
};

#endif // _CAT_H_
