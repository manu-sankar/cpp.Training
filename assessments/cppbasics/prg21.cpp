#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int gcd;
	for (int i = a;i >= 2;i--) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
			break;
		}
	}

	cout << (a * b) / gcd;
	return 0;
}