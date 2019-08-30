#include <iostream>
using namespace std;
class ct
{

	int a;//私有的成员只能通过成员函数来访问、修改
public:
	int b;
	char c;

	void changeA(int i)
	{
		a = i;
	}
	void printA()
	{
		printf("%d\n", a);
	}
	void printB();
};
void ct::printB()
{
	printf("%d\n", b);
}
int classtest()
{
	ct c;
	c.changeA(5);
	c.printA();
	return 0;
}