//动态创建对象
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
    void move(int x1, int y1);
};

Point::Point()
:x(0), y(0)
{
    cout << "Default Constructor Called." << endl;
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

int main()
{
    cout << "Step one:" <<endl;
    Point* ptr1 = new Point;
    delete ptr1;
    cout << "Step two:" <<endl;
    ptr1 = new Point(1, 2);
    delete ptr1;

    return 0;
}