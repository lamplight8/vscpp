//习题4-14 定义一个Tree（树）类，有成员ages（树龄）
//成员函数grow(int years)对ages加上years，age()显示Tree对象的ages值

#include<iostream>
using namespace std;

class Tree
{
public:
    Tree(int a):ages(a){}
    void grow(int years);
    int age();
private:
    int ages;
};

void Tree::grow(int years)
{
    ages += years;
}

int Tree::age()
{
    return ages;
}

int main()
{
    int a;
    cout<<"Please enter the ages of tree:";
    cin>>a;
    Tree tr(a);
    cout<<"The ages of tree is "<<tr.age()<<endl;
    
    int g = 2;
    tr.grow(g);
    cout<<g<<" years later, the ages of tree is "<<tr.age()<<endl;
    return 0;
}