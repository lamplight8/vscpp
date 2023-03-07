/*
习题10-17 登陆Boost官方网站, 下载最新的Boost程序库, 阅读文档, 完成以下任务
(1) 修改例10-3, 将主函数中的静态数组a变为array<double, 5>类型的对象
    对与a相关的代码进行相应修改, 比较修改前后的程序
(2) 修改例10-17, 使用Bind程序库的bind代替bind2nd
(3) 用另一种方式修改例10-17,
    使用Lambda程序库的相关功能来生成判断一个数是否大于40的函数对象
(4) 改用unordered_map实现例10-10的功能
*/

#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>
#include <functional>
#include <map>
#include <cstring>
#include <utility>

#include <boost/array.hpp>
#include <boost/bind/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/lambda/if.hpp>
#include <boost/unordered_map.hpp>

using namespace std;

/*
template<class T, class InputIterator, class OutputIterator>
void mySort(InputIterator first, InputIterator last, OutputIterator result)
{
    vector<T> s;
    for (; first != last; ++first)
        s.push_back(*first);
    sort(s.begin(), s.end());
    copy(s.begin(), s.end(), result);
}
*/

int main(int argc, char* argv[])
{
    /*
    //(1) 修改例10-3，将主函数中的静态数组a变为array<double, 5>类型的对象
    boost::array<double, 5> a{ 1.2, 2.4, 0.8, 3.3, 3.2 };
    mySort<double>(a.begin(), a.end(), ostream_iterator<double>(cout, " "));
    cout << endl;
    cout<<"Please enter some integers separated by space:";
    mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(),
        ostream_iterator<int>(cout, " "));
    cout << endl;
    

    //(2) 修改例10-17，使用Bind程序库的bind代替bind2nd
	int intArr[] = {30,90,10,40,70,50,20,80};
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> b(intArr, intArr + N);
	vector<int>::iterator p = find_if(b.begin(), b.end(), boost::bind(greater<int>(), boost::placeholders::_1, 40));
	if (p == b.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is:" << *p << endl;

    //(3) 用另一种方式修改例10-17，
    //    使用Lambda程序库的相关功能来生成判断一个数是否大于40的函数对象
	int intArr[] = {30,90,10,40,70,50,20,80};
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> b(intArr, intArr + N);
    vector<int>::iterator p = find_if(b.begin(), b.end(), boost::lambda::_1 > 40);
	if (p == b.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is:" << *p << endl;
    */

    //(4) 改用unordered_map实现例10-10的功能
    boost::unordered_map<string, int> courses;
    // 将课程信息插入courses映射中
    courses.insert(make_pair("CSAPP", 3));
    courses.insert(make_pair("C++", 2));
    courses.insert(make_pair("CSARCH", 4));
    courses.insert(make_pair("COMPILER", 4));
    courses.insert(make_pair("OS", 5));

    int n = 3; // 剩下的可选次数
    int sum = 0;  // 学分总和
    string name; // 课程名称
    while (n > 0)
    {
        cout<<"Please the course name:";
        cin >> name;
        boost::unordered_map<string, int>::iterator iter = courses.find(name); // 查找课程
        if (iter == courses.end()) // 判断是否找到
            cout << name << " is not available" << endl;
        else
        {
            sum += iter->second; // 累加学分
            courses.erase(iter); // 将刚选过的课程从映射中删除
            n--;
        }
    }
    cout << "Total credit: " << sum << endl;
    
    return 0;
}