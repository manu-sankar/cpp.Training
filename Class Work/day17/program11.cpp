#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int oct = 67, dec = 0,place = 0;
	int temp = oct;
	while (temp) {
		int lastDigit = temp % 10;
		temp /= 10;
		dec += lastDigit * pow(8, place);
		place++;
	}
	cout << dec;
	return 0;
}