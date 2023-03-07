//例10-8 细胞分裂模拟
#include<iostream>
#include<queue>
#include<ctime>
#include<cstdlib>

using namespace std;

const int TIME_MIN = 500;
const int TIME_MAX = 2000;

class Cell;
priority_queue<Cell> cellQueue;

class Cell
{
private:
    static int cnt;
    int time;
    int id;
public:
    Cell(int birth)
    :id(cnt++)
    {
        time = birth + (rand() % (TIME_MAX - TIME_MIN)) + TIME_MIN;
    }
    int getID() const
    {
        return id;
    }
    int gettime() const
    {
        return time;
    }
    bool operator<(const Cell& s) const
    {
        return time > s.time;
    }
    void split() const
    {
        Cell s1(time), s2(time);
        cout << time << "s:Cell #" << id << " splits to #" << s1.getID() << " and #" << s2.getID() << endl;
        cellQueue.push(s1);
        cellQueue.push(s2);
    }
};

int Cell::cnt = 0;

int main()
{
    srand(static_cast<unsigned>(time(0)));
    int t;
    cout<<"Please enter the simlation time: ";
    cin >> t;
    cellQueue.push(Cell(0));
    while (cellQueue.top().gettime() < t)
    {
        cellQueue.top().split();
        cellQueue.pop();
    }
    return 0;
}