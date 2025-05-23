#include<iostream>
#include<cmath>
using namespace std;
int dec2Base(int ,int);
int base2Dec(int, int);
int main() {
	cout << dec2Base(55, 8) << endl;
	cout << base2Dec(101, 2) << endl;
	return 0;
}
int dec2Base(int n, int base) {
	int r,place=0, sum=0;
	while (n) {
		r = n % base;
		sum += r * pow(10, place);
		n /= base;
		place++;
	}
	return sum;
}



int base2Dec(int num, int base) {
	int r;
	int place = 0;
	int sum = 0;
	while (num) {
		r = num % 10;
		sum += r * pow(base, place);
		place++;
		num /= 10;
	}
	return sum;
}