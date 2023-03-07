//习题3-9
//编写函数判别一个数是否质数，在主程序中实现输入输出
#include<iostream>
using namespace std;
int main()
{
    bool isPrime(int num);
    int num;
    cout<<"Please enter an integer:";
    cin>>num;
    if(isPrime(num))
        cout<<num<<" is prime."<<endl;
    else
        cout<<num<<" is not prime."<<endl;
    return 0;
}

bool isPrime(int num)
{
    bool flag = true;
    for(int i=2;i<num;i++){
        if(num%i==0)
            flag = false;
    }
    return flag;
}