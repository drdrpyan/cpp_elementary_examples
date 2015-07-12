#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main(void)
{
	int a[]={2,5,1,2,5,9,8,7};
	const int n=sizeof(a)/sizeof(a[0]);
	vector<int> v(a,a+n);

	sort(a,a+n);
	copy(a,a+n,ostream_iterator<int>(cout," "));
	cout << endl;

	sort(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
	cout << endl;

	sort(a,a+n,greater<int>());
	copy(a,a+n,ostream_iterator<int>(cout," "));
	cout << endl;

	sort(v.begin(),v.end(),greater<int>());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
	cout << endl;

	return 0;
}

