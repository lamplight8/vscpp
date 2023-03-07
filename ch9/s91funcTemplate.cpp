#include <iostream>
using namespace std;

template<typename T>
void outputArray(const T* array, int count);

int main(int argc, char* argv[])
{
    const int A_COUNT = 8;
    const int B_COUNT = 8;
    const int C_COUNT = 20;
    int a[A_COUNT] = { 1,2,3,4,5,6,7,8 };
    double b[B_COUNT] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8 };
    char c[C_COUNT] = "Welcome to see you!";
    cout << "a array contains:" << endl;
    outputArray(a, A_COUNT);
    cout << "b array contains:" << endl;
    outputArray(b, B_COUNT);
    cout << "c array contains:" << endl;
    outputArray(c, C_COUNT);

    return 0;
}

template<typename T>
void outputArray(const T* array, int count)
{
    int i;
    for (i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}