//用递归法计算从n个人中选择k个人组成一个委员会的不同组合数。
#include <iostream>
using namespace std;

int main()
{
	int comm(int n, int k);
	int n, k;
	cout << "Please enter two integers n and k:";
	cin >> n >> k;
	cout << "C(n,k)=" << comm(n, k) << endl;

	return 0;
}

int comm(int n, int k)
{
	if (k > n)
		return 0;
	else if (n == k || k == 0)
		return 1;
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}