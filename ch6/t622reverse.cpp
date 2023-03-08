// 例6-22 编写函数void reverse(string& s)，用递归算法使字符串s倒序
#include<iostream>
#include<cstring>
using namespace std;
void reverse(string& s);

int main()
{
    string str = "abcdefg";
    reverse(str);
    cout<<str;
    return 0;
}

void reverse(string& s)
{
    static int head = 0;
    static int end = s.length()-1;
    static int size = s.length()-2;
    char tmp;
    if(size>=2)
    {
        tmp = s[head];
        s[head] = s[end];
        s[end] = tmp;
        head++;
        end--;
        size -= 2;
        reverse(s);
    }
}