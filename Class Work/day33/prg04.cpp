#include<iostream>
using namespace std;

template <class T>

void myswap(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;
}

int main()
{
	int a = 10, b = 20;

	float x = 55.3, y = 33.9;
	
	cout << "a = " << a << "\tb = " << b << endl;
	myswap(a, b);
	cout << "a = " << a << "\tb = " << b << endl;

	cout << "x = " << x << "\ty = " << y << endl;
	myswap(x, y);
	cout << "x = " << x << "\ty = " << y << endl;

}