#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ofstream ofs;
	char buffer[1024];

	ofs.open("test.txt");
	if(!ofs.is_open()) {
		cerr << "file open error" << endl;
		return -1;
	}
	while( cin >> buffer ) {
		ofs << buffer << endl;
	}
	ofs.close();
	ofs.clear(); // call clear() to use ofs again.
	return 0;
}
