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
	void empDisp()
	{
		cout << "ID " << eid;
		cout << "Name " << name;
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

	void dispManager()
	{
		empDisp();
	}
};


class TechLead :public Developer, public Manager
{
private:
	float salCodingHours, salTeamSize;
public:
	TechLead(int eid, string name, float codinghours, int teamsize, float salCodingHours, float salTeamSize) :Developer(eid, name, codinghours), Manager(eid, name, teamsize)
	{
		this->salCodingHours = salCodingHours;
		this->salTeamSize = teamsize;
	}
	void calculateSal()
	{
		dispManager();
		float codingHoursSal = 500 * salCodingHours;
		cout << codingHoursSal;
		float teamSizeSal = 5000 * teamSizeSal+codingHoursSal;
		cout << teamSizeSal;
	}

};


int main()
{
	TechLead lObj(1,"Manu", 8, 100, 500);
	lObj.dispManager();
	lObj.calculateSal();
}

