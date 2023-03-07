//常引用作形参
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point();
    Point(int x1, int y1);
    friend float dist(const Point& p1, const Point& p2);
};

Point::Point()
:x(0), y(0)
{

}

Point::Point(int x1, int y1)
:x(x1), y(y1)
{

}

float dist(const Point& p1, const Point& p2)
{
    int xp = p1.x - p2.x;
    int yp = p1.y - p2.y;
    return static_cast<float>(sqrt(xp * xp + yp * yp));
}

int main()
{
    const Point myp1(1, 1), myp2(4, 5);
    cout << "The distance is:";
    cout << dist(myp1, myp2) << endl;

    return 0;
}