/*
习题2-26 
编写一个完整的程序，实现功能
向用户提问“现在正在下雨吗？”，提示用户输入y或n
若输入为y，显示“现在正在下雨”；若输入为n，显示“现在没有下雨”
否则继续提问“现在正在下雨吗？”
*/

#include<iostream>
using namespace std;
int main()
{
    bool flag = true;
    char ch;
    while(flag)
    {
        cout<<"现在正在下雨吗？";
        cin>>ch;
        if(ch == 'y' || ch == 'Y'){
            cout<<"现在正在下雨"<<endl;
            flag = false;
        }
        else if(ch == 'n' || ch == 'N'){
            cout<<"现在没有下雨"<<endl;
            flag = false;
        }
    }
}