//使用数组名作为函数参数
#include<iostream>
using namespace std;

int main()
{
    void rowSum(int a[][4], int nRow);
    int table[3][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6} };
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }
    rowSum(table, 3);
    for (i = 0; i < 3; i++)
        cout << "Sum of row " << i << " is " << table[i][0] << endl;

    return 0;
}

void rowSum(int a[][4], int nRow)
{
    int i, j;
    for (i = 0; i < nRow; i++)
        for (j = 1; j < 4; j++)
            a[i][0] += a[i][j];
}