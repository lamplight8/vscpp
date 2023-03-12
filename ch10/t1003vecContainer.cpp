//习题10-3 建立一个向量容器的实例s，不断对s调用push_back向其中增加新的元素
//观察在此过程中s.capacity()的变化
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> s;
    bool flag = true;
    int x;
    while(flag)
    {
        cout<<"Please enter a integer: (0 exit)";
        cin>>x;
        if(x)
        {
            s.push_back(x);
            cout<<s.capacity()<<endl;//容器的动态存储容量
        }
        else
            flag = false;
    }
    return 0;
}