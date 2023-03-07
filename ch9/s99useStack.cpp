//例9-9 栈的应用。一个简单的整数计算器
#include <cassert>
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

template<class T, int SIZE = 50>
class Stack {
private:
    T list[SIZE];
    int top;
public:
    Stack();
    void push(const T& item);
    T pop();
    void clear();
    const T& peek() const;//访问栈顶元素
    bool isEmpty() const;
    bool isFull() const;
};

template<class T, int SIZE>
Stack<T, SIZE>::Stack()
    :top(-1)
{

}

template<class T, int SIZE>
void Stack<T, SIZE>::push(const T& item)
{
    assert(!isFull());
    list[++top] = item;
}

template<class T, int SIZE>
T Stack<T, SIZE>::pop()
{
    assert(!isEmpty());
    return list[top--];
}

template<class T, int SIZE>
void Stack<T, SIZE>::clear()
{
    top = -1;
}

template<class T, int SIZE>
const T& Stack<T, SIZE>::peek() const
{
    assert(!isEmpty());
    return list[top];
}

template<class T, int SIZE>
bool Stack<T, SIZE>::isEmpty() const
{
    return top == -1;
}

template<class T, int SIZE>
bool Stack<T, SIZE>::isFull() const
{
    return top == SIZE - 1;
}

class Calculator {
private:
    Stack<double> s;
    void enter(double num);//操作数压栈

    //连续将两个操作数退栈，放在opnd1和opnd2中
    bool getTwoOperands(double& opnd1, double& opnd2);
    void compute(char op);//知行由操作符op指定的运算
public:
    void run();
    void clear();
};

void Calculator::enter(double num)
{
    s.push(num);
}

bool Calculator::getTwoOperands(double& opnd1, double& opnd2)
{
    if (s.isEmpty()) {
        cerr << "Missing operand!" << endl;
        return false;
    }
    opnd1 = s.pop();
    if (s.isEmpty()) {
        cerr << "Missing operand!" << endl;
        return false;
    }
    opnd2 = s.pop();
    return true;
}

void Calculator::compute(char op)
{
    double operand1, operand2;
    bool result = getTwoOperands(operand1, operand2);
    if (result) {
        switch (op) {
        case '+':
            s.push(operand2 + operand1);
            break;
        case '-':
            s.push(operand2 - operand1);
            break;
        case '*':
            s.push(operand2 * operand1);
            break;
        case '/':
            if (operand1 == 0) {
                cerr << "Divided by 0!" << endl;
                s.clear();
            }
            else
                s.push(operand2 / operand1);
            break;
        case '^':
            s.push(pow(operand2, operand1));
            break;
        default:
            cerr << "Unrecognized operator!" << endl;
            break;
        }
        cout << "=" << s.peek() << " ";
    }
    else
        s.clear();
}

inline double stringTodouble(const string& str)
{
    istringstream stream(str);
    double result;
    stream >> result;
    return result;
}

void Calculator::run()
{
    string str;
    while (cin >> str, str != "q") {
        switch (str[0]) {
        case 'c':
            s.clear();
            break;
        case '-':
            if (str.size() > 1)
                enter(stringTodouble(str));
            else
                compute(str[0]);
            break;
        case '+':
        case '*':
        case '/':
        case '^':
            compute(str[0]);
            break;
        default:
            enter(stringTodouble(str));
            break;
        }
    }
}

void Calculator::clear()
{
    s.clear();
}

int main(int argc, char* argv[])
{
    Calculator c;
    c.run();

    return 0;
}