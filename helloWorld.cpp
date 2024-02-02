// test.cpp
#include<iostream>
#include<format>
using namespace std;

int main()
{
	int uninitializedInt;
	int initializedInt{ 7 };

	cout << format("{} is a random value\n", uninitializedInt);
	cout << format("{} was assigned an initial value\n", initializedInt);
}