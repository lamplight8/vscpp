//习题4-12 定义一个DataType（数据类型）类，
//能处理包含字符型、整型、浮点型3种类型的数据，给出其构造函数。

#include<iostream>
using namespace std;

class DataType
{
public:
    DataType(char c1);
    DataType(int n1);
    DataType(float rl);
    ~DataType(){};
    char getChar();
    int getInt();
    float getFloat();
private:
    char ch;
    int num;
    float real;
};

DataType::DataType(char c1)
:ch(c1)
{

}

DataType::DataType(int n1)
:num(n1)
{

}

DataType::DataType(float r1)
:real(r1)
{

}

char DataType::getChar()
{
    return ch;
}

int DataType::getInt()
{
    return num;
}

float DataType::getFloat()
{
    return real;
}

int main()
{
   
    DataType charVar('a');
    DataType intVar(4);
    DataType floatVar(static_cast<float>(4.5));
    
    cout<<charVar.getChar()<<endl;
    cout<<intVar.getInt()<<endl;
    cout<<floatVar.getFloat()<<endl;
    return 0;
}