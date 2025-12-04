/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Source File for class Sound
*/
#include "sound.hpp"
#include <iostream>

/*void Sound::makeSound()
{
    std::cout << "Sound\n";
}*/
void Sound::soundVolume(char volume)
{
    switch(volume)
    {
        case 'L':
        std::cout << "Low Volume\n";
        break;
        case 'M':
        std::cout << "Medium Volume\n";
        break;
        case 'H':
        std::cout << "High Volume\n";
        break;
        default:
        std::cout << "Invalid Volume\n";
        break;
    };
}

Sound::~Sound()
{
    std::cout << "Destructor in Sound Class\n";
}
