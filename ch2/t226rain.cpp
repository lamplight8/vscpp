/*
ϰ��2-26 
��дһ�������ĳ���ʵ�ֹ���
���û����ʡ��������������𣿡�����ʾ�û�����y��n
������Ϊy����ʾ�������������ꡱ��������Ϊn����ʾ������û�����ꡱ
����������ʡ��������������𣿡�
*/

#include<iostream>
using namespace std;
int main()
{
    bool flag = true;
    char ch;
    while(flag)
    {
        cout<<"��������������";
        cin>>ch;
        if(ch == 'y' || ch == 'Y'){
            cout<<"������������"<<endl;
            flag = false;
        }
        else if(ch == 'n' || ch == 'N'){
            cout<<"����û������"<<endl;
            flag = false;
        }
    }
}