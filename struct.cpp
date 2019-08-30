#include <iostream>
using namespace std;
//成员函数里面可以直接使用成员变量
//C++里面的struct被看作一个新的作用域
struct A3
{
	int a;
	int b;
	char c;
	void printA()
	{
		printf("%d\n", a);
	}
	void printB();
};

void A3::printB()
{
	printf("%d\n", b);
}
int structtest()
{
	A3 test;
	test.a = 5;
	test.printA();
	test.b = 7;
	test.printB();
	return 0;
}