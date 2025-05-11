#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool isPrime = true;
	for (int i = 2;i < n;i++) {
		if (n % i == 0) {
			isPrime = false;
		}
		else {
			isPrime == true;
		}
	}
	if (isPrime) {
		cout << n << " is prime";
	}
	else {
		cout << n << " is not prime";
	}
}