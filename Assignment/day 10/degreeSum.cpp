#include<iostream>
using namespace std;
bool func(int a, int b, int c);
bool func(int a, int b, int c) {
	return (a + b + c == 180 && a > 0 && b > 0 && c > 0);	
}
int main() {
	int a1, a2, a3;
	cout << "Enter 3 angles ";
	cin >> a1 >> a2 >> a3;
	if (func(a1, a2, a3))
		cout << "It is a triangle" << endl;
	else
		cout << "It is not a triangle";
	return 0;
}