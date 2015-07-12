#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v;

	cout << "the size of v before insertion: ";
	cout << v.size() << endl;

	v.push_back(1);
	v.push_back(2);
	v.push_back(99);

	cout << "the size of v after insertion: ";
	cout << v.size() << endl;

	for(size_t i=0;i<v.size();++i)
		cout << v[i] << ' ';
	cout << endl;

	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}

