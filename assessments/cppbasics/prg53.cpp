#include<iostream>
#define PI 3.14
using namespace std;
int main() {
	int r;
	cin >> r;
	float area, circumference;
	area = PI * r * r;
	cout << "Area of circle "<< area << endl;
	circumference = 2 * PI * r;
	cout << "Circumference of circle " << circumference << endl;
	return 0;
}