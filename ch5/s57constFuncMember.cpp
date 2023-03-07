//常成员函数。
#include <iostream>
using namespace std;
class R
{
private:
    int r1, r2;
public:
    R();
    R(int r11, int r21);
    void print();
    void print() const;
};

R::R()
{

}

R::R(int r11, int r21)
:r1(r11), r2(r21)
{

}

void R::print()
{
    cout << r1 << ":" << r2 << endl;
}

void R::print() const
{
    cout << r1 << ":" << r2 << endl;
}

int main()
{
    R a(5, 4);
    a.print();          //调用void print()
    const R b(20, 52);
    b.print();          //调用void print() const

    return 0;
}