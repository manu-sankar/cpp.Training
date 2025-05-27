#include<iostream>
using namespace std;

class Employee
{
protected:
	int eid;
	string name;
public:
	Employee(int eid, string name)
	{
		this->eid = eid;
		this->name = name;
	}
};

class Developer :public Employee
{
private:
	float codinghours;
public:
	Developer(int eid, string name,float codinghours):Employee(eid,name)
	{
		this->codinghours = codinghours;
	}
};


class Manager :public Employee
{
private:
	int teamsize;
public:
	Manager(int eid, string name,int teamsize):Employee(eid, name)
	{
		this->teamsize = teamsize;
	}
};


class TechLead :public Developer, public Manager
{
public:
	TechLead()
	{

	}
	void CalculateSalary()
	{

	}
};


