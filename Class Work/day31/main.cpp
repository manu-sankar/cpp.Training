#include<iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee e1;
	e1.set_e_id(1);
	e1.set_e_name("Kishan");
	e1.set_e_address("kjhagjsajd");
	e1.set_e_phno(82736487329);

	cout << "ID " << e1.get_e_id() << endl;
	cout << "Name " << e1.get_e_name() << endl;
	cout << "Address " << e1.get_e_address() << endl;
	cout << "Phno " << e1.get_e_phno() << endl;
	return 0;
}