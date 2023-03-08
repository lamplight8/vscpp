//习题4-11 定义并实现一个矩形类，有长、宽两个属性，由成员函数计算矩形的面积。

#include<iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle(int l, int w);
    Rectangle(Rectangle& obj);
    ~Rectangle();
    int area();
private:
    int length;
    int width;
};

Rectangle::Rectangle(int l, int w)
:length(l), width(w)
{

}

Rectangle::Rectangle(Rectangle& obj)
:length(obj.length), width(obj.width)
{

}

Rectangle::~Rectangle()
{

}

int Rectangle::area()
{
    return length*width;
}

int main()
{
    int len, wid;
    cout<<"Please enter length and width of the rectangle separated by space: ";
    cin>>len>>wid;
    Rectangle rect(len, wid);
    cout<<"The area of Rectangle is "<<rect.area()<<endl;
    return 0;
}