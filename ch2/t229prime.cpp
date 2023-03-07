//习题2-29
//用穷举法找出1~100间的质数并显示出来
//分别使用while，do...while，for循环语句实现

#include<iostream>
using namespace std;
int main()
{
    bool isPrime(int num);
    int i = 1;

    //使用while
    while(i<=100)
    {
        if(isPrime(i))
            cout<<i<<",";
        i++;
    }
    cout<<endl;

    //使用do...while
    i=1;
    do
    {
        if(isPrime(i))
            cout<<i<<",";
        i++;
    } while (i<=100);
    cout<<endl;

    //使用for
    for(i=1;i<=100;i++)
    {
        if(isPrime(i))
            cout<<i<<",";
    }
    cout<<endl;
    
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