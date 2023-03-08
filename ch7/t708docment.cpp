//习题7-8 定义一个Document类，有数据成员name，
//从Document派生出Book类, 增加数据成员pageCount
#include<iostream>
#include<cstring>
using namespace std;

class Document
{
private:
    string name;
public:
    Document()
    {

    }
    Document(string name)
    :name(name)
    {

    }
    void show()
    {
        cout<<name<<endl;
    }
};

class Book: public Document
{
private:
    int pageCount;
public:
    Book()
    {
        
    }
    Book(string name, int n)
    : Document(name), pageCount(n)
    {

    }
    void show()
    {
        Document::show();
        cout<<pageCount<<endl;
    }
};

int main()
{
    Book bk("C++ Programming.", 360);
    bk.show();
    return 0;
}