//习题10-8 编写一个程序，从键盘输入一个个单词后
//输出该单词是否曾经出现过以及出现次数
//可以尝试分别用多重集合(multiset)和映射(map)两种途径实现
//将二者进行比较
#include<iostream>
#include<set>
#include<cstring>
using namespace std;
 
int main()
{
    set<string> s1;
    multiset<string> s2;
    string word;
 
    //读入单词并统计其出现次数
    cout<<"Enter some words(Ctrl+Z to end):"<<endl;
    while(cin>>word)
    {
        s1.insert(word);
        s2.insert(word);
    }
    //输出结果
    cout<<"word\t\t"<<"times"<<endl;
    set<string>::iterator iter;
    for(iter=s1.begin(); iter!=s1.end(); ++iter)
    {
        cout<<(*iter)<<": "<<s2.count(*iter)<<endl;
    }
 
    return 0;
}