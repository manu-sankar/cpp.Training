#include<iostream>
using namespace std;
int newNumber(int a, int b);
int newNumber(int a, int b){
	if (a < 1 && b < 1 )
		return 1;
	int lastDigit = a % 10;
	while (b >= 10)
		b /= 10;
	int firstDigit = b;
	int newNum = lastDigit  * 10 + firstDigit;
	return newNum;
}
int main() {
	int x, y;
	cout << "Enter x ";
	cin >> x;
	cout << "Enter y ";
	cin >> y;
	cout<<newNumber(x, y);
	return 0;
}