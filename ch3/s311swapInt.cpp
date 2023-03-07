//将两个整数交换次序后输出。
#include <iostream>
using namespace std;

int main()
{
	void swap(int &a, int &b);
	int x = 5, y = 10;
	cout << "x=" << x << "    y=" << y << endl;
	swap(x, y);
	cout << "x=" << x << "    y=" << y << endl;

	return 0;
}

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}