//具有静态和动态生命期的时钟程序。
#include<iostream>
using namespace std;

class Clock
{
public:
    Clock();
    void setTime(int h, int m, int s);//函数原型作用域
    void showTime();
private:
    int hour;
    int minute;
    int second;
};

Clock::Clock()
:hour(0), minute(0), second(0)
{

}

void Clock::setTime(int h, int m, int s)//局部作用域
{
    hour = h;
    minute = m;
    second = s;
}

void Clock::showTime()
{
    cout << hour << ": " << minute << ": " << second << endl;
}

//具有静态生存期，全局变量，由默认构造函数初始化为0，0，0
Clock globClock;

int main()
{
    cout << "First time output:" << endl;
    //引用具有命名空间作用域的对象
    globClock.showTime();//显示0: 0: 0
    globClock.setTime(8, 30, 30);
    Clock myClock(globClock);//调用复制构造函数
    cout << "Second time output:" << endl;
    myClock.showTime();
    return 0;
}