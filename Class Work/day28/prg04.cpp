#include<iostream>
#define MAX 5
using namespace std;

class Employee
{
private:
	int id;
	string name;
	float salary;
public:
	void setId(int i)
	{
		id = i;
	}
	int getId()
	{
		return id;
	}
	void setName(string n)
	{
		name = n;
	}
	string getName() {
		return name;
	}
};

class StackOp
{
private:
	Employee e[MAX];
	int top;
	int bottom;
public:
	StackOp()
	{
		top = -1;
		bottom = -1;
	}
	void pushEmp()
	{
		if(e==MAX-1)
	}
};