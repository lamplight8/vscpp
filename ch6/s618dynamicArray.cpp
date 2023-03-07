//动态数组类
#include <iostream>
#include <cassert>
using namespace std;

//点类的定义
class Point
{
    int x, y;
public:
    Point();
    Point(int x1, int y1);
    ~Point();
    int getx() const;
    int gety() const;
    void move(int x1, int y1);
};

Point::Point()
:x(0), y(0)
{
    cout << "Default Constructor Called." <<endl;
}

Point::Point(int x1, int y1)
: x(x1), y(y1)
{
    cout << "Constructor Called." << endl;
}

Point::~Point()
{
    cout << "Destructor Called." << endl;
}

int Point::getx() const
{
    return x;
}

int Point::gety() const
{
    return y;
}

void Point::move(int x1, int y1)
{
    x = x1;
    y = y1;
}

//动态数组类定义
class ArrayPoints
{
private:
    int size;//数组当前长度
    Point* ptr;//数组首地址
public:
    ArrayPoints(int s);
    ~ArrayPoints();
    Point& element(int index);
};

ArrayPoints::ArrayPoints(int s)
:size(s)
{
    ptr = new Point[size];
}

ArrayPoints::~ArrayPoints()
{
    delete[] ptr;
}

Point& ArrayPoints::element(int index)
{
    assert(index >= 0 && index < size);
    return ptr[index];
}

int main()
{
    int count;
    cout << "Please enter the count of points:" <<endl;
    cin >> count;
    ArrayPoints points(count);
    points.element(0).move(5, 0);
    points.element(1).move(15, 20);
    cout<<"The first point is ("<<points.element(0).getx()<<", "<<points.element(0).gety()<<")"<<endl;
    cout<<"The second point is ("<<points.element(1).getx()<<", "<<points.element(1).gety()<<")"<<endl;

    return 0;
}