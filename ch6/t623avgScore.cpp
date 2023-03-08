/*
例6-23 设学生人数N=8，提示用户输入N个人的考试成绩，然后计算出他们的平均成绩并显示出来
*/
#include <iostream>
using namespace std;
double average(double* p, int n);

int main()
{
    const int N = 8;
    double score[N];
    int i;
    for (i = 0; i < N; i++)
    {
        cout << "Please enter the score of " << i + 1 << "th student:";
        cin >> score[i];
    }
    cout << "the average score is " << average(score, N) << endl;
 
    return 0;
}

double average(double* p, int n)
{
    int i;
    double sum = 0.0;
    for (i = 0; i < n; i++)
        sum += p[i];
    return sum / n;
}