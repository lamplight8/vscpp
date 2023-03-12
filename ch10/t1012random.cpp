//习题10-12 编写一个产生器，用来产生0~9范围内的随机数
//建立一个顺序容器，使用该产生器和generate算法为该容器的元素赋值
#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<ctime>
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

int main()
{
    vector<int> v(6);
    ostream_iterator<int> output(cout, " ");
    generate(v.begin(), v.end(), SrandNum());
    copy(v.begin(), v.end(), output);
    return 0;
}