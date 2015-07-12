#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string f(const int a,const int b,const int c) 
{
	ostringstream oss;
	oss << a << ' ';
	oss << b << ' ';
	oss << c;
	return oss.str();
}

int main(void)
{
	int a=1;
	int b=2;
	int c=3;

	cout << f(a,b,c) << endl;
	return 0;
}
