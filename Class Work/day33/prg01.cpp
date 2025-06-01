#include<iostream>
using namespace std;

class B{
public:
	void printB()
	{
		cout << "Print B" << endl;
	}
	virtual void disp()
	{
		cout << "B" << endl;
	}
};

class D :public B
{
public:
	void printD()
	{
		cout << "Print D" << endl;
	}
	void disp()
	{
		cout << "D" << endl;
	}
};


int main()
{
	D d;
	B b;
	d.printD();
	d.disp();

	B* ptr = new B;
	ptr = &b;
	ptr->printB();
	ptr->disp();


	D* ptr1 = new D;
	ptr1 = &d;
	ptr1->printD();
	ptr1->disp();
}