#include<iostream>
using namespace std;
void fun(int n);
int main() {
	int value;
	cout << "Enter n value";
	cin >> value;
	fun(value);
	return 0;
}
void fun(int n) {
	if (n == 0 || n < 0)
		return;
	cout << n << endl;
	fun(n - 1);
}