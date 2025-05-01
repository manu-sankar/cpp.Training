#include<iostream>
int add(int n);
using namespace std;
int add(int n) {
	if (n < 1)
		return 1;
	cout << n;
}
int main() {
	int sum, x,y;
	cout << "Enter x";
	cin >> x;
	cout << "Enter y";
	cin >> y;
	sum = x + y;
	cout << sum << endl;;
	if (sum % 2 == 0) {
		cout << "even"<<endl;
	}
	else {
		cout << "Odd" << endl;
	}
	return 0;
}