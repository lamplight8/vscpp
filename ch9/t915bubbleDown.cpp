//习题9-15 请编写降序的起泡排序函数模板
//然后在程序中初始化int类型数组
//data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
//         2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
//应用降序的起泡排序函数模板进行排序，加入输出语句
//每完成一趟起泡排序后显示整个数组，观察排序过程中数据的变化
#include<iostream>
using namespace std;

template<class T>
void mySwap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

template<class T>
void bubbleSort(T a[], int n)
{
    int i, j, k, count=0;
    int lastExchangeIndex;
    i = n - 1;
    while (i > 0) {
        lastExchangeIndex = 0;
        for (j = 0; j < i; j++)
            if (a[j] < a[j + 1]) {
                mySwap(a[j], a[j + 1]);
                lastExchangeIndex = j;
            }
        i = lastExchangeIndex;

        //加入输出语句，观察排序过程
        count++;
        cout<<"Turn "<<count<<" : ";
        for(k=0; k<n; k++)
        {
            if(k<n-1)
                cout<<a[k]<<", ";
            else
                cout<<a[k]<<endl;
        }
    }
}

int main()
{
    int data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    bubbleSort(data1, 20);
    return 0;
}