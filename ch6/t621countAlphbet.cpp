/*
例6-21 编写一个函数，统计一条英文句子中字母的个数，在主程序中实现输入输出。
*/

#include <iostream>
#include <cstring>
using namespace std;

int countSentenceAlphabets(const string& s);

int main()
{
    string s1;
    cout<<"Please enter a string: ";
    getline(cin, s1);
    
    cout << countSentenceAlphabets(s1) << endl;

    return 0;
}

int countSentenceAlphabets(const string& s)
{
    int k = 0;
    int len = s.length();
    int i;
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'z')
            k++;
    }
    return k;
}