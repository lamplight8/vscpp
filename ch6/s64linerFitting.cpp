#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    float x, y;
public:
    Point();
    Point(float x1, float y1);
    float getx() const;
    float gety() const;
};

Point::Point()
:x(0), y(0)
{

}

Point::Point(float x1, float y1)
: x(x1), y(y1)
{

}

float Point::getx() const
{
    return x;
}

float Point::gety() const
{
    return y;
}

int main()
{
    float lineFit(const Point p[], int n);
    Point pt[10] = {
        Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50),
        Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100)
    };
    float r = lineFit(pt, 10);
    cout << "LIne coefficient r= " << r << endl;

    return 0;
}

float lineFit(const Point p[], int n)
{
    float avgx = 0;
    float avgy = 0;
    float lxx = 0;
    float lyy = 0;
    float lxy = 0;
    int i;
    for (i = 0; i < n; i++) {
        avgx += p[i].getx() / n;
        avgy += p[i].gety() / n;
    }
    for (i = 0; i < n; i++) {
        lxx += (p[i].getx() - avgx) * (p[i].getx() - avgx);
        lyy += (p[i].gety() - avgy) * (p[i].gety() - avgy);
        lxy += (p[i].getx() - avgx) * (p[i].gety() - avgy);
    }
    cout << "This line can be fitted by y=ax+b." << endl;
    cout << "a= " << lxy / lxx << endl;
    cout << "b= " << avgy - lxy * avgx / lxx << endl;
    return static_cast<float>(lxy / sqrt(lxx * lyy));
}