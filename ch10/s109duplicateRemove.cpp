//例10-9 输入一串实数，将重复的去掉，取最大和最小者的中值，分别输出小于或等于此中值和大于等于此中值的实数.
#include <set>
#include <iterator>
#include <utility>//定义了pair
#include <iostream>
using namespace std;

int main()
{
    set<double>s;
    double v;
    while (true)
    {
        cout<<"Please enter a real(0 exit):";
        cin >> v;
        if (v == 0)
            break; // 输入0表示结束

        // 尝试将v插入。如果v已存在，输出提示信息
        pair<set<double>::iterator, bool>r = s.insert(v);
        if (!r.second)
            cout << v << " is duplicated" << endl;
    }

    set<double>::iterator iter1 = s.begin(); // 得到第一个元素的迭代器
    set<double>::iterator iter2 = s.end(); // 得到末尾元素的迭代器
    double medium = (*iter1 + *(--iter2)) / 2; // 得到最小和最大元素的中值

    // 输出小于或等于中值的元素
    cout << "<=medium: ";
    copy(s.begin(), s.upper_bound(medium), ostream_iterator<double>(cout, " "));
    cout << endl;

    // 输出大于或等于中值的元素
    cout << ">=medium: ";
    copy(s.lower_bound(medium), s.end(), ostream_iterator<double>(cout, " "));
    cout << endl;

    return 0;
}