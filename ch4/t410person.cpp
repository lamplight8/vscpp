/*
习题4-10设计一个用于人事管理的“人员”类。
由于考虑到通用性，这里只抽象出所有类型人员都具有的属性：编号、性别、出生日期、身份证号等。
其中“出生日期”声明为一个“日期”类内嵌子对象。
用成员函数实现对人员信息的录入和显示。
要求包括：构造函数和析构函数、赋值构造函数、带默认形参值的成员函数、类的组合。
*/
#include<iostream>
#include<cstring>
using namespace std;

class Date{
public:
    Date(){}
    Date(int y, int m, int d);
    Date(Date& obj);
    ~Date();
    void show();
private:
    int year;
    int month;
    int day;
};

Date::Date(int y,int m, int d)
:year(y), month(m), day(d)
{

}

Date::Date(Date& obj)
:year(obj.year), month(obj.month), day(obj.day)
{

}

Date::~Date()
{

}

void Date::show()
{
    cout<<year<<": "<<month<<": "<<day<<endl;
}

class Person{
public:
    Person(){}
    Person(int nm, bool gd, Date& bd, string& id1);
    Person(Person& obj);
    ~Person();
    void input();
    void show();
private:
    int num;
    bool gender;
    Date birthday;
    string id;
};

Person::Person(int nm, bool gd, Date& bd, string& id1)
:num(nm), gender(gd), birthday(bd), id(id1)
{

}

Person::Person(Person& obj)
:num(obj.num), gender(obj.gender), birthday(obj.birthday), id(obj.id)
{

}

Person::~Person()
{

}

void Person::input()
{
    int n;
    string sex;
    int y, m, d;
    string id1;

    cout<<"Please enter a num: ";
    cin>>n;
    cout<<"Please enter the sex(female/male):";
    cin>>sex;
    cout<<"Please enter the birthday(year month day):";
    cin>>y>>m>>d;
    cout<<"Please enter the id:";
    cin>>id1;

    num = n;
    if(sex=="female")
        gender = true;
    else
        gender = false;
    birthday = Date(y, m, d);
    id = id1;
}

void Person::show()
{
    cout<<"Num: "<<num<<endl;
    if(gender)
        cout<<"Gender: female"<<endl;
    else
        cout<<"Gender: male"<<endl;
    cout<<"Birthday: ";
    birthday.show();
    cout<<"ID: "<<id<<endl;
}

int main()
{
    Person p1;
    p1.input();
    p1.show();
    return 0;
}