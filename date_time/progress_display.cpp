// disable pragma warning
#ifndef BOOST_ALLOW_DEPRECATED_HEADERS
#define BOOST_ALLOW_DEPRECATED_HEADERS
#endif
#include <boost/progress.hpp>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void case1()
{
    vector<string> v(100);
    ofstream fs("./test.txt");

    boost::progress_display pd(v.size());

    for (auto& x : v)
    {
        fs << x << endl;
        ++pd;
    }
}

void case2()
{
    vector<string> v(100, "aaa");

    v[10] = "";v[23] = "";
    ofstream fs("./test.txt");
    boost::progress_display pd(v.size());

    for (auto pos = v.begin(); pos != v.end();++pos)
    {
        fs << *pos << endl;
        ++pd;
        if (pos->empty())
        {
            cout << "null string # " << (pos - v.begin())<< endl;
        }
    }
}

int main()
{
    case1();
    case2();
}