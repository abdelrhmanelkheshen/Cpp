/*
    Author : Abdelrhman El Kheshen
    Date : 14 / 10 / 2025
    Details : Arrays and Vectors
*/
#include <iostream>
#include <array>
#include <algorithm>
/*int main()
{
    std::array<char,6> word;
    std::cout << "enter the letters" << std::endl;
    for( char element = 0; element < word.size(); element++)
    {
        std::cin >> word[element];
    }
    for( char element : word)
    {
        std::cout << element;
    }
    return 0;
}*/
/*Reverse an array*/
/*int main(void)
{
    std::array<int,10> numbers;
    std::cout << "enter the numbers" << std::endl;
    for(int &element : numbers)
    {
        std::cin >> element;
    }
    std::cout << std::endl;
    int temp;
    int j = numbers.size() - 1;
    for(int i = 0;i < (numbers.size() / 2);i++)
    {
        std::swap(numbers[i],numbers[j]); 
        j--;
    }

      for(int element : numbers)
    {
        std::cout << element << std::endl;
    }
    return 0;
}*/
/*Sort array*/

/*int main(void)
{
    std::array<int,10> numbers;
    std::cout << "enter the numbers" << std::endl;
    for(int &element : numbers)
    {
        std::cin >> element;
    }
    std::cout << std::endl;
    int temp;

    for(int i = 0; i < numbers.size();i++)
    {
        for(int j = i+1 ; j < (numbers.size());j++)
        {
            if(numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for(int element : numbers)
    {
        std::cout << element << std::endl;
    }

    return 0;
}*/
/*Difference between c++ and c array*/
void inputArray(std::array<int,5> &list)
{
    std::cout << "Enter the elements: ";
    for(auto &element : list)
    {
        std::cin >> element;
    }
    std::cout << std::endl;
}

void sortArray(int*ptr , int size)
{
    for(int i = 0; i < size;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(ptr[i] > ptr[j])
            {
                std::swap(ptr[i],ptr[j]);
            }
        }
    }
}
int main(void)
{
    std::array<int,5> numbers;
    std::cout << "enter the numbers" << std::endl;
    int arr[5] = {10,2,4,8,9};
    inputArray(numbers);
    std::cout << std::endl;
    for(int element : numbers)
    {
        std::cout << element << std::endl;
    }
    std::cout << std::endl;
    sortArray(arr,5);
    for(int element : arr)
    {
        std::cout << element << std::endl;
    }
    return 0;
}


