#include<iostream>
using namespace std;
int main() {
	int arr[3] = { 101,202, 303 };
	cout << "arr[0] = " << arr[0] << endl;
	cout << "arr[1] = " << arr[1] << endl;
	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr[3] = " << arr[3] << endl; // Will return garbage value

	for (int i = 0;i < 3;i++) {
		cout << "arr["<<i<<"]" << arr[i] << endl;
	}
	arr[0]=505;
	cout << "New value of arr[0] = " << arr[0];
}