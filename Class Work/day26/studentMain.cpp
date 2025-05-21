#include<iostream>
#include"Student.h"

using namespace std;

int main()
{
	student s;
	float marks[] = { 55,65,59,87 };
	s.setName("Manu");
	s.setRollNo(11);
	s.setMarks(marks);
	s.display();
}