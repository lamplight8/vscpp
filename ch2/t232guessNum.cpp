//习题2-32
//在程序中定义一个整型变量，赋予1~100的值
//要求用户猜这个数，比较两个数的大小，把结果提示给用户，直到猜对为止
//分别使用while，do...while语句实现循环

#include<iostream>
using namespace std;
int main()
{
    const int Num = 67;
    int x{};
    bool flag = true;
    while(flag)
    {
        cout<<"Please enter the num(<100):";
        cin>>x;
        if(x == Num)
        {
            flag = false;
            cout<<"You are right! The num is "<< x <<endl;
        }
        else if(x < Num)
            cout<<"It is less than result! Please go on."<<endl;
        else if(x > 100)
            cout<<"It is out of range(0-100)! Please go on."<<endl;
        else
            cout<<"It is more then result! Please go on."<<endl;
    }
    
    return 0;
}