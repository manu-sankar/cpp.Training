#include<iostream>
using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
public:
	void init(int id, string name)
	{
		e_id = id;
		e_name = name;
	}
	void printDetails()
	{
		cout << e_id << '\t' << e_name << endl;
	}
};

int main()
{
	Employee e;
	/*e.e_id = 101;
	e.e_name = "Manu";
	Employee* ptr = &e;
	cout << e.e_id << '\t' << e.e_name << endl;
	ptr->e_id = 201;
	ptr->e_name = "Manu ";
	cout << e.e_id << '\t' << e.e_name << endl;*/

	

	return 0;
}