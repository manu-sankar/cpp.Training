#include<iostream>
using namespace std;


class student {
protected:
	int rollno;
	char name[20];
public:
	void display(string str1) {
		cout << "Hello World, " << str1 << endl;
		cout << "Name :" << name << endl;// This name is defined inside the class so that we can use it inside the class
	}

	void setName(string s) {
		//name = s;
		strcpy(name, s.c_str());

	}
};
int main() {
	student s;
	cout << sizeof(s) << endl;

	s.display("Manu");
	cout << endl;
	s.setName("Sankar");
	cout << endl;
	s.display("Manu");
	cout << endl;
}