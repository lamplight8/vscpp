//习题2-35
//输出九九乘法表
#include<iostream>
#include<iomanip>
#include<boost/format.hpp>

using namespace std;
int main()
{
    int i,j;
    
    for (i=1; i<=9; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<boost::format("%d*%d = %2d") % j % i % (i*j);
            //cout<<j<<"*"<<i<<"="<<setw(2)<<j*i;
            if(i!=j)
                cout<<", ";
            else
                cout<<endl;
        }
    }
    
    return 0;
}