//使用友元函数计算两点距离
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point();
    Point(int x1, int y1);
    int getx();
    int gety();
    friend float dist(Point& p1, Point& p2);
private:
    int x;
    int y;
};

Point::Point()
:x(0), y(0)
{

}

Point::Point(int x1, int y1)
:x(x1), y(y1)
{

}

int Point::getx()
{
    return x;
}

int Point::gety()
{
    return y;
}

float dist(Point& p1, Point& p2)
{
    int xt = p1.x - p2.x;
    int yt = p1.y - p2.y;
    return static_cast<float>(sqrt(xt * xt + yt * yt));
}

int main()
{
    Point myp1(1, 1);
    Point myp2(4, 5);
    cout << "The distance is:";
    cout << dist(myp1, myp2) << endl;
    return 0;
}