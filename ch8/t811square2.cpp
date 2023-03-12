//(2)使用typied实现Shape::getVertexCount函数
#include<iostream>
#include<typeinfo>
using namespace std;

class Shape
{
public:
    virtual int getVertexCount()
    {
        return 0;
    }
};

class Rectangle: public Shape
{
public:
    int getVertexCount()
    {
        return 4;
    }
};

class Square : public Rectangle
{
public:
    int getVertexCount()
    {
        return 4;
    }
};

int main()
{
    Shape ob1;
    Rectangle ob2;
    Square ob3;

    Shape* p;

    if(typeid(ob1)==typeid(Shape))
    {
        p = &ob1;
        cout<<p->getVertexCount()<<endl;
    }

    if(typeid(ob2)==typeid(Rectangle))
    {
        p = &ob2;
        cout<<dynamic_cast<Rectangle*>(p)->getVertexCount()<<endl;
    }

    if(typeid(ob3)==typeid(Square))
    {
        p = &ob3;
        cout<<dynamic_cast<Square*>(p)->getVertexCount()<<endl;
    }

    return 0;
}