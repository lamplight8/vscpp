//求自然数1~10之和
#include <iostream>
#include <format>
using namespace std;

int main()
{
    int i;
    int sum{0};
    for(i=1; i <= 10; i++)
        sum += i;
    cout << format("sum = {}", sum) << endl;

	return 0;
}