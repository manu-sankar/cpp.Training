#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

class Employee
{
	int id;
	string name;
public:
	Employee(int id, string name) :id(id), name(name){}
	void dispEmp()
	{
		cout << "ID: " << id << "\tName: " << name << endl;
	}
};

int main()
{
	vector<int>v = { 1,2,3 };
	vector<int>::iterator it=v.begin();
	for (;it != v.end();it++)
	{
		cout << *it << endl;
	}
	cout << endl;
	vector<Employee>emp;
	vector<Employee>::iterator itEmp;
	emp.emplace_back("1", "abc1");
	emp.emplace_back("2", "abc2");
	emp.emplace_back("3", "abc3");
	emp.emplace_back("4", "abc4");

	int i = 0;
	for (itEmp = emp.begin();itEmp != emp.end();i++,itEmp++)
	{
		cout << "Employee (" << (i + 1) << ") details are\n";
		itEmp->dispEmp();
		
		cout << "====================\n";
	}
	return 0;
}



