#include<iostream>
using namespace std;

void f()
{
	cout << "Hello ";
}

int main()
{
	2000 = []()
		{
			cout << "Hello World " << endl;
		};
	f();
	2000();
}