#include <iostream>

using namespace std;

struct date {
	int d,m,y;
};

int the_day(date& dt)
{
	int accum[]={0,31,59,90,120,151,181,212,243,273,304,334};

	int days = (dt.y-1)*365 + (dt.y-1)/4 - 
		(dt.y-1)/100 + (dt.y-1)/400 + 
		accum[dt.m-1] + dt.d;
	return days % 7;
}

istream& operator >> (istream& is,date& dt)
{
	return is >> dt.d >> dt.m >> dt.y;
}

int main(void)
{
	char *week[] = { "SUN", "MON","TUE","WED","THR","FRI","SAT" };
	date dt;

	cin >> dt;
	int dw = the_day(dt);
	cout << week[dw] << endl;
	return 0;
}

