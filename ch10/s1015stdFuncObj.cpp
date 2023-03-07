//例10-15 利用STL标准函数对象
#include<numeric>
#include<functional> // 标准函数对象头文件
#include<iostream>
using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	// 将类MultClass传递给通用算法
	cout << "The result by multipling all elements in a is "
		<< accumulate(a, a + N, 1, multiplies<int>()) << endl;
	return 0;
}