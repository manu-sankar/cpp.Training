#include<iostream>
using namespace std;

typedef struct employee {
	int id;
	string name;
	
}emp;


typedef struct period {
	int id;
	int days;
}period;


typedef struct salarydetails {
	int id;
	float basicSal;
	float variablePay;
	float allowancePay;
}sal;


int getEmpDetails(emp*);
void displayDetails(emp);
void salary(sal*, int);
void noOfDays(period*, int);
int grossSal(period p, sal s);
int taxDed(int tot);

int getEmpDetails(emp* e, period p, sal s) {
	cout << "ID ";
	cin >> e->id;
	cout << "Name ";
	cin >> e->name;

	return EXIT_SUCCESS;
}


void displayDetails(emp e) {
	cout << "=========================";
	cout << "ID " << e.id;
	cout << "Name " << e.name;
	return;
}


void noOfDays(period* p, int id) {
	p->id = id;
	cout << "No of days "<<p->days;
	cin >> p->days;
	return;
}


void salary(sal* s, int id ) {
	s->id = id;
	cout << "Salary ";
	cin >> s->basicSal;
	cout << "variablePay ";
	cin >> s->variablePay;
	cout << "allowancePay ";
	cin >> s->allowancePay;
	return;
}

int grossSal(period p, sal s) {
	float tot = s.basicSal * p.days + s.variablePay + s.allowancePay;
	return tot;
}


int taxDed(int tot) {
	float tax = tot * 0.4;
	return tax;
}


int main() {

}