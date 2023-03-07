//数组的声明与使用
#include<iostream>
using namespace std;

int main()
{
    const int N = 10;
    int a[N], b[N];
    int i;
    for (i = 0; i < N; i++)
    {
        a[i] = i * 2 + 1;
        b[N - i - 1] = a[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << "a[" << i << "]=" << a[i] << " " << "b[" << i << "]=" << b[i] << endl;
    }

    return 0;
}