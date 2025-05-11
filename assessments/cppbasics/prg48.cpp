#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int r, base=1,bin=0;
	int n;
	cin >> n;
	while (n>0) {
		r = n % 2;
		bin += r *base;
		base *= 10;
		n /= 2;
	}
	cout << bin;
	return 0;
}