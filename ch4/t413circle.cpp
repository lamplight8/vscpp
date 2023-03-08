//习题4-13 定义一个Circle类，有数据成员radius（半径），
//成员函数getArea()，计算圆的面积，构造一个Circle的对象进行测试

#include<iostream>
using namespace std;

class Circle
{
public:
    Circle(int r):radius(r){};
    float area()
    {
        return 3.1415926*radius*radius;
    }
private:
    int radius;
};

int main()
{
    int r;
    cout<<"Please enter the radius of cirlce:";
    cin>>r;
    Circle c1(r);
    cout<<"The area of circle is "<<c1.area()<<endl;
}