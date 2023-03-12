//习题9-17 初始化int类型数组
//data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
//         2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
//提示用户输入一个数字，应用本章的顺序查找函数模板找出它的位置
#include<iostream>
using namespace std;

template<class T>
int seqSearch(const T list[], int n, const T& key)
{
    int i;
    for (i = 0; i < n; i++)
        if (list[i] == key)
            return i;
    return -1;
}

int main()
{
    int data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int value, index;
    cout<<"Please enter the value: ";
    cin>>value;
    index = seqSearch(data1, 20, value);
    cout<<"The index of element '"<<value<<"' is : "<<index<<endl;
    return 0;
}