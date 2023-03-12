//例11-11 读一个文件并显示出其中0元素的位置
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("payroll", ios_base::in|ios_base::binary);
    int v;
    if(file){
        while (file)
        {
            streampos here = file.tellg();
            file.read(reinterpret_cast<char*>(&v), sizeof(int));
            if(file && v == 0)
                cout<<"Position "<<here<<" is 0"<<endl;
        }
    }
    else{
        cout<<"ERROR: Cannot open file 'integers'."<<endl;
    }
    file.close();
    return 0;
}