#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number";
	cin >> n;
	int rev = 0;
	int temp = n;
	while(n){
		int r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	if (temp == rev) {
		cout << " is palindrome";
	}
	else {
		cout << "is not palindrome";
	}
	return 0;
}