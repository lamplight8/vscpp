/*
6-26 编写一个矩阵转置的函数，矩阵的行数和列数在程序中由用户输入
*/

#include <iostream>
#include <cstring>
using namespace std;

class Matrix
{
public:
    Matrix();
    Matrix(int m1, int n1, int **a);
    Matrix(Matrix& obj);
    ~Matrix();
    Matrix transport();
    void show();
private:
    int m;
    int n;
    int **M;
};

Matrix::Matrix()
:m(0), n(0), M(nullptr)
{

}

Matrix::Matrix(int m1, int n1, int **a)
{
    int i,j;
    m = m1;
    n = n1;
    M = new int*[m];
    for(i=0; i<m; i++)
    {
        M[i] = new int[n];
    }
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            M[i][j]=a[i][j];
        }
    }
}

Matrix::Matrix(Matrix& obj)
{
    int i, j;
    m = obj.m;
    n = obj.n;
    M = new int*[m];
    for(i=0; i<m; i++)
        M[i] = new int[n];
    
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            M[i][j] = obj.M[i][j];
}

Matrix::~Matrix()
{
    int i;
    if(M)
    {
        for(i=0;i<m;i++)
            if(M[i])
                delete []M[i];
        delete []M; 
    }
}

Matrix Matrix::transport()
{
    int i, j;
    int m1 = n;
    int n1 = m;
    int **p = new int*[m1];
    for (i = 0; i < m1; i++)
        p[i] = new int[n1];
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
            p[i][j] = M[j][i];
    Matrix* p1 = new Matrix(m1, n1, p);
    return *p1;
}

void Matrix::show()
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }    
}

int main()
{
    int m, n;
    cout << "Please enter m and n: ";
    cin >> m >> n;
    int** A;
    int i, j;

    A = new int* [m];
    for (i = 0; i < m; i++)
        A[i] = new int[n];

    cout << "Please enter matrix A" << endl;
    for (i = 0; i < m; i++)
    {
        cout << "please the element of line " << i + 1 << ":";
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    }

    Matrix M1(m, n, A);
    M1.show();
    cout<<endl;
    M1.transport().show();
    return 0;
}