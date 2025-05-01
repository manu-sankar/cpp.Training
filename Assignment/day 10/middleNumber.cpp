#include<iostream>
using namespace std;
int middle(int a, int b, int c);
int main() {
	int x,y,z;
	cout << "Enter a, b, c ";
	cin >> x >> y >> z;
	int mid = middle(x, y, z);
	cout << "The middle element is " << mid << endl;
	return 0;
}
int middle(int a , int b, int c) {
	if (a > b && a < c || a < b && a > c) {
		return a;
	}
	else if (b > a && b < c || b < a && b > c) {
		return b;
	}
	else {
		return c;
	}
}
