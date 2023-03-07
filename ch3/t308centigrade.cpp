//习题3-8
//编写函数把华氏温度转换为摄氏温度，公式为
//    C=5/9*(F-32)
//在主程序中提示用户输入一个华氏温度，转化后输出相应的摄氏温度
#include<iostream>
using namespace std;
int main()
{
    float FahrenheitToCentigrade(float FahrenDegree);
    float fa;
    cout<<"Please enter a degree Fahrenheit:";
    cin>>fa;
    cout<<"the degree Centigrade is "<<FahrenheitToCentigrade(fa)<<endl;
    return 0;
}

float FahrenheitToCentigrade(float FahrenDegree)
{
    float C;
    C = (FahrenDegree-32)*5/9;
    return C;
}