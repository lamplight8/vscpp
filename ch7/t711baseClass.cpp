//习题7-11 定义一个基类BaseClass，从它派生出类DerivedClass
//BaseClass有成员函数fn1()，fn2()，DerivedClass也有成员函数fn1()，fn2()
//在主函数中声明一个DerivedClass的对象
//分别用DerivedClass的对象以及BaseClass和DerivedClass的指针来调用fn1()，fn2()
//观察运行结果
#include<iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout<<"New a BaseClass Object."<<endl;
    }
    ~BaseClass()
    {
        cout<<"Destroy a BaseClass Object."<<endl;
    }
    void fn1()
    {
        cout<<"Call the BaseClass function fn1()."<<endl;
    }
    void fn2()
    {
        cout<<"Call the BaseClass function fn2()."<<endl;
    }
};

class DerivedClass: public BaseClass
{
public:
    DerivedClass()
    {
        cout<<"New a DerivedClass Object."<<endl;
    }
    ~DerivedClass()
    {
        cout<<"Destroy a DerivedClass Object."<<endl;
    }
    void fn1()
    {
        cout<<"Call the DerivedClass function fn1()."<<endl;
    }
    void fn2()
    {
        cout<<"Call the DerivedClass function fn2()."<<endl;
    }
};

int main()
{
    DerivedClass dv;
    dv.fn1();

    cout<<endl;

    BaseClass *pb = &dv;
    pb->fn1();

    cout<<endl;
    DerivedClass *pd = &dv;
    pd->fn1();

    return 0;
}