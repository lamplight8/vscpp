//习题7-10 定义一个Object类，有数据成员weight及相应的操作函数
//由此派生出Box类，增加数据成员height和width及相应的操作函数
//声明一个Box对象，观察构造函数与析构函数的调用顺序
//
#include<iostream>
using namespace std;

class Object
{
private:
    int weight;
public:
    Object();
    Object(int weight);
    ~Object();
    int getWeight() const;
};

Object::Object()
{
    cout<<"New a Default Object."<<endl;
}

Object::Object(int weight)
:weight(weight)
{
    cout<<"New a Object, its weight is "<<weight<<endl;
}

Object::~Object()
{
    cout<<"Destory Object."<<endl;
}

int Object::getWeight() const
{
    return weight;
}

class Box: public Object
{
private:
    int height;
    int width;
public:
    Box();
    Box(int weight, int height, int width);
    ~Box();
};

Box::Box()
{
    cout<<"New a Default Box."<<endl;
}

Box::Box(int weight, int height, int width)
:Object(weight), height(height), width(width)
{
    cout<<"New a Box. its weight is "<<Object::getWeight();
    cout<<", its height is "<<height<<", its width is "<<width<<endl;
}

Box::~Box()
{
    cout<<"Destroy a Box Object."<<endl;
}

int main()
{
    Box b1;
    Box b2(2, 30, 40); 
    return 0;
}