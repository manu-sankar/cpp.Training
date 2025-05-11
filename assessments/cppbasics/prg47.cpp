/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[] = { '1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	int dec = 0;
	int place = 0;
	int temp = n;

	while (temp) {
		int lastDigit = temp % 10;
		temp /= 10;
		dec += lastDigit * pow(8, place);
		place++;
	}
}*/