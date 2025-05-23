/*#include<iostream>
using namespace std;
int getDigits(int num);
int main() {
	int num;
	cout << "Enter the no of counts";
	cin >> num;
	while(true){
	if (getDigits(num)) {
		cout << "Counted" << endl;
	}
	else {
		cout << "Not counted" << endl;
	}
	}
}

int getDigits(int number) {
	int r,countDigits=0,countN=0;
	while (number) {
		r = number % 10;
		cout <<"r = "<< r << "is prime digit" << endl;
		if (isPrime(r) == true) {
			cout << r << "is prime digit" << endl;
			countN++;
		}
		number = number / 10;
		countDigits++;
	}
	return 0;
}*/