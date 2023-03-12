//习题10-11 下面的程序段首先构造了一个元素按升序排列的向量容器s
//然后试图调用unique算法去掉其中的重复元素，并将结果输出
//int arr[] = {1, 1, 4, 4, 5};
//vector<int> s(arr, arr+5);
//unique(s.begin(), s.end());
//copy(s.begin(), s.end(), ostream_iterator<int>(cout, "\n"));
//(1) 以上的输出结果是什么？是否真正达到了去除重复元素的目的？
//    如果未达到目的，应如何对程序进行修改？
//(2) 如果s是列表，是否有更方便高效的方法？
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 1, 4, 4, 5};
    vector<int> s(arr, arr+5);
    s.erase(unique(s.begin(), s.end()), s.end());
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, "\n"));

    return 0;
}