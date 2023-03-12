//例11-3  设置对齐方式
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double values[] = {1.23, 3.36, 63.7, 4538.24};
    string names[] = {"Zoot", "Jimmy", "Al", "Stan"};
    for(int i=0; i<4; i++)
        cout<<setiosflags(ios_base::left)<<setw(6)<<names[i]
            <<resetiosflags(ios_base::left)<<setw(10)<<values[i]<<endl;
    return 0;
}