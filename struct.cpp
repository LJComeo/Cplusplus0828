#include <iostream>
using namespace std;
//��Ա�����������ֱ��ʹ�ó�Ա����
//C++�����struct������һ���µ�������
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