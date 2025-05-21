#include<iostream>
using namespace std;


typedef struct employee {
	int id;
	string name;
}emp;


typedef struct salary {
	int id;
	float basicSal;
	float variableSal;
	float grossSal;
}sal;



bool getDetails(emp*);
void printDetails(emp);
bool v_name(string);
void getSal(emp*, sal*);
float grossSal(sal* s);




bool getDetails(emp* e, sal* s) {
	cout << "Enter the details of employee";
	cout << "Enter the Id";
	cin >> e->id;
	cout << "Enter the name";
	cin >> e->name;
	cout << "Enter the basic salary";
	e->id = s->id;
	cout << "Enter the varibale salary";
	cin >> s->variableSal;

}


void printDetails(emp e, sal s) {
	cout << e.id << endl;
	cout << e.name << endl;
	cout << s.basicSal << endl;
	cout << s.variableSal << endl;
}

bool v_name(string name) {
	for (int i = 0;i < name.length();i++) {
		if ((name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z' || name[i] == ' '))
			continue;
		else
			return false;
	}
}




void getSal(emp* e,sal* s, int size) {
	cout << "Enter the basic salary ";
	cin >> s->basicSal;
	cout << "Enter the variable salary ";
	cin >> s->variableSal;
}


float grossSal(sal* s) {
	float totSal = s->basicSal + s->variableSal * 10;
	return totSal;
}


int main() {

}