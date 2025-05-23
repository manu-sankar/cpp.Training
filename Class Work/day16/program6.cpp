#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter n ";
	cin >> n;
	int i, j, k, l;
	for (i = 1;i <= n/2;i++) {
		for (j = 1;j <= n;j++) {
		cout << "*";
		}
		cout << endl;
	}
	for (i = 1;i <= n / 2;i++) {
		for (j = 1;j <= n;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
/*
******
******
******
using 4loops
*/
	