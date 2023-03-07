//Point私有继承举例
#include <iostream>
using namespace std;

class Point
{
private:
    float x;
    float y;
public:
    Point();
    Point(float x1, float y1);
    Point(const Point& obj);
    ~Point();
    void move(float offX, float offY);
    float getX() const;
    float getY() const;
};

Point::Point()
:x(0), y(0)
{

}

Point::Point(float x1, float y1)
:x(x1), y(y1)
{

}

Point::Point(const Point& obj)
:x(obj.x), y(obj.y)
{

}

Point::~Point()
{

}

void Point::move(float offX, float offY)
{
    x += offX;
    y += offY;
}

float Point::getX() const
{
    return x;
}

float Point::getY() const
{
    return y;
}

class Rectangle : private Point
{
private:
    float w;
    float h;
public:
    Rectangle();
    Rectangle(float x1, float y1, float w1, float h1);
    Rectangle(const Rectangle& obj);
    ~Rectangle();
    void move(float offX, float offY);
    float getX() const;
    float getY() const;
    float getH() const;
    float getW() const;
};

Rectangle::Rectangle()
:w(0), h(0)
{

}

Rectangle::Rectangle(float x1, float y1, float w1, float h1)
:Point(x1, y1), w(w1), h(h1)
{

}

Rectangle::Rectangle(const Rectangle& obj)
:Point(obj.getX(),obj.getY()),
w(obj.w), h(obj.h)
{

}

Rectangle::~Rectangle()
{

}

void Rectangle::move(float offX, float offY)
{
    Point::move(offX, offY);
}

float Rectangle::getX() const
{
    return Point::getX();
}

float Rectangle::getY() const
{
    return Point::getY();
}

float Rectangle::getH() const
{
    return h;
}

float Rectangle::getW() const
{
    return w;
}

int main(int argc, char* argv[])
{
    Rectangle rect(2, 3, 20, 10);
    cout << "The data of rect(x,y,w,h):" <<endl;
    cout << rect.getX() << ", "
        << rect.getY() << ", "
        << rect.getW() << ", "
        << rect.getH() << endl;
    cout<<endl;
    rect.move(3, 2);
    Rectangle rect1(rect);
    cout << "The data of rect1(x,y,w,h):" <<endl;
    cout << rect1.getX() << ", "
        << rect1.getY() << ", "
        << rect1.getW() << ", "
        << rect1.getH() << endl;

    return 0;
}