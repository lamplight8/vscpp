//习题2-28
//实现一个简单的菜单程序，运行时显示“Menu: A(dd) D(elete) S(ort) Q(uit), Select one:”
//提示用户输入。A表示增加，D表示删除，S表示排序，Q表示退出
//输入为A、D、S时分别提示“数据已经增加、删除、排序”，输入为Q时结束程序
//(1) 要求使用if.. else语句进行判断，用break，continue控制程序流程
//(2) 要求使用switch语句
#include<iostream>
using namespace std;
int main()
{
    char ch;
    bool flag=true;
    while(flag){
        cout<<"Menu: A(dd) D(elete) S(ort) Q(uit), Select one:";
        cin>>ch;
        switch (ch)
        {
        case 'A':
        case 'a':
            cout<<"The date has appenede."<<endl;
            break;
        case 'D':
        case 'd':
            cout<<"The data has removed."<<endl;
            break;
        case 'S':
        case 's':
            cout<<"The data has sorted."<<endl;
            break;
        case 'Q':
        case 'q':
            flag = false;
            continue;
        default:
            break;
        }
    }
    return 0;
}