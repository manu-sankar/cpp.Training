#include<iostream>
using namespace std;
typedef struct employee
{
	int ID;
	int empPhone;
	string empName;
	string empAddress;
	char empGender;
}emp;

void display(emp);
int getEmpDetails(emp*);

int main() {
	emp e1;
	/*e1.ID = 101;
	e1.empName = "Manu";
	e1.empAddress = "Trivandrum";
	e1.empGender = 'M';
	e1.empPhone = 6282345829;
	cout << "Size of emp " << sizeof(employee) << "\t size of e1 " << sizeof(e1) << endl;
	display(e1);*/

	getEmpDetails(&e1);
	cout << "Size of emp " << sizeof(employee) << "\t size of e1 " << sizeof(e1) << endl;
	display(e1);
	emp e[3];
	/*for (int i = 0;i < 3;i++) {
		cout << "ID ";
		cin >> e[i].ID;
		cout << "Name ";
		cin >> e[i].empName;
		cout << "Gender ";
		cin >> e[i].empGender;
		cout << "Phone  ";
		cin >> e[i].empPhone;
		cout << "Address ";
		cin >> e[i].empAddress;
	}*/

	for (int i = 0;i < 3;i++)
	{
		display(e[i]);
	}

	cout << endl;
	return 0;
}

void display(emp e) {
		cout << "====================================";
		cout << "ID " << e.ID << endl;
		cout << "Name " << e.empName << endl;
		cout << "Gender " << e.empGender << endl;
		cout << "Phone  " << e.empPhone << endl;
		cout << "Address " << e.empAddress << endl;
	}

int getEmpDetails(emp* e) {
	cout << "ID ";
	cin >> e->ID;
	cout << "Name ";
	cin >> e->empName;
	cout << "Gender ";
	cin >> e->empName;
	cout << "Phone ";
	cin >> e->empName;
	cout << "Address ";
	cin >> e->empName;
	return EXIT_SUCCESS;
}