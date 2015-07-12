#include <iostream>

using namespace std;

// a class for function object
class multiple {
	int divisor;
public:
	multiple(const int d)
		: divisor(d) {}
	bool operator () (const int dividend) {
		return dividend%divisor==0;
	}
};

// a function for checking multiples
bool is_multiple(const int dividend)
{
	const int divisor=7;
	return dividend%divisor==0;
}

// a template function
template<class F>
void print_multiple(F comp)
{
	for(int i=0;i<100;++i)
		if(comp(i)) cout << i << ' ';
	cout << endl;
}

int main(void)
{
	// using function
	print_multiple(is_multiple);

	// using function object
	print_multiple(multiple(7)); 
	return 0;
}

