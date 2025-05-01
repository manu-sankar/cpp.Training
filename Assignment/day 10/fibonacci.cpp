#include<iostream>
int fib(int n);
using namespace std;
int fib(int n) {
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}
int main() {
	int num;
	cout << "Enter n values ";
	cin >> num;
	cout << "Fibonacci number at position " << fib(num) << endl;
	return 0;
}