//寻找并输出11~999之间的数m，它满足m，m2，和m3均为回文数。
#include <iostream>
using namespace std;

int main()
{
    bool symm(unsigned n);
    unsigned int m;
    for(m=11; m<1000; m++)
        if (symm(m) && symm(m * m) && symm(m * m * m))
        {
            cout << "m=" << m;
            cout << " m*m=" << m * m;
            cout << " m*m*m=" << m * m * m << endl;
        }
	return 0;
}

bool symm(unsigned n)
{
    unsigned i {n};
    unsigned m {};
    while (i > 0)
    {
        m = m * 10 + i % 10;
        i /= 10;
    }
    return m == n;
}