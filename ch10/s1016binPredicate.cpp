//例10-16 利用STL中的二元谓词函数对象
#include<numeric>
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
    vector<int>a(intArr, intArr + N);
    cout << "before sorting: " << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    sort(a.begin(), a.end(), greater<int>());
    cout << "after sorting:" << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    return 0;
}