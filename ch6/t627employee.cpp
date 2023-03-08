/*
6-27 定义一个Employee类，其中包括表示姓名、地址、城市和邮编等属性，
包括setName()和display()等函数。
display()使用cout语句显示姓名、地址、城市和邮编等属性，
函数setName()改变对象的姓名属性，实现并测试这个类。
*/
#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
public:
    Employee();
    Employee(string& nm, string& ad, string& ct, string& pc);
    Employee(Employee& obj);
    ~Employee();
    void setName(string& nm);
    void display() const;
private:
    string name;
    string address;
    string city;
    string postcode;
};

Employee::Employee()
{

}

Employee::Employee(string& nm, string& ad, string& ct, string& pc)
:name(nm), address(ad), city(ct), postcode(pc)
{

}

Employee::Employee(Employee& obj)
:name(obj.name),
address(obj.address),
city(obj.city),
postcode(obj.postcode)
{

}

Employee::~Employee()
{

}

void Employee::setName(string& nm)
{
    name = nm;
}

void Employee::display() const
{
    cout<<"name: "<<name<<endl;
    cout<<"address: "<<address<<endl;
    cout<<"city: "<<city<<endl;
    cout<<"postcode: "<<postcode<<endl;
}

int main()
{
    string nm = "Zhanglei";
    string ad = "180 Wenhuaxi Road";
    string ct = "Weihai";
    string pc = "264200";
    Employee e1(nm, ad, ct, pc);
    e1.display();
    cout<<endl;
    string nm1 = "Wangyuan";
    e1.setName(nm1);
    e1.display();
    return 0;
}