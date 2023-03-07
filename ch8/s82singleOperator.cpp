//单目运算符重载
#include <iostream>
using namespace std;

class Clock
{
private:
    int hour;
    int minute;
    int second;
public:
    Clock();
    Clock(int h, int m, int s);
    Clock& operator ++();//前置增量运算
    Clock operator ++(int);//后置增量运算
    void show() const;
};

Clock::Clock()
    :hour(0), minute(0), second(0)
{

}

Clock::Clock(int h, int m, int s)
    : hour(h), minute(m), second(s)
{

}

Clock& Clock::operator ++()//前置增量运算
{
    second++;
    if (second >= 60)
    {
        second -= 60;
        minute++;
        if (minute >= 60)
        {
            minute -= 60;
            hour = (hour + 1) % 24;
        }
    }
    return *this;
}

Clock Clock::operator ++(int)//后置增量运算
{
    Clock old = *this;
    ++(*this);
    return old;
}

void Clock::show() const
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
    Clock myClock(23, 59, 59);
    cout << "First time output:";
    myClock.show();
    cout << "Show myClock++:  ";
    (myClock++).show();
    cout << "Show ++myClock:  ";
    (++myClock).show();

    return 0;
}