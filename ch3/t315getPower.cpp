//习题3-15
//编写递归函数getPower计算x^y
//在同一个程序中针对整型和实型实现两个重载的函数
//int getPower(int x, int y);       //整型形式，当y<0时，返回0
//double getPower(double x, int y); //实型形式
//在主程序中实现输入输出，分别输入一个整数a和一个实数b作为底数
//再输入一个整数m作为指数，输出a^m和b^m
//另外请读者思考，如果在调用getPower函数计算a^m时希望得到一个实型结果
//(实型结果表示范围更大，而且可以准确表示m<0时的结果)
//该如何调用？
#include<iostream>
using namespace std;

int getPower(int x, int y);       //整型形式，当y<0时，返回0
double getPower(double x, int y); //实型形式

int main()
{
    int a;
    double b;
    int m;
    cout<<"Please enter an integer a:";
    cin>>a;
    cout<<"Please enter a real b:";
    cin>>b;
    cout<<"Please enter an integer m:";
    cin>>m;
    if(m<0)
        cout<<a<<"^"<<m<<" = "<<1/(double)getPower(a,-m)<<endl;
    else
        cout<<a<<"^"<<m<<" = "<<getPower(a,m)<<endl;
    if(m<0)
        cout<<b<<"^"<<m<<" = "<<1/getPower(b,-m)<<endl;
    else
        cout<<b<<"^"<<m<<" = "<<getPower(b,m)<<endl;
    
    return 0;
}

int getPower(int x, int y)
{
    if(y==0)
        return 1;
    else
        return x*getPower(x, y-1);
}

double getPower(double x, int y)
{
    if(y==0)
        return 1;
    else
        return x*getPower(x, y-1);
}