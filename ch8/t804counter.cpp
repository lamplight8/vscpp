//习题8-4 请编写一个计数器Counter类，对其重载运算符"+"
#include<iostream>
using namespace std;

class Counter
{
private:
    unsigned int value;
public:
    Counter();
    Counter(unsigned int n);
    Counter(const Counter& obj);
    ~Counter();
    unsigned int getValue() const;
    void setValue(unsigned int n);
    Counter operator+(const Counter& obj);
    void show() const;
};

Counter::Counter()
{

}

Counter::Counter(unsigned int n)
:value(n)
{

}

Counter::Counter(const Counter& obj)
:value(obj.value)
{

}

Counter::~Counter()
{

}

unsigned int Counter::getValue() const
{
    return value;
}

void Counter::setValue(unsigned int n)
{
    value = n;
}

Counter Counter::operator+(const Counter& obj)
{
    value += obj.value;
    return *this;
}

void Counter::show() const
{
    cout<<value<<endl;
}

int main()
{
    Counter c1{36};
    Counter c2{100};
    Counter c3{c1+c2};
    c3.show();
    return 0;
}