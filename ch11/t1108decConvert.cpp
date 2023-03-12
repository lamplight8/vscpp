/*
习题11-8 编写程序提示用户输入一个十进制整数，分别用十进制、八进制和十六进制形式输出
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter an integer: ";
    cin>>n;
    cout<<"Dec: "<<dec<<n<<endl;
    cout<<"Oct: "<<oct<<n<<endl;
    cout<<"Hex: "<<hex<<n<<endl;
    return 0;
}