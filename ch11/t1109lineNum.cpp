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
    //打开输入文件用于读
    ifstream file1("test1.txt");
    assert(file1);

    //打开输出文件用于写
    ofstream file2("test2.txt");
    assert(file2);

    //复制行，并在行头添加行号
    int i=1;//行号计数器
    char buffer[256]; //行拷贝缓冲区
    while(file1.getline(buffer,256))
    {
        file2 << i++ <<". ";
        file2 << buffer <<endl;
    }

    file1.close();
    file2.close();
    return 0;
}