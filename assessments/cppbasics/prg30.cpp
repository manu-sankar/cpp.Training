#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		for (int k = 0;k < ((2 * n) - (2 * i));k++) {
			cout << " ";
		}
		for (int l = 1;l <= i;l++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n-1;i >=0;i--) {
		for (int j = i;j >= 1;j--) {
			cout << "*";
		}
		for (int k = 0;k < ((2 * n) - (2 * i));k++) {
			cout << " ";
		}
		for (int l = 1;l <= i;l++) {
			cout << "*";
		}
		cout << endl;
		
	}
	
}