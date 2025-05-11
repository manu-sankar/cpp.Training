#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int place = 0;
	int dec = 0;
	int temp = n;
	while (temp) {
		int lastDigit = temp % 10;
		temp /= 10;
		dec += lastDigit * pow(8, place);
		place++;
	}
	cout << dec;
	return 0;
}

