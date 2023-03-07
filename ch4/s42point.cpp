//Point类程序
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int x1=0, int y1=0);
	Point(Point &p);
	int getX();
	int getY();
};

Point::Point(int x1, int y1)
{
	x = x1;
	y = y1;
}

Point::Point(Point &p)
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

int Point::getX()
{
	return x;
}


int Point::getY()
{
	return y;
}

// 主程序
int main()
{
    void fun1(Point p);
    Point fun2(int x, int y);
	
    Point a(4, 5);
	Point b = a;
	cout << b.getX() << endl;
	fun1(b);
	b = fun2(1, 2);
	cout << b.getX() << endl;
	
	return 0;
}

void fun1(Point p)
{
	cout << p.getX() << endl;
}

Point fun2(int x, int y)
{
	Point a(x, y);
	return a;
}