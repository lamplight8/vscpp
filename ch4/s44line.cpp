//类的组合，线段类。
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	int x;
	int y;
public:
    Point(int x1, int y1);
    Point(Point& obj);
    int getx();
    int gety();
};

Point::Point(int x1, int y1)
:x(x1), y(y1)
{

}

Point::Point(Point& obj)
: x(obj.x), y(obj.y)
{
	cout << "Calling the copy constructor of point" << endl;
}

int Point::getx()
{
	return x;
}

int Point::gety()
{
	return y;
}

class Line
{
	Point p0;
	Point p1;
	double len;
public:
	Line(Point xp0, Point xp1);
	Line(Line& obj);
	int getLen();
};

Line::Line(Point xp0, Point xp1)
:p0(xp0), p1(xp1)
{
    cout << "Calling constructor of Line" << endl;
    double x = static_cast<double>(p0.getx() - p1.getx());
    double y = static_cast<double>(p0.gety() - p1.gety());
    len = sqrt(x * x + y * y);
}

Line::Line(Line& obj)
:p0(obj.p0), p1(obj.p1)
{
    cout << "Calling the copy constructor of Line" << endl;
    len = obj.len;
}

int Line::getLen()
{
    return len;
}

//主程序
int main()
{
    Point myp0(1, 1);
    Point myp1(4, 5);
    Line line1(myp0, myp1);
    Line line2(line1);
    std::cout << "The length of the line1 is:";
    std::cout << line1.getLen() << std::endl;
    std::cout << "The length of the line2 is:";
    std::cout << line2.getLen() << std::endl;

    return 0;
}