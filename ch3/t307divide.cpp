//习题3-7
//完成函数，参数为两个unsigned short int型数
//返回值为第一个参数除以第二个参数的结果，数据类型为short int
//如果第二个参数为0，则返回值为-1
//在主程序中实现输入输出
#include<iostream>
using namespace std;
int main()
{
    short int divide(unsigned short int x, unsigned short int y);
    unsigned short int x, y;
    cout<<"Please enter two integers:";
    cin>>x>>y;
    cout<<divide(x,y)<<endl;
    return 0;
}

short int divide(unsigned short int x, unsigned short int y)
{
    if(y!=0)
        return x/y;
    else
        return -1;
}