//例9-2  类模板应用（类模板要求声明和实现文件放在一起）
#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    float gpa;//平均分
public:
    Student();
    Student(int id, float gpa);
    int getId();
    float getGpa();
};

Student::Student()
{

}

Student::Student(int id, float gpa)
    :id(id), gpa(gpa)
{

}

int Student::getId()
{
    return id;
}

float Student::getGpa()
{
    return gpa;
}

template <class T>
class Store
{
private:
    T item;//存放任意类型数据
    bool haveValue;//数据存放标志
public:
    Store();
    Store(T item);
    T& getElem();
};

template<class T>
Store<T>::Store()
    :haveValue(false)
{

}

template<class T>
Store<T>::Store(T item)
    :item(item), haveValue(true)
{

}

template<class T>
T& Store<T>::getElem()
{
    return item;
}


int main()
{
    Store<int> s1(3);
    Store<int> s2(-7);
    cout << s1.getElem() << " " << s2.getElem() << endl;

    Student g(1000, 23);
    Store<Student> s3(g);
    cout << "The student id is " << s3.getElem().getId() << endl;

    return 0;
}