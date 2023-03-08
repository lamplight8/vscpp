/*
习题5-7 定义一个Cat类，拥有静态数据成员numOfCats，记录Cat的个体数目；
静态成员函数getNumOfCats()，读取numOfCats。
设计程序测试这个类，体会静态数据成员和静态成员函数的用法。
*/
#include<iostream>
using namespace std;

class Cat
{
public:
    Cat()
    {
        numOfCats++;
    }
    ~Cat()
    {
        numOfCats--;
    }
    static int getNumOfCats()
    {
        return numOfCats;
    }
private:
    static int numOfCats;
};

int Cat::numOfCats = 0;

int main(int argc, char* argv[])
{
    Cat a;
    cout<<a.getNumOfCats()<<endl;
    Cat b;
    cout << b.getNumOfCats() << endl;
    Cat c;
    cout << c.getNumOfCats() << endl;

    b.~Cat();
    cout<<a.getNumOfCats()<<endl;
    
    return 0;
}