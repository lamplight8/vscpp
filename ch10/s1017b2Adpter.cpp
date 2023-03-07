//例10-17  bind2dn产生binder2nd函数适配器实例。
#include<vector>
#include<iterator>
#include<functional>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> a(intArr, intArr + N);
    //bind2nd is deprecated
	vector<int>::iterator p = find_if(a.begin(), a.end(), bind(greater<int>(), placeholders::_1, 40));

	if (p == a.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is:" << *p << endl;

	return 0;
}