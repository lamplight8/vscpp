/*
ϰ��11-6 ����һ��Dog�࣬�������غ�����������Ա��������Ӧ�ĳ�Ա����
����һ��ʵ��dog1������Ϊ5������Ϊ10��ʹ��I/O����dog1��״̬д������ļ�
������һ��ʵ��dog2��ͨ�����ļ���dog1��״̬����dog2
�ֱ�ʹ���ı���ʽ�Ͷ����Ʒ�ʽ�����ļ�����������кβ�ͬ
�ٿ��������ļ���ASCII���кβ�ͬ
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
    cout<<"�������ļ���: ";
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