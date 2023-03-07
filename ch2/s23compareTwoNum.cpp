//比较两个数的大小
#include <iostream>
#include <boost/format.hpp>
using namespace boost;
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x and y separated by spaces: ";
    cin >> x >> y;
    if (x > y)
        cout<<format("%d > %d\n") % x % y;
    else if (x < y)
        cout<<format("%d < %d\n") % x %y;
    else
        cout<<format("%d = %d\n") % x %y;

	return 0;
}