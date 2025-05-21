#include<iostream>
using namespace std;

class student {
private:
	int rollno;
	char name[20];
public:
	void setName(char* s)
	{
		strcpy(name, s);
	}
	char* getName()
	{
		return name;
	}

	void setRollno(int r)
	{
		rollno = r;
	}
	int getRollno()
	{
		return rollno;
	}
	void display()
	{
		cout << "Name :" << name << endl;
		cout << "Roll No:" << rollno << endl;
	}
};

int main() {
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 101;
	student s;
	s.setRollno(r);
	s.setName(n);
	s.display();
	cout << s.getRollno() << endl;
	cout << s.getName() << endl;
	strcat(str2, s.getName());
	cout << str2 << endl;
	//s.display();
}