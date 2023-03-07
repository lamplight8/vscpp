#include<iostream>
#include<boost/timer.hpp>
using namespace std;

int main()
{
    boost::timer t;//声明一个计时器对象
    //可度量的最大时间
    cout<<"Max timespan is "<<t.elapsed_max()/3600<<"h"<<endl;
    //可度量的最小时间
    cout<<"Min timespan is "<<t.elapsed_min()<<"s"<<endl;
    //从对象建立开始已经流逝的时间
    cout<<"Now time elapsed is "<<t.elapsed()<<"s"<<endl;
    return 0;
}