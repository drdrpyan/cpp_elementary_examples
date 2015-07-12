#include <iostream>

using namespace std;

#define ROW            4
#define COL            3

typedef int cel_type;
typedef cel_type mat_type[ROW][COL];

void print(mat_type m)
{
	for(int r=0;r<ROW;++r) {
		for(int c=0;c<COL;++c)
			cout << m[r][c] << '\t';
		cout << endl;
	}
}

int main(void)
{
	mat_type m={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10,11,12},
	};
	print(m);
	return 0;
}

