/*
习题11-10 使用宽输入流从一个有中文字符的文本文件中读入所有字符
统计每个字符出现的次数，将统计结果用宽输出流输出到另一个文本文件中
*/
#include <iostream>
#include <fstream>
#include <cstring>
#include <map>
#include <locale.h>
using namespace std;

int main()
{
    puts(setlocale(LC_CTYPE, ""));
    wifstream file1("test1.txt");
    wofstream file2("test2.txt");
    wstring line;
    int i;
    map<wchar_t, int> counter;
    map<wchar_t, int>::iterator iter;

    while(getline(file1, line))
    {
        for(i=0; i<line.length(); i++)
        {
            counter[line[i]]++;
        }
    }

    for(i=1, iter=counter.begin(); iter!=counter.end(); iter++, i++)
    {
        file2<<iter->first<<"\t "<<iter->second<<endl;
        if(i%4==0)
            cout<<endl;
    }

    file1.close();
    file2.close();
    return 0;
}
