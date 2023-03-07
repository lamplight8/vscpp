
//例7-8 虚基类
#include <iostream>
using namespace std;

class Base0
{
public:
    int var0;
    void fun0();
};

void Base0::fun0()
{
    cout << "Member of Base0" << endl;
}

class Base1 : virtual public Base0
{
public:
    int var1;
};

class Base2 : virtual public Base0
{
public:
    int var2;
};

class Derived : public Base1, public Base2
{
public:
    int var;
    void fun();
};

void Derived::fun()
{
    cout << "Member of Derived" << endl;
}

int main(int argc, char* argv[])
{
    Derived d;
    d.var0 = 2;
    d.fun0();

    return 0;
}