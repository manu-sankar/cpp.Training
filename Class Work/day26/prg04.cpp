#include<iostream>
using namespace std;

class student {
private:
	int rollno;
	char name[20];
	float marks[4];
public:
	void setName(char*);
	char* getName();
	void setRollNo(int);
	int getRollno();
	void setMarks(float[]);
	void display();
	float calAvg();
};

void student::setName(char* n)
{
	strcpy(name, n);
}

char* student:: getName()
{
	return name;
}

void student::setRollNo(int r)
{
	rollno = r;
}

int student::getRollno()
{
	return rollno;
}

void student::setMarks(float m[])
{
	for (int i = 0;i < 4;i++) {
		marks[i] = m[i];
	}
}

void student:: display()
{
	cout << "Name :" << name << endl;
	cout << "Roll no :" << rollno << endl;
	cout << "Average :" << calAvg() << endl;
}

float student:: calAvg() {
	float avg = 0.0;
	for (int i = 0;i < 4;i++) {
		cout << marks[i] << endl;
		avg += marks[i];
	}
	return avg / 4;
}

int main()
{

	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	float m[4] = { 50,55,65,75 };
	student s;
	s.setRollNo(r);
	s.setName(n);
	s.setMarks(m);
	s.display();
	cout << s.getName() << endl;
	cout << s.getRollno() << endl;
	strcat(str2, s.getName());
	cout << str2 << endl;

	return 0;
}