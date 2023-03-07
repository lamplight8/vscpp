//例8-5 虚析构函数
#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base();
};

Base::~Base()
{
    cout << "Base destructor" << endl;
}

class Derived : public Base
{
private:
    int* p;
public:
    Derived();
    ~Derived();
};

Derived::Derived()
{
    p = new int(0);
}

Derived::~Derived()
{
    cout << "Derived destructor" << endl;
    delete p;
}

int main(int argc, char* argv[])
{
    void fun(Base * b);
    Base* b = new Derived();
    fun(b);

    return 0;
}

void fun(Base* b)
{
    delete b;
}