//t513xyz.h
class X;
class Z;

class Y
{
public:
    Y();
    ~Y();
    void g(X* p);
};

class X
{
private:
    int i;
public:
    X();
    X(int i1);
    ~X();
    int geti();
    friend void Y::g(X* p);
    friend class Z;
    friend void h(X* p);
};

class Z
{
public:
    Z();
    ~Z();
    void f(X* p);
};

void Y::g(X* p)
{
    p->i++;
}

void Z::f(X* p)
{
    p->i += 5;
}

void h(X* p)
{
    p->i +=10;
}

Y::Y()
{

}

Y::~Y()
{

}

X::X()
:i(0)
{

}

X::X(int i1)
:i(i1)
{

}

X::~X()
{

}

Z::Z()
{

}

Z::~Z()
{

}

int X::geti()
{
    return i;
}