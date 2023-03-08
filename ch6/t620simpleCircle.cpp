/*
习题6-20 实现一个名为SimpleCircle的简单圆类，
其数据成员int* itsRadius为一个指向其半径值的指针，存放其半径值。
设计对数据成员的各种操作，给出这个类的完整实现并测试这个类。
*/
#include <iostream>
using namespace std;
const double PI = 3.1415926;

class SimpleCircle
{
private:
    int* itsRadius;
public:
    SimpleCircle();
    SimpleCircle(int* p);
    SimpleCircle(const SimpleCircle& obj);
    ~SimpleCircle();
    void setRadiusPtr(int* p);
    int* getRadiusPtr() const;
    double area() const;
    double circum() const;
};

SimpleCircle::SimpleCircle()
    :itsRadius(nullptr)
{

}

SimpleCircle::SimpleCircle(int* p)
    : itsRadius(p)
{

}

SimpleCircle::SimpleCircle(const SimpleCircle& obj)
{
    itsRadius = new int;
    if (obj.itsRadius)
        *itsRadius = *obj.itsRadius;
    else
        itsRadius = nullptr;
}

SimpleCircle::~SimpleCircle()
{
    if (itsRadius)
        delete itsRadius;
}

void SimpleCircle::setRadiusPtr(int* p)
{
    if (p) {
        itsRadius = new int;
        *itsRadius = *p;
    }
    else
        itsRadius = nullptr;
}

int* SimpleCircle::getRadiusPtr() const
{
    return itsRadius;
}

double SimpleCircle::area() const
{
    if (itsRadius)
        return PI * (*itsRadius) * (*itsRadius);
    else
        return 0;
}

double SimpleCircle::circum() const
{
    if (itsRadius)
        return 2 * PI * (*itsRadius);
    else
        return 0;
}

int main()
{
    int radius;
    cout << "Please the radius:";
    cin >> radius;
    int* p = new int(radius);
    SimpleCircle c1(p);
    cout << "the area is " << c1.area() << endl;
    cout << "the cirumference is " << c1.circum() << endl;

    return 0;
}