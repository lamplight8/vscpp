/*
习题4-8 定义一个Dog类，包含了age，weight等属性，
以及对这些属性操作的方法。实现并调试这个类。
*/
#include<iostream>
using namespace std;

class Dog
{
private:
    int age;
    int weight;
public:
    Dog(int a, int w);
    int getAge();
    int getWeight();
    void setAge(int a);
    void setWeight(int w);
};

Dog::Dog(int a, int w)
:age(a), weight(w)
{

}

int Dog::getAge()
{
    return age;
}

int Dog::getWeight()
{
    return weight;
}

void Dog::setAge(int a)
{
    age = a;
}

void Dog::setWeight(int w)
{
    weight = w;
}

int main()
{
    Dog dog1(2, 6);
    Dog dog2(3, 10);
    cout<<"The dog1: "<<"age = "<<dog1.getAge()<<" weight = "<<dog1.getWeight()<<endl;
    cout<<"The dog2: "<<"age = "<<dog2.getAge()<<" weight = "<<dog2.getWeight()<<endl;
    return 0;
}