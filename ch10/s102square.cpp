//例10-2 从标准输入读入几个实数，分别将它们的平方输出
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
    double square(double x);
    transform(istream_iterator<double>(cin), istream_iterator<double>(),
        ostream_iterator<double>(cout, "\t"), square);
    cout << endl;

    return 0;
}

double square(double x)
{
    return x * x;
}