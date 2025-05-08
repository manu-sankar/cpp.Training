#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter n value";
	cin >> n;
	int prod = 1;
	/*for (int i = 1;i <= n;i++) {
		fact = fact * i;
	}*/
	while (n >= 1) {
		prod = prod * n;
		n = n - 1;
	}
	cout << "Factorial is " << prod;
	return 0;
}