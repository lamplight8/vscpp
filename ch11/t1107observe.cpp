//习题11-7 观察下面的程序，说明每条语句的作用，写出程序执行的结果
#include<iostream>
using namespace std;
int main()
{
    ios_base::fmtflags original_flags=cout.flags();
    cout<<812<<"|";
    cout.setf(ios_base::left, ios_base::adjustfield);
    cout.width(10);
    cout<<813<<815<<'\n';
    cout.unsetf(ios_base::adjustfield);
    cout.precision(2);
    cout.setf(ios_base::uppercase|ios_base::scientific);
    cout<<831.0;
    cout.flags(original_flags);
    return 0;
}