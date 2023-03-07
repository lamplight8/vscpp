//使用引用传递改写例3-11的程序，使两整数成功地进行交换。
#include <iostream>
using namespace std;

int main()
{
	void swap(int &a, int &b);
	int x{5}, y{10};
	cout << "x=" << x << "    y=" << y << endl;
	swap(x, y);
	cout << "x=" << x << "    y=" << y << endl;

	return 0;
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}