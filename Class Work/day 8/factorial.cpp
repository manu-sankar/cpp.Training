#include<iostream>
using namespace std;
int fact(int n);
int main() {
	int n;
	cout << "Enter n value";
	cin >> n;
	int res = fact(n);
}
int fact(int n) {
	int factorial=1;
	for (int i = 1;i <= n;i++) {
		factorial = factorial * i;
	}
	return factorial;
}