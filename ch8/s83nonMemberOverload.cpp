//例8-3  非成员函数重载
#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double image;
public:
    Complex();
    Complex(double r, double i);
    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend ostream& operator<<(ostream& out, const Complex& c);
};

Complex::Complex()
{

}

Complex::Complex(double r, double i)
    :real(r), image(i)
{

}

Complex operator+(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real + c2.real, c1.image + c2.image);
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real - c2.real, c1.image - c2.image);
}

ostream& operator<<(ostream& out, const Complex& c)
{
    out << "(" << c.real << "," << c.image << ")";
    return out;
}

int main(int argc, char* argv[])
{
    Complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=" << c1 << endl;
    cout << "c2=" << c2 << endl;
    c3 = c1 - c2;
    cout << "c3=c1-c2=" << c3 << endl;
    c3 = c1 + c2;
    cout << "c3=c1+c2=" << c3 << endl;

    return 0;
}