//习题5-14 定义Boat和Car两个类，二者都有weight属性，
//定义二者的一个友元函数getTotalWeight()，计算二者的重量和

#include<iostream>
using namespace std;

class Car;
class Boat
{
private:
    int weight;
public:
    Boat(int w);
    ~Boat();
    friend int getTotalWeight(const Car& ,const Boat&);
};
class Car
{
private:
    int weight;
public:
    Car(int weight2);
    ~Car();
    friend int getTotalWeight(const Car& ,const Boat&);
};

Boat::Boat(int w)
:weight(w)
{

}

Boat::~Boat()
{

}

Car::Car(int w)
:weight(w)
{

}

Car::~Car()
{

}

int getTotalWeight(const Car& c ,const Boat& b)
{
    return c.weight+b.weight;
}

int main()
{
    Car c(2);
    Boat b(5000);
    cout<<"Total weight of car and boat is "<<getTotalWeight(c, b)<<endl;
    return 0;
}