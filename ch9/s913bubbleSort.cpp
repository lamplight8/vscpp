//例9-13 起泡排序函数模板
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