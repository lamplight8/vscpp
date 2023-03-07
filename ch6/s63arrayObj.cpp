//对象数组应用
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
    void move(int newx, int newy);
    int getx() const;
    int gety() const;
};

Point::Point()
    :x(0), y(0)
{
    cout << "Default Constructor called."<<endl;
}

Point::Point(int x1, int y1)
    : x(x1), y(y1)
{
    cout << "Constructor called." << endl;
}

Point::~Point()
{
    cout << "Destructor called." << endl;
}

void Point::move(int newx, int newy)
{
    cout << "Moving the point to (" << newx << ", " << newy << ")" << endl;
    x = newx;
    y = newy;
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
    cout << "Entering main..."<<endl;
    Point a[2];
    int i;
    for (i = 0; i < 2; i++)
        a[i].move(i + 10, i + 20);
    cout << "Exiting main..."<<endl;

    return 0;
}