//vector应用
#include <vector>
#include <iostream>
using namespace std;

double average(const vector<double>& arr);

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    vector<double>arr(n);
    cout << "Please input " << n << " real numbers:" << endl;
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Average=" << average(arr) << endl;
    return 0;
}

double average(const vector<double>& arr)
{
    double sum = 0;
    int i;
    for (i = 0; i < arr.size(); i++)
        sum += arr[i];
    return sum / arr.size();
}