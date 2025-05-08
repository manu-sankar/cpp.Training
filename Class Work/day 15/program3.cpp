#include<iostream>
#define PI 3.14
using namespace std;
int areaSquare(float a);
int areaRect(float l, float b);
int areaCircle(float r);
int areaTriangle(float b, float h);
int main() {
	float side;
	cout << "Enter side of square" << endl;
	cin >> side;
	float r;
	cout << "Enter radius" << endl;
	cin >> r;
	float le, br;
	cout << "Enter length and breadth" << endl;
	cin >> le >> br;
	float base, he;
	cout << "Enter base and height " << endl;
	cin >> base >> he;
	float area1 = areaSquare(side);
	float area2 = areaCircle(r);
	float area3 = areaRect(le,br);
	float area4 = areaTriangle(base,he);
	cout <<"Area of square = " << area1 << endl;
	cout <<"Area of circle = " << area2 << endl;
	cout <<"Area of Rectangle = " << area3 << endl;
	cout <<"Area of Triangle = " << area4 << endl;
	return 0;
}
int areaSquare(float a) {
	int area = a * a;
	return area;
}
int areaRect(float l, float b) {
	int area = l * b;
	return area;
}
int areaCircle(float r) {
	int area = PI * r * r;
	return area;
}
int areaTriangle(float b, float h) {
	int area = 0.5 * b * h;
	return area;
}