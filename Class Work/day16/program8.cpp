#include<iostream>
using namespace std;
int main() {
	int i, j, k;
	int n;
	cout << "Enter n";
	cin >> n;
	for (int i = n;i >= 1;i--) {
		for (int j = 1;j <= n-i;j++) {
			cout << " ";
		}
		for (int k = 1;k<=2*i-1;k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 2;i <= n;i++) {
		for (int j = i;j <= n-1 ;j++) {
			cout << " ";
		}
		for (int k = 1;k <= 2 * i - 1;k++) {
			cout << "*";
		}
		cout << endl;
	}
}