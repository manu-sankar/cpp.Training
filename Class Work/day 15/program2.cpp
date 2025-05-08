#include<iostream>
#define PI 3.14
using namespace std;
int main() {
	int a;
	cout << "Enter side of square " << endl;
	cin >> a;
	int l, b;
	cout << "Enter length and breadth of rectangle " << endl;
	cin >> l >> b;
	int r;
	cout << "Enter radius " << endl;
	cin >> r;
	int b1, h;
	cout << "Enter base and height " << endl;
	cin >> b1 >> h;
	cout << "Area of square = " << a * a << endl;
	cout << "Area of rectangle = " << l * b << endl;
	cout << "Area of circle = " << PI * r * r << endl;
	cout << "Area of triangle = " << (0.5) * b1 * h << endl;
	return 0;
}