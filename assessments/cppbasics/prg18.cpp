#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count = 0;
	int dig;
	int sum = 0;
	int temp = n;
	while (temp>0) {
		dig = temp % 10;
		count++;
		temp /= 10;
	}
	temp = n;
	while (temp > 0) {
		int r = temp % 10;
		temp /= 10;
		sum += pow(r, count);
	}
	if (sum == n) {
		cout << "Armstrong";
	}
	else {
		cout << "Not armstrong";
	}

	return 0;
}