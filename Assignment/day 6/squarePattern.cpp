#include<iostream>
using namespace std;
int main() {
	int n,m;
	cout << "Enter n values";
	cin >> n;
	cout << "Enter m values";
	cin >> m;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cout << "*";
		}
		cout << endl;
	}
}