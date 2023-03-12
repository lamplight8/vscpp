//习题8-9 请编写程序定义一个基类BaseClass，从它派生出类DerivedClass
//在BaseClass中声明虚析构函数
//在主函数中将一个动态分配的DerivedClass的对象地址赋给一个BaseClass的指针
//然后通过指针释放对象空间，观察程序运行结果
#include<iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout<<"New a BaseClass Object."<<endl;
    }
    virtual ~BaseClass()
    {
        cout<<"Destroy a BaseClass Object."<<endl;
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
};

int main()
{
    BaseClass *p = new DerivedClass();
    delete p;
    return 0;
}