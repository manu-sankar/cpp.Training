#include<iostream>
#include<list>
using namespace std;

class Student
{
private:
	int rollno;
	string name;
public:
	Student(int rollno, string name)
	{
		this->rollno = rollno;
		this->name = name;
	}
	void display()
	{
		cout << "Roll Number: " << rollno << endl;
		cout << "Name: " << name << endl;
	}
	bool operator==(const Student& other)const
	{
		return rollno == other.rollno;
	}
};

int main()
{
	list<Student>stud;
	Student s1(101, "Manu");
	Student s2(102, "Kishan");
	Student s3(103, "Karthik");
	stud.push_back(s1);
	stud.push_back(s2);
	stud.push_back(s3);

	for (auto i : stud)
	{
		i.display();
	}
	cout << "=====================================================" << endl;
	stud.reverse();
	for (auto i : stud)
	{
		i.display();
	}
	cout << "=====================================================" << endl;


	stud.remove(s2);
	for (auto i : stud)
	{
		i.display();
	}

}