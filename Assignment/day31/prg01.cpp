#include<iostream>
using namespace std;

class Student
{
protected:
	int rollno;
	string name;
	int age;
public:
	Student(int rollno, string name, int age)
	{
		this->rollno = rollno;
		this->name = name;
		this->age = age;
	}
	void studdisp()
	{
		cout << "Student Info" << endl;
		cout << "Enter Roll no " << rollno << endl;
		cout << "Enter Name " << rollno << endl;
		cout << "Enter Age " << age << endl;
	}
};

class Marks :public Student
{
private:
	int m1, m2, m3;
public:
	Marks(int rollno, string name, int age,int m1, int m2, int m3):Student(rollno ,name, age)
	{
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
	}
	void calculate()
	{
		studdisp();
		cout << "Full Results" << endl;
		int tot = m1 + m2 + m3;
		cout <<"Total Marks: " << tot << endl;
		float avg = (m1 + m2 + m3) / 3;
		cout << "Avg Marks: " << avg << endl;
	}
	
};


int main()
{
	Student sObj(1, "Manu", 23);
	Marks mObj(1,"Manu",23,50, 60, 70);
	mObj.calculate();
}