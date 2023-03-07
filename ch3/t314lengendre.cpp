//习题3-14
//用递归的方法编写函数求n阶勒让德多项式的值
//在主程序中实现输入输出，递归公式为
//pn(x)=1 (n=0)
//pn(x)=x (n=1)
//pn(x)=[(2n-1)x*pn-1(x) - (n-1)pn-2(x)]/n (n>1)

#include<iostream>
using namespace std;
double legendre(double x, int n);
int main()
{
    double x;
    int n;
    cout<<"Please enter n:";
    cin>>n;
    cout<<"Please enter x:";
    cin>>x;
    cout<<"Legendre("<<x<<", "<<n<<")="<<legendre(x, n)<<endl;
    return 0;
}

double legendre(double x, int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
        return ((2*n-1)*x*legendre(x, n-1) - (n-1)*legendre(x,n-2))/n;
}