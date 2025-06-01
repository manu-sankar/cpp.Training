#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Employee
{
protected:
	int id;
	char name[20];
	char dept[30];
public:
	Employee(int id, const char* name, const char* dept)
	{
		this->id = id;
		strcpy(this->name,name);
		strcpy(this->dept,dept);
	}
	void empPrint()
	{
		cout << "Employee Details";
		cout << "Enter the id";
		cin >> id;
		cout << "Enter the name";
		cin >> name;
		cout << "Enter the department";
		cin >> dept;
	}
};

class Finance:public Employee
{
private:
	float sal;
public:
	
	void storeFile()
	{
		ofstream finLine("emp.txt",ios::out);
		finLine << "Id: " << id<<"Name:"<<name<<"Department"<<dept << "Salary : " << sal;
		finLine.close();
	}

	void readFile()
	{
		ifstream foutLine("emp.txt");
		cout << "ID: " << id << "Name " << name << "Department" << dept << "Salary" << sal << endl;
	}
};
int main()
{
	vector<Finance>arr;
	Finance f1;
}