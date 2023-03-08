/*
习题4-20 定义一个复数类Complex，使得下面的代码能够工作。
Complex c1(3, 5);//用复数3+5i初始化c1
Complex c2=4.5;//用实数4.5初始化c2
c1.add(c2);//将c1与c2相加，结果保存在c1中
c1.show();//将c1输出（这时的结果应该是7.5+5i）
*/
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
    Complex(double r);
    Complex(const Complex& obj);
    Complex add(const Complex& c2);
    void show();
};

Complex::Complex()
:real(0), image(0)
{

}

Complex::Complex(double r, double i)
: real(r), image(i)
{

}

Complex::Complex(double r)
: real(r), image(0)
{

}

Complex::Complex(const Complex& obj)
: real(obj.real), image(obj.image)
{

}

Complex Complex::add(const Complex& c2)
{
    real = real + c2.real;
    image = image + c2.image;
    return *this;
}

void Complex::show()
{
    std::cout << real << "+" << image << " i" << std::endl;
}

int main()
{
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.add(c2);
    c1.show();

	return 0;
}