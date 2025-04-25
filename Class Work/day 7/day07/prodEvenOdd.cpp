/*#include<iostream>
using namespace std;
int product() {
	int n, digits, count = 0, even = 1, odd = 1;
	cout << "Enter n";
	cin >> n;
	while (n != 0) {
		digits = n % 10;
		count++;
		if (count % 2 == 0) {
			even *= digits;
		}
		else
		{
			odd *= digits;
		}
		n = n / 10;
		if (even == odd) {
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		return 0;
	}
}*/
