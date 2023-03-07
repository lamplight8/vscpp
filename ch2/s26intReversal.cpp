//输入一个整数，将各位数字反转后输出
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<< "Please enter an integer: ";
    cin >> num;
    while (num / 10 != 0)
    {
        cout << num % 10 << " ";
        num = num / 10;
    }
    cout << num << endl;

	return 0;
}