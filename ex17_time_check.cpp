#include <iostream>
#include <ctime>

using namespace std;

bool is_prime(int value)
{
	for(int i=2;i<value;++i)
		if(value%i==0) return false;
	return true;
}

int main(void)
{
	time_t t_start=time(NULL);
	for(int n=10000;n<100000;++n)
		is_prime(n);
	cout << "elapsed time = " << time(NULL)-t_start;
	cout << " second(s)" << endl;

	clock_t c_start=clock();
	for(int n=10000;n<100000;++n)
		is_prime(n);
	cout << "elapsed time = " << (clock()-c_start)/(CLOCKS_PER_SEC/1000);
	cout << " milli-second(s)" << endl;

	return 0;
}

