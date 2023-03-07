//习题3-10
//编写函数求两个整数的最大公约数和最小公倍数
#include<iostream>
using namespace std;

int greatestCommonDivisor(int a, int b);
int leastCommonMultiple(int a, int b);

int main()
{
    int a,b;
    cout<<"Please enter two integers:";
    cin>>a>>b;
    cout<<"the greatest common divisor with "<<a<<" and "<<b<<" is "<<greatestCommonDivisor(a,b)<<endl;
    cout<<"the least common multiple with "<<a<<" and "<<b<<" is "<<leastCommonMultiple(a,b)<<endl;
    return 0;
}

int greatestCommonDivisor(int a, int b)
{
    if(b==0)
        return 0;
    int c = a%b;
    while (c!=0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}

int leastCommonMultiple(int a, int b)
{
    int c;
    c = greatestCommonDivisor(a,b);
    if(c!=0)
        return a*b/c;
    else
        return 0;
}