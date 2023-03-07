//例9-14 顺序查找函数模板
template<class T>
int seqSearch(const T list[], int n, const T& key)
{
    int i;
    for (i = 0; i < n; i++)
        if (list[i] == key)
            return i;
    return -1;
}