// disable pragma warning
#ifndef BOOST_ALLOW_DEPRECATED_HEADERS
#define BOOST_ALLOW_DEPRECATED_HEADERS
#endif
#include <boost/progress.hpp>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    {
        boost::progress_timer t;//用花括号限定其生命期
    }
    {
        boost::progress_timer t;
    }
    stringstream ss;
    {
        boost::progress_timer t(ss);
    }
    cout << ss.str();
}


