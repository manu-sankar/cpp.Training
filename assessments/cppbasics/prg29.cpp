#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		for (int j = 0;j <= i;j++) {
			cout << " ";
		}
		for (int k = n;k >=i;k--) {
			cout << " *";
		}
		cout << endl;
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 0;j <= n-i;j++) {
			cout << " ";
		}
		for (int k = i+1;k >=1 ;k--) {
			cout << " *";
		}
		cout << endl;
	}
}