// 例7-5 定义一个基类Shape，在此基础上派生出Rectangle和Circle，
// 二者都有getArea()函数计算对象的面积。
// 使用Rectangle类创建一个派生类Square
#include<iostream>
using namespace std;

//Shape.h
class Shape
{
public:
   virtual double getArea(void)=0;
};

class Circle : public Shape
{
public:
   Circle(double r);
   double getRadius(void);
   void setRadius(double r);
   double getArea(void);
private:
   double r;
};

Circle::Circle(double r)
:r(r)
{

}

double Circle::getRadius(void)
{
   return r;
}

void Circle::setRadius(double r)
{
   this->r = r;
}

double Circle::getArea(void)
{
   return 3.1415926*r*r;
}

class Rectangle : public Shape
{
public:
   Rectangle(double len, double width);
   double getLength(void);
   double getWidth(void);
   void setLength(double len);
   void setWidth(double width);
   double getArea(void);
private:
   double len;
   double width;
};

Rectangle::Rectangle(double len, double width)
:len(len), width(width)
{

}

double Rectangle::getLength(void)
{
   return len;
}

double Rectangle::getWidth(void)
{
   return width;
}

void Rectangle::setLength(double len)
{
   this->len = len;
}

void Rectangle::setWidth(double width)
{
   this->width = width;
}

double Rectangle::getArea(void)
{
   return len*width;
}

class Square: public Rectangle
{
private:
    double edgeLen;
public:
    Square(double el);
    double getEdgeLen();
    void setEdgeLen(double el);
    double getArea();
};

Square::Square(double el)
:Rectangle(el, el), edgeLen(el)
{

}

double Square::getEdgeLen()
{
    return edgeLen;
}

void Square::setEdgeLen(double el)
{
    edgeLen = el;
}

double Square::getArea()
{
    return edgeLen*edgeLen;
}

int main()
{
    Square sq(4);
    cout<<sq.getArea()<<endl;
    return 0;
}