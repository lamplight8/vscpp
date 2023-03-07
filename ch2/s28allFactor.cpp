//输入一个整数，求出它的所有因子
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int i;
    cout<< "Please enter an integer: ";
    cin >> n;
    m = n / 2;
    for (i = 1; i <= m; i++)
        if (n % i == 0)
            cout << i << " ";

	return 0;
}