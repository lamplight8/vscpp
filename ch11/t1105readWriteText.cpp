/*
ϰ��11-5 ʹ��I/O�����ı���ʽ��11-3�⽨�����ļ�test1.txt
���ļ���������ַ�"�ѳɹ�����ַ�!"
Ȼ����������ļ���������ʾ�����������Ƿ���ȷ
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<cassert>
using namespace std;
int main()
{
    ofstream file1("test1.txt", ios_base::app);
    file1<<"�ѳɹ�д���ļ�!";
    file1.close();

    string a;
    ifstream file2("test1.txt");
    assert(file2);
    file2>>a;
    file2.close();
    cout<<a<<endl;
    return 0;
}
