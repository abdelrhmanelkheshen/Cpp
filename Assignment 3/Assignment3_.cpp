#include <iostream>
#include <array>
#include <algorithm>
/*Task 7.1*/
/*
bool isPrime(int num)
{
    bool result {true};
    if (num <=1)
    {
        result = false;
    }
    else
    {
        for(int i = 2; i <= num/2; i++)
        {
            //std::cout << i << "\n";
            if(num % i == 0)
            {
                result = false;
                break;
            }
            else
            {
                result = true;
            }
        }
    }
    return result;
}

int main(void)
{
    bool prime;
    std::cout << "enter number: ";
    int num;
    std::cin >> num;
    prime = isPrime(num);
    std::cout << prime << "\n";
    if (prime == true)
    {
        std::cout << "num is prime \n";
    }
    else 
    {
        std::cout << "num is not prime \n";
    }
    return 0;
}*/
/*Task 7.2*/

/*void inputArray(std::array<int,5> &list)
{
    std::cout << "enter 5 numbers: ";
    for(auto &element:list)
    {
        std::cin >> element;
    }
}

double calculateAverage(std::array<int,5> &list)
{
    double average {0.0};
    for (auto element:list)
    {
        average += element;
    }
    average /= 5;
    return average;
}

long calculateSum(std::array<int,5> &list)
{
    long sum = 0;
    for(auto element:list)
    {
        sum += element;
    }
    return sum;
}

int main(void)
{
    std::array<int , 5> arr;
    inputArray(arr);
    double average = calculateAverage(arr);
    long sum = calculateSum(arr);
    std::cout << "average = " << average << std::endl;
    std::cout << "sum = " << sum << std::endl;
    return 0;
}*/

/*Task 7.3*/
/*int main(void)
{
    std::array<int,8> arr;
    std::array<int,3> max;
    std::cout << "Enter array numbers: ";
    for(auto &element : arr)
    {
        std::cin >> element;
    }
    std::sort(arr.begin(),arr.end(),[](int a, int b)->bool
    {return a > b;});
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout<<std::endl;
    for(int i = 0; i < 3 ; i++)
    {
        max[i] = arr[i];
    }

     for(auto i : max)
    {
        std::cout << i << " ";
    }
    std::cout<<std::endl;
    return 0;
}*/

/*Task 7.4*/
/*std::array<int,8> frequency(std::array<int,8> &list)
{
    std::array<int,8> freq;
    int count = 0;
        for(int i = 0; i<8;i++)
        {
            for(int j = i;j<8;j++)
            {
                if(list.at(i) == list.at(j))
                {
                    count+=1;
                    std::cout << "count = " << count << " \n";
                }
            }
            freq[i] = count;
            count = 0;
        }
    for(auto i : freq)
    {
        std::cout << i << " ";
    }
    return freq;
}

int mostFreq(std::array<int,8> &list)
{
    int maxIndex{0};
    for(int i = 0;i<8;i++)
    {
        for(int j = i+1 ; j < 8; j++)
        {
            if(list[i]<list[j])
            {
                maxIndex = j;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "max index is " << maxIndex << std::endl;
    return maxIndex;
}

int main(void)
{
    std::array<int,8> arr = {10,10,9,10,9,22,45,7};
    std::array<int,8> freq = frequency(arr);
    int index = mostFreq(freq);
    std::cout << "The most frequent number is " << arr[index];
    return 0;
}*/

/*Task 7.5*/

/*void size(int*ptr, int size)
{
    std::cout << "The size of array : " << sizeof(ptr) << std::endl;
    std::cout << "The size of its elements : " << sizeof(ptr[0]) * size << std::endl;

}

int main()
{
    int arr[5] {1,2,3,4,5};
    size(arr,5);
    std::cout << "The size of array : " << sizeof(arr) << std::endl;
    std::cout << "The size of its elements : " << sizeof(arr[0]) * 5 << std::endl;

    return 0;

}*/ 