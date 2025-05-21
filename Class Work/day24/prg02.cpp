#include<iostream>
using namespace std;

struct Date {
	int day, month, year;
}DATE;

typedef struct Employee {
	int id;
	string name;
	struct Address {
		int hNo;
	}addr;
}EMP;


/* typedef struct Address {
	int hNo;
	int pincode;
	string addressline1;
	string addressLine2;
	string city;
	string state;
}ADDRESS;*/


int main() {
	struct Employee e;
	/*e.id = 101;
	e.name = "Manu";
	e.joiningDate.day = 10;
	e.joiningDate.month = 03;
	e.joiningDate.year = 2025;

	cout << e.id << '\t' << e.name << '\t' << e.joiningDate.day << '\t' << e.joiningDate.month << '\t' << e.joiningDate.year << '\t' << endl;*/
	e.addr.hNo = 10;
	cout << e.addr.hNo;
	return 0;

}