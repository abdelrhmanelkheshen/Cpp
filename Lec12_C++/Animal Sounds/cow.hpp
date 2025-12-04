/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for class Cow
*/
#ifndef _COW_H_
#define _COW_H_

#include "sound.hpp"

class Cow : public Sound
{
    public:
    Cow();
    void makeSound() override;
    ~Cow();
};

#endif // _COW_H_
