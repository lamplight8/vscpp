/*投骰子的随机游戏。
游戏规则是: 每个骰子有6面, 点数分别为1, 2, 3, 4, 5, 6
游戏者在程序开始时输入一个无符号整数, 作为产生随机数的种子
每轮投两次骰子, 第一轮如果和数为7或11则为胜,游戏结束;
和数为2, 3或12则为负, 游戏结束;
和数为其他值则将此值作为自己的点数, 继续第二轮、第三轮…
直到某轮的和数等于点数则取胜, 若在此前出现和数为7则负
由rollDice函数负责模拟投骰子、计算和数并输出和数
*/
#include <iostream>
#include <cstdlib>
using namespace std;

enum GameStatus{WIN, LOSE, PLAYING};

int main()
{
	int rollDice();
	int sum, myPoint;
	GameStatus status;

	unsigned seed;
	cout << "Please enter an unsigned integer:";
	cin >> seed;
	srand(seed);

	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		status = WIN;
		break;
	case 2:
	case 3:
	case 12:
		status = LOSE;
		break;
	default:
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (status==PLAYING)
	{
		sum = rollDice();
		if (sum == myPoint)
			status = WIN;
		else if (sum == 7)
			status = LOSE;
	}

	if (status == WIN)
		cout << "player wins" << endl;
	else
		cout << "player loses" << endl;

	return 0;
}


int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "player rolled " << die1 << "+" << die2 << "=" << sum << endl;
	return sum;
}