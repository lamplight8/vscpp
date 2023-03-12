//习题8-5 请编写一个哺乳动物类Mammal，再由此派生出狗类Dog，
//二者都声明speak()成员函数，该函数在基类中被声明为虚函数
//声明一个Dog的对象，通过此对象调用speak函数，观察运行结果
#include<iostream>
using namespace std;

class Mammal
{
public:
    virtual void speak()
    {
        cout<<"Call the mammal speak()."<<endl;
    }
};

class Dog: public Mammal
{
public:
    void speak()
    {
        cout<<"Call the dog speak()."<<endl;
    }
};

int main()
{
    Dog dog;
    dog.speak();
    return 0;
}