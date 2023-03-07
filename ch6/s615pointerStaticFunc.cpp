//通过指针访问类的静态函数成员
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
    static int count;
public:
    Point();
    Point(int x1, int y1);
    ~Point();
    int getx() const;
    int gety() const;

    static void showCount();
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

void Point::showCount()
{
    cout << " Object count=" << count << endl;
}

int Point::count = 0;

int main()
{
    void (*funcPtr)() = Point::showCount;
    Point a(4, 5);
    cout << "Point A:" << a.getx() << "," << a.gety();
    funcPtr();

    Point b(a);
    cout << "Point B:" << b.getx() << "," << b.gety();
    funcPtr();

    return 0;
}