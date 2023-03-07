//习题2-34
//口袋中有红、黄、蓝、白、黑5种颜色的球若干
//每次从口袋中取出3个不同颜色的球，问有多少种取法?
#include<iostream>
using namespace std;
int main()
{
    enum color{red, yellow, blue, white, black};
    color color1;
    int i, j, k, loop;
    int flag = 0; //计数器
    for (i = red; i <= black; i++)
    {
        for (j = red; j <= i; j++)
        {
            for (k = red; k <= j; k++)
            {
                if (i != j && i != k && j != k)
                {
                    flag++;
                    for (loop = 1; loop <= 3; loop++)
                    {
                        switch (loop)
                        {
                        case 1:
                            color1 = color(i);
                            break;
                        case 2:
                            color1 = color(j);
                            break;
                        case 3:
                            color1 = color(k);
                            break;
                        default:
                            break;
                        }
                        switch (color1)
                        {
                        case red:
                            cout << "red"<< ",";
                            break;
                        case yellow:
                            cout << "yellow"<< ",";
                            break;
                        case blue:
                            cout << "blue"<< ",";
                            break;
                        case white:
                            cout << "white"<< ",";
                            break;
                        case black:
                            cout << "black"<< ",";
                            break;
                        default:
                            break;
                        }
                    }
                    cout << endl;
                }
            }
        }
    }
    cout << endl;
    cout << "total: " << flag << endl;
    return 0;
}