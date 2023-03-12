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
#include <boost/bind/bind.hpp>
using namespace std;
int main(int argc, char* argv[])
{
    //(2) 修改例10-17，使用Bind程序库的bind代替bind2nd
	int intArr[] = {30,90,10,40,70,50,20,80};
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> b(intArr, intArr + N);
	vector<int>::iterator p = find_if(b.begin(), b.end(), boost::bind(greater<int>(), boost::placeholders::_1, 40));
	if (p == b.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is:" << *p << endl;

    return 0;
}