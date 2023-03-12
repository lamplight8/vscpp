//习题8-6 请编写一个抽象类Shape，在此基础上派生出类Rectangle和Circle
//二者都有计算对象面积的函数getArea()、计算对象周长的函数getPerim()
#include<iostream>
using namespace std;
const double PI = 3.1415926;

class Shape
{
public:
   virtual double getArea(void)=0;
   virtual double getPerim(void)=0;
};

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle();
    ~Rectangle();
    Rectangle(double l, double w);
    double getArea(void);
    double getPerim(void);
};

Rectangle::Rectangle()
{

}

Rectangle::~Rectangle()
{

}

Rectangle::Rectangle(double l, double w)
:length(l), width(w)
{

}

double Rectangle::getArea(void)
{
    return length*width;
}

double Rectangle::getPerim(void)
{
    return 2*length*width;
}

class Circle : public Shape
{
private:
    double radius;
public:
    Circle();
    ~Circle();
    Circle(double r);
    double getArea(void);
    double getPerim(void);
};

Circle::Circle()
{

}

Circle::~Circle()
{

}

Circle::Circle(double r)
:radius(r)
{

}

double Circle::getArea(void)
{
    return PI*radius*radius;
}

double Circle::getPerim(void)
{
    return 2*PI*radius;
}


int main()
{
    Shape* p;
    Rectangle rect(3, 4);
    Circle cr(3);

    p = &rect;
    cout<<"The area of rectangle is "<<p->getArea()<<endl;
    cout<<"The perim of rectangle is "<<p->getPerim()<<endl;
    p = &cr;
    cout<<"The area of circle is "<<p->getArea()<<endl;
    cout<<"The perim of circle is "<<p->getPerim()<<endl;
}