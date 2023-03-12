/*
习题12-5 练习使用try, catch语句，在程序中用new分配内存时
如果操作未成功，则用try语句触发一个char类型异常，用catch语句捕获此异常
*/
#include <iostream>
using namespace std;

int main()
{
    int *p;
    try
    {
        p = new int[512];
        p = NULL;
        if(!p)
            throw "内存分配错误!";
    }
    catch(const char* str)
    {
        cout <<"有异常产生："<< str << endl;
    }
    return 0;
}