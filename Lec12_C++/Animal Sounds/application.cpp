/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source File for Application
*/

#include "cat.hpp"
#include "cow.hpp"
#include <iostream>
#include <vector>

void runAllSounds (std::vector<Sound*> sounds)
{
    for (auto sound : sounds)
    {
        sound->makeSound();
    }
}



auto main() -> int
{
    Sound* objPtr = new Cat;
    Cat* cat_ = new Cat;
    Cow* cow_ = new Cow;
    std::vector<Sound*> sounds {objPtr,cat_,cow_};
    runAllSounds(sounds);
    delete objPtr;
    return 0;
}