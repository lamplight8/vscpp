/*
习题11-4 使用I/O流以文本方式打开11-3题建立的文件test1.txt
读出其内容并显示出来，看看是否正确?
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<cassert>
using namespace std;

int main()
{
    string a;
    ifstream file1("test1.txt");
    assert(file1);
    file1>>a;
    file1.close();
    cout<<a<<endl;
    return 0;
}