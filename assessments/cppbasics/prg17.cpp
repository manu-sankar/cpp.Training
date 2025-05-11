#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int dig, r=0;
	int temp = n;
	while (temp) {
		dig = temp % 10;
		r = r * 10 + dig;
		temp /= 10;
	}
	if (r == n) {
		cout << n << " is palindrome";
	}
	else {
		cout << n << " is not palindrome";
	}
}