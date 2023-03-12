/*
习题11-6 定义一个Dog类，包含体重和年龄两个成员变量及相应的成员函数
声明一个实例dog1，体重为5，年龄为10，使用I/O流把dog1的状态写入磁盘文件
再声明一个实例dog2，通过读文件把dog1的状态赋给dog2
分别使用文本方式和二进制方式操作文件，看看结果有何不同
再看看磁盘文件的ASCII码有何不同
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<cassert>
using namespace std;

class Dog
{
private:
    int weight;
    int age;
public:
    Dog();
    ~Dog();
    Dog(int w, int a);
    Dog(const Dog& dog);
    int getWeight() const;
    int getAge() const;
};

Dog::Dog()
{

}

Dog::~Dog()
{

}

Dog::Dog(int w, int a)
:weight(w), age(a)
{

}

Dog::Dog(const Dog& dog)
:weight(dog.weight), age(dog.age)
{

}

int Dog::getWeight() const
{
    return weight;
}

int Dog::getAge() const
{
    return age;
}

int main()
{
    Dog dog1(5, 10);
    string filename;
    cout<<"请输入文件名: ";
    cin>>filename;
    ofstream file1(filename, ios_base::binary);
    file1.write(reinterpret_cast<char*>(&dog1), sizeof(dog1));
    file1.close();

    ifstream file2(filename, ios_base::binary);
    assert(file2);
    Dog dog2 = dog1;
    file2.read(reinterpret_cast<char*>(&dog2), sizeof(dog2));
    cout<<dog2.getWeight()<<", "<<dog2.getAge()<<endl;
    
    return 0;
}