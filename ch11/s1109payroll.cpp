//例11-9 从一个payroll文件读一个二进制记录到一个结构中
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct SalaryInfo
{
    unsigned id;
    double salary;
};

int main()
{
    SalaryInfo employee1 = {600001, 8000};
    ofstream os("payroll", ios_base::out|ios_base::binary);
    os.write(reinterpret_cast<char*>(&employee1), sizeof(employee1));
    os.close();

    ifstream is("payroll", ios_base::in|ios_base::binary);
    if(is){
        SalaryInfo employee2;
        is.read(reinterpret_cast<char*>(&employee2), sizeof(employee2));
        cout<<employee2.id<<" "<<employee2.salary<<endl;
    }
    else{
        cout<<"ERROR: Cannot open file 'payroll'."<<endl;
    }
    is.close();
    return 0;
}