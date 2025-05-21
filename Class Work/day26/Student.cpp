#include<iostream>
#include<cstring>
#include "Student.h"

using namespace std;

void student::setName(const char* n)
{
	strcpy(name, n);
}

char* student::getName()
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

void student::display()
{
	cout << "Name :" << name << endl;
	cout << "Roll no :" << rollno << endl;
	cout << "Average :" << calAvg() << endl;
	float avg = calAvg();
	cout << "Grade :";
	gradeCal(avg);
}



float student::calAvg() {
	float avg = 0.0;
	for (int i = 0;i < 4;i++) {
		cout << marks[i] << endl;
		avg += marks[i];
	}
	return avg / 4;
}



void student:: gradeCal(float avg)
{
	if (avg >= 80 && avg <= 100)
	{
		cout << "A";
	}
	else if (avg < 80 && avg >= 70)
	{
		cout << "B";
	}
	else if (avg < 70 && avg >= 60)
	{
		cout << "C";
	}
	else if (avg < 60 && avg >= 40)
	{
		cout << "D";
	}
	else if (avg < 40 && avg >= 0)
	{
		cout << "E";
	}
	else if (avg < 1)
	{
		cout << "Invalid";
	}

}
