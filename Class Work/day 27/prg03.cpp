#include<iostream>
using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
public:
	Employee();
	Employee(int, string);
public:
	void disp()
	{
		~Employee()
		{
			cout << "Destructor getting called" << endl;
		}
	}
};

Employee::Employee()
{
	cout << "constructor got called " << endl;

}
Employee::Employee(int id, string name)
{
	cout << "Parameterised Construct got called" << endl;
	e_id = id;
	e_name = name;
}
int main()
{
	Employee e;
	e.disp();
	Employee e1(101, "manu");
	e1.disp();

	Employee e2(e1);
	e2.disp();

	//Employee e3=
	return 0;
}

