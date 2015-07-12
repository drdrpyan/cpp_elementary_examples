#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ROW            4
#define COL            3

typedef int cel_type;
typedef vector<cel_type> row_type;
typedef vector<row_type> mat_type;

void print(mat_type m)
{
	for(size_t r=0;r<m.size();++r) {
		for(size_t c=0;c<m[r].size();++c)
			cout << m[r][c] << '\t';
		cout << endl;
	}
}

int main(void)
{
	int t[ROW][COL]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10,11,12}
	};
	mat_type m;

	// first pattern
	m.resize(ROW);
	for(int r=0;r<ROW;++r) {
		m[r].resize(COL);
		for(int c=0;c<COL;++c)
			m[r][c]=t[r][c];
	}

	// second pattern
	//m.resize(ROW);
	//for(int r=0;r<ROW;++r)
	//	for(int c=0;c<COL;++c)
	//		m[r].push_back(t[r][c]);

	// first pattern
	//m.resize(ROW);
	//for(int r=0;r<ROW;++r)
	//	m[r].insert(m[r].end(),t[r],t[r]+COL);

	print(m);
	return 0;
}

