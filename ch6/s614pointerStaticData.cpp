//通过指针访问类的静态数据成员
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point();
    Point(int x1, int y1);
    ~Point();
    int getx() const;
    int gety() const;
    static int count;
};

Point::Point()
    :x(0), y(0)
{
    count++;
}

Point::Point(int x1, int y1)
    : x(x1), y(y1)
{
    count++;
}

Point::~Point()
{
    count--;
}

int Point::getx() const
{
    return x;
}

int Point::gety() const
{
    return y;
}

int Point::count = 0;

int main()
{
    int* ptr = &Point::count;
    Point a(4, 5);
    cout << "Point A:" << a.getx() << "," << a.gety();
    cout << " Objec count=" << *ptr << endl;

    Point b(a);
    cout << "Point B:" << b.getx() << "," << b.gety();
    cout << " Object count=" << *ptr << endl;

    return 0;
}