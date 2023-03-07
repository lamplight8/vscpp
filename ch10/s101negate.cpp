//例10-1 从标准输入读入几个整数，存入向量容器，用STL输出它们的相反数
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main(int argc, char* argv[])
{
    const int N = 5;
    vector<int> s(N);
    int i;
    for (i = 0; i < N; i++)
        cin >> s[i];
    transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int>());
    cout << endl;

    return 0;
}