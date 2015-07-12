#include <iostream>

using namespace std;

void print(unsigned value,int base=10)
{
	char stack[1024];
	int top=0;

	do {
		unsigned  remain=value%base;
		stack[top++]=remain<10 ? ('0' + remain) : ('A' + remain - 10);
		value/=base;
	} while(value>0);
	while(top>0)
		cout << stack[--top];
}

int main(void)
{
	print(31,2);
	cout << endl;

	print(031,8);
	cout << endl;

	print(31);
	cout << endl;

	print(0xea,16);
	cout << endl;

	print(0,16);
	cout << endl;
	return 0;
}
