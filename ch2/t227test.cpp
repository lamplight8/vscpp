//习题2-27
//编写一个完整的程序，运行时向用户提问“你考试考了多少分？(0~100)”
//接收输入后判断其等级然后显示出来。规则如下：
//优：90<=分数<=100
//良：80<=分数<90
//中：60<=分数<80
//差：0<=分数<60
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
        while(i < len)//对字符串逐个字符进行检查
        {
            if(!isdigit(a[i]))//只要含有一个非数字字符即认为非法输入
            {
                flag = false;
            }
            i++;
        }

        if(!flag)//如果此时标志为false，说明含有非数字字符
        {
            cout<<"Input error! Please enter it again."<<endl;//处理异常输入
            flag = true;//标志置成true，继续循环输入
        }
        else//输入全为数字
        {
            flag = false;//输入全为数字，则退出循环，因而标志置成false
            x = 
            x = atoi(a.c_str());
            if(x>100)//如果成绩大于100分，说明输入超出范围，标志置成true，继续循环
            {
                cout<<"The num is out of range!"<<endl;
                flag = true;
            }
            else if(x>=90 && x<=100)
            {
                cout<<"优"<<endl;
            }
            else if(x >= 80 && x<90)
            {
                cout<<"良"<<endl;
            }
            else if(x >= 60 && x<80)
            {
                cout<<"中"<<endl;
            }
            else
                cout<<"差"<<endl;
        }
    }
    return 0;
}