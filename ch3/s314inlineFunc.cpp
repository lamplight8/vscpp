//内联函数应用举例。
#include <iostream>
using namespace std;

const double PI = 3.141592665358979;

inline double calArea(double radius)
{
	return PI * radius * radius;
}

int main()
{
	double r = 3.0;
	double area = calArea(r);
	cout << area << endl;

	return 0;
}