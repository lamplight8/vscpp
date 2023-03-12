//习题8-10 编写程序定义类Point，有数据成员x，y，为其定义友元函数实现重载"+"
#include<iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    Point();
    Point(int x1, int y1);
    Point(const Point& obj);
    ~Point();
    void setX(int x);
    void setY(int y);
    int getX() const;
    int gety() const;
    friend Point operator+(const Point& p1, const Point& p2);
    void show() const;
};

Point::Point()
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

Point::~Point()
{

}

void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

int Point::getX() const
{
    return x;
}

int Point::gety() const
{
    return y;
}

Point operator+(const Point& p1, const Point& p2)
{
    int x1 = p1.getX() + p2.getX();
    int y1 = p1.gety() + p2.gety();
    return Point(x1, y1);
}

void Point::show() const
{
    cout<<"("<<x<<", "<<y<<")"<<endl;
}

int main()
{
    Point p1(1, 1);
    Point p2(2, 2);
    Point p3 = p1 + p2;
    p3.show();
    return 0;
}