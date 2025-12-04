/*
    Author : Abdelrhman El Kheshen
    Date : 24 / 10 / 2025
    Details : Assignment 8
*/
#include <iostream>
#include "base.hpp"
#include "scientific.hpp"
#include "programmer.hpp"

int main()
{   
        for(;;)
    {
        short choice;
        char inChoice;
        std::cout << "Choose one option.\n1- Basic Calculator \
        \n2- Scientific Calculator\n \
        3- Programmer Calculator\n \
        4- Exit\n";
        std::cin >> choice;

        switch (choice)
        {
            case 1: // Added to match numeric input from the menu
            {
                CalculatorBase* Cal = new CalculatorBase;
            Cal->display();
            std::cout << "Choose one option.\n1-Add (A) \
            \n2-Subtract (S)\n";
            std::cin >> inChoice;
            if (inChoice == 'A')
            {
                Cal->add();
            }
            else if (inChoice == 'S')
            {
                Cal->sub();
            }
            else
            {
                for(int i = 0; i < 3; i++)
                {
                    std::cout << "Invalid\n";
                    std::cin >> inChoice;
                    if (inChoice == 'A')
                    {
                        Cal->add();

                        break;
                    }
                    else if (inChoice == 'S')
                    {
                        Cal->sub();
                        break;
                    }  
                    if(i == 2)
                    {
                        return 0;
                    } 
                }  
            }
            delete Cal;
            break;
            }
            case 2:
            {
            CalculatorScientific* Cal1 = new CalculatorScientific;
            Cal1->display();
            std::cout << "Choose one option.\n1-Add (A) \
            \n2-Subtract (S)\n3-Sin (N)\n4-Cos (C)\n";
            std::cin >> inChoice;
            if (inChoice == 'A')
            {
                Cal1->add();
            }
            else if (inChoice == 'S')
            {
                Cal1->sub();
            }
            else if (inChoice == 'N')
            {
                Cal1->sin_ang();
            }
            else if (inChoice == 'C')
            {
                Cal1->cos_ang();
            }   
            else
            {
                for(int i = 0; i < 3; i++)
                {
                    std::cout << "Invalid\n";
                    std::cin >> inChoice;
                    if (inChoice == 'A')
                    {
                        Cal1->add();

                        break;
                    }
                    else if (inChoice == 'S')
                    {
                        Cal1->sub();
                        break;
                    }
                    else if (inChoice == 'N')
                    {
                        Cal1->sin_ang();
                        break;
                    }
                    else if (inChoice == 'C')
                    {
                        Cal1->cos_ang();
                        break;
                    }
                    if(i == 2)
                    {
                        return 0;
                    }
                }

            }
            delete Cal1;
            break;
            }
            case 3:
            {
            CalculatorProgrammer* Cal3 = new CalculatorProgrammer;
            Cal3->display();
            std::cout << "Choose one option.\n1-Add (A) \
            \n2-Subtract (S)\n3-Hexa to Decimal (H)\n4-Decimal to Hexa (D)\n";
            std::cin >> inChoice;
            if (inChoice == 'A')
            {
                Cal3->add();
            }
            else if (inChoice == 'S')
            {
                Cal3->sub();
            }
            else if (inChoice == 'H')
            {  
                std::string hex;
                std::cout<<"Enter hexadecimal number\n";
                std::cin>>hex;
                Cal3->hexaToDecimal(hex);
            }
            else if (inChoice == 'D')
            {
                int decimal;
                std::cout<<"Enter decimal number\n";
                std::cin>>decimal;
                Cal3->decimalToHexa(decimal);
            }
            else
            {
                for(int i = 0; i < 3; i++)
                {
                    std::cout << "Invalid\n";   
                    std::cout << "Choose one option.\n1-Add (A) \
                    \n2-Subtract (S)\n3-Hexa to Decimal (H)\n4-Decimal to Hexa (D)\n";
                    std::cin >> inChoice;
                    if (inChoice == 'A')
                    {
                        Cal3->add();

                        break;
                    }
                    else if (inChoice == 'S')
                    {
                        Cal3->sub();
                        break;
                    }
                    else if (inChoice == 'H')
                    {
                        std::string hex;
                        std::cout<<"Enter hexadecimal number\n";
                        std::cin>>hex;
                        Cal3->hexaToDecimal(hex);
                        break;
                    }
                    else if (inChoice == 'D')
                    {
                        int decimal;
                        std::cout<<"Enter decimal number\n";
                        std::cin>>decimal;
                        Cal3->decimalToHexa(decimal);
                        break;
                    }
                    if(i == 2)
                    {
                        return 0;
                    }
                }

            }
            delete Cal3;
            break;
            }
            case 4:
            return 0;
            default:
            break;
        };
    }        
    return 0;
}    