#include<iostream>
using namespace std;

class Person
{
private:
	string ssn;
protected:
	string name;
	char gender;
	int age;
public:
	Person(string s,string n, char g, int a):ssn(s),name(n),gender(g),age(a)
	{
		cout << "Constructor got called" << endl;
	}
	void disp()
	{
		cout << "Person details are" << endl;;
		cout << "SSN " << ssn << endl;
		cout << "Name " << name << endl;
		cout << "Gender " << gender << endl;
		cout << "Age " << age << endl;
		cout << "===================================" << endl;
		cout << endl;
	}

};

class Employee :public Person
{
private:
	int e_id;
	float e_salary;
	string e_desg;
public:
	Employee(string ssn, string name, char gender, int age,int e_id, float e_salary, string e_desg):Person(ssn,name, gender, age),e_id(id),
	{
		this->e_id = e_id;
		this->e_salary = e_salary;
		this->e_desg = e_desg;
	}
	void empDetails()
	{
		cout << "Employee Details are: " << endl;
		cout << "ID: " << e_id;
		cout << "Salary: " << e_salary << endl;
		cout << "Designation: " << e_desg << endl;
		cout << "===================================" << endl;
		cout << endl;
	}
	~Employee()
	{
		cout << "Employee details are deleted";
	}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}
};


int main()
{
	Employee eObj("ADH","Manu",'M',23,101,30000,"IT");
	eObj.disp();
	eObj.disp();
	eObj.setName("Sankar");
	eObj.disp();
}