#include<iostream>
using namespace std;
int swap(int a, int b);
int swap(int a, int b) {
	if (a < 1 && b < 1)
		return 1;
	a = a + b;
	a = a - b;
	b = a - b;
}
int main() {
	int x, y;
	cout << "Enter x ";
	cin >> x;
	cout << "Enter y ";
	cin >> y;
	swap(x , y);
	cout << "After swapping value of x is " << x << " and y is " << y << endl;
	return 0;
}