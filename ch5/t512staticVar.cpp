/*
习题5-12 在函数fn1()中定义一个静态变量n，fn1()中对n的值加1，
在主函数中，调用fn1()十次，显示n的值。
*/
#include<iostream>
using namespace std;

int fn1();

int main()
{
    int i;
    const int N = 10;
    for(i=0; i<N; i++)
    {
        cout<<fn1()<<endl;
    }
}

int fn1()
{
    static int n;
    n++;
    return n;
}