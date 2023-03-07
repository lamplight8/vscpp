//习题3-12
//在主程序中提示输入整数n，编写函数
//用递归的方法求1+2+...+n的值

#include<iostream>
using namespace std;

int sum1_n(int n);

int main()
{
    int n;
    cout<<"Please enter an integer:";
    cin>>n;
    if(n==1)
        cout<<"1 = "<<sum1_n(n)<<endl;
    else if(n==2)
        cout<<"1+2 = "<<sum1_n(n)<<endl;
    else
        cout<<"1+2+...+"<<n<<" = "<<sum1_n(n)<<endl;
    return 0;
}

int sum1_n(int n)
{
    if(n==1)
        return 1;
    else
        return sum1_n(n-1)+n;
}