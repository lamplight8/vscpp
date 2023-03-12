//习题10-7 分别对stack<int>, queue<int>, priority_queue<int>的实例执行下面的操作:
//调用push函数分别将5, 1, 4, 6压入;
//调用两次pop函数;
//调用push函数分别将2, 3压入;
//调用两次pop函数。
//请问对于三类容器适配器，每次调用pop函数时弹出的元素分别是什么?
//请编写程序验证自己的判断
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    //使用堆栈
    stack<int> s1;
    s1.push(5);
    s1.push(1);
    s1.push(4);
    s1.push(6);
    cout<<s1.top()<<", ";
    s1.pop();
    cout<<s1.top()<<", ";
    s1.pop();
    
    s1.push(2);
    s1.push(3);
    cout<<s1.top()<<", ";
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();

    //使用队列
    queue<int> s2;
    s2.push(5);
    s2.push(1);
    s2.push(4);
    s2.push(6);
    cout<<s2.front()<<", ";
    s2.pop();
    cout<<s2.front()<<", ";
    s2.pop();
    
    s2.push(2);
    s2.push(3);
    cout<<s2.front()<<", ";
    s2.pop();
    cout<<s2.front()<<endl;
    s2.pop();

    //使用优先对列
    priority_queue<int> s3;
    s3.push(5);
    s3.push(1);
    s3.push(4);
    s3.push(6);
    cout<<s3.top()<<", ";
    s3.pop();
    cout<<s3.top()<<", ";
    s3.pop();
    
    s3.push(2);
    s3.push(3);
    cout<<s3.top()<<", ";
    s3.pop();
    cout<<s3.top()<<endl;
    s3.pop();

    return 0;
}