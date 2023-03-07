//类型兼容规则实例
#include <iostream>
using namespace std;

class Base1
{
public:
    Base1();
    void display() const;
};

Base1::Base1()
{

}

void Base1::display() const
{
    cout << "Base1::display()" << endl;
}

class Base2 : public Base1
{
public:
    Base2();
    void display() const;
};

Base2::Base2()
{

}

void Base2::display() const
{
    cout << "Base2::display()" << endl;
}

class Derived : public Base2
{
public:
    Derived();
    void display() const;
};

Derived::Derived()
{

}

void Derived::display() const
{
    cout << "Derived::display()" << endl;
}

int main(int argc, char* argv[])
{
    void fun(Base1 * ptr);//参数为指向基类对象的指针
    Base1 base1;//声明Base1类对象
    Base2 base2;//声明Base2类对象
    Derived derived;// 声明Derived类对象

    fun(&base1);//用Base1对象的指针调用fun函数
    fun(&base2);//用Base2对象的指针调用fun函数
    fun(&derived);//用Derived对象的指针调用fun函数
 
    return 0;
}

void fun(Base1* ptr)
{
    ptr->display();//对象指针->成员名
}