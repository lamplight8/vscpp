//习题10-5 约瑟夫问题：n个骑士编号1, 2, ..., n, 围坐在圆桌旁
//编号为1的骑士从1开始报数，报到m的骑士出列，然后下一个位置再从1开始报数
//找出最后留在圆桌旁的骑士编号
//(1) 编写一个函数模板。以一种顺序容器的类型作为模板参数
//    在模板中使用指定类型的顺序容器求解约瑟夫问题，m, n是该函数模板的形参
//(2) 分别以vector<int>, deque<int>, list<int>作为类型参数调用该函数模板
//    调用时将n设为较大的数，将m设为较小的数(例如令n=10000, m=5)
//    观察3种情况下的调用该函数模板所需花费的时间
#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

const int M=5;//报到的数
const int N=100;//总人数

template<class T>
T Josephus(vector<T>& a, int m)
{
    int c=-1;
    while(a.size()>1)
    {
        c=(c+m)%a.size();
        cout<<a[c]<<", ";
        a.erase(a.begin()+c);
        c--;
    }
    cout<<endl;
    return a[0];
}

template<class T>
T Josephus(queue<T>& a, int m)
{
    int c=1;
    while(a.size()>1)
    {
        if(m!=c)
        {
            c++;
            a.push(a.front()); 
            a.pop();
        }
        else
        {
            cout<<a.front()<<", ";
            a.pop();
            c = 1;
        }
    }
    cout<<endl;
    return a.front();
}

template <class T>
T Josephus(list<T>& a, int m)
{
    int c=0;
    typename list<T>::iterator it, now;
    it=a.begin();
    while(a.size()>1)
    {
        c++;
        now = it;
        if(++it==a.end())
            it = a.begin();
        if(m==c)
        {
            cout<<*now<<", ";
            a.erase(now);
            c=0;
        }
    }
    cout<<endl;
    return a.front();
}

int main()
{
    int i;
    int last;
    
    vector<int> v1;
    for(i=0; i<N; i++)
        v1.push_back(i);

    last = Josephus(v1, M);
    cout<<"The last num is "<<last<<endl;

    queue<int> v2;
    for(i=0; i<N; i++)
        v2.push(i);

    last = Josephus(v2, M);
    cout<<"The last num is "<<last<<endl;

    list<int> v3;
    for(i=0; i<N; i++)
        v3.push_back(i);

    last = Josephus(v3, M);
    cout<<"The last num is "<<last<<endl;

    return 0;
}