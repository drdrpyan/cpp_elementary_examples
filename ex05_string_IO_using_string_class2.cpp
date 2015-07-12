#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string buffer;

	while( cin >> buffer && buffer!="quit")
		cout << buffer << endl;
	return 0;
}

