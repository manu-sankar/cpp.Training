#include<iostream>
using namespace std;
int sumDigits(int n);
int main() {
	int a;
	cout << "Enter a ";
	cin >> a;
	cout<<sumDigits(a)<<endl;
	return 0;
}
int sumDigits(int n) {
	if (n < 10)
		return n;
	int sum = 0;
	while(n>0){
	sum+= n % 10;
	n = n / 10;
	}
	return sumDigits(sum);
}