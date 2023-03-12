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
#include <map>
#include <cstring>
#include <boost/unordered_map.hpp>

using namespace std;

int main(int argc, char* argv[])
{
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