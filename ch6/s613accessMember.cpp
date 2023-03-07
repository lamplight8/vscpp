//访问对象的公有成员函数的不同方式
#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    Point();
    Point(int x1, int y1);
    int getx() const;
    int gety() const;
};

Point::Point()
{

}

Point::Point(int x1, int y1)
    :x(x1), y(y1)
{

}

int Point::getx() const
{
    return x;
}

int Point::gety() const
{
    return y;
}

int main()
{
    Point a(4, 5);
    Point* p1 = &a;
    int (Point:: * funcPtr)() const = &Point::getx;
    cout << (a.*funcPtr)() << endl;
    cout << (p1->*funcPtr)() << endl;
    cout << a.getx() << endl;
    cout << p1->getx() << endl;

    return 0;
}