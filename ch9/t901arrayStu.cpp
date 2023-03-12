//习题9-1
//编写程序提示用户输入一个班级中的学生人数n
//再依次提示用户输入n个人在课程A中的考试成绩
//然后计算出平均成绩，显示出来
//请使用数组类模板Array定义浮点型数组存储考试成绩
#include<iostream>
#include <cassert>
using namespace std;

template<class T>
class Array
{
private:
    T* list;
    int size;
public:
    Array();
    Array(int sz);
    Array(const Array<T>& a);
    ~Array();
    Array<T>& operator=(const Array<T>& rhs);
    T& operator[](int i);
    const T& operator[](int i) const;
    operator T*();
    operator const T*() const;
    int getSize() const;
    void resize(int sz);
};

template<class T>
Array<T>::Array()
{
    list = NULL;
    size = 0;
}

template<class T>
Array<T>::Array(int sz)
{
    assert(sz >= 0);
    size = sz;
    list = new T[size];
}

template<class T>
Array<T>::~Array()
{
    if(list)
        delete[]list;
}

template<class T>
Array<T>::Array(const Array<T>& a)
{
    size = a.size;
    list = new T[size];
    int i;
    for(i = 0; i < size; i++)
        list[i] = a.list[i];
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
    int i;
    if(&rhs != this)
    {
        if(size != rhs.size)
        {
            delete []list;
            size = rhs.size;
            list = new T[size];
        }
        for (i = 0; i < size; i++)
            list[i] = rhs.list[i];
    }
    return *this;
}

template<class T>
T& Array<T>::operator[](int n)
{
    assert(n >= 0 && n < size);
    return list[n];
}

template<class T>
const T& Array<T>::operator[](int n) const
{
    assert(n >= 0 && n < size);
    return list[n];
}

template<class T>
Array<T>::operator T*()
{
    return list;
}

template<class T>
Array<T>::operator const T*() const
{
    return list;
}

template<class T>
int Array<T>::getSize() const
{
    return size;
}

template<class T>
void Array<T>::resize(int sz)
{
    assert(sz >= 0);
    if (sz == size)
        return;
    T* newList = new T[sz];
    int n = (sz < size) ? sz : size;
    int i;
    for (i = 0; i < n; i++)
        newList[i] = list[i];
    delete []list;
    list = newList;
    size = sz;
}

int main()
{
    int n;
    cout<<"Please enter the num of student n: ";
    cin>>n;
    Array<double> score(n);
    int i;
    double x;
    for(i=0; i<score.getSize(); i++)
    {
        cout<<"Please enter the "<<i+1<<"th student score: ";
        cin>>x;
        score[i] = x;
    }
    double sum = 0;
    for(i=0; i<score.getSize(); i++)
        sum += score[i];
    double avg = sum/score.getSize();
    cout<<avg<<endl;
    
    return 0;
}