/*
习题11-3 使用I/O流以文本方式建立一个文件test1.txt，写入字符"已成功写入文件!"
用其他字处理程序打开，看看是否正确写入
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    ofstream file1("test1.txt");//使用code runner
    file1<<"已成功写入文件!\n";//注意此时右下角要用GBK方式保存，这样保存的才是GBK标准汉字文件
    file1.close();
    return 0;
}