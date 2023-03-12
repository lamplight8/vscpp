//习题10-13 编写一个二元函数对象，用来计算x的y次方，其中x和y都是整数
//利用该函数对象和transform算法，并结合适当的函数适配器
//对于10-12所生成的整数序列中的每个元素n, 分别输出5^n, n^7和n^n
#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<ctime>
#include<cmath>
using namespace std;

class SrandNum{
private:
    int x;
public:
    SrandNum();
    int operator()();
};

SrandNum::SrandNum()
:x(0)
{

}

int SrandNum::operator()()
{
    static unsigned int seq;//设置定增数，以保证每次种子不同
    srand((unsigned)time(NULL)+(++seq));
    return rand()%10;
}

template<class T>
class A:public binary_function<T, T, T>
{
public:
    T operator()(T x, T y) const
    {
        return pow(x, y);
    }
};

template<class T>
class B:public unary_function<T, T>
{
public:
    T operator()(T x) const
    {
        return pow(x, x);
    }
};

int main()
{
    vector<int> v(6);
    vector<int>::iterator it;
    ostream_iterator<int> output(cout, " ");
    generate(v.begin(), v.end(), SrandNum());
    copy(v.begin(), v.end(), output);
    cout<<endl;

    transform(v.begin(), v.end(), output, bind1st(A<int>(), 5));
    cout<<endl;

    transform(v.begin(), v.end(), output, bind2nd(A<int>(), 7));
    cout<<endl;

    transform(v.begin(), v.end(), output, B<int>());
    cout<<endl;

    return 0;
}