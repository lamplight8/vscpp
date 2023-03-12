/*
习题11-5 使用I/O流以文本方式打开11-3题建立的文件test1.txt
在文件后面添加字符"已成功添加字符!"
然后读出整个文件的内容显示出来，看看是否正确
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<cassert>
using namespace std;
int main()
{
    ofstream file1("test1.txt", ios_base::app);
    file1<<"已成功写入文件!";
    file1.close();

    string a;
    ifstream file2("test1.txt");
    assert(file2);
    file2>>a;
    file2.close();
    cout<<a<<endl;
    return 0;
}
