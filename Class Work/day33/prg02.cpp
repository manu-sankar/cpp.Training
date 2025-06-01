#include<iostream>
using namespace std;

class Student
{
protected:
	int rollno;
	string name;
public:
	Student(int r, string n):rollno(r),name(n){}
	{
		this->rollno = rollno;
		this->name = name;
	}
	void studDisp()
	{
		cout << "Roll no " << rollno << endl;
		cout << "Name " << name << endl;
	}
	virtual void sportDisp() = 0;
};

class Sports :public Student
{
protected:
	string sportName;
public:
	Sports(int rollo, string name,string sportName):Student(rollno, name)
	{
		this->sportName = sportName;
	}
	void sportDisp()
	{
		cout << "Sports Details  " << sportName << endl;
	}
};

class Admin :public Student
{
protected:
	string adminId;
	string dues;
public:
	Admin(int rollno, string name, string adminId, string dues):Student(rollno,name)
	{
		this->adminId = adminId;
		this->dues = dues;
	}
	void admindisp()
	{

	}
};


int main()
{
	Sports* sptr = new Sports(1,"manu","Football");
	Sports sObj(2,"Sankar","Cricket");
	sptr = &sObj;
	sptr->sportDisp();
	sptr->studDisp();
}