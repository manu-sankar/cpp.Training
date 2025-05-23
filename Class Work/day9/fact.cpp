#include<iostream>
int factorial(int n);
using namespace std;
int main() {
	int n;
	cout << "Enter n value ";
	cin >> n;
	int ret=factorial(n);
	cout << "Factorial of " << n << "is " << ret << endl;
	return 0;
}
int factorial(int n) {
	int retVal = 1;
	if (n == 0 || n==1)
		return 1;
	retVal = n * factorial(n-1);
	return retVal;
}
