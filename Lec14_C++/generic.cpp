/*
    Author : Abdelrhman El Kheshen
    Date : 27 / 10 / 2025
    Details : Templates
*/
#include <iostream>
#include <string>

class Person
{
    public:
    Person() 
            : name_{"Unknown"} , age_{0}
    {
        std::cout << "The default constructor is called" << std::endl;
    }
    Person(std::string name,int age) 
                                    : name_{name} , age_{age}
    {
        std::cout << "The parametrized constructor is called" << std::endl;
    }
    Person(const Person& copy)
    {
        this->name_ = copy.name_;
        this->age_ = copy.age_;
        std::cout << "The copy constructor is called" << std::endl;
    }
    ~Person()
    {
        std::cout << "The destructor is called" << std::endl;
    }

    std::string getName() const
    {
        return this->name_;
    }

    int getAge() const
    {
        return this->age_;
    }
    void setName(std::string name)
    {
        this->name_ = name;
    }
    void setAge(int age)
    {
        this->age_ = age;
    }

    bool operator<(const Person& person) const
    {
        return this->age_ < person.age_;
    }

    Person& operator=(const Person& person) 
    {
        this->name_ = person.name_;
        this->age_ = person.age_;
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& output,Person& person)
    {
        output << "Name : " << person.name_ << std::endl;
        output << "Age : " << person.age_ << std::endl;
        return output;
    }

    private:
    std::string name_;
    int age_;
};

template <class T>

T max(T x , T y)
{
    return x < y? y : x;
}

template <class T>
void swap(T& x , T& y)
{
    T temp = x;
    x = y;
    y = temp;
}


int main(void)
{
    // int maxInt = max<int>(5,10);
    // std::cout << "The max number is : " << maxInt << std::endl;

    // double maxDouble = max<double>(6.5,6.4);
    // std::cout << "The max number is : " << maxDouble << std::endl;

    // int a{5} , b{10};
    // swap(a,b);
    // std::cout << "a : " << a << std::endl;
    // std::cout << "b : " << b << std::endl;

    Person employee1("Mohamed" , 25);
    Person employee2("Ahmed" , 30);

    Person maxPerson = max<Person>(employee1,employee2);
    std::cout << maxPerson << std::endl;
    swap<Person>(employee1,employee2);
    std::cout << employee1 << std::endl;
    std::cout << employee2 << std::endl;
     return 0;
}