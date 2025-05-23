#include<iostream>
using namespace std;
int main() {
	int a[10];
	int i, countOdd, countEven;
	for (i = 1,countOdd = 0; i < 10;i+=2) {
		if (i % 2 != 0) {
			a[countOdd] = i;
			countOdd++;
			//a[i] = i+10;
		}
	}
	for (i = 0, countEven = 10/2; i < 10;i+=2) {
		if (i % 2 == 0) {
			a[countEven] = i;
			countEven++;
		}
	}

	for (int i = 0;i < 10;i++) {
		cout << a[i] << endl;
	}
	return 0;
}