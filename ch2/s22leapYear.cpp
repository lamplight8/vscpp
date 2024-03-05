//输入一个年份，判断是否闰年
#include <iostream>
#include <format>
using namespace std;

int main()
{
    bool IsLeapYear(int y);
    int year{};
    cout << format("Please enter the year: ");
    cin >> year;

    if (IsLeapYear(year))
        cout << format("{} is leap year.\n", year);
    else
        cout << format("{} is not leap year.\n", year);

	return 0;
}

bool IsLeapYear(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}