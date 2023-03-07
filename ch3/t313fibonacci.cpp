//习题3-13
//用递归的方法编写函数求Fibonacci级数，公式为
//Fn=Fn-1+Fn-2(n>2), F1=F2=1
//观察递归调用的过程
#include<iostream>
using namespace std;
int Fibonacci(int n);
int main()
{
    int i,n;
    cout<<"Please enter item n:";
    cin>>n;
    cout<<"Fibnoacci:";
    for(i=1;i<=n;i++)
        if(i<n)
            cout<<Fibonacci(i)<<",";
        else
            cout<<Fibonacci(i)<<endl;
    return 0;
}

int Fibonacci(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}