//例10-13 利用普通函数来定义函数对象。
#include <numeric>
#include <iostream>
using namespace std;

int mult(int x, int y);
int main()
{
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	// 将普通函数mult传递给通用算法
	cout << "The result by multipling all elements in a is "
		<< accumulate(a, a + N, 1, mult) << endl;
	return 0;
}

int mult(int x, int y)
{
	return x * y;
}