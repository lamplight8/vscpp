//输入一个8位二进制数，将其转换为十进制数输出
#include <iostream>
#include <boost/format.hpp>
using namespace std;

int main()
{
    double power(double x, int n);
    int value {};
    int i;
    char ch;
    cout << "Enter an 8 bit binary number:";
    for (i = 7; i >= 0; i--)
    {
        cin >> ch;
        if (ch == '1')
            value += static_cast<int>(power(2, i));
    }
    cout << boost::format("Decimal value is %d") % value;

	return 0;
}

double power(double x, int n)
{
    double val = 1.0;
    while (n--)
        val *= x;
    return val;
}