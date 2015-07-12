#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ROW            4
#define COL            3

typedef int cel_type;
typedef vector<cel_type> mat_type;

void print(mat_type m)
{
	for(int r=0;r<ROW;++r) {
		for(int c=0;c<COL;++c)
			cout << m[r*COL+c] << '\t';
		cout << endl;
	}
}

int main(void)
{
	int t[]={
		1, 2, 3,
		4, 5, 6,
		7, 8, 9,
		10,11,12,
	};
	const int num=sizeof(t)/sizeof(t[0]);
	mat_type m(t,t+num);

	print(m);
	return 0;
}
