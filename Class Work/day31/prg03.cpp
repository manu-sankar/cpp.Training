//Single inheritance

#include<iostream>
using namespace std;

class A
{
private:
	int x;
protected:
	int y;
	void proMethod()
	{
		cout << "\tA Protected method called" << endl;
	}
public:
	A()
	{
		cout << "\tConstructor A has called " << endl;
		x = 20;
		y = 20;
	}
	void disp()
	{
		cout << "\tHello from A" << endl;
		cout << "\tx = " << x << "\ty = " << y << endl;
	}

	
};

class B :public A
{
private:
	int a;
protected:
	int b;
public:
	B()
	{
		cout << "\tConstructor B has called" << endl;
		a = 11;
		b = 12;
	}
	void disp()
	{
		cout << "\tHello from B" << endl;
		cout << "\ta = " << a << "\tb = " << b << endl;
	}

	void protectB()
	{
		proMethod();
		//x = 10; => Error: Here x is private so we cannot access 
		y = 20;//Here y can be accessed bcz it is protected
	}
};


int main()
{
	A objA;
	B objB;

	objA.disp();
	objB.disp();
	//objB.proMethod() =>Cant access the methods declared in class A
	objB.protectB();
	return 0;
}