#include<iostream>
using namespace std;

class A
{
protected:
	int a;
	void dispAprt()
	{
		cout << "A: method protected";
	}
public:
	A()
	{
		a = 10;
	}
	void dispA()
	{
		cout << "A: a" << a << endl;
	}
};

class B : private A
{
public:
	void dispB()
	{
		a = 20;
		dispAprt();
		dispA();
	}
};


int main()
{
	B objB;
	objB.dispB();
	// objB.dispAPrt();  // Here this will give error when class B: private A is given
}