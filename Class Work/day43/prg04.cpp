#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

class Employee
{
private:
	int id;
	string name;
public:
	Employee():id(0),name(""){}
	Employee(int id, string name):id(id),name(name){}
	Employee(Employee& others)
	{
		this->id = others.id;
		this->name = others.name;
	}
	void display() const
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
	friend istream& operator >>(istream& is, Employee& e)
	{
		is >> e.id >> e.name;
		return is;
	}
	friend ostream& operator <<(ostream& os, Employee& e)
	{
		os << "ID: " << e.id << "\tName: " << e.name << endl;
		return os;
	}
};

int main()
{

	istream_iterator<Employee>inIt(cin);
	istream_iterator<Employee>endIt;
	vector<Employee>emp;

	while (inIt != endIt)
	{
		emp.push_back(*inIt);
		++inIt;
	}

	for (auto e : emp)
		e.display();

	return 0;
}

