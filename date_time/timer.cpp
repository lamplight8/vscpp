// Copyright (c) 2015
// Author: Chrono Law
#include <iostream>
using namespace std;

// disable pragma warning
#define BOOST_ALLOW_DEPRECATED_HEADERS

#include <boost/timer.hpp>
using namespace boost;

//////////////////////////////////////////

int main()
{
    timer t;

    cout<<CLOCKS_PER_SEC<<endl;
    cout<<"max timespan:"<<t.elapsed_max()/3600 << "h" <<endl;
    std::cout << "min timespan:"<< t.elapsed_min() << "s" << std::endl;
    std::cout << "now time elapsed:"
        << t.elapsed() <<"s" << std::endl;
}
