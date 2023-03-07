//例10-10 有5门课程，每门都有相应学分，从中选择3门，输出学分总和。
#include <map>
#include <cstring>
#include <utility>
#include <iostream>
using namespace std;

int main()
{
    map<string, int>courses;
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
        map<string, int>::iterator iter = courses.find(name); // 查找课程
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