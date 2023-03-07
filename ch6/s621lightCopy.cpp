//对象的浅复制
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
    cout << "Please enter the count of points:";
    cin >> count;
    ArrayPoints pointsArray1(count);
    pointsArray1.element(0).move(5, 10);
    pointsArray1.element(1).move(15, 20);
    ArrayPoints pointsArray2 = pointsArray1;
    cout << "Copy of pointsArray1:" << endl;
    cout << "Point_0 of array2:" << pointsArray2.element(0).getx() << "," << pointsArray2.element(0).gety() << endl;
    cout << "Point_1 of array2:" << pointsArray2.element(1).getx() << "," << pointsArray2.element(1).gety() << endl;
    pointsArray1.element(0).move(25, 30);
    pointsArray1.element(1).move(35, 40);
    cout << "After the moving of pointsArray1:" << endl;
    cout << "Point_0 of array2:" << pointsArray2.element(0).getx() << "," << pointsArray2.element(0).gety() << endl;
    cout << "Point_1 of array2:" << pointsArray2.element(1).getx() << "," << pointsArray2.element(1).gety() << endl;

    return 0;
}