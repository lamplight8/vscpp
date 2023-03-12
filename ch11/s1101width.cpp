//例11-1  使用width函数控制输出宽度
#include<iostream>
using namespace std;

int main()
{
    double values[] = {1.23, 3.36, 63.7, 4538.24};
    for(int i = 0; i<4; i++){
        cout.width(10);
        cout<<values[i]<<endl;
    }
    return 0;
}