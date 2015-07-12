#include <iostream>

using namespace std;

template<class T>
class mystring {
	char* ptr;
	int sz;
protected:
	static int strlen(const char* s) {
		int i;
		for(i=0;s[i];++i);
		return i;
	}
	static void strcpy(char* s1,const char* s2) { 
		for(int i=0;(s1[i]=s2[i]);++i); 
	}
public:
	mystring(void): ptr(0), sz(0) {}
	mystring(const char* s)
		: ptr(new char[strlen(s)+1]), sz(strlen(s)) { 
			strcpy(ptr,s); 
	}
	mystring(const mystring& s)
		: ptr(new char[strlen(s.ptr)+1]), sz(s.sz) { 
			strcpy(ptr,s.ptr); 
	}
	~mystring(void) {
		delete ptr; 
	}
	int length(void) const { 
		return sz; 
	}
	mystring& operator = (const mystring& s) {
		if(s.sz>sz) {
			delete ptr;
			ptr=new char[s.sz];
		}
		strcpy(ptr,s.ptr);
		sz=s.sz;
		return *this;
	}
	char operator[] (const int i) const { 
		return ptr[i]; 
	}
	char& operator[] (const int i) { 
		return ptr[i]; 
	}
	friend ostream& operator << (ostream& os,const mystring& s) {
		return os << s.ptr;
	}
};

template<class T>
class cmp {
public:
	static int eq(const T a,const T b) { return a==b; }
	static int lt(const T a,const T b) { return a<b; }
};

template<class T,class C>
int compare(const mystring<T>& s1,const mystring<T>& s2)
{
	for(int i=0;i<s1.length() && i<s2.length();++i)
		if(!C::eq(s1[i],s2[i]))
			return C::lt(s1[i],s2[i])?-1 : 1;
	return s1.length() - s2.length();
}

int comp_result(const mystring<char> s1,const mystring<char> s2)
{
	return compare<char,cmp<char> >(s1,s2);
}

int main(void)
{
	const mystring<char> s1("hello world.");
	mystring<char> s2("hello world.");
	mystring<char> s3("hellow orld.");

	s2=s1;

	s2[1]=s1[1];

	cout << s1 << endl;

	cout << comp_result(s1,s2) << endl;
	cout << comp_result(s2,s3) << endl;

	return 0;
}

