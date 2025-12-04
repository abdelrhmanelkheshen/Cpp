/*
Author: Abdelrhman El Kheshen
Date: 9/10/2025
Details: Count Meeting Day using switch case and remainder

*/

#include <iostream>

enum Weekdays : short
{
    FRIDAY = 0,
    SATURDAY = 1,
    SUNDAY = 2,
    MONDAY = 3,
    TUESDAY = 4,
    WEDNESDAY = 5,
    THURSDAY = 6
};

int main(void)
{
    constexpr short NUM_OF_WEEKDAYS {7};
    short currentDay = SATURDAY;
    short meetingDay{0};
    std::cout << "Enter the number of days to be counted: ";
    std::cin >> meetingDay; 
    currentDay = (currentDay + meetingDay) % NUM_OF_WEEKDAYS;
    // if (currentDay == 0)
    switch (currentDay)
    {
        case SATURDAY:
        std::cout << "It's Saturday\n";
        break;
        case SUNDAY:
        std::cout << "It's Sunday\n";
        break;
        case MONDAY:
        std::cout << "It's Monday\n";
        break;
        case TUESDAY:
        std::cout << "It's Tuesday\n";
        break;
        case WEDNESDAY:
        std::cout << "It's Wednesday\n";
        break;
        case THURSDAY:
        std::cout << "It's Thursday\n";
        break;
        case FRIDAY:
        std::cout << "It's Friday\n";
        break;
        default:
        std::cout<<"INVALID\n";
        break;
    };
    return 0;
}
