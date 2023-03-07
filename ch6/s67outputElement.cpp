//设有一个int型数组，有10个元素，用3种方法输出各元素。
#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int i;
    int* p;

    //使用数组名和下标
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;

    //使用数组名和指针运算
    for (i = 0; i < 10; i++)
        cout << *(a + i) << " ";
    cout << endl;

    //使用指针变量
    for (p = a; p < (a + 10); p++)
        cout << *p << " ";
    cout << endl;

    return 0;
}