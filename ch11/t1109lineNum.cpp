/*
ϰ��11-4 ʹ��I/O�����ı���ʽ��11-3�⽨�����ļ�test1.txt
���������ݲ���ʾ�����������Ƿ���ȷ?
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<cassert>
using namespace std;

int main()
{
    //�������ļ����ڶ�
    ifstream file1("test1.txt");
    assert(file1);

    //������ļ�����д
    ofstream file2("test2.txt");
    assert(file2);

    //�����У�������ͷ����к�
    int i=1;//�кż�����
    char buffer[256]; //�п���������
    while(file1.getline(buffer,256))
    {
        file2 << i++ <<". ";
        file2 << buffer <<endl;
    }

    file1.close();
    file2.close();
    return 0;
}