#include <iostream>
using namespace std;

int main()
{
    float (*cp)[9][8] = new float[8][9][8];
    int i, j, k;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 9; j++)
            for (k = 0; k < 8; k++)
                *(*(*(cp + i) + j) + k) = static_cast<float>(i * 100 + j * 10 + k);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
                cout << cp[i][j][k] << " ";
            cout << endl;
        }
        cout << endl;
    }
    delete[]cp;

    return 0;
}