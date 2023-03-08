//习题7-9 定义一个基类Base，有两个公有成员函数fn1()，fn2()，私有派生出Derived类，
//如何通过Derived类的对象调用基类的函数fn1()?

#include<iostream>
using namespace std;

class Base
{
public:
    Base();
    void fn1();
    void fn2();
};

Base::Base()
{
    cout<<"New a Base Object."<<endl;
}

void Base::fn1()
{
    cout<<"Call the function fn1()."<<endl;
}

void Base::fn2()
{
    cout<<"Call the function fn2()."<<endl;
}

class Derived: private Base
{
public:
    Derived();
    void callfn1();
};

Derived::Derived()
{
    cout<<"New a Derived Object."<<endl;
}

void Derived::callfn1()
{
    Base::fn1();
}

int main()
{
    Derived dv;
    dv.callfn1();
    return 0;
}