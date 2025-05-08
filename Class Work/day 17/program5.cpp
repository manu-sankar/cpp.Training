#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter n";
	cin >> n;
	int i, j, k;
	for (i = 0;i < n;i++) {
		for (j = 0;j < i;j++) {
			cout << " ";
		}
		for (k = n;k > i;k--) {
			cout << "* ";
		}
		cout << endl;
	}
	for (i = 1;i < n;i++) {
		for (j = 0;j < n-i-1;j++) {
			cout << " ";
		}
		for (k = 0;k <= i;k++) {
			cout << "* ";
		}
		cout << endl;
	}
}