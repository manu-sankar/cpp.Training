#include<iostream>
using namespace std;
int number(int n) {
	cout << "Enter a number";
	cin >> n;
	if (n % 3 == 0) {
		cout << "It is divisible by 3";
	}
	else if(n % 5 == 0) {
		cout << "It is divisible by 5";
	}
	else {
		cout << "It is neither divisible by 3 or 5";
	}
	return 0;
}