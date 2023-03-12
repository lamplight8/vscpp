/*
习题12-4 设计一个异常抽象类Exception，在此基础上派生一个OutOfMemory类响应内存不足
一个RangeError类响应输入的数不在指定范围内，实现并测试这几个类
*/
#include<iostream>
using namespace std;

class Exception
{
public:
    virtual void show()=0;
};

class OutOfMemory: public Exception
{
public:
    OutOfMemory(){}
    ~OutOfMemory(){}
    virtual void show()
    {
        cout<<"Out of memory."<<endl;
    }
};

class RangeError: public Exception
{
private:
    int num;
public:
    RangeError(){}
    ~RangeError(){}
    RangeError(int n):num(n){}
    virtual void show()
    {
        cout<<"Exception: Range Error."<<endl;
    }
};

int main()
{
    try{
        int n;
        cout<<"Please enter n(1-100): ";
        cin>>n;
        if(n<1 || n>100)
            throw RangeError(n);
        cout<<"n: "<<n<<endl;
    }
    catch(Exception& e)
    {
        e.show();
    }

    try
    {
        bool flag;
        char ch;
        cout<<"Please enter the choice of memory(y/n): ";
        cin>>ch;
        if(ch == 'y' || ch == 'Y')
            cout<<"No memory exception."<<endl;
        else
            throw OutOfMemory();
    }
    catch(Exception& e)
    {
        e.show();
    }

    return 0;
}