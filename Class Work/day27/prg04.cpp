#include<iostream>
using namespace std;

class T
{
public:
	static int val;
public:
	T()
	{
		val++;
	}
	void disp()
	{
		cout << "Value of val " << val << endl;
	}
};


int T::val = 10;

int main()
{
	//T t1;
	//t1.disp();
	cout << T::val << endl;
	return 0;
}