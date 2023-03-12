//习题10-9 编写程序对比STL中的3个元素交换函数
//swap, iter_swap和swap_ranges对数组中的元素进行的交换操作
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cassert>
using namespace std;

int main()
{
    int a1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int a2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    vector<int> v1(a1, a1+sizeof(a1)/sizeof(int));
    vector<int> v2(a2, a2+sizeof(a2)/sizeof(int));
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    assert(v1.size()==v2.size());
    swap(v1, v2);
    cout<<"after exchange..."<<endl;
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    return 0;
}