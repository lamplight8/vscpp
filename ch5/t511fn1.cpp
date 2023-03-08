/*
习题5-11 在一个文件中定义一个全局变量n，主函数main()，
在另一个文件中定义函数fn1()，在main()中对n赋值，
再调用fn1()，在fn1()中也对n赋值，显示n最后的值。
*/
#include<iostream>
using namespace std;
#include"t511fn1.h"
int n;

int main()
{
    n=1;
    fn1(2);
    cout<<n<<endl;
    return 0;
}