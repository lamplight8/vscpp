//读入一系列整数，统计出正整数个数i和负整数个数，读入0则结束
#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, n;
    cout << "Please enter some integers seperated by space(enter 0 to quit):";
    cin >> n;
    while (n != 0)
    {
        if (n > 0)
            i += 1;
        if (n < 0)
            j += 1;
        cout << "next num (enter 0 to quit): ";
        cin >> n;
    }
    cout << endl;
    cout << "Count of positive integers:" << i << endl;
    cout << "Count of negative integers:" << j << endl;

	return 0;
}