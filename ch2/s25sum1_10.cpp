//求自然数1~10之和
#include <iostream>
#include <boost/format.hpp>
using namespace std;

int main()
{
    int i;
    int sum {0};
    for (i=1; i <= 10; i++)
        sum += i;
    cout << boost::format("sum = %d") % sum << endl;

	return 0;
}