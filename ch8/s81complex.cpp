//例8-1  复数类运算符重载
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
    Complex(const Complex& obj);
    Complex operator +(const Complex& c2) const;
    Complex operator -(const Complex& c2) const;
    void display() const;
};

Complex::Complex()
    :real(0), image(0)
{

}

Complex::Complex(double r, double i)
    : real(r), image(i)
{

}

Complex::Complex(const Complex& obj)
    : real(obj.real), image(obj.image)
{

}

Complex Complex::operator +(const Complex& c2) const
{
    return Complex(real + c2.real, image + c2.real);
}

Complex Complex::operator -(const Complex& c2) const
{
    return Complex(real - c2.real, image - c2.real);
}

void Complex::display() const
{
    cout << "(" << real << "," << image << ")" << endl;
}

int main()
{
    Complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=";
    c1.display();
    cout << "c2=";
    c2.display();
    c3 = c1 - c2;
    cout << "c3=c1-c2=";
    c3.display();
    c3 = c1 + c2;
    cout << "c3=c1+c2=";
    c3.display();

    return 0;
}