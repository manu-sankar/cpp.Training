#include<iostream>
using namespace std;
int count(int n);
int main() {
	int num;
	cout << "Enter number";
	cin >> num;
	count(num);
	cout << count(num);
	return 0;
}
int count(int n) {
	int res, counter = 0;
	res = n % 10;
	if (n == 0)
		counter++;
	cout << counter;
}
