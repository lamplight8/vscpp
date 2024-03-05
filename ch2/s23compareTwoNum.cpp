//比较两个数的大小
#include <iostream>
#include <format>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x and y separated by spaces: ";
    cin >> x >> y;
    if (x > y)
        cout<<format("{} > {}\n", x, y);
    else if (x < y)
        cout<<format("{} < {}\n", x, y);
    else
        cout<<format("{} = {}\n", x, y);

	return 0;
}