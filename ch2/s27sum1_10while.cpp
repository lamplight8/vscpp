//用do…while语句编程，求自然数1~10之和
#include <iostream>
#include <boost/format.hpp>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    cout << boost::format("sum = %d") % sum << endl;

	return 0;
}