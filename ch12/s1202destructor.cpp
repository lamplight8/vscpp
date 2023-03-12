//例12-2 使用带析构语义类的C++异常处理
#include<iostream>
#include<string>
using namespace std;

class MyException
{
private:
    string message;
public:
    MyException(const string &message)
    : message(message)
    {
    }
    ~MyException()
    {
    }
    const string &getMessage() const
    {
        return message;
    }    
};

class Demo
{
public:
    Demo()
    {
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor of Demo"<<endl;
    }
};

void func()
{
    Demo d;
    cout<<"Throw MyException in func()"<<endl;
    throw MyException("exception thrown by func()");
}

int main()
{
    cout<<"In main function"<<endl;
    try{
        func();
    }
    catch(MyException& e){
        cout<<"Caught an excepton: "<<e.getMessage()<<endl;
    }
    cout<<"Resume the execution of main()"<<endl;
    return 0;
}