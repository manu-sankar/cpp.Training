#include<iostream>
using namespace std;

class M;

class T
{
private:
	int val;
public:
	T(int v)
	{
		val= v;
	}
	void disp()
	{
		cout << val << endl;
	}
	friend void func1(T &, M &);
	
};

class M
{
private:
	int j;
public:
	M(int v)
	{
		j = v;
	}
	void disp()
	{
		cout << j << endl;
	}

};