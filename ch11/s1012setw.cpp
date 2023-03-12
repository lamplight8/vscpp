//例11-2 使用setw操作符指定宽度
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    double values[] = {1.23, 3.36, 63.7, 4538.24};
    string names[] = {"Zoot", "Jimmy", "Al", "Stan"};
    for(int i=0; i<4; i++)
        cout<<setw(6)<<names[i]<<setw(10)<<values[i]<<endl;
    return 0;
}