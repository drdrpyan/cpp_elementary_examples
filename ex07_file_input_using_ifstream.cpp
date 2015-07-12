include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ifstream ifs;
	char buffer[1024];

	ifs.open("main.cpp");
	if(!ifs.is_open()) {
		cerr << "file open error" << endl;
		return -1;
	}
	while( ifs >> buffer ) {
		cout << buffer << endl;
	}
	ifs.close();
	ifs.clear(); // call clear() to use ifs again.
	return 0;
}
