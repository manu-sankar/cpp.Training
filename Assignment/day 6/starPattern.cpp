#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter n values";
	cin >> n;
	for (int i = 0;i <= n;i++) {
		for (int j = 0;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0;i <= n;i++) {
		for (int j = i;j <= n;j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}