#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ifstream ifs;
	char ch;

	ifs.open("main.cpp");
	if(!ifs.is_open()) {
		cerr << "file open error." << endl;
		return -1;
	}
	while(ifs.get(ch))
		cout << ch;
	ifs.close();
	ifs.clear();
}

