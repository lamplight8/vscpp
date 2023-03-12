//例11-12 用ostringstream将字符串转换为数值
#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

template<class T>
inline T fromString(const string &str)
{
    istringstream is(str);
    T v;
    is>>v;
    return v;
}

int main()
{
    string s1{"52"};
    int v1 = fromString<int>(s1);
    cout<<v1<<endl;
    string s2{"1.2"};
    double v2 = fromString<double>(s2);
    cout<<v2;
    return 0;
}