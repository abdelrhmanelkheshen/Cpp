/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for class Sound
*/
#ifndef _SOUND_H_
#define _SOUND_H_

class Sound // Abstract Class yaani mynf3sh akhod mno object ashan feeh wahda pure fn aw aktr
{
    public:
    virtual void makeSound() = 0;
    void soundVolume(char volume);
    virtual ~Sound();
};









#endif // _SOUND_H_