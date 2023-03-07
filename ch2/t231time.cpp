//习题2-31
//声明一个表示时间的结构体，可以精确表示年、月、日、小时、分、秒；
//提示用户输入年、月、日、小时、分、秒的值，然后完整地显示出来
#include<iostream>
using namespace std;
int main()
{
    struct time
    {
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
    };
    struct time t;
    
    cout<<"Please enter the time(year, month, day, hour, minute, second):";
    cin>>t.year>>t.month>>t.day>>t.hour>>t.minute>>t.second;
    cout<<t.year<<"."<<t.month<<"."<<t.day<<" "<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;

    return 0;
}