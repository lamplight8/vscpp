//习题9-12 初始化int类型数组
//data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
//         2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
//应用本章的直接选择排序函数模板进行排序
//对此函数模板稍做修改，加入输出语句
//每次从待排序序列中选择一个元素添加到已排序序列后，显示整个数组
//观察排序过程中数据的变化，加深对直接排序算法的理解
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
void selectionSort(T a[], int n)
{
    int i, j, k;
    int leastIndex;
    for (i = 0; i < n - 1; i++) {
        leastIndex = i;
        //在元素a[i+1..a[n-1]中逐个比较，找出最小值
        for (j = i + 1; j < n; j++)
            if (a[j] < a[leastIndex])//leastIndex始终记录当前找到的最小值的下标
                leastIndex = j;
        mySwap(a[i], a[leastIndex]);//将这一趟找到的最小元素与a[i]交换
        //加入输出语句，观察排序过程
        cout<<"Turn "<<i<<" : ";
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
    int size = sizeof(data1)/sizeof(data1[0]);
    selectionSort(data1, size);
    return 0;
}