//习题10-10 编写一个程序，从键盘输入两组整数(可以看作是两个集合)
//分别输出同属于两组的整数(即两个集合的交集)
//属于至少一组的整数(即两个集合的并集)
//属于第一组但不属于第二组的整数(即两个集合的差集)
//程序中需要用到set_intersection, set_union, set_difference等算法
#include<iostream>
#include<iterator>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int> s1, s2;
    int m, n, i, t;
    cout<<"Please enter the element num of set s1:";
    cin>>m;
    cout<<"Please enter the first set:";
    for(i=0; i<m; i++)
    {
        cin>>t;
        s1.insert(t);
    }
    copy(s1.begin(), s1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    cout<<"Please enter the element num of set s2:";
    cin>>n;
    cout<<"Please enter the second set:";
    for(i=0; i<n; i++)
    {
        cin>>t;
        s2.insert(t);
    }
    copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    cout<<"its set_intersection: ";
    set<int> c1;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(c1, c1.begin()));
    copy(c1.begin(), c1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    cout<<"its set_union: ";
    set<int> c2;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(c2, c2.begin()));
    copy(c2.begin(), c2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    cout<<"its set_difference: ";
    set<int> c3;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(c3, c3.begin()));
    copy(c3.begin(), c3.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}