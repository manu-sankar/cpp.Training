//C++ Program to Generate Multiplication Table

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i <= 10;i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	cout << endl;
	return 0;
}