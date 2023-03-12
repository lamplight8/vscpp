//例10-18  ptr_fun，not1和not2产生函数适配器实例。
#include<vector>
#include<functional>
#include<algorithm>
#include<iostream>
using namespace std;

bool g(int x, int y)
{
	return x > y;
}

int main()
{
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int>a(intArr, intArr + N);

    //vector<int>::iterator p = find_if(a.begin(), a.end(), bind(greater<int>(), placeholders::_1, 40));

	vector<int>::iterator p;
	p = find_if(a.begin(), a.end(), bind(cref(g), placeholders::_1, 40));
	if (p == a.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is: " << *p << endl;

	p = find_if(a.begin(), a.end(), not_fn(bind(greater<int>(), placeholders::_1, 15)));
	if (p == a.end())
		cout << "no element is not greater than 15" << endl;
	else
		cout << "first element that is not greater 15 is: " << *p << endl;

	p = find_if(a.begin(), a.end(),  bind(not_fn(greater<int>()), placeholders::_1, 15));
	if(p==a.end())
		cout << "no element is not greater than 15" << endl;
	else
		cout << "first element that is not greater 15 is: " << *p << endl;

	return 0;
}