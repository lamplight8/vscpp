//习题4-9 设计并测试一个名为Rectangle的矩形类，
//其属性为矩形的左下角与右上角两个点的坐标，
//根据坐标能计算矩形的面积。
#include<iostream>
using namespace std;

class Rectangle{
private:
    int leftx, bottomy;
    int rightx, topy;
public:
    Rectangle(int lx, int by, int rx, int ty);
    int getleftx();
    int getbottomy();
    int getrightx();
    int gettopy();
    int area();
};

Rectangle::Rectangle(int lx, int by, int rx, int ty)
:leftx(lx), bottomy(by), rightx(rx), topy(ty)
{

}

int Rectangle::getleftx()
{
    return leftx;
}

int Rectangle::getbottomy()
{
    return bottomy;
}

int Rectangle::getrightx()
{
    return rightx;
}

int Rectangle::gettopy()
{
    return topy;
}

int Rectangle::area()
{
    return (rightx - leftx)*(topy - bottomy);
}

int main()
{
    Rectangle rect1(10, 20, 30, 40);
    cout<<"The rect's area is "<<rect1.area()<<endl;
    return 0;
}