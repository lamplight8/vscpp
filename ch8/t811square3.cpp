//(3)将Shape::getVertexCount声明为纯虚函数，在派生类中给出具体实现
#include<iostream>
using namespace std;

class Shape
{
public:
    virtual int getVertexCount()=0;
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
    Rectangle rect;
    p = &rect;
    int n;
    n = p->getVertexCount();

    Square s;
    p=&s;
    n = p->getVertexCount();
    cout<<n<<endl;
    cout<<n<<endl;
    return 0;
}