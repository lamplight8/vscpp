//string类应用举例
#include <string>
#include <iostream>
using namespace std;

int main()
{
    void test(const char* title, bool value);
    string s1 = "EDF";
    cout << "s1 is " << s1 << endl;
    string s2;
    cout << "Please enter s2:";
    cin >> s2;
    cout << "length of s2:" << s2.length() << endl;

    test("s1<=\"ABC\"", s1 <= "ABC");
    test("\"def\"<=s1", "DEF" <= s1);
    s2 += s1;
    cout << "s2=s2+s1:" << s2 << endl;
    cout << "length of s2:" << s2.length() << endl;

    return 0;
}

void test(const char* title, bool value)
{
    cout << title << " returns " << (value ? "true" : "false") << endl;
}