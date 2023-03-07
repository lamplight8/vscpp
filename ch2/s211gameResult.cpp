//设某次体育比赛的结果有4种可能：胜(WIN)、负(LOSE)、平局(TIE)、比赛取消(CANCEL)，编写程序顺序输出这4种情况
#include <iostream>
using namespace std;

int main()
{
    enum GameResult { WIN, LOSE, TIE, CANCEL };
    enum GameResult res;
    enum GameResult omit = CANCEL;
    int count;
    for (count = WIN; count <= CANCEL; count++)
    {
        res = GameResult(count);
        if (res == omit)
            cout << "The game was cancelled" << endl;
        else
        {
            cout << "The game was played";
            if (res == WIN)
                cout << "and we won!";
            if (res == LOSE)
                cout << "and we lost.";
            cout << endl;
        }
    }

	return 0;
}