//例9-15 折半查找函数模板
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