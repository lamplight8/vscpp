/*
ϰ��12-5 ��ϰʹ��try, catch��䣬�ڳ�������new�����ڴ�ʱ
�������δ�ɹ�������try��䴥��һ��char�����쳣����catch��䲶����쳣
*/
#include <iostream>
using namespace std;

int main()
{
    int *p;
    try
    {
        p = new int[512];
        p = NULL;
        if(!p)
            throw "�ڴ�������!";
    }
    catch(const char* str)
    {
        cout <<"���쳣������"<< str << endl;
    }
    return 0;
}