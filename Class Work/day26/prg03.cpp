#include<iostream>
using namespace std;

class student
{
private:
	int rollno;
	char name[20];
	char dept[20];
	float mark1;
	float mark2;

	/*
	OR
	class student:
	float m[4];

	*/
public:
	void setRollno(int r) {
		rollno = r;
	}
	int getRollno(){
		return rollno;
	}
	void setName(char* n) {
		strcpy(name, n);
	}
	char* getName() {
		return name;
	}
	void setDept(char* d) {
		strcpy(dept, d);
	}

	char* getDept() {
		return dept;
	}
	/*
	void setMarks(float m[])
	{
		for (int i = 0;i < 4;i++)
			marks[i] = m[i];
	}
	
	
	*/
	void setMark1(float m1) {
		mark1 = m1;
	}

	float getMark1()
	{
		return mark1;
	}
	void setMark2(float m2) {
		mark2 = m2;
	}

	float getMark2()
	{
		return mark2;
	}
	void display() {
		cout << "Roll no :" << rollno << endl;
		cout << "Name :" << name << endl;
		cout << "Department :" << dept << endl;
		cout << "Mark 1: " << mark1 << endl;
		cout << "Mark 2: " << mark2 << endl;
	}

	/*private:
	float calcAvg() {
		float avg = 0.0;
		for (int i = 0;i < 4;i++) {
			cout << marks[i] << "\t";
			avg += marks[i];
		}
		return avg/4.0;
	}
	*/


};

int main() {
	int r = 101;
	char n[] = "Manu";
	char d[] = "CSE";
	float m1 = 89.12;
	float m2 = 76.50;
	//float m[4] = { 50,55,65,75 };
	student s;
	s.setRollno(r);
	s.setName(n);
	s.setDept(d);
	s.setMark1(m1);
	s.setMark2(m2);
	s.display();
}