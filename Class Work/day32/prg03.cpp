#include<iostream>
using namespace std;

class Person
{
protected:
	string name;
	char g;
	int age;
	int phno;
public:
	Person(string n, char g, int a, int pno): name(n), g(g), age(a),phno(pno){}

	void dispPerson()
	{
		cout << "Name " << name << endl;
		cout << "Gender " << g << endl;
		cout << "Age " << age << endl;
		cout << "Phone Number " << phno << endl;
	}
};

class Employee: protected Person
{
protected:
	int e_id;
	float e_sal;
	string e_dept;
public:
	Employee(string n, char g, int a,int pno, int id, float sal, string dept):Person(n,g,a,pno),e_id(id),e_sal(sal),e_dept(dept){}
	void dispEmp()
	{
		cout << "ID " << e_id << endl;
		cout << "Dept " << e_dept << endl;
		cout << "Salary " << e_sal << endl;
	}
};


class EmpFin: public Employee {
private:
	int e_pt;
	int e_pf;
	int e_vp;
	int e_days;
public:

	EmpFin(string n, char g, int a, int pno,int id, float sal, string dept, int pt, int pf, int vp, int days):Employee(n, g, a, pno,id,sal,dept),e_pt(pt),e_pf(pf),e_vp(vp),e_days(days) {}

	void dispFin()
	{
		dispPerson();
		dispEmp();
		cout << "Professional Tax: " << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "Variable Pay " << e_vp << endl;
		cout << "No of days " << e_days << endl;

		int gs = (e_sal - e_pf - e_pt - e_vp) / 30;
		gs = gs * e_days;
		cout << "Gross Salary" << gs << endl;
	}
};

class LMS :public Employee
{
protected:
	int days;
	int hours;
public:
	LMS(string n, char g, int a, int pno,int id,float sal,string dept, int d, int h):Employee(n,g,a,pno,id,sal,dept),hours(h),days(d){}
	void LMSdisp()
	{
		cout << "Hours " << hours << endl;
		cout << "Days " << days << endl;
	}
};

int main()
{
	EmpFin ef("Manu", 'M', 23, 71278361,101, 20000,"IT",200, 1800, 4000, 25);
	ef.dispFin();

	LMS lObj("Kishan", 'M', 23, 1735715236, 201, 40000, "IT", 25, 7);
	lObj.LMSdisp();
	return 0;
}


