//例11-7 get函数应用举例
#include<iostream>
using namespace std;

int main()
{
    char ch;
    while ((ch=cin.get())!=EOF)
        cout.put(ch);
    return 0;
}