/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Header File for Virtual Table and Pointer
*/
#ifndef _VIRTUAL_H_
#define _VIRTUAL_H_

#include <functional>
#include <array>

using functionPtr = std::function <void ()>; 

extern std::array < functionPtr , 3> vTable;


#endif // _VIRTUAL_H_