//静态数据成员和静态成员函数Point。
#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
    static int count;//静态数据成员，用于记录点的个数
public:
    Point();
    Point(int x1, int y1);
    Point(Point& obj);
    ~Point();
    int getx();
    int gety();
    static void showCount();
};

Point::Point()
:x(0), y(0)
{
    count++;
}

Point::Point(int x1, int y1)
:x(x1), y(y1)
{
    count++;
}

Point::Point(Point& obj)
:x(obj.x), y(obj.y)
{
    count++;
}

Point::~Point()
{
    count--;
}

int Point::getx()
{
    return x;
}

int Point::gety()
{
    return y;
}

void Point::showCount()
{
    cout << " Object count=" << count << endl;
}

int Point::count = 0;//静态数据成员定义和初始化，使用类名限定

int main(int argc, char* argv[])
{
    Point a(4, 5);
    cout << "Point A:" << a.getx() << "," << a.gety() << endl;
    a.showCount();
    Point b(a);
    cout << "Point B:" << b.getx() << "," << b.gety() << endl;
    cout<<"Total object points are ";
    Point::showCount();
    return 0;
}