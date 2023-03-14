// disable pragma warning
#ifndef BOOST_ALLOW_DEPRECATED_HEADERS
#define BOOST_ALLOW_DEPRECATED_HEADERS
#endif
#include <boost/timer.hpp>
#include <iostream>
using namespace std;

int main()
{
    boost::timer t;

    //CLOCKS_PER_SEC是标准c的库头文件<ctime>中宏定义的一个常数，表示一秒钟内CPU运行的时钟周期数
    cout << CLOCKS_PER_SEC << endl;
    cout << "max timespan:" << t.elapsed_max() /3600 << "h" <<endl;
    cout << "min timespan:" << t.elapsed_min() << "s" << endl;
    cout << "now time elapsed:" << t.elapsed() << "s" << endl;
}