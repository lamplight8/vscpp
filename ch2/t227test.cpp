//ϰ��2-27
//��дһ�������ĳ�������ʱ���û����ʡ��㿼�Կ��˶��ٷ֣�(0~100)��
//����������ж���ȼ�Ȼ����ʾ�������������£�
//�ţ�90<=����<=100
//����80<=����<90
//�У�60<=����<80
//�0<=����<60
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string a;

    bool flag = true;
    int len;
    int x;
    int i;

    while(flag)
    {
        cout<<"Please enter test score: "<<endl;
        cin>>a;
        len = a.length();
        i = 0;
        while(i < len)//���ַ�������ַ����м��
        {
            if(!isdigit(a[i]))//ֻҪ����һ���������ַ�����Ϊ�Ƿ�����
            {
                flag = false;
            }
            i++;
        }

        if(!flag)//�����ʱ��־Ϊfalse��˵�����з������ַ�
        {
            cout<<"Input error! Please enter it again."<<endl;//�����쳣����
            flag = true;//��־�ó�true������ѭ������
        }
        else//����ȫΪ����
        {
            flag = false;//����ȫΪ���֣����˳�ѭ���������־�ó�false
            x = 
            x = atoi(a.c_str());
            if(x>100)//����ɼ�����100�֣�˵�����볬����Χ����־�ó�true������ѭ��
            {
                cout<<"The num is out of range!"<<endl;
                flag = true;
            }
            else if(x>=90 && x<=100)
            {
                cout<<"��"<<endl;
            }
            else if(x >= 80 && x<90)
            {
                cout<<"��"<<endl;
            }
            else if(x >= 60 && x<80)
            {
                cout<<"��"<<endl;
            }
            else
                cout<<"��"<<endl;
        }
    }
    return 0;
}