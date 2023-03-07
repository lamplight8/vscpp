//时钟程序
#include <iostream>
using namespace std;

class Clock
{
	int hour;
	int minute;
	int second;
public:
	void setTime(int h=0, int m=0, int s=0);
	void showTime();
};

void Clock::setTime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Clock::showTime()
{
	cout << hour << ": " << minute << ": " << second << endl;
}

int main()
{
	Clock myClock;
	cout << "First time set and output: " << endl;
	myClock.setTime();
	myClock.showTime();
	cout << "Second time set and output: " << endl;
	myClock.setTime(8, 30, 30);
	myClock.showTime();
	return 0;
}