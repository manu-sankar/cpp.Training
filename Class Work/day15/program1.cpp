#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	a = a + b;
	//cout << a << endl;
	b = a - b;
	//cout << b << endl;
	a = a - b;
	//cout << a << endl;
	cout <<"New value of a is " << a << endl;
	cout <<"New value of b is " << b << endl;
	return 0;
}