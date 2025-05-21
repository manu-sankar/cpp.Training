#pragma once
#ifndef __STUDENT__
#define __STUDENT__

class student
{
private:
	int rollno;
	char name[20];
	float marks[4];
	char grade[20];
public:
	void setName(const char*);
	char* getName();
	void setRollNo(int);
	int getRollno();
	void setMarks(float[]);
	void display();
	float calAvg();
	void gradeCal(float);
};

#endif