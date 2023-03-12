//习题8-7 对类Point重载"++"、"--"运算符，要求同时重载前缀和后缀的形式
#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point();
    ~Point();
    Point(int x1, int y1);
    Point(const Point& obj);
    Point operator++();
    Point operator++(int);
    Point operator--();
    Point operator--(int);
    void show() const;
};

Point::Point()
{

}

Point::~Point()
{

}

Point::Point(int x1, int y1)
:x(x1), y(y1)
{

}

Point::Point(const Point& obj)
:x(obj.x), y(obj.y)
{

}

Point Point::operator++()
{
    return Point(++x, ++y);
}

Point Point::operator++(int)
{
    return Point(x++, y++);
}

Point Point::operator--()
{
    return Point(--x, --y);
}

Point Point::operator--(int)
{
    return Point(x--, y--);
}

void Point::show() const
{
    cout<<"("<<x<<", "<<y<<")"<<endl;
}

int main()
{
    Point p1{2, 2};
    p1.show();

    p1++.show();
    
    (++p1).show();

    return 0;
}