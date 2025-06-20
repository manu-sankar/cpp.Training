#include<iostream>

using namespace std;

void f()
{
	cout << "Hello ";
}

int main()
{
	auto greet = []()
		{
			cout << "Hello World " << endl;
			f();

		};
	greet();
	return 0;
}