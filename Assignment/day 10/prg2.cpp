#include<iostream>
using namespace std;
int add(int n);
int add(int n) {
	int sum = 0;
	if (n == 1)
		return 1;
	sum = n + add(n - 1);
	return sum;
}
int main() {
	int num;
	cout << "Enter num values ";
	cin >> num;
	//add(num);
	cout << add(num);
	//return 0;
}

