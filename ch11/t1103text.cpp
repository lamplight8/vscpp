/*
ϰ��11-3 ʹ��I/O�����ı���ʽ����һ���ļ�test1.txt��д���ַ�"�ѳɹ�д���ļ�!"
�������ִ������򿪣������Ƿ���ȷд��
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    ofstream file1("test1.txt");//ʹ��code runner
    file1<<"�ѳɹ�д���ļ�!\n";//ע���ʱ���½�Ҫ��GBK��ʽ���棬��������Ĳ���GBK��׼�����ļ�
    file1.close();
    return 0;
}