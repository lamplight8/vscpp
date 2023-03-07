//使用指针访问类的成员
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
    cout << p1->getx() << endl;
    cout << a.getx() << endl;

    return 0;
}