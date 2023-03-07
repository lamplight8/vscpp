//习题2-33
//声明枚举类型Weekday，包括SUNDAY到SATURDAY七个元素
//在程序中声明Weekday类型的变量，对其赋值
//声明整型变量，看看能否对其赋Weekday类型的值

#include<iostream>
using namespace std;
int main()
{
    enum Weekday{SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    enum Weekday wd;
    wd = WEDNESDAY;
    cout<<(int)wd<<endl;
    return 0;
}