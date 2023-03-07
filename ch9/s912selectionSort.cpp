//例9-12 直接选择排序函数模板
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
    int i, j;
    int leastIndex;
    for (i = 0; i < n - 1; i++) {
        leastIndex = i;
        //在元素a[i+1..a[n-1]中逐个比较，找出最小值
        for (j = i + 1; j < n; j++)
            if (a[j] < a[leastIndex])//leastIndex始终记录当前找到的最小值的下标
                leastIndex = j;
        mySwap(a[i], a[leastIndex]);//将这一趟找到的最小元素与a[i]交换
    }
}