//习题7-6 定义一个哺乳动物类Mammal，再由此派生出狗类Dog
//定义一个Dog类对象，观察基类与派生类的构造函数和析构函数的调用顺序
#include<iostream>
using namespace std;

class Mammal
{
public:
    Mammal()
    {
        cout<<"New a mammal object."<<endl;
    }
    ~Mammal()
    {
        cout<<"Destroy a mammal object."<<endl;
    }
};

class Dog: public Mammal
{
public:
    Dog()
    {
        cout<<"New a dog object."<<endl;
    }
    ~Dog()
    {
        cout<<"Destroy a dog object."<<endl;
    }
};

int main()
{
    Dog d;
    return 0;
}