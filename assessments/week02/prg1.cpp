//star pattern

#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the n value";
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cout << "*";
		for (int j = 1;j <= i;j++) {
			cout << j;
		}
		for (int j = i - 1;j >= 1;j--) {
			cout << j;
		}

		cout <<"*" << endl;
	}
	for (int i = n - 1;i >= 1;i--) {
		cout << "*";
		for (int j = 1;j <= i;j++) {
			cout << j;
		}
		for (int j = i - 1;j >= 1;j--) {
			cout << j;
		}
		cout << "*"<<endl;
	}
	cout << "*" << endl;
	return 0;
}