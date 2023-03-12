//习题9-10 初始化int类型数组
//data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
//         2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
//应用本章的直接插入排序函数模板进行排序
//对此函数模板稍做修改，加入输出语句
//在每插入一个待排序元素后显示整个数组
//观察排序过程中数据的变化，加深对插入排序算法的理解
#include<iostream>
using namespace std;

template<class T>
void insertionSort(T a[], int n)
{
    int i, j, k;
    T temp;
    //将下标为1~n-1的元素逐个插入到已排序序列中适当的位置
    for (i = 1; i < n; i++) {
        //从a[i-1]开始向a[0]方向扫描各元素，寻找适当位置插入a[i]
        j = i;
        temp = a[i];
        while (j > 0 && temp < a[j - 1]) {
            //逐个比较，直到temp>=a[j-1]时，j便是应插入的位置
            //若达到j==0，则0是应插入位置
            a[j] = a[j - 1];
            j--;
        }
        //插入位置已找到，立即插入
        a[j] = temp;

        //加入输出语句，观察排序过程
        cout<<"Turn "<<i<<": ";
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
    insertionSort(data1, size);
    return 0;
}