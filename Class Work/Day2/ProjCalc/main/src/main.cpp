#include<iostream>
#include<main.h>
using namespace std;
int main() {
	int a, b;
	cout << "Enter 2 values";
	cin >> a >> b;
	cout << "Sum of " << add(a, b) << endl;
	cout << "Difference of " << sub(a, b) << endl;
	cout << "Product of " << mul(a, b) << endl;
	cout << "Quotient of " << division(a, b) << endl;
}