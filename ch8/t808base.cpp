//习题8-8 定义一个基类BaseClass，从它派生出类DerivedClass
//BaseClass有成员函数fn1()，fn2()，其中fn1()是虚函数
//DerivedClass也有成员函数fn1()，fn2()
//在主函数中声明一个DerivedClass的对象
//分别用BaseClass和DerivedClass的指针指向DerivedClass的对象
//并通过指针调用fn1()，fn2()，观察运行结果
#include<iostream>
using namespace std;

class BaseClass
{
public:
    virtual void fn1()
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

      BaseClass *pb = &dv;
      pb->fn1();

      cout<<endl;
      DerivedClass *pd = &dv;
      pd->fn1();

      return 0;
}