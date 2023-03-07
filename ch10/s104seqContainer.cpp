//例10-4 顺序容器的基本操作
#include <list>
#include <deque>
#include <iterator>
#include <iostream>
using namespace std;

template<class T>
void printContainer(const char* msg, const T& s)
{
    cout << msg << ": ";
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main(int argc, char* argv[])
{
    deque<int> s;
    int i;
    int x;
    for (i = 0; i < 10; i++) {
        cout<<"Please enter "<<i+1<<"th integer:";
        cin >> x;
        s.push_front(x);
    }
    printContainer("deque at first", s);

    // 用s容器的内容的逆序构造列表容器l
    list<int> l(s.rbegin(), s.rend());
    printContainer("list at first", l);

    // 将列表容器l的每相邻两个元素顺序颠倒
    list<int>::iterator iter = l.begin();
    int v;
    while (iter != l.end()) {
        v = *iter;
        iter = l.erase(iter);
        l.insert(++iter, v);
    }
    printContainer("list at last", l);

    // 用列表容器l的内容给s赋值，将s输出
    s.assign(l.begin(), l.end());
    printContainer("deque at last", s);

    return 0;
}