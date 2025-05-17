#include<iostream>
using namespace std;
int main() {
	int a[3] = { 1,2,3 };
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	int* ptr = nullptr;
	ptr = &a[0];
	cout << *ptr << endl;
	ptr = &a[1];
	cout << *ptr << endl;
	ptr = &a[2];
	cout << *ptr << endl;
	ptr = &a[0];
	ptr = &*(a + 0);
	cout << ptr << endl;
	ptr = &a[1];
	ptr = &*(a + 1);
	cout << ptr << endl;
	ptr = &a[2];
	ptr = &*(a + 2);
	cout << ptr << endl;
}