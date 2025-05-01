#include<iostream>
bool leapYear(int n);
using namespace std;
int main() {
	int num;
	cout << "Enter the year";
	cin >> num;
	if (leapYear(num)) {
		cout << num << " is a leap year" << endl;
	}
	else {
		cout << num << " is not a leap year" << endl;
	}
	return 0;
}
bool leapYear(int n) {
		if (n % 4 == 0 && n % 100 != 0 || n % 400==0) {
			return true;
		}
		return false;

	}