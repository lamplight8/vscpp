//习题10-8 编写一个程序，从键盘输入一个个单词后
//输出该单词是否曾经出现过以及出现次数
//可以尝试分别用多重集合(multiset)和映射(map)两种途径实现
//将二者进行比较
#include<iostream>
#include<map>
#include<cstring>
using namespace std;
 
int main()
{
    map<string , int> wordCount;
    string word;
 
    //读入单词并统计其出现次数
    cout<<"Enter some words(Ctrl+Z to end):"
        <<endl;
    while(cin>>word)
        ++wordCount[word];  //word的出现次数加1
 
    //输出结果
    cout<<"word\t\t"<<"times"<<endl;
    for(map<string, int>::iterator iter = wordCount.begin() ; iter != wordCount.end() ; ++iter)
        cout<<(*iter).first<<"\t\t"
            <<(*iter).second<<endl;
 
    return 0;
}