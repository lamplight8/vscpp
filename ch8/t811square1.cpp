//习题8-11 在习题8-6的基础上，通过继承Rectangle得到一个新的类Square
//然后在Shape类中增加一个函数int getVertexCount()
//用来获得当前图形的顶点个数
//用以下几种方法实现，并体会各自的优势：
//(1)使用dynamic_cast实现Shape::getVertexCount函数
#include<iostream>
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
    Shape* p;
    Rectangle* pr;
    Square *ps;

    Shape sh;
    Rectangle rt;
    Square sq;

    p = &sh;
    cout<<"Shape Vertex: "<<p->getVertexCount()<<endl;

    p = &rt;
    pr = dynamic_cast<Rectangle*>(p);
    cout<<"Rectangle Vertex: "<<pr->getVertexCount()<<endl;

    p = &sq;
    ps = dynamic_cast<Square*>(p);
    cout<<"Square Vertex: "<<ps->getVertexCount()<<endl;
    return 0;
}