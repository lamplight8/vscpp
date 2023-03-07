//例9-4  Array类的应用
#include <iostream>
#include <iomanip>
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
    operator T* ();
    operator const T* () const;
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
    if (list)
        delete[]list;
}

template<class T>
Array<T>::Array(const Array<T>& a)
{
    size = a.size;
    list = new T[size];
    int i;
    for (i = 0; i < size; i++)
        list[i] = a.list[i];
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
    int i;
    if (&rhs != this)
    {
        if (size != rhs.size)
        {
            delete[]list;
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
Array<T>::operator T* ()
{
    return list;
}

template<class T>
Array<T>::operator const T* () const
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
    delete[]list;
    list = newList;
    size = sz;
}

int main()
{
    Array<int> b(10);
    int count = 0;
    int n;
    cout << "Enter a value>=2 as upper limit for prime numbers:";
    cin >> n;
    int i, j;
    bool isPrime;
    for (i = 2; i <= n; i++)
    {
        isPrime = true;
        for (j = 0; j < count; j++)
        {
            if (i % b[j] == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            if (count == b.getSize())
                b.resize(count * 2);
            b[count++] = i;
        }
    }
    for (i = 0; i < count; i++)
        cout << setw(8) << b[i];
    cout << endl;

    return 0;
}