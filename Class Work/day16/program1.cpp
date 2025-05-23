#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter a and b ";
	cin >> a >> b;
	int gcd = 0;
	for (int i = a;i >= 2;i--) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
			break;
		}
	}
	cout << gcd;
	return 0;
}
