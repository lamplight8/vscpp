//01_basic.cpp
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main()
{
	int n{ 42 };

	auto s1{ format("Read {} bytes from {}", n, "file1.txt") };
	auto s2{ format("Read {0} bytes from {1}", n, "file1.txt") };
	auto s3{ format("��{1}�ж�ȡ{0}���ֽڡ�", n, "file1.txt") };
	cout<<s3<<endl;
}
