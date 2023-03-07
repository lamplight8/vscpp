//读入三个浮点数，将整数部分和小数部分分别输出
#include <iostream>
using namespace std;

int main()
{
    void  splitfloat(float x, int* intpart, float* fracpart);
    int i, n;
    float x, f;
    cout << "Enter three(3) floating point numbers" << endl;
    for (i = 0; i < 3; i++)
    {
        cin >> x;
        splitfloat(x, &n, &f); //变量地址做实参
        cout << "Integer Part is " << n << "   Fraction Part is " << f << endl;
    }

    return 0;
}

void  splitfloat(float x, int* intpart, float* fracpart)
{
    *intpart = int(x); // 取x的整数部分
    *fracpart = x - *intpart; //取x的小数部分
}