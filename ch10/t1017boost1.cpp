/*
习题10-17 登陆Boost官方网站, 下载最新的Boost程序库, 阅读文档, 完成以下任务
(1) 修改例10-3, 将主函数中的静态数组a变为array<double, 5>类型的对象
    对与a相关的代码进行相应修改, 比较修改前后的程序
(2) 修改例10-17, 使用Bind程序库的bind代替bind2nd
(3) 用另一种方式修改例10-17,
    使用Lambda程序库的相关功能来生成判断一个数是否大于40的函数对象
(4) 改用unordered_map实现例10-10的功能
*/

#include <iterator>
#include <vector>
#include <iostream>
#include <boost/array.hpp>

using namespace std;

template<class T, class InputIterator, class OutputIterator>
void mySort(InputIterator first, InputIterator last, OutputIterator result)
{
    vector<T> s;
    for (; first != last; ++first)
        s.push_back(*first);
    sort(s.begin(), s.end());
    copy(s.begin(), s.end(), result);
}

int main(int argc, char* argv[])
{
    //(1) 修改例10-3，将主函数中的静态数组a变为array<double, 5>类型的对象
    boost::array<double, 5> a{ 1.2, 2.4, 0.8, 3.3, 3.2 };
    mySort<double>(a.begin(), a.end(), ostream_iterator<double>(cout, " "));
    cout << endl;
    cout<<"Please enter some integers separated by space:";
    mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(),
        ostream_iterator<int>(cout, " "));
    cout << endl;
    
    return 0;
}