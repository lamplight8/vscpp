//编写程序求π的值
#include <iostream>
#include <boost/format.hpp>
using namespace std;

int main()
{
    double arctan(double x);
    double a {16.0 * arctan(1 / 5.0)};
    double b {4.0 * arctan(1 / 239.0)};

    cout << boost::format("PI = %f\n") % (a-b);

	return 0;
}

double arctan(double x)
{
    double sqr {x*x};
    double e {x};
    double r {};
    int i {1};
    double f {};
    while (e / i > 1e-15)
    {
        f = e / i;
        r = (i % 4 == 1) ? r + f : r - f;
        e = e * sqr;
        i += 2;
    }
    return r;
}