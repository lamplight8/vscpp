//习题9-19 初始化int类型数组
//data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
//         2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
//先使用任一种算法对其进行排序，然后提示用户输入一个数字
//应用本章的折半查找函数模板找出它的位置
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
    int i, j;
    int lastExchangeIndex;
    i = n - 1;
    while (i > 0) {
        lastExchangeIndex = 0;
        for (j = 0; j < i; j++)
            if (a[j + 1] < a[j]) {
                mySwap(a[j], a[j + 1]);
                lastExchangeIndex = j;
            }
        i = lastExchangeIndex;
    }
}

template<class T>
int binSearch(const T list[], int n, const T& key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == list[mid])
            return mid;
        else if (key < list[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    bubbleSort(data1, 20);

    int i;
    for(i=0; i<20; i++)
    {
        if(i<19)
            cout<<data1[i]<<", ";
        else
            cout<<data1[i]<<endl;
    }
    
    int value, index;
    cout<<"Please enter the value: ";
    cin>>value;
    index = binSearch(data1, 20, value);
    cout<<"The index of element '"<<value<<"' is : "<<index<<endl;
    return 0;
}