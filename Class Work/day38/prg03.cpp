#include<iostream>
#include<list>

using namespace std;

class Employee
{
private:
	int id;
	string name;
public:
	Employee(int id, string name):id(id),name(name){}
	void display() const
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
	bool operator==(const Employee& other)const
	{
		return id == other.id;
	}
	bool operator<(const Employee& other)const
	{
		return id < other.id;
	}
};
	void mySort(list<Employee> &emp)
	{
		for (auto& i : emp)
		{
			for (auto j : emp)
			{
				if (i < j)
				{
					Employee t = i;
					i = j;
					j = t;
				}
			}
		}
	}
int main()
{
	list<Employee>emp;
	Employee e1(1, "Manu");
	Employee e2(2, "Kishan");
	Employee e3(3, "Karthik");
	emp.push_back(e1);
	emp.push_back(e2);
	emp.push_back(e3);

	emp.insert(emp.begin(), e3);

	for (auto i : emp)
		i.display();

	cout << "==================================================" << endl;

	emp.reverse();
	for (auto i : emp)
		i.display();

	cout << "==================================================" << endl;

	emp.remove(e2);
	for (auto i : emp)
		i.display();

	cout << "==================================================" << endl;
	
	mySort(emp);
	for (const auto& emp : emp)
		emp.display();
		
}