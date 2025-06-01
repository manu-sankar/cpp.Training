#include<iostream>
using namespace std;

template<class T1, class T2>

class Calculator
{
private:
	T1 data1;
	T2 data2;
public:
	Calculator(T1 val1, T2 val2):data1(val1),data2(val2){}
	void add(T1 data1,T2 data2)
	{
		cout << data1 << " + " << data2 << " = " << data1 + data2 << endl;
	}

	void sub(T1 data1,T2 data2)
	{
		cout << data1 << " - " << data2 << " = " << data1 - data2 << endl;
	}

	void mul(T1 data1, T2 data2)
	{
		cout << data1 << " * " << data2 << " = " << data1 * data2 << endl;

	}

	void div(T1 data1, T2 data2)
	{
		if (data2 == 0)
		{
			cout << "Undefined";
		}
		else
		{
			cout << data1 << " / " << data2 << " = " << data1 / data2 << endl;
		}
	}
	
};



int main()
{
	Calculator<int, int> Cobj(10, 5);
	Cobj.add(10,5);
	Cobj.sub(10, 5);
	Cobj.mul(5, 5);
	Cobj.div(10, 5);

	return 0;
}