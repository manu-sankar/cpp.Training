/*#include<iostream>
using namespace std;
int sumProduct() {
	int n, r,sum=0,product=1;
	cout << "Enter n value";
	cin >> n;
	if (n == 0) {
		cout << "Undefined";
	}
	else {
		while (n) {
			r = n % 10;
			sum += r;
			if (r != 0) {
				product *= r;
			}
			n = n / 10;
		}
		cout << sum<<endl;
		cout << product;
	}
	return 0;
}*/